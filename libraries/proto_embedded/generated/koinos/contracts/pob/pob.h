/*
 *  Copyright (C) 2020-2021 Embedded AMS B.V. - All Rights Reserved
 *
 *  This file is part of Embedded Proto.
 *
 *  Embedded Proto is open source software: you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation, version 3 of the license.
 *
 *  Embedded Proto  is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Embedded Proto. If not, see <https://www.gnu.org/licenses/>.
 *
 *  For commercial and closed source application please visit:
 *  <https://EmbeddedProto.com/license/>.
 *
 *  Embedded AMS B.V.
 *  Info:
 *    info at EmbeddedProto dot com
 *
 *  Postal address:
 *    Johan Huizingalaan 763a
 *    1066 VH, Amsterdam
 *    the Netherlands
 */

// This file is generated. Please do not edit!
#ifndef KOINOS_CONTRACTS_POB_POB_H
#define KOINOS_CONTRACTS_POB_POB_H

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>
#include <limits>

// Include external proto definitions
#include <koinos/options.h>

namespace koinos {
namespace contracts {
namespace pob {

class consensus_parameters final: public ::EmbeddedProto::MessageInterface
{
  public:
    consensus_parameters() = default;
    consensus_parameters(const consensus_parameters& rhs )
    {
      set_target_annual_inflation_rate(rhs.get_target_annual_inflation_rate());
      set_target_burn_percent(rhs.get_target_burn_percent());
      set_target_block_interval(rhs.get_target_block_interval());
      set_quantum_length(rhs.get_quantum_length());
    }

    consensus_parameters(const consensus_parameters&& rhs ) noexcept
    {
      set_target_annual_inflation_rate(rhs.get_target_annual_inflation_rate());
      set_target_burn_percent(rhs.get_target_burn_percent());
      set_target_block_interval(rhs.get_target_block_interval());
      set_quantum_length(rhs.get_quantum_length());
    }

    ~consensus_parameters() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TARGET_ANNUAL_INFLATION_RATE = 1,
      TARGET_BURN_PERCENT = 2,
      TARGET_BLOCK_INTERVAL = 3,
      QUANTUM_LENGTH = 4
    };

    consensus_parameters& operator=(const consensus_parameters& rhs)
    {
      set_target_annual_inflation_rate(rhs.get_target_annual_inflation_rate());
      set_target_burn_percent(rhs.get_target_burn_percent());
      set_target_block_interval(rhs.get_target_block_interval());
      set_quantum_length(rhs.get_quantum_length());
      return *this;
    }

    consensus_parameters& operator=(const consensus_parameters&& rhs) noexcept
    {
      set_target_annual_inflation_rate(rhs.get_target_annual_inflation_rate());
      set_target_burn_percent(rhs.get_target_burn_percent());
      set_target_block_interval(rhs.get_target_block_interval());
      set_quantum_length(rhs.get_quantum_length());
      return *this;
    }

    inline void clear_target_annual_inflation_rate() { target_annual_inflation_rate_.clear(); }
    inline void set_target_annual_inflation_rate(const EmbeddedProto::uint32& value) { target_annual_inflation_rate_ = value; }
    inline void set_target_annual_inflation_rate(const EmbeddedProto::uint32&& value) { target_annual_inflation_rate_ = value; }
    inline EmbeddedProto::uint32& mutable_target_annual_inflation_rate() { return target_annual_inflation_rate_; }
    inline const EmbeddedProto::uint32& get_target_annual_inflation_rate() const { return target_annual_inflation_rate_; }
    inline EmbeddedProto::uint32::FIELD_TYPE target_annual_inflation_rate() const { return target_annual_inflation_rate_.get(); }

    inline void clear_target_burn_percent() { target_burn_percent_.clear(); }
    inline void set_target_burn_percent(const EmbeddedProto::uint32& value) { target_burn_percent_ = value; }
    inline void set_target_burn_percent(const EmbeddedProto::uint32&& value) { target_burn_percent_ = value; }
    inline EmbeddedProto::uint32& mutable_target_burn_percent() { return target_burn_percent_; }
    inline const EmbeddedProto::uint32& get_target_burn_percent() const { return target_burn_percent_; }
    inline EmbeddedProto::uint32::FIELD_TYPE target_burn_percent() const { return target_burn_percent_.get(); }

