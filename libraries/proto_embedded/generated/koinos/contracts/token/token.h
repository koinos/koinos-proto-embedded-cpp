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
#ifndef KOINOS_CONTRACTS_TOKEN_TOKEN_H
#define KOINOS_CONTRACTS_TOKEN_TOKEN_H

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
namespace token {

class name_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    name_arguments() = default;
    name_arguments(const name_arguments& rhs )
    {
    }

    name_arguments(const name_arguments&& rhs ) noexcept
    {
    }

    ~name_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    name_arguments& operator=(const name_arguments& rhs)
    {
      return *this;
    }

    name_arguments& operator=(const name_arguments&& rhs) noexcept
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

template<uint32_t value_LENGTH>
class name_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    name_result() = default;
    name_result(const name_result& rhs )
    {
      set_value(rhs.get_value());
    }

    name_result(const name_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~name_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    name_result& operator=(const name_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    name_result& operator=(const name_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline ::EmbeddedProto::FieldString<value_LENGTH>& mutable_value() { return value_; }
    inline void set_value(const ::EmbeddedProto::FieldString<value_LENGTH>& rhs) { value_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<value_LENGTH>& get_value() const { return value_; }
    inline const char* value() const { return value_.get_const(); }


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


      ::EmbeddedProto::FieldString<value_LENGTH> value_;

};

class symbol_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    symbol_arguments() = default;
    symbol_arguments(const symbol_arguments& rhs )
    {
    }

    symbol_arguments(const symbol_arguments&& rhs ) noexcept
    {
    }

    ~symbol_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    symbol_arguments& operator=(const symbol_arguments& rhs)
    {
      return *this;
    }

    symbol_arguments& operator=(const symbol_arguments&& rhs) noexcept
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

template<uint32_t value_LENGTH>
class symbol_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    symbol_result() = default;
    symbol_result(const symbol_result& rhs )
    {
      set_value(rhs.get_value());
    }

    symbol_result(const symbol_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~symbol_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    symbol_result& operator=(const symbol_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    symbol_result& operator=(const symbol_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline ::EmbeddedProto::FieldString<value_LENGTH>& mutable_value() { return value_; }
    inline void set_value(const ::EmbeddedProto::FieldString<value_LENGTH>& rhs) { value_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<value_LENGTH>& get_value() const { return value_; }
    inline const char* value() const { return value_.get_const(); }


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


      ::EmbeddedProto::FieldString<value_LENGTH> value_;

};

class decimals_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    decimals_arguments() = default;
    decimals_arguments(const decimals_arguments& rhs )
    {
    }

    decimals_arguments(const decimals_arguments&& rhs ) noexcept
    {
    }

    ~decimals_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    decimals_arguments& operator=(const decimals_arguments& rhs)
    {
      return *this;
    }

    decimals_arguments& operator=(const decimals_arguments&& rhs) noexcept
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

class decimals_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    decimals_result() = default;
    decimals_result(const decimals_result& rhs )
    {
      set_value(rhs.get_value());
    }

    decimals_result(const decimals_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~decimals_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    decimals_result& operator=(const decimals_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    decimals_result& operator=(const decimals_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint32& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint32&& value) { value_ = value; }
    inline EmbeddedProto::uint32& mutable_value() { return value_; }
    inline const EmbeddedProto::uint32& get_value() const { return value_; }
    inline EmbeddedProto::uint32::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::uint32 value_ = 0U;

};

class total_supply_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    total_supply_arguments() = default;
    total_supply_arguments(const total_supply_arguments& rhs )
    {
    }

    total_supply_arguments(const total_supply_arguments&& rhs ) noexcept
    {
    }

    ~total_supply_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    total_supply_arguments& operator=(const total_supply_arguments& rhs)
    {
      return *this;
    }

    total_supply_arguments& operator=(const total_supply_arguments&& rhs) noexcept
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

class total_supply_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    total_supply_result() = default;
    total_supply_result(const total_supply_result& rhs )
    {
      set_value(rhs.get_value());
    }

    total_supply_result(const total_supply_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~total_supply_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    total_supply_result& operator=(const total_supply_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    total_supply_result& operator=(const total_supply_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::uint64 value_ = 0U;

};

template<uint32_t owner_LENGTH>
class balance_of_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    balance_of_arguments() = default;
    balance_of_arguments(const balance_of_arguments& rhs )
    {
      set_owner(rhs.get_owner());
    }

    balance_of_arguments(const balance_of_arguments&& rhs ) noexcept
    {
      set_owner(rhs.get_owner());
    }

    ~balance_of_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      OWNER = 1
    };

    balance_of_arguments& operator=(const balance_of_arguments& rhs)
    {
      set_owner(rhs.get_owner());
      return *this;
    }

    balance_of_arguments& operator=(const balance_of_arguments&& rhs) noexcept
    {
      set_owner(rhs.get_owner());
      return *this;
    }

    inline void clear_owner() { owner_.clear(); }
    inline ::EmbeddedProto::FieldBytes<owner_LENGTH>& mutable_owner() { return owner_; }
    inline void set_owner(const ::EmbeddedProto::FieldBytes<owner_LENGTH>& rhs) { owner_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<owner_LENGTH>& get_owner() const { return owner_; }
    inline const uint8_t* owner() const { return owner_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = owner_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OWNER), buffer, false);
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
          case FieldNumber::OWNER:
            return_value = owner_.deserialize_check_type(buffer, wire_type);
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
      clear_owner();

    }

    private:


      ::EmbeddedProto::FieldBytes<owner_LENGTH> owner_;

};

class balance_of_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    balance_of_result() = default;
    balance_of_result(const balance_of_result& rhs )
    {
      set_value(rhs.get_value());
    }

    balance_of_result(const balance_of_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~balance_of_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    balance_of_result& operator=(const balance_of_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    balance_of_result& operator=(const balance_of_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::uint64 value_ = 0U;

};

template<uint32_t from_LENGTH, 
uint32_t to_LENGTH>
class transfer_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    transfer_arguments() = default;
    transfer_arguments(const transfer_arguments& rhs )
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    transfer_arguments(const transfer_arguments&& rhs ) noexcept
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    ~transfer_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      FROM = 1,
      TO = 2,
      VALUE = 3
    };

    transfer_arguments& operator=(const transfer_arguments& rhs)
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    transfer_arguments& operator=(const transfer_arguments&& rhs) noexcept
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_from() { from_.clear(); }
    inline ::EmbeddedProto::FieldBytes<from_LENGTH>& mutable_from() { return from_; }
    inline void set_from(const ::EmbeddedProto::FieldBytes<from_LENGTH>& rhs) { from_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<from_LENGTH>& get_from() const { return from_; }
    inline const uint8_t* from() const { return from_.get_const(); }

    inline void clear_to() { to_.clear(); }
    inline ::EmbeddedProto::FieldBytes<to_LENGTH>& mutable_to() { return to_; }
    inline void set_to(const ::EmbeddedProto::FieldBytes<to_LENGTH>& rhs) { to_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<to_LENGTH>& get_to() const { return to_; }
    inline const uint8_t* to() const { return to_.get_const(); }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = from_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FROM), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = to_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TO), buffer, false);
      }

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
          case FieldNumber::FROM:
            return_value = from_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TO:
            return_value = to_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_from();
      clear_to();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<from_LENGTH> from_;
      ::EmbeddedProto::FieldBytes<to_LENGTH> to_;
      EmbeddedProto::uint64 value_ = 0U;

};

class transfer_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    transfer_result() = default;
    transfer_result(const transfer_result& rhs )
    {
      set_value(rhs.get_value());
    }

    transfer_result(const transfer_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~transfer_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    transfer_result& operator=(const transfer_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    transfer_result& operator=(const transfer_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::boolean& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::boolean&& value) { value_ = value; }
    inline EmbeddedProto::boolean& mutable_value() { return value_; }
    inline const EmbeddedProto::boolean& get_value() const { return value_; }
    inline EmbeddedProto::boolean::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::boolean value_ = false;

};

template<uint32_t to_LENGTH>
class mint_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    mint_arguments() = default;
    mint_arguments(const mint_arguments& rhs )
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    mint_arguments(const mint_arguments&& rhs ) noexcept
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    ~mint_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TO = 1,
      VALUE = 2
    };

    mint_arguments& operator=(const mint_arguments& rhs)
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    mint_arguments& operator=(const mint_arguments&& rhs) noexcept
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_to() { to_.clear(); }
    inline ::EmbeddedProto::FieldBytes<to_LENGTH>& mutable_to() { return to_; }
    inline void set_to(const ::EmbeddedProto::FieldBytes<to_LENGTH>& rhs) { to_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<to_LENGTH>& get_to() const { return to_; }
    inline const uint8_t* to() const { return to_.get_const(); }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = to_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TO), buffer, false);
      }

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
          case FieldNumber::TO:
            return_value = to_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_to();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<to_LENGTH> to_;
      EmbeddedProto::uint64 value_ = 0U;

};

class mint_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    mint_result() = default;
    mint_result(const mint_result& rhs )
    {
      set_value(rhs.get_value());
    }

    mint_result(const mint_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~mint_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    mint_result& operator=(const mint_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    mint_result& operator=(const mint_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::boolean& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::boolean&& value) { value_ = value; }
    inline EmbeddedProto::boolean& mutable_value() { return value_; }
    inline const EmbeddedProto::boolean& get_value() const { return value_; }
    inline EmbeddedProto::boolean::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::boolean value_ = false;

};

template<uint32_t from_LENGTH>
class burn_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    burn_arguments() = default;
    burn_arguments(const burn_arguments& rhs )
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
    }

    burn_arguments(const burn_arguments&& rhs ) noexcept
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
    }

