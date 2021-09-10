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
#ifndef KOINOS_CONTRACTS_POW_POW_H
#define KOINOS_CONTRACTS_POW_POW_H

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>

// Include external proto definitions

namespace koinos {
namespace contracts {
namespace pow {

template<uint32_t target_LENGTH, 
uint32_t difficulty_LENGTH>
class difficulty_metadata final: public ::EmbeddedProto::MessageInterface
{
  public:
    difficulty_metadata() = default;
    difficulty_metadata(const difficulty_metadata& rhs )
    {
      set_target(rhs.get_target());
      set_last_block_time(rhs.get_last_block_time());
      set_difficulty(rhs.get_difficulty());
      set_target_block_interval(rhs.get_target_block_interval());
    }

    difficulty_metadata(const difficulty_metadata&& rhs ) noexcept
    {
      set_target(rhs.get_target());
      set_last_block_time(rhs.get_last_block_time());
      set_difficulty(rhs.get_difficulty());
      set_target_block_interval(rhs.get_target_block_interval());
    }

    ~difficulty_metadata() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      TARGET = 1,
      LAST_BLOCK_TIME = 2,
      DIFFICULTY = 3,
      TARGET_BLOCK_INTERVAL = 4
    };

    difficulty_metadata& operator=(const difficulty_metadata& rhs)
    {
      set_target(rhs.get_target());
      set_last_block_time(rhs.get_last_block_time());
      set_difficulty(rhs.get_difficulty());
      set_target_block_interval(rhs.get_target_block_interval());
      return *this;
    }

    difficulty_metadata& operator=(const difficulty_metadata&& rhs) noexcept
    {
      set_target(rhs.get_target());
      set_last_block_time(rhs.get_last_block_time());
      set_difficulty(rhs.get_difficulty());
      set_target_block_interval(rhs.get_target_block_interval());
      return *this;
    }