    inline void clear_target_block_interval() { target_block_interval_.clear(); }
    inline void set_target_block_interval(const EmbeddedProto::uint32& value) { target_block_interval_ = value; }
    inline void set_target_block_interval(const EmbeddedProto::uint32&& value) { target_block_interval_ = value; }
    inline EmbeddedProto::uint32& mutable_target_block_interval() { return target_block_interval_; }
    inline const EmbeddedProto::uint32& get_target_block_interval() const { return target_block_interval_; }
    inline EmbeddedProto::uint32::FIELD_TYPE target_block_interval() const { return target_block_interval_.get(); }

    inline void clear_quantum_length() { quantum_length_.clear(); }
    inline void set_quantum_length(const EmbeddedProto::uint32& value) { quantum_length_ = value; }
    inline void set_quantum_length(const EmbeddedProto::uint32&& value) { quantum_length_ = value; }
    inline EmbeddedProto::uint32& mutable_quantum_length() { return quantum_length_; }
    inline const EmbeddedProto::uint32& get_quantum_length() const { return quantum_length_; }
    inline EmbeddedProto::uint32::FIELD_TYPE quantum_length() const { return quantum_length_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != target_annual_inflation_rate_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = target_annual_inflation_rate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TARGET_ANNUAL_INFLATION_RATE), buffer, false);
      }

      if((0U != target_burn_percent_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = target_burn_percent_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TARGET_BURN_PERCENT), buffer, false);
      }

      if((0U != target_block_interval_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = target_block_interval_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TARGET_BLOCK_INTERVAL), buffer, false);
      }

      if((0U != quantum_length_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = quantum_length_.serialize_with_id(static_cast<uint32_t>(FieldNumber::QUANTUM_LENGTH), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::TARGET_ANNUAL_INFLATION_RATE:
            return_value = target_annual_inflation_rate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TARGET_BURN_PERCENT:
            return_value = target_burn_percent_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TARGET_BLOCK_INTERVAL:
            return_value = target_block_interval_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::QUANTUM_LENGTH:
            return_value = quantum_length_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_target_annual_inflation_rate();
      clear_target_burn_percent();
      clear_target_block_interval();
      clear_quantum_length();

    }

    private:


      EmbeddedProto::uint32 target_annual_inflation_rate_ = 0U;
      EmbeddedProto::uint32 target_burn_percent_ = 0U;
      EmbeddedProto::uint32 target_block_interval_ = 0U;
      EmbeddedProto::uint32 quantum_length_ = 0U;

};

template<uint32_t public_key_LENGTH>
class public_key_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    public_key_record() = default;
    public_key_record(const public_key_record& rhs )
    {
      set_public_key(rhs.get_public_key());
    }

    public_key_record(const public_key_record&& rhs ) noexcept
    {
      set_public_key(rhs.get_public_key());
    }

    ~public_key_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PUBLIC_KEY = 1
    };

    public_key_record& operator=(const public_key_record& rhs)
    {
      set_public_key(rhs.get_public_key());
      return *this;
    }

    public_key_record& operator=(const public_key_record&& rhs) noexcept
    {
      set_public_key(rhs.get_public_key());
      return *this;
    }

    inline void clear_public_key() { public_key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<public_key_LENGTH>& mutable_public_key() { return public_key_; }
    inline void set_public_key(const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& rhs) { public_key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& get_public_key() const { return public_key_; }
    inline const uint8_t* public_key() const { return public_key_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = public_key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PUBLIC_KEY), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::PUBLIC_KEY:
            return_value = public_key_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_public_key();

    }

    private:


      ::EmbeddedProto::FieldBytes<public_key_LENGTH> public_key_;

};

template<uint32_t seed_LENGTH, 
uint32_t difficulty_LENGTH>
class metadata final: public ::EmbeddedProto::MessageInterface
{
  public:
    metadata() = default;
    metadata(const metadata& rhs )
    {
      set_seed(rhs.get_seed());
      set_difficulty(rhs.get_difficulty());
      set_last_block_time(rhs.get_last_block_time());
    }

    metadata(const metadata&& rhs ) noexcept
    {
      set_seed(rhs.get_seed());
      set_difficulty(rhs.get_difficulty());
      set_last_block_time(rhs.get_last_block_time());
    }