    ~burn_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      FROM = 1,
      VALUE = 2
    };

    burn_arguments& operator=(const burn_arguments& rhs)
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
      return *this;
    }

    burn_arguments& operator=(const burn_arguments&& rhs) noexcept
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_from() { from_.clear(); }
    inline ::EmbeddedProto::FieldBytes<from_LENGTH>& mutable_from() { return from_; }
    inline void set_from(const ::EmbeddedProto::FieldBytes<from_LENGTH>& rhs) { from_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<from_LENGTH>& get_from() const { return from_; }
    inline const uint8_t* from() const { return from_.get_const(); }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = from_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FROM), buffer, false);
      }

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
          case FieldNumber::FROM:
            return_value = from_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_from();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<from_LENGTH> from_;
      EmbeddedProto::uint64 value_ = 0U;

};

class burn_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    burn_result() = default;
    burn_result(const burn_result& rhs )
    {
      set_value(rhs.get_value());
    }

    burn_result(const burn_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~burn_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    burn_result& operator=(const burn_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    burn_result& operator=(const burn_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::boolean& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::boolean&& value) { value_ = value; }
    inline EmbeddedProto::boolean& mutable_value() { return value_; }
    inline const EmbeddedProto::boolean& get_value() const { return value_; }
    inline EmbeddedProto::boolean::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::boolean value_ = false;

};

class balance_object final: public ::EmbeddedProto::MessageInterface
{
  public:
    balance_object() = default;
    balance_object(const balance_object& rhs )
    {
      set_value(rhs.get_value());
    }

    balance_object(const balance_object&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~balance_object() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    balance_object& operator=(const balance_object& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    balance_object& operator=(const balance_object&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::uint64 value_ = 0U;

};

class mana_balance_object final: public ::EmbeddedProto::MessageInterface
{
  public:
    mana_balance_object() = default;
    mana_balance_object(const mana_balance_object& rhs )
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
    }

    mana_balance_object(const mana_balance_object&& rhs ) noexcept
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
    }

    ~mana_balance_object() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BALANCE = 1,
      MANA = 2,
      LAST_MANA_UPDATE = 3
    };

    mana_balance_object& operator=(const mana_balance_object& rhs)
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
      return *this;
    }

    mana_balance_object& operator=(const mana_balance_object&& rhs) noexcept
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
      return *this;
    }

    inline void clear_balance() { balance_.clear(); }
    inline void set_balance(const EmbeddedProto::uint64& value) { balance_ = value; }
    inline void set_balance(const EmbeddedProto::uint64&& value) { balance_ = value; }
    inline EmbeddedProto::uint64& mutable_balance() { return balance_; }
    inline const EmbeddedProto::uint64& get_balance() const { return balance_; }
    inline EmbeddedProto::uint64::FIELD_TYPE balance() const { return balance_.get(); }

    inline void clear_mana() { mana_.clear(); }
    inline void set_mana(const EmbeddedProto::uint64& value) { mana_ = value; }
    inline void set_mana(const EmbeddedProto::uint64&& value) { mana_ = value; }
    inline EmbeddedProto::uint64& mutable_mana() { return mana_; }
    inline const EmbeddedProto::uint64& get_mana() const { return mana_; }
    inline EmbeddedProto::uint64::FIELD_TYPE mana() const { return mana_.get(); }

    inline void clear_last_mana_update() { last_mana_update_.clear(); }
    inline void set_last_mana_update(const EmbeddedProto::uint64& value) { last_mana_update_ = value; }
    inline void set_last_mana_update(const EmbeddedProto::uint64&& value) { last_mana_update_ = value; }
    inline EmbeddedProto::uint64& mutable_last_mana_update() { return last_mana_update_; }
    inline const EmbeddedProto::uint64& get_last_mana_update() const { return last_mana_update_; }
    inline EmbeddedProto::uint64::FIELD_TYPE last_mana_update() const { return last_mana_update_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != balance_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = balance_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BALANCE), buffer, false);
      }

      if((0U != mana_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = mana_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MANA), buffer, false);
      }

      if((0U != last_mana_update_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_mana_update_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_MANA_UPDATE), buffer, false);
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
          case FieldNumber::BALANCE:
            return_value = balance_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MANA:
            return_value = mana_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LAST_MANA_UPDATE:
            return_value = last_mana_update_.deserialize_check_type(buffer, wire_type);
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
      clear_balance();
      clear_mana();
      clear_last_mana_update();

    }

    private:


      EmbeddedProto::uint64 balance_ = 0U;
      EmbeddedProto::uint64 mana_ = 0U;
      EmbeddedProto::uint64 last_mana_update_ = 0U;

};

