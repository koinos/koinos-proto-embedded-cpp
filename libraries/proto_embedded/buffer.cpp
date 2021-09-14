#include <koinos/buffer.hpp>

namespace koinos {

read_buffer::read_buffer( uint8_t* buffer, uint32_t len ) :
   _buffer( buffer ),
   _len( len )
{}

uint32_t read_buffer::get_size() const
{
   return _len - _pos;
}

uint32_t read_buffer::get_max_size() const
{
   return _len;
}

bool read_buffer::peek(uint8_t& byte) const
{
   if ( _pos >= _len )
      return false;

   byte = _buffer[ _pos ];
   return true;
}

void read_buffer::advance()
{
   if ( _pos < _len ) _pos++;
}

void read_buffer::advance(const uint32_t N)
{
   _pos = N > _len - _pos ? _len : _pos + N;
}

bool read_buffer::pop(uint8_t& byte)
{
   if ( peek( byte ) )
   {
      ++_pos;
      return true;
   }

   return false;
}

write_buffer::write_buffer( uint8_t* buffer, uint32_t len ) :
   _buffer( buffer ),
   _len( len )
{}

void write_buffer::clear()
{
   std::memset( _buffer, 0, _len );
}

uint32_t write_buffer::get_size() const
{
   return _pos;
}

uint32_t write_buffer::get_max_size() const
{
   return _len;
}

uint32_t write_buffer::get_available_size() const
{
   return _len - _pos;
}

bool write_buffer::push(const uint8_t byte)
{
   if ( get_available_size() )
   {
      _buffer[ _pos++ ] = byte;
      return true;
   }

   return false;
}

bool write_buffer::push(const uint8_t* bytes, const uint32_t length)
{
   if( length <= get_available_size() )
   {
      std::memcpy( _buffer + _pos, bytes, length );
      _pos += length;
      return true;
   }

   return false;
}

rw_buffer::rw_buffer( uint8_t* buffer, uint32_t len ) : write_buffer( buffer, len ), read_buffer( buffer, len ) {}

} // koinos