    ~metadata() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SEED = 1,
      DIFFICULTY = 2,
      LAST_BLOCK_TIME = 3
    };

    metadata& operator=(const metadata& rhs)
    {
      set_seed(rhs.get_seed());
      set_difficulty(rhs.get_difficulty());
      set_last_block_time(rhs.get_last_block_time());
      return *this;
    }

    metadata& operator=(const metadata&& rhs) noexcept
    {
      set_seed(rhs.get_seed());
      set_difficulty(rhs.get_difficulty());
      set_last_block_time(rhs.get_last_block_time());
      return *this;
    }

    inline void clear_seed() { seed_.clear(); }
    inline ::EmbeddedProto::FieldBytes<seed_LENGTH>& mutable_seed() { return seed_; }
    inline void set_seed(const ::EmbeddedProto::FieldBytes<seed_LENGTH>& rhs) { seed_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<seed_LENGTH>& get_seed() const { return seed_; }
    inline const uint8_t* seed() const { return seed_.get_const(); }

    inline void clear_difficulty() { difficulty_.clear(); }
    inline ::EmbeddedProto::FieldBytes<difficulty_LENGTH>& mutable_difficulty() { return difficulty_; }
    inline void set_difficulty(const ::EmbeddedProto::FieldBytes<difficulty_LENGTH>& rhs) { difficulty_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<difficulty_LENGTH>& get_difficulty() const { return difficulty_; }
    inline const uint8_t* difficulty() const { return difficulty_.get_const(); }

    inline void clear_last_block_time() { last_block_time_.clear(); }
    inline void set_last_block_time(const EmbeddedProto::uint64& value) { last_block_time_ = value; }
    inline void set_last_block_time(const EmbeddedProto::uint64&& value) { last_block_time_ = value; }
    inline EmbeddedProto::uint64& mutable_last_block_time() { return last_block_time_; }
    inline const EmbeddedProto::uint64& get_last_block_time() const { return last_block_time_; }
    inline EmbeddedProto::uint64::FIELD_TYPE last_block_time() const { return last_block_time_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = seed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SEED), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = difficulty_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DIFFICULTY), buffer, false);
      }

      if((0U != last_block_time_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_block_time_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_BLOCK_TIME), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::SEED:
            return_value = seed_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DIFFICULTY:
            return_value = difficulty_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LAST_BLOCK_TIME:
            return_value = last_block_time_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_seed();
      clear_difficulty();
      clear_last_block_time();

    }

    private:


      ::EmbeddedProto::FieldBytes<seed_LENGTH> seed_;
      ::EmbeddedProto::FieldBytes<difficulty_LENGTH> difficulty_;
      EmbeddedProto::uint64 last_block_time_ = 0U;

};