template<uint32_t from_LENGTH>
class burn_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    burn_event() = default;
    burn_event(const burn_event& rhs )
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
    }

    burn_event(const burn_event&& rhs ) noexcept
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
    }

    ~burn_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      FROM = 1,
      VALUE = 2
    };

    burn_event& operator=(const burn_event& rhs)
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
      return *this;
    }

    burn_event& operator=(const burn_event&& rhs) noexcept
    {
      set_from(rhs.get_from());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_from() { from_.clear(); }
    inline ::EmbeddedProto::FieldBytes<from_LENGTH>& mutable_from() { return from_; }
    inline void set_from(const ::EmbeddedProto::FieldBytes<from_LENGTH>& rhs) { from_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<from_LENGTH>& get_from() const { return from_; }
    inline const uint8_t* from() const { return from_.get_const(); }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = from_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FROM), buffer, false);
      }

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
          case FieldNumber::FROM:
            return_value = from_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_from();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<from_LENGTH> from_;
      EmbeddedProto::uint64 value_ = 0U;

};

template<uint32_t to_LENGTH>
class mint_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    mint_event() = default;
    mint_event(const mint_event& rhs )
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    mint_event(const mint_event&& rhs ) noexcept
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    ~mint_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TO = 1,
      VALUE = 2
    };

    mint_event& operator=(const mint_event& rhs)
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    mint_event& operator=(const mint_event&& rhs) noexcept
    {
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_to() { to_.clear(); }
    inline ::EmbeddedProto::FieldBytes<to_LENGTH>& mutable_to() { return to_; }
    inline void set_to(const ::EmbeddedProto::FieldBytes<to_LENGTH>& rhs) { to_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<to_LENGTH>& get_to() const { return to_; }
    inline const uint8_t* to() const { return to_.get_const(); }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = to_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TO), buffer, false);
      }

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
          case FieldNumber::TO:
            return_value = to_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_to();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<to_LENGTH> to_;
      EmbeddedProto::uint64 value_ = 0U;

};

