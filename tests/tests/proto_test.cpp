#include <boost/test/unit_test.hpp>

#include <array>
#include <string>

#include <koinos/buffer.hpp>
#include <koinos/common.h>

#include <google/protobuf/any.h>

using namespace std::string_literals;

struct proto_embdedded_fixture{};

BOOST_FIXTURE_TEST_SUITE( proto_embedded_tests, proto_embdedded_fixture )

BOOST_AUTO_TEST_CASE( canonical_test )
{
   BOOST_TEST_MESSAGE( "Testing canonical serialization" );

   // {"id": "foo", "height": 1, "previous": "bar"}
   constexpr uint8_t canon_cstr[] = { 0x0A, 0x03, 0x66, 0x6F, 0x6F, 0x10, 0x01, 0x1a, 0x03, 0x62, 0x61, 0x72 };
   std::array< uint8_t, sizeof( canon_cstr ) > buffer;
   std::memset( buffer.data(), 0, std::size( buffer ) );

   koinos::block_topology< 34, 34 > topo;
   std::string id = "foo";
   std::string previous = "bar";
   topo.mutable_id().set( reinterpret_cast< const uint8_t* >( id.c_str() ), id.size() );
   topo.set_height( 1 );
   topo.mutable_previous().set( reinterpret_cast< const uint8_t* >( previous.c_str() ), previous.size() );

   koinos::write_buffer wb( buffer.data(), std::size( buffer ) );
   topo.serialize( wb );

   BOOST_CHECK( std::memcmp( canon_cstr, buffer.data(), std::size( buffer ) ) == 0 );

   koinos::block_topology< 34, 34 > topo2;
   koinos::read_buffer rb( buffer.data(), std::size( buffer ) );
   topo2.deserialize( rb );

   BOOST_CHECK( std::string( reinterpret_cast< const char* >( topo.get_id().get_const() ), topo.get_id().get_length() ) == std::string( reinterpret_cast< const char* >( topo2.get_id().get_const() ), topo2.get_id().get_length() ) );
   BOOST_CHECK( topo.get_height() == topo2.get_height() );
   BOOST_CHECK( std::string( reinterpret_cast< const char* >( topo.get_previous().get_const() ), topo.get_previous().get_length() ) == std::string( reinterpret_cast< const char* >( topo2.get_previous().get_const() ), topo2.get_previous().get_length() ) );
/*
   BOOST_CHECK( serialize_canonically( topo ) == canon );

   std::stringstream ss;
   serialize_canonically( ss, topo );

   BOOST_CHECK( ss.str() == canon );

   koinos::test_map tm;
   auto m = tm.mutable_im_the_map();
   (*m)[0] = "foo";
   (*m)[1] = "bar";

   try
   {
      auto ser = serialize_canonically( tm );
      BOOST_CHECK( false );
   }
   catch( std::runtime_error& ) {}

   try
   {
      std::stringstream ss;
      serialize_canonically( ss, tm );
      BOOST_CHECK( false );
   }
   catch( std::runtime_error& ) {}
*/
}

BOOST_AUTO_TEST_CASE( any )
{
   koinos::block_topology< 34, 34 > topo;
   std::string id = "foo";
   std::string previous = "bar";
   topo.mutable_id().set( reinterpret_cast< const uint8_t* >( id.c_str() ), id.size() );
   topo.set_height( 1 );
   topo.mutable_previous().set( reinterpret_cast< const uint8_t* >( previous.c_str() ), previous.size() );

   google::protobuf::Any< 128, 128 > any;

   any.PackFrom( topo );

   koinos::block_topology< 34, 34 > topo2;
   any.UnpackTo( topo2 );

   std::array< uint8_t, 128 > buffer1;
   koinos::write_buffer wb1( buffer1.data(), std::size( buffer1 ) );
   std::array< uint8_t, 128 > buffer2;
   koinos::write_buffer wb2( buffer2.data(), std::size( buffer2 ) );

   topo.serialize( wb1 );
   topo2.serialize( wb2 );

   BOOST_CHECK( std::string( reinterpret_cast< const char* >( wb1.data() ), wb1.get_size() ) == std::string( reinterpret_cast< const char* >( wb2.data() ), wb2.get_size() ) );
   BOOST_CHECK( std::string( reinterpret_cast< const char* >( wb1.data() ), wb1.get_size() ) == std::string( reinterpret_cast< const char* >( any.get_value().get_const() ), any.get_value().get_length() ) );
}

BOOST_AUTO_TEST_SUITE_END()