template<uint32_t vrf_proof_LENGTH, 
uint32_t vrf_hash_LENGTH, 
uint32_t signature_LENGTH>
class signature_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    signature_data() = default;
    signature_data(const signature_data& rhs )
    {
      set_vrf_proof(rhs.get_vrf_proof());
      set_vrf_hash(rhs.get_vrf_hash());
      set_signature(rhs.get_signature());
    }

    signature_data(const signature_data&& rhs ) noexcept
    {
      set_vrf_proof(rhs.get_vrf_proof());
      set_vrf_hash(rhs.get_vrf_hash());
      set_signature(rhs.get_signature());
    }

    ~signature_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VRF_PROOF = 1,
      VRF_HASH = 2,
      SIGNATURE = 3
    };

    signature_data& operator=(const signature_data& rhs)
    {
      set_vrf_proof(rhs.get_vrf_proof());
      set_vrf_hash(rhs.get_vrf_hash());
      set_signature(rhs.get_signature());
      return *this;
    }

    signature_data& operator=(const signature_data&& rhs) noexcept
    {
      set_vrf_proof(rhs.get_vrf_proof());
      set_vrf_hash(rhs.get_vrf_hash());
      set_signature(rhs.get_signature());
      return *this;
    }

    inline void clear_vrf_proof() { vrf_proof_.clear(); }
    inline ::EmbeddedProto::FieldBytes<vrf_proof_LENGTH>& mutable_vrf_proof() { return vrf_proof_; }
    inline void set_vrf_proof(const ::EmbeddedProto::FieldBytes<vrf_proof_LENGTH>& rhs) { vrf_proof_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<vrf_proof_LENGTH>& get_vrf_proof() const { return vrf_proof_; }
    inline const uint8_t* vrf_proof() const { return vrf_proof_.get_const(); }

    inline void clear_vrf_hash() { vrf_hash_.clear(); }
    inline ::EmbeddedProto::FieldBytes<vrf_hash_LENGTH>& mutable_vrf_hash() { return vrf_hash_; }
    inline void set_vrf_hash(const ::EmbeddedProto::FieldBytes<vrf_hash_LENGTH>& rhs) { vrf_hash_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<vrf_hash_LENGTH>& get_vrf_hash() const { return vrf_hash_; }
    inline const uint8_t* vrf_hash() const { return vrf_hash_.get_const(); }

    inline void clear_signature() { signature_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_LENGTH>& mutable_signature() { return signature_; }
    inline void set_signature(const ::EmbeddedProto::FieldBytes<signature_LENGTH>& rhs) { signature_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_LENGTH>& get_signature() const { return signature_; }
    inline const uint8_t* signature() const { return signature_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = vrf_proof_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VRF_PROOF), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = vrf_hash_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VRF_HASH), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::VRF_PROOF:
            return_value = vrf_proof_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VRF_HASH:
            return_value = vrf_hash_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNATURE:
            return_value = signature_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_vrf_proof();
      clear_vrf_hash();
      clear_signature();

    }

    private:


      ::EmbeddedProto::FieldBytes<vrf_proof_LENGTH> vrf_proof_;
      ::EmbeddedProto::FieldBytes<vrf_hash_LENGTH> vrf_hash_;
      ::EmbeddedProto::FieldBytes<signature_LENGTH> signature_;

};

template<uint32_t seed_LENGTH>
class vrf_payload final: public ::EmbeddedProto::MessageInterface
{
  public:
    vrf_payload() = default;
    vrf_payload(const vrf_payload& rhs )
    {
      set_seed(rhs.get_seed());
      set_block_time(rhs.get_block_time());
    }

    vrf_payload(const vrf_payload&& rhs ) noexcept
    {
      set_seed(rhs.get_seed());
      set_block_time(rhs.get_block_time());
    }

    ~vrf_payload() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SEED = 1,
      BLOCK_TIME = 2
    };

    vrf_payload& operator=(const vrf_payload& rhs)
    {
      set_seed(rhs.get_seed());
      set_block_time(rhs.get_block_time());
      return *this;
    }

    vrf_payload& operator=(const vrf_payload&& rhs) noexcept
    {
      set_seed(rhs.get_seed());
      set_block_time(rhs.get_block_time());
      return *this;
    }

    inline void clear_seed() { seed_.clear(); }
    inline ::EmbeddedProto::FieldBytes<seed_LENGTH>& mutable_seed() { return seed_; }
    inline void set_seed(const ::EmbeddedProto::FieldBytes<seed_LENGTH>& rhs) { seed_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<seed_LENGTH>& get_seed() const { return seed_; }
    inline const uint8_t* seed() const { return seed_.get_const(); }

    inline void clear_block_time() { block_time_.clear(); }
    inline void set_block_time(const EmbeddedProto::uint64& value) { block_time_ = value; }
    inline void set_block_time(const EmbeddedProto::uint64&& value) { block_time_ = value; }
    inline EmbeddedProto::uint64& mutable_block_time() { return block_time_; }
    inline const EmbeddedProto::uint64& get_block_time() const { return block_time_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_time() const { return block_time_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = seed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SEED), buffer, false);
      }

      if((0U != block_time_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_time_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_TIME), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::SEED:
            return_value = seed_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BLOCK_TIME:
            return_value = block_time_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_seed();
      clear_block_time();

    }

    private:


      ::EmbeddedProto::FieldBytes<seed_LENGTH> seed_;
      EmbeddedProto::uint64 block_time_ = 0U;

};

template<uint32_t public_key_LENGTH>
class register_public_key_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    register_public_key_arguments() = default;
    register_public_key_arguments(const register_public_key_arguments& rhs )
    {
      set_public_key(rhs.get_public_key());
    }

    register_public_key_arguments(const register_public_key_arguments&& rhs ) noexcept
    {
      set_public_key(rhs.get_public_key());
    }

    ~register_public_key_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PUBLIC_KEY = 1
    };

    register_public_key_arguments& operator=(const register_public_key_arguments& rhs)
    {
      set_public_key(rhs.get_public_key());
      return *this;
    }

    register_public_key_arguments& operator=(const register_public_key_arguments&& rhs) noexcept
    {
      set_public_key(rhs.get_public_key());
      return *this;
    }

    inline void clear_public_key() { public_key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<public_key_LENGTH>& mutable_public_key() { return public_key_; }
    inline void set_public_key(const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& rhs) { public_key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& get_public_key() const { return public_key_; }
    inline const uint8_t* public_key() const { return public_key_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = public_key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PUBLIC_KEY), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::PUBLIC_KEY:
            return_value = public_key_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_public_key();

    }

    private:


      ::EmbeddedProto::FieldBytes<public_key_LENGTH> public_key_;

};