template<uint32_t from_LENGTH, 
uint32_t to_LENGTH>
class transfer_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    transfer_event() = default;
    transfer_event(const transfer_event& rhs )
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    transfer_event(const transfer_event&& rhs ) noexcept
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
    }

    ~transfer_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      FROM = 1,
      TO = 2,
      VALUE = 3
    };

    transfer_event& operator=(const transfer_event& rhs)
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    transfer_event& operator=(const transfer_event&& rhs) noexcept
    {
      set_from(rhs.get_from());
      set_to(rhs.get_to());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_from() { from_.clear(); }
    inline ::EmbeddedProto::FieldBytes<from_LENGTH>& mutable_from() { return from_; }
    inline void set_from(const ::EmbeddedProto::FieldBytes<from_LENGTH>& rhs) { from_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<from_LENGTH>& get_from() const { return from_; }
    inline const uint8_t* from() const { return from_.get_const(); }

    inline void clear_to() { to_.clear(); }
    inline ::EmbeddedProto::FieldBytes<to_LENGTH>& mutable_to() { return to_; }
    inline void set_to(const ::EmbeddedProto::FieldBytes<to_LENGTH>& rhs) { to_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<to_LENGTH>& get_to() const { return to_; }
    inline const uint8_t* to() const { return to_.get_const(); }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = from_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FROM), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = to_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TO), buffer, false);
      }

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
          case FieldNumber::FROM:
            return_value = from_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TO:
            return_value = to_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_from();
      clear_to();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<from_LENGTH> from_;
      ::EmbeddedProto::FieldBytes<to_LENGTH> to_;
      EmbeddedProto::uint64 value_ = 0U;

};

} // End of namespace token
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_TOKEN_TOKEN_H