    inline void clear_target() { target_.clear(); }
    inline ::EmbeddedProto::FieldBytes<target_LENGTH>& mutable_target() { return target_; }
    inline void set_target(const ::EmbeddedProto::FieldBytes<target_LENGTH>& rhs) { target_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<target_LENGTH>& get_target() const { return target_; }
    inline const uint8_t* target() const { return target_.get_const(); }

    inline void clear_last_block_time() { last_block_time_.clear(); }
    inline void set_last_block_time(const EmbeddedProto::uint64& value) { last_block_time_ = value; }
    inline void set_last_block_time(const EmbeddedProto::uint64&& value) { last_block_time_ = value; }
    inline EmbeddedProto::uint64& mutable_last_block_time() { return last_block_time_; }
    inline const EmbeddedProto::uint64& get_last_block_time() const { return last_block_time_; }
    inline EmbeddedProto::uint64::FIELD_TYPE last_block_time() const { return last_block_time_.get(); }

    inline void clear_difficulty() { difficulty_.clear(); }
    inline ::EmbeddedProto::FieldBytes<difficulty_LENGTH>& mutable_difficulty() { return difficulty_; }
    inline void set_difficulty(const ::EmbeddedProto::FieldBytes<difficulty_LENGTH>& rhs) { difficulty_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<difficulty_LENGTH>& get_difficulty() const { return difficulty_; }
    inline const uint8_t* difficulty() const { return difficulty_.get_const(); }

    inline void clear_target_block_interval() { target_block_interval_.clear(); }
    inline void set_target_block_interval(const EmbeddedProto::uint64& value) { target_block_interval_ = value; }
    inline void set_target_block_interval(const EmbeddedProto::uint64&& value) { target_block_interval_ = value; }
    inline EmbeddedProto::uint64& mutable_target_block_interval() { return target_block_interval_; }
    inline const EmbeddedProto::uint64& get_target_block_interval() const { return target_block_interval_; }
    inline EmbeddedProto::uint64::FIELD_TYPE target_block_interval() const { return target_block_interval_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = target_.serialize_with_id(static_cast<uint32_t>(id::TARGET), buffer);
      }

      if((0U != last_block_time_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_block_time_.serialize_with_id(static_cast<uint32_t>(id::LAST_BLOCK_TIME), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = difficulty_.serialize_with_id(static_cast<uint32_t>(id::DIFFICULTY), buffer);
      }

      if((0U != target_block_interval_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = target_block_interval_.serialize_with_id(static_cast<uint32_t>(id::TARGET_BLOCK_INTERVAL), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::TARGET:
            return_value = target_.deserialize_check_type(buffer, wire_type);
            break;

          case id::LAST_BLOCK_TIME:
            return_value = last_block_time_.deserialize_check_type(buffer, wire_type);
            break;

          case id::DIFFICULTY:
            return_value = difficulty_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TARGET_BLOCK_INTERVAL:
            return_value = target_block_interval_.deserialize_check_type(buffer, wire_type);
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
      clear_target();
      clear_last_block_time();
      clear_difficulty();
      clear_target_block_interval();

    }

    private:

      ::EmbeddedProto::FieldBytes<target_LENGTH> target_;
      EmbeddedProto::uint64 last_block_time_ = 0U;
      ::EmbeddedProto::FieldBytes<difficulty_LENGTH> difficulty_;
      EmbeddedProto::uint64 target_block_interval_ = 0U;

};

template<uint32_t nonce_LENGTH, 
uint32_t recoverable_signature_LENGTH>
class pow_signature_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    pow_signature_data() = default;
    pow_signature_data(const pow_signature_data& rhs )
    {
      set_nonce(rhs.get_nonce());
      set_recoverable_signature(rhs.get_recoverable_signature());
    }

    pow_signature_data(const pow_signature_data&& rhs ) noexcept
    {
      set_nonce(rhs.get_nonce());
      set_recoverable_signature(rhs.get_recoverable_signature());
    }

    ~pow_signature_data() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      NONCE = 1,
      RECOVERABLE_SIGNATURE = 2
    };

    pow_signature_data& operator=(const pow_signature_data& rhs)
    {
      set_nonce(rhs.get_nonce());
      set_recoverable_signature(rhs.get_recoverable_signature());
      return *this;
    }

    pow_signature_data& operator=(const pow_signature_data&& rhs) noexcept
    {
      set_nonce(rhs.get_nonce());
      set_recoverable_signature(rhs.get_recoverable_signature());
      return *this;
    }

    inline void clear_nonce() { nonce_.clear(); }
    inline ::EmbeddedProto::FieldBytes<nonce_LENGTH>& mutable_nonce() { return nonce_; }
    inline void set_nonce(const ::EmbeddedProto::FieldBytes<nonce_LENGTH>& rhs) { nonce_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<nonce_LENGTH>& get_nonce() const { return nonce_; }
    inline const uint8_t* nonce() const { return nonce_.get_const(); }

    inline void clear_recoverable_signature() { recoverable_signature_.clear(); }
    inline ::EmbeddedProto::FieldBytes<recoverable_signature_LENGTH>& mutable_recoverable_signature() { return recoverable_signature_; }
    inline void set_recoverable_signature(const ::EmbeddedProto::FieldBytes<recoverable_signature_LENGTH>& rhs) { recoverable_signature_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<recoverable_signature_LENGTH>& get_recoverable_signature() const { return recoverable_signature_; }
    inline const uint8_t* recoverable_signature() const { return recoverable_signature_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = nonce_.serialize_with_id(static_cast<uint32_t>(id::NONCE), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = recoverable_signature_.serialize_with_id(static_cast<uint32_t>(id::RECOVERABLE_SIGNATURE), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::NONCE:
            return_value = nonce_.deserialize_check_type(buffer, wire_type);
            break;

          case id::RECOVERABLE_SIGNATURE:
            return_value = recoverable_signature_.deserialize_check_type(buffer, wire_type);
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
      clear_nonce();
      clear_recoverable_signature();

    }

    private:

      ::EmbeddedProto::FieldBytes<nonce_LENGTH> nonce_;
      ::EmbeddedProto::FieldBytes<recoverable_signature_LENGTH> recoverable_signature_;

};

} // End of namespace pow
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_POW_POW_H