class register_public_key_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    register_public_key_result() = default;
    register_public_key_result(const register_public_key_result& rhs )
    {
    }

    register_public_key_result(const register_public_key_result&& rhs ) noexcept
    {
    }

    ~register_public_key_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    register_public_key_result& operator=(const register_public_key_result& rhs)
    {
      return *this;
    }

    register_public_key_result& operator=(const register_public_key_result&& rhs) noexcept
    {
      return *this;
    }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {

    }

    private:



};

template<uint32_t burn_address_LENGTH, 
uint32_t vhp_address_LENGTH>
class burn_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    burn_arguments() = default;
    burn_arguments(const burn_arguments& rhs )
    {
      set_token_amount(rhs.get_token_amount());
      set_burn_address(rhs.get_burn_address());
      set_vhp_address(rhs.get_vhp_address());
    }

    burn_arguments(const burn_arguments&& rhs ) noexcept
    {
      set_token_amount(rhs.get_token_amount());
      set_burn_address(rhs.get_burn_address());
      set_vhp_address(rhs.get_vhp_address());
    }

    ~burn_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TOKEN_AMOUNT = 1,
      BURN_ADDRESS = 2,
      VHP_ADDRESS = 3
    };

    burn_arguments& operator=(const burn_arguments& rhs)
    {
      set_token_amount(rhs.get_token_amount());
      set_burn_address(rhs.get_burn_address());
      set_vhp_address(rhs.get_vhp_address());
      return *this;
    }

    burn_arguments& operator=(const burn_arguments&& rhs) noexcept
    {
      set_token_amount(rhs.get_token_amount());
      set_burn_address(rhs.get_burn_address());
      set_vhp_address(rhs.get_vhp_address());
      return *this;
    }

    inline void clear_token_amount() { token_amount_.clear(); }
    inline void set_token_amount(const EmbeddedProto::uint64& value) { token_amount_ = value; }
    inline void set_token_amount(const EmbeddedProto::uint64&& value) { token_amount_ = value; }
    inline EmbeddedProto::uint64& mutable_token_amount() { return token_amount_; }
    inline const EmbeddedProto::uint64& get_token_amount() const { return token_amount_; }
    inline EmbeddedProto::uint64::FIELD_TYPE token_amount() const { return token_amount_.get(); }

    inline void clear_burn_address() { burn_address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<burn_address_LENGTH>& mutable_burn_address() { return burn_address_; }
    inline void set_burn_address(const ::EmbeddedProto::FieldBytes<burn_address_LENGTH>& rhs) { burn_address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<burn_address_LENGTH>& get_burn_address() const { return burn_address_; }
    inline const uint8_t* burn_address() const { return burn_address_.get_const(); }

    inline void clear_vhp_address() { vhp_address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<vhp_address_LENGTH>& mutable_vhp_address() { return vhp_address_; }
    inline void set_vhp_address(const ::EmbeddedProto::FieldBytes<vhp_address_LENGTH>& rhs) { vhp_address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<vhp_address_LENGTH>& get_vhp_address() const { return vhp_address_; }
    inline const uint8_t* vhp_address() const { return vhp_address_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != token_amount_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = token_amount_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TOKEN_AMOUNT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = burn_address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BURN_ADDRESS), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = vhp_address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VHP_ADDRESS), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::TOKEN_AMOUNT:
            return_value = token_amount_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BURN_ADDRESS:
            return_value = burn_address_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VHP_ADDRESS:
            return_value = vhp_address_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_token_amount();
      clear_burn_address();
      clear_vhp_address();

    }

    private:


      EmbeddedProto::uint64 token_amount_ = 0U;
      ::EmbeddedProto::FieldBytes<burn_address_LENGTH> burn_address_;
      ::EmbeddedProto::FieldBytes<vhp_address_LENGTH> vhp_address_;

};

class burn_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    burn_result() = default;
    burn_result(const burn_result& rhs )
    {
    }

    burn_result(const burn_result&& rhs ) noexcept
    {
    }

    ~burn_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    burn_result& operator=(const burn_result& rhs)
    {
      return *this;
    }

    burn_result& operator=(const burn_result&& rhs) noexcept
    {
      return *this;
    }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {

    }

    private:



};

class get_consensus_parameters_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_consensus_parameters_arguments() = default;
    get_consensus_parameters_arguments(const get_consensus_parameters_arguments& rhs )
    {
    }

    get_consensus_parameters_arguments(const get_consensus_parameters_arguments&& rhs ) noexcept
    {
    }

    ~get_consensus_parameters_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_consensus_parameters_arguments& operator=(const get_consensus_parameters_arguments& rhs)
    {
      return *this;
    }

    get_consensus_parameters_arguments& operator=(const get_consensus_parameters_arguments&& rhs) noexcept
    {
      return *this;
    }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {

    }

    private:



};

