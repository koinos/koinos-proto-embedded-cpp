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
#ifndef KOINOS_CONTRACTS_NAME_SERVICE_NAME_SERVICE_H
#define KOINOS_CONTRACTS_NAME_SERVICE_NAME_SERVICE_H

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
namespace name_service {

template<uint32_t name_LENGTH>
class name_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    name_record() = default;
    name_record(const name_record& rhs )
    {
      set_name(rhs.get_name());
    }

    name_record(const name_record&& rhs ) noexcept
    {
      set_name(rhs.get_name());
    }

    ~name_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NAME = 1
    };

    name_record& operator=(const name_record& rhs)
    {
      set_name(rhs.get_name());
      return *this;
    }

    name_record& operator=(const name_record&& rhs) noexcept
    {
      set_name(rhs.get_name());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
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
          case FieldNumber::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
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
      clear_name();

    }

    private:


      ::EmbeddedProto::FieldString<name_LENGTH> name_;

};

template<uint32_t address_LENGTH>
class address_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    address_record() = default;
    address_record(const address_record& rhs )
    {
      set_address(rhs.get_address());
    }

    address_record(const address_record&& rhs ) noexcept
    {
      set_address(rhs.get_address());
    }

    ~address_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ADDRESS = 1
    };

    address_record& operator=(const address_record& rhs)
    {
      set_address(rhs.get_address());
      return *this;
    }

    address_record& operator=(const address_record&& rhs) noexcept
    {
      set_address(rhs.get_address());
      return *this;
    }

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
      clear_address();

    }

    private:


      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;

};

template<uint32_t name_LENGTH>
class get_address_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_address_arguments() = default;
    get_address_arguments(const get_address_arguments& rhs )
    {
      set_name(rhs.get_name());
    }

    get_address_arguments(const get_address_arguments&& rhs ) noexcept
    {
      set_name(rhs.get_name());
    }

    ~get_address_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NAME = 1
    };

    get_address_arguments& operator=(const get_address_arguments& rhs)
    {
      set_name(rhs.get_name());
      return *this;
    }

    get_address_arguments& operator=(const get_address_arguments&& rhs) noexcept
    {
      set_name(rhs.get_name());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
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
          case FieldNumber::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
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
      clear_name();

    }

    private:


      ::EmbeddedProto::FieldString<name_LENGTH> name_;

};

template<uint32_t value_address_LENGTH>
class get_address_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_address_result() = default;
    get_address_result(const get_address_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_address_result(const get_address_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_address_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_address_result& operator=(const get_address_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_address_result& operator=(const get_address_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const address_record<value_address_LENGTH>& value) { value_ = value; }
    inline void set_value(const address_record<value_address_LENGTH>&& value) { value_ = value; }
    inline address_record<value_address_LENGTH>& mutable_value() { return value_; }
    inline const address_record<value_address_LENGTH>& get_value() const { return value_; }
    inline const address_record<value_address_LENGTH>& value() const { return value_; }


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


      address_record<value_address_LENGTH> value_;

};

template<uint32_t address_LENGTH>
class get_name_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_name_arguments() = default;
    get_name_arguments(const get_name_arguments& rhs )
    {
      set_address(rhs.get_address());
    }

    get_name_arguments(const get_name_arguments&& rhs ) noexcept
    {
      set_address(rhs.get_address());
    }

    ~get_name_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ADDRESS = 1
    };

    get_name_arguments& operator=(const get_name_arguments& rhs)
    {
      set_address(rhs.get_address());
      return *this;
    }

    get_name_arguments& operator=(const get_name_arguments&& rhs) noexcept
    {
      set_address(rhs.get_address());
      return *this;
    }

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
      clear_address();

    }

    private:


      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;

};

template<uint32_t value_name_LENGTH>
class get_name_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_name_result() = default;
    get_name_result(const get_name_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_name_result(const get_name_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_name_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_name_result& operator=(const get_name_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_name_result& operator=(const get_name_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const name_record<value_name_LENGTH>& value) { value_ = value; }
    inline void set_value(const name_record<value_name_LENGTH>&& value) { value_ = value; }
    inline name_record<value_name_LENGTH>& mutable_value() { return value_; }
    inline const name_record<value_name_LENGTH>& get_value() const { return value_; }
    inline const name_record<value_name_LENGTH>& value() const { return value_; }


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


      name_record<value_name_LENGTH> value_;

};

template<uint32_t name_LENGTH, 
uint32_t address_LENGTH>
class set_record_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_record_arguments() = default;
    set_record_arguments(const set_record_arguments& rhs )
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
    }

    set_record_arguments(const set_record_arguments&& rhs ) noexcept
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
    }

    ~set_record_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NAME = 1,
      ADDRESS = 2
    };

    set_record_arguments& operator=(const set_record_arguments& rhs)
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
      return *this;
    }

    set_record_arguments& operator=(const set_record_arguments&& rhs) noexcept
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }

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
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
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
          case FieldNumber::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
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
      clear_name();
      clear_address();

    }

    private:


      ::EmbeddedProto::FieldString<name_LENGTH> name_;
      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;

};

class set_record_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_record_result() = default;
    set_record_result(const set_record_result& rhs )
    {
    }

    set_record_result(const set_record_result&& rhs ) noexcept
    {
    }

    ~set_record_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    set_record_result& operator=(const set_record_result& rhs)
    {
      return *this;
    }

    set_record_result& operator=(const set_record_result&& rhs) noexcept
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

template<uint32_t name_LENGTH, 
uint32_t address_LENGTH>
class record_update_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    record_update_event() = default;
    record_update_event(const record_update_event& rhs )
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
    }

    record_update_event(const record_update_event&& rhs ) noexcept
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
    }

    ~record_update_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NAME = 1,
      ADDRESS = 2
    };

    record_update_event& operator=(const record_update_event& rhs)
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
      return *this;
    }

    record_update_event& operator=(const record_update_event&& rhs) noexcept
    {
      set_name(rhs.get_name());
      set_address(rhs.get_address());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }

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
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
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
          case FieldNumber::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
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
      clear_name();
      clear_address();

    }

    private:


      ::EmbeddedProto::FieldString<name_LENGTH> name_;
      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;

};

} // End of namespace name_service
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_NAME_SERVICE_NAME_SERVICE_H