class get_consensus_parameters_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_consensus_parameters_result() = default;
    get_consensus_parameters_result(const get_consensus_parameters_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_consensus_parameters_result(const get_consensus_parameters_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_consensus_parameters_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_consensus_parameters_result& operator=(const get_consensus_parameters_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_consensus_parameters_result& operator=(const get_consensus_parameters_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const consensus_parameters& value) { value_ = value; }
    inline void set_value(const consensus_parameters&& value) { value_ = value; }
    inline consensus_parameters& mutable_value() { return value_; }
    inline const consensus_parameters& get_value() const { return value_; }
    inline const consensus_parameters& value() const { return value_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VALUE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::VALUE:
            return_value = value_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_value();

    }

    private:


      consensus_parameters value_;

};

class get_metadata_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_metadata_arguments() = default;
    get_metadata_arguments(const get_metadata_arguments& rhs )
    {
    }

    get_metadata_arguments(const get_metadata_arguments&& rhs ) noexcept
    {
    }

    ~get_metadata_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_metadata_arguments& operator=(const get_metadata_arguments& rhs)
    {
      return *this;
    }

    get_metadata_arguments& operator=(const get_metadata_arguments&& rhs) noexcept
    {
      return *this;
    }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {

    }

    private:



};

template<uint32_t value_seed_LENGTH, 
uint32_t value_difficulty_LENGTH>
class get_metadata_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_metadata_result() = default;
    get_metadata_result(const get_metadata_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_metadata_result(const get_metadata_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_metadata_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_metadata_result& operator=(const get_metadata_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_metadata_result& operator=(const get_metadata_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const metadata<value_seed_LENGTH, value_difficulty_LENGTH>& value) { value_ = value; }
    inline void set_value(const metadata<value_seed_LENGTH, value_difficulty_LENGTH>&& value) { value_ = value; }
    inline metadata<value_seed_LENGTH, value_difficulty_LENGTH>& mutable_value() { return value_; }
    inline const metadata<value_seed_LENGTH, value_difficulty_LENGTH>& get_value() const { return value_; }
    inline const metadata<value_seed_LENGTH, value_difficulty_LENGTH>& value() const { return value_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VALUE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::VALUE:
            return_value = value_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_value();

    }

    private:


      metadata<value_seed_LENGTH, value_difficulty_LENGTH> value_;

};

template<uint32_t public_key_LENGTH, 
uint32_t address_LENGTH>
class register_public_key_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    register_public_key_event() = default;
    register_public_key_event(const register_public_key_event& rhs )
    {
      set_public_key(rhs.get_public_key());
      set_address(rhs.get_address());
    }

    register_public_key_event(const register_public_key_event&& rhs ) noexcept
    {
      set_public_key(rhs.get_public_key());
      set_address(rhs.get_address());
    }

    ~register_public_key_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PUBLIC_KEY = 1,
      ADDRESS = 2
    };

    register_public_key_event& operator=(const register_public_key_event& rhs)
    {
      set_public_key(rhs.get_public_key());
      set_address(rhs.get_address());
      return *this;
    }

    register_public_key_event& operator=(const register_public_key_event&& rhs) noexcept
    {
      set_public_key(rhs.get_public_key());
      set_address(rhs.get_address());
      return *this;
    }

    inline void clear_public_key() { public_key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<public_key_LENGTH>& mutable_public_key() { return public_key_; }
    inline void set_public_key(const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& rhs) { public_key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& get_public_key() const { return public_key_; }
    inline const uint8_t* public_key() const { return public_key_.get_const(); }

    inline void clear_address() { address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<address_LENGTH>& mutable_address() { return address_; }
    inline void set_address(const ::EmbeddedProto::FieldBytes<address_LENGTH>& rhs) { address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<address_LENGTH>& get_address() const { return address_; }
    inline const uint8_t* address() const { return address_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = public_key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PUBLIC_KEY), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ADDRESS), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::PUBLIC_KEY:
            return_value = public_key_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ADDRESS:
            return_value = address_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_public_key();
      clear_address();

    }

    private:


      ::EmbeddedProto::FieldBytes<public_key_LENGTH> public_key_;
      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;

};

} // End of namespace pob
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_POB_POB_H