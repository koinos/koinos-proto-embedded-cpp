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
#ifndef KOINOS_PROTOCOL_VALUE_H
#define KOINOS_PROTOCOL_VALUE_H

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

namespace koinos {
namespace protocol {

class double_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    double_value() = default;
    double_value(const double_value& rhs )
    {
      set_value(rhs.get_value());
    }

    double_value(const double_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~double_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    double_value& operator=(const double_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    double_value& operator=(const double_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::doublefixed& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::doublefixed&& value) { value_ = value; }
    inline EmbeddedProto::doublefixed& mutable_value() { return value_; }
    inline const EmbeddedProto::doublefixed& get_value() const { return value_; }
    inline EmbeddedProto::doublefixed::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0.0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::doublefixed value_ = 0.0;

};

class float_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    float_value() = default;
    float_value(const float_value& rhs )
    {
      set_value(rhs.get_value());
    }

    float_value(const float_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~float_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    float_value& operator=(const float_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    float_value& operator=(const float_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::floatfixed& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::floatfixed&& value) { value_ = value; }
    inline EmbeddedProto::floatfixed& mutable_value() { return value_; }
    inline const EmbeddedProto::floatfixed& get_value() const { return value_; }
    inline EmbeddedProto::floatfixed::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0.0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::floatfixed value_ = 0.0;

};

class int32_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    int32_value() = default;
    int32_value(const int32_value& rhs )
    {
      set_value(rhs.get_value());
    }

    int32_value(const int32_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~int32_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    int32_value& operator=(const int32_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    int32_value& operator=(const int32_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::int32& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::int32&& value) { value_ = value; }
    inline EmbeddedProto::int32& mutable_value() { return value_; }
    inline const EmbeddedProto::int32& get_value() const { return value_; }
    inline EmbeddedProto::int32::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::int32 value_ = 0;

};

class int64_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    int64_value() = default;
    int64_value(const int64_value& rhs )
    {
      set_value(rhs.get_value());
    }

    int64_value(const int64_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~int64_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    int64_value& operator=(const int64_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    int64_value& operator=(const int64_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::int64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::int64&& value) { value_ = value; }
    inline EmbeddedProto::int64& mutable_value() { return value_; }
    inline const EmbeddedProto::int64& get_value() const { return value_; }
    inline EmbeddedProto::int64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::int64 value_ = 0;

};

class uint32_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    uint32_value() = default;
    uint32_value(const uint32_value& rhs )
    {
      set_value(rhs.get_value());
    }

    uint32_value(const uint32_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~uint32_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    uint32_value& operator=(const uint32_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    uint32_value& operator=(const uint32_value&& rhs) noexcept
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

class uint64_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    uint64_value() = default;
    uint64_value(const uint64_value& rhs )
    {
      set_value(rhs.get_value());
    }

    uint64_value(const uint64_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~uint64_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    uint64_value& operator=(const uint64_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    uint64_value& operator=(const uint64_value&& rhs) noexcept
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

class sint32_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    sint32_value() = default;
    sint32_value(const sint32_value& rhs )
    {
      set_value(rhs.get_value());
    }

    sint32_value(const sint32_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~sint32_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    sint32_value& operator=(const sint32_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    sint32_value& operator=(const sint32_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::sint32& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::sint32&& value) { value_ = value; }
    inline EmbeddedProto::sint32& mutable_value() { return value_; }
    inline const EmbeddedProto::sint32& get_value() const { return value_; }
    inline EmbeddedProto::sint32::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::sint32 value_ = 0;

};

class sint64_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    sint64_value() = default;
    sint64_value(const sint64_value& rhs )
    {
      set_value(rhs.get_value());
    }

    sint64_value(const sint64_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~sint64_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    sint64_value& operator=(const sint64_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    sint64_value& operator=(const sint64_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::sint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::sint64&& value) { value_ = value; }
    inline EmbeddedProto::sint64& mutable_value() { return value_; }
    inline const EmbeddedProto::sint64& get_value() const { return value_; }
    inline EmbeddedProto::sint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::sint64 value_ = 0;

};

class fixed32_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    fixed32_value() = default;
    fixed32_value(const fixed32_value& rhs )
    {
      set_value(rhs.get_value());
    }

    fixed32_value(const fixed32_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~fixed32_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    fixed32_value& operator=(const fixed32_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    fixed32_value& operator=(const fixed32_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::fixed32& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::fixed32&& value) { value_ = value; }
    inline EmbeddedProto::fixed32& mutable_value() { return value_; }
    inline const EmbeddedProto::fixed32& get_value() const { return value_; }
    inline EmbeddedProto::fixed32::FIELD_TYPE value() const { return value_.get(); }


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


      EmbeddedProto::fixed32 value_ = 0U;

};

class fixed64_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    fixed64_value() = default;
    fixed64_value(const fixed64_value& rhs )
    {
      set_value(rhs.get_value());
    }

    fixed64_value(const fixed64_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~fixed64_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    fixed64_value& operator=(const fixed64_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    fixed64_value& operator=(const fixed64_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::fixed64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::fixed64&& value) { value_ = value; }
    inline EmbeddedProto::fixed64& mutable_value() { return value_; }
    inline const EmbeddedProto::fixed64& get_value() const { return value_; }
    inline EmbeddedProto::fixed64::FIELD_TYPE value() const { return value_.get(); }


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


      EmbeddedProto::fixed64 value_ = 0U;

};

class sfixed32_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    sfixed32_value() = default;
    sfixed32_value(const sfixed32_value& rhs )
    {
      set_value(rhs.get_value());
    }

    sfixed32_value(const sfixed32_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~sfixed32_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    sfixed32_value& operator=(const sfixed32_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    sfixed32_value& operator=(const sfixed32_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::sfixed32& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::sfixed32&& value) { value_ = value; }
    inline EmbeddedProto::sfixed32& mutable_value() { return value_; }
    inline const EmbeddedProto::sfixed32& get_value() const { return value_; }
    inline EmbeddedProto::sfixed32::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::sfixed32 value_ = 0;

};

class sfixed64_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    sfixed64_value() = default;
    sfixed64_value(const sfixed64_value& rhs )
    {
      set_value(rhs.get_value());
    }

    sfixed64_value(const sfixed64_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~sfixed64_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    sfixed64_value& operator=(const sfixed64_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    sfixed64_value& operator=(const sfixed64_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::sfixed64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::sfixed64&& value) { value_ = value; }
    inline EmbeddedProto::sfixed64& mutable_value() { return value_; }
    inline const EmbeddedProto::sfixed64& get_value() const { return value_; }
    inline EmbeddedProto::sfixed64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::sfixed64 value_ = 0;

};

class bool_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    bool_value() = default;
    bool_value(const bool_value& rhs )
    {
      set_value(rhs.get_value());
    }

    bool_value(const bool_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~bool_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    bool_value& operator=(const bool_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    bool_value& operator=(const bool_value&& rhs) noexcept
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

template<uint32_t value_LENGTH>
class string_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    string_value() = default;
    string_value(const string_value& rhs )
    {
      set_value(rhs.get_value());
    }

    string_value(const string_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~string_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    string_value& operator=(const string_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    string_value& operator=(const string_value&& rhs) noexcept
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

template<uint32_t value_LENGTH>
class bytes_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    bytes_value() = default;
    bytes_value(const bytes_value& rhs )
    {
      set_value(rhs.get_value());
    }

    bytes_value(const bytes_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~bytes_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    bytes_value& operator=(const bytes_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    bytes_value& operator=(const bytes_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline ::EmbeddedProto::FieldBytes<value_LENGTH>& mutable_value() { return value_; }
    inline void set_value(const ::EmbeddedProto::FieldBytes<value_LENGTH>& rhs) { value_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<value_LENGTH>& get_value() const { return value_; }
    inline const uint8_t* value() const { return value_.get_const(); }


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


      ::EmbeddedProto::FieldBytes<value_LENGTH> value_;

};

template<uint32_t name_LENGTH>
class enum_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    enum_value() = default;
    enum_value(const enum_value& rhs )
    {
      set_name(rhs.get_name());
      set_number(rhs.get_number());
    }

    enum_value(const enum_value&& rhs ) noexcept
    {
      set_name(rhs.get_name());
      set_number(rhs.get_number());
    }

    ~enum_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NAME = 1,
      NUMBER = 2
    };

    enum_value& operator=(const enum_value& rhs)
    {
      set_name(rhs.get_name());
      set_number(rhs.get_number());
      return *this;
    }

    enum_value& operator=(const enum_value&& rhs) noexcept
    {
      set_name(rhs.get_name());
      set_number(rhs.get_number());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }

    inline void clear_number() { number_.clear(); }
    inline void set_number(const EmbeddedProto::int32& value) { number_ = value; }
    inline void set_number(const EmbeddedProto::int32&& value) { number_ = value; }
    inline EmbeddedProto::int32& mutable_number() { return number_; }
    inline const EmbeddedProto::int32& get_number() const { return number_; }
    inline EmbeddedProto::int32::FIELD_TYPE number() const { return number_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
      }

      if((0 != number_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = number_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NUMBER), buffer, false);
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

          case FieldNumber::NUMBER:
            return_value = number_.deserialize_check_type(buffer, wire_type);
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
      clear_number();

    }

    private:


      ::EmbeddedProto::FieldString<name_LENGTH> name_;
      EmbeddedProto::int32 number_ = 0;

};

template<uint32_t string_value_LENGTH, 
uint32_t bytes_value_LENGTH>
class value final: public ::EmbeddedProto::MessageInterface
{
  public:
    value() = default;
    value(const value& rhs )
    {
      if(rhs.get_which_kind() != which_kind_)
      {
        // First delete the old object in the oneof.
        clear_kind();
      }

      switch(rhs.get_which_kind())
      {
        case FieldNumber::ANY_VALUE:
          set_any_value(rhs.get_any_value());
          break;

        case FieldNumber::DOUBLE_VALUE:
          set_double_value(rhs.get_double_value());
          break;

        case FieldNumber::FLOAT_VALUE:
          set_float_value(rhs.get_float_value());
          break;

        case FieldNumber::INT32_VALUE:
          set_int32_value(rhs.get_int32_value());
          break;

        case FieldNumber::INT64_VALUE:
          set_int64_value(rhs.get_int64_value());
          break;

        case FieldNumber::UINT32_VALUE:
          set_uint32_value(rhs.get_uint32_value());
          break;

        case FieldNumber::UINT64_VALUE:
          set_uint64_value(rhs.get_uint64_value());
          break;

        case FieldNumber::SINT32_VALUE:
          set_sint32_value(rhs.get_sint32_value());
          break;

        case FieldNumber::SINT64_VALUE:
          set_sint64_value(rhs.get_sint64_value());
          break;

        case FieldNumber::FIXED32_VALUE:
          set_fixed32_value(rhs.get_fixed32_value());
          break;

        case FieldNumber::FIXED64_VALUE:
          set_fixed64_value(rhs.get_fixed64_value());
          break;

        case FieldNumber::SFIXED32_VALUE:
          set_sfixed32_value(rhs.get_sfixed32_value());
          break;

        case FieldNumber::SFIXED64_VALUE:
          set_sfixed64_value(rhs.get_sfixed64_value());
          break;

        case FieldNumber::BOOL_VALUE:
          set_bool_value(rhs.get_bool_value());
          break;

        case FieldNumber::STRING_VALUE:
          set_string_value(rhs.get_string_value());
          break;

        case FieldNumber::BYTES_VALUE:
          set_bytes_value(rhs.get_bytes_value());
          break;

        default:
          break;
      }

    }

    value(const value&& rhs ) noexcept
    {
      if(rhs.get_which_kind() != which_kind_)
      {
        // First delete the old object in the oneof.
        clear_kind();
      }

      switch(rhs.get_which_kind())
      {
        case FieldNumber::ANY_VALUE:
          set_any_value(rhs.get_any_value());
          break;

        case FieldNumber::DOUBLE_VALUE:
          set_double_value(rhs.get_double_value());
          break;

        case FieldNumber::FLOAT_VALUE:
          set_float_value(rhs.get_float_value());
          break;

        case FieldNumber::INT32_VALUE:
          set_int32_value(rhs.get_int32_value());
          break;

        case FieldNumber::INT64_VALUE:
          set_int64_value(rhs.get_int64_value());
          break;

        case FieldNumber::UINT32_VALUE:
          set_uint32_value(rhs.get_uint32_value());
          break;

        case FieldNumber::UINT64_VALUE:
          set_uint64_value(rhs.get_uint64_value());
          break;

        case FieldNumber::SINT32_VALUE:
          set_sint32_value(rhs.get_sint32_value());
          break;

        case FieldNumber::SINT64_VALUE:
          set_sint64_value(rhs.get_sint64_value());
          break;

        case FieldNumber::FIXED32_VALUE:
          set_fixed32_value(rhs.get_fixed32_value());
          break;

        case FieldNumber::FIXED64_VALUE:
          set_fixed64_value(rhs.get_fixed64_value());
          break;

        case FieldNumber::SFIXED32_VALUE:
          set_sfixed32_value(rhs.get_sfixed32_value());
          break;

        case FieldNumber::SFIXED64_VALUE:
          set_sfixed64_value(rhs.get_sfixed64_value());
          break;

        case FieldNumber::BOOL_VALUE:
          set_bool_value(rhs.get_bool_value());
          break;

        case FieldNumber::STRING_VALUE:
          set_string_value(rhs.get_string_value());
          break;

        case FieldNumber::BYTES_VALUE:
          set_bytes_value(rhs.get_bytes_value());
          break;

        default:
          break;
      }

    }

    ~value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ANY_VALUE = 1,
      DOUBLE_VALUE = 2,
      FLOAT_VALUE = 3,
      INT32_VALUE = 4,
      INT64_VALUE = 5,
      UINT32_VALUE = 6,
      UINT64_VALUE = 7,
      SINT32_VALUE = 8,
      SINT64_VALUE = 9,
      FIXED32_VALUE = 10,
      FIXED64_VALUE = 11,
      SFIXED32_VALUE = 12,
      SFIXED64_VALUE = 13,
      BOOL_VALUE = 14,
      STRING_VALUE = 15,
      BYTES_VALUE = 16
    };

    value& operator=(const value& rhs)
    {
      if(rhs.get_which_kind() != which_kind_)
      {
        // First delete the old object in the oneof.
        clear_kind();
      }

      switch(rhs.get_which_kind())
      {
        case FieldNumber::ANY_VALUE:
          set_any_value(rhs.get_any_value());
          break;

        case FieldNumber::DOUBLE_VALUE:
          set_double_value(rhs.get_double_value());
          break;

        case FieldNumber::FLOAT_VALUE:
          set_float_value(rhs.get_float_value());
          break;

        case FieldNumber::INT32_VALUE:
          set_int32_value(rhs.get_int32_value());
          break;

        case FieldNumber::INT64_VALUE:
          set_int64_value(rhs.get_int64_value());
          break;

        case FieldNumber::UINT32_VALUE:
          set_uint32_value(rhs.get_uint32_value());
          break;

        case FieldNumber::UINT64_VALUE:
          set_uint64_value(rhs.get_uint64_value());
          break;

        case FieldNumber::SINT32_VALUE:
          set_sint32_value(rhs.get_sint32_value());
          break;

        case FieldNumber::SINT64_VALUE:
          set_sint64_value(rhs.get_sint64_value());
          break;

        case FieldNumber::FIXED32_VALUE:
          set_fixed32_value(rhs.get_fixed32_value());
          break;

        case FieldNumber::FIXED64_VALUE:
          set_fixed64_value(rhs.get_fixed64_value());
          break;

        case FieldNumber::SFIXED32_VALUE:
          set_sfixed32_value(rhs.get_sfixed32_value());
          break;

        case FieldNumber::SFIXED64_VALUE:
          set_sfixed64_value(rhs.get_sfixed64_value());
          break;

        case FieldNumber::BOOL_VALUE:
          set_bool_value(rhs.get_bool_value());
          break;

        case FieldNumber::STRING_VALUE:
          set_string_value(rhs.get_string_value());
          break;

        case FieldNumber::BYTES_VALUE:
          set_bytes_value(rhs.get_bytes_value());
          break;

        default:
          break;
      }

      return *this;
    }

    value& operator=(const value&& rhs) noexcept
    {
      if(rhs.get_which_kind() != which_kind_)
      {
        // First delete the old object in the oneof.
        clear_kind();
      }

      switch(rhs.get_which_kind())
      {
        case FieldNumber::ANY_VALUE:
          set_any_value(rhs.get_any_value());
          break;

        case FieldNumber::DOUBLE_VALUE:
          set_double_value(rhs.get_double_value());
          break;

        case FieldNumber::FLOAT_VALUE:
          set_float_value(rhs.get_float_value());
          break;

        case FieldNumber::INT32_VALUE:
          set_int32_value(rhs.get_int32_value());
          break;

        case FieldNumber::INT64_VALUE:
          set_int64_value(rhs.get_int64_value());
          break;

        case FieldNumber::UINT32_VALUE:
          set_uint32_value(rhs.get_uint32_value());
          break;

        case FieldNumber::UINT64_VALUE:
          set_uint64_value(rhs.get_uint64_value());
          break;

        case FieldNumber::SINT32_VALUE:
          set_sint32_value(rhs.get_sint32_value());
          break;

        case FieldNumber::SINT64_VALUE:
          set_sint64_value(rhs.get_sint64_value());
          break;

        case FieldNumber::FIXED32_VALUE:
          set_fixed32_value(rhs.get_fixed32_value());
          break;

        case FieldNumber::FIXED64_VALUE:
          set_fixed64_value(rhs.get_fixed64_value());
          break;

        case FieldNumber::SFIXED32_VALUE:
          set_sfixed32_value(rhs.get_sfixed32_value());
          break;

        case FieldNumber::SFIXED64_VALUE:
          set_sfixed64_value(rhs.get_sfixed64_value());
          break;

        case FieldNumber::BOOL_VALUE:
          set_bool_value(rhs.get_bool_value());
          break;

        case FieldNumber::STRING_VALUE:
          set_string_value(rhs.get_string_value());
          break;

        case FieldNumber::BYTES_VALUE:
          set_bytes_value(rhs.get_bytes_value());
          break;

        default:
          break;
      }

      return *this;
    }

    FieldNumber get_which_kind() const { return which_kind_; }

    inline void clear_any_value()
    {
      if(FieldNumber::ANY_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.any_value_.~Any();
      }
    }
    inline void set_any_value(const google::protobuf::Any& value)
    {
      if(FieldNumber::ANY_VALUE != which_kind_)
      {
        init_kind(FieldNumber::ANY_VALUE);
      }
      kind_.any_value_ = value;
    }
    inline void set_any_value(const google::protobuf::Any&& value)
    {
      if(FieldNumber::ANY_VALUE != which_kind_)
      {
        init_kind(FieldNumber::ANY_VALUE);
      }
      kind_.any_value_ = value;
    }
    inline google::protobuf::Any& mutable_any_value()
    {
      if(FieldNumber::ANY_VALUE != which_kind_)
      {
        init_kind(FieldNumber::ANY_VALUE);
      }
      return kind_.any_value_;
    }
    inline const google::protobuf::Any& get_any_value() const { return kind_.any_value_; }
    inline const google::protobuf::Any& any_value() const { return kind_.any_value_; }

    inline void clear_double_value()
    {
      if(FieldNumber::DOUBLE_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.double_value_.~doublefixed(); // NOSONAR Unions require this.
      }
    }
    inline void set_double_value(const EmbeddedProto::doublefixed::FIELD_TYPE& value)
    {
      if(FieldNumber::DOUBLE_VALUE != which_kind_)
      {
        init_kind(FieldNumber::DOUBLE_VALUE);
      }
      kind_.double_value_.set(value);
    }
    inline void set_double_value(const EmbeddedProto::doublefixed::FIELD_TYPE&& value)
    {
      if(FieldNumber::DOUBLE_VALUE != which_kind_)
      {
        init_kind(FieldNumber::DOUBLE_VALUE);
      }
      kind_.double_value_.set(value);
    }
    inline void set_double_value(const EmbeddedProto::doublefixed& value)
    {
      if(FieldNumber::DOUBLE_VALUE != which_kind_)
      {
        init_kind(FieldNumber::DOUBLE_VALUE);
      }
      kind_.double_value_ = value;
    }
    inline void set_double_value(const EmbeddedProto::doublefixed&& value)
    {
      if(FieldNumber::DOUBLE_VALUE != which_kind_)
      {
        init_kind(FieldNumber::DOUBLE_VALUE);
      }
      kind_.double_value_ = value;
    }
    inline const EmbeddedProto::doublefixed& get_double_value() const { return kind_.double_value_; }
    inline EmbeddedProto::doublefixed::FIELD_TYPE double_value() const { return kind_.double_value_.get(); }

    inline void clear_float_value()
    {
      if(FieldNumber::FLOAT_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.float_value_.~floatfixed(); // NOSONAR Unions require this.
      }
    }
    inline void set_float_value(const EmbeddedProto::floatfixed::FIELD_TYPE& value)
    {
      if(FieldNumber::FLOAT_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FLOAT_VALUE);
      }
      kind_.float_value_.set(value);
    }
    inline void set_float_value(const EmbeddedProto::floatfixed::FIELD_TYPE&& value)
    {
      if(FieldNumber::FLOAT_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FLOAT_VALUE);
      }
      kind_.float_value_.set(value);
    }
    inline void set_float_value(const EmbeddedProto::floatfixed& value)
    {
      if(FieldNumber::FLOAT_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FLOAT_VALUE);
      }
      kind_.float_value_ = value;
    }
    inline void set_float_value(const EmbeddedProto::floatfixed&& value)
    {
      if(FieldNumber::FLOAT_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FLOAT_VALUE);
      }
      kind_.float_value_ = value;
    }
    inline const EmbeddedProto::floatfixed& get_float_value() const { return kind_.float_value_; }
    inline EmbeddedProto::floatfixed::FIELD_TYPE float_value() const { return kind_.float_value_.get(); }

    inline void clear_int32_value()
    {
      if(FieldNumber::INT32_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.int32_value_.~int32(); // NOSONAR Unions require this.
      }
    }
    inline void set_int32_value(const EmbeddedProto::int32::FIELD_TYPE& value)
    {
      if(FieldNumber::INT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT32_VALUE);
      }
      kind_.int32_value_.set(value);
    }
    inline void set_int32_value(const EmbeddedProto::int32::FIELD_TYPE&& value)
    {
      if(FieldNumber::INT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT32_VALUE);
      }
      kind_.int32_value_.set(value);
    }
    inline void set_int32_value(const EmbeddedProto::int32& value)
    {
      if(FieldNumber::INT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT32_VALUE);
      }
      kind_.int32_value_ = value;
    }
    inline void set_int32_value(const EmbeddedProto::int32&& value)
    {
      if(FieldNumber::INT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT32_VALUE);
      }
      kind_.int32_value_ = value;
    }
    inline const EmbeddedProto::int32& get_int32_value() const { return kind_.int32_value_; }
    inline EmbeddedProto::int32::FIELD_TYPE int32_value() const { return kind_.int32_value_.get(); }

    inline void clear_int64_value()
    {
      if(FieldNumber::INT64_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.int64_value_.~int64(); // NOSONAR Unions require this.
      }
    }
    inline void set_int64_value(const EmbeddedProto::int64::FIELD_TYPE& value)
    {
      if(FieldNumber::INT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT64_VALUE);
      }
      kind_.int64_value_.set(value);
    }
    inline void set_int64_value(const EmbeddedProto::int64::FIELD_TYPE&& value)
    {
      if(FieldNumber::INT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT64_VALUE);
      }
      kind_.int64_value_.set(value);
    }
    inline void set_int64_value(const EmbeddedProto::int64& value)
    {
      if(FieldNumber::INT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT64_VALUE);
      }
      kind_.int64_value_ = value;
    }
    inline void set_int64_value(const EmbeddedProto::int64&& value)
    {
      if(FieldNumber::INT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::INT64_VALUE);
      }
      kind_.int64_value_ = value;
    }
    inline const EmbeddedProto::int64& get_int64_value() const { return kind_.int64_value_; }
    inline EmbeddedProto::int64::FIELD_TYPE int64_value() const { return kind_.int64_value_.get(); }

    inline void clear_uint32_value()
    {
      if(FieldNumber::UINT32_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.uint32_value_.~uint32(); // NOSONAR Unions require this.
      }
    }
    inline void set_uint32_value(const EmbeddedProto::uint32::FIELD_TYPE& value)
    {
      if(FieldNumber::UINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT32_VALUE);
      }
      kind_.uint32_value_.set(value);
    }
    inline void set_uint32_value(const EmbeddedProto::uint32::FIELD_TYPE&& value)
    {
      if(FieldNumber::UINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT32_VALUE);
      }
      kind_.uint32_value_.set(value);
    }
    inline void set_uint32_value(const EmbeddedProto::uint32& value)
    {
      if(FieldNumber::UINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT32_VALUE);
      }
      kind_.uint32_value_ = value;
    }
    inline void set_uint32_value(const EmbeddedProto::uint32&& value)
    {
      if(FieldNumber::UINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT32_VALUE);
      }
      kind_.uint32_value_ = value;
    }
    inline const EmbeddedProto::uint32& get_uint32_value() const { return kind_.uint32_value_; }
    inline EmbeddedProto::uint32::FIELD_TYPE uint32_value() const { return kind_.uint32_value_.get(); }

    inline void clear_uint64_value()
    {
      if(FieldNumber::UINT64_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.uint64_value_.~uint64(); // NOSONAR Unions require this.
      }
    }
    inline void set_uint64_value(const EmbeddedProto::uint64::FIELD_TYPE& value)
    {
      if(FieldNumber::UINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT64_VALUE);
      }
      kind_.uint64_value_.set(value);
    }
    inline void set_uint64_value(const EmbeddedProto::uint64::FIELD_TYPE&& value)
    {
      if(FieldNumber::UINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT64_VALUE);
      }
      kind_.uint64_value_.set(value);
    }
    inline void set_uint64_value(const EmbeddedProto::uint64& value)
    {
      if(FieldNumber::UINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT64_VALUE);
      }
      kind_.uint64_value_ = value;
    }
    inline void set_uint64_value(const EmbeddedProto::uint64&& value)
    {
      if(FieldNumber::UINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::UINT64_VALUE);
      }
      kind_.uint64_value_ = value;
    }
    inline const EmbeddedProto::uint64& get_uint64_value() const { return kind_.uint64_value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE uint64_value() const { return kind_.uint64_value_.get(); }

    inline void clear_sint32_value()
    {
      if(FieldNumber::SINT32_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.sint32_value_.~sint32(); // NOSONAR Unions require this.
      }
    }
    inline void set_sint32_value(const EmbeddedProto::sint32::FIELD_TYPE& value)
    {
      if(FieldNumber::SINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT32_VALUE);
      }
      kind_.sint32_value_.set(value);
    }
    inline void set_sint32_value(const EmbeddedProto::sint32::FIELD_TYPE&& value)
    {
      if(FieldNumber::SINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT32_VALUE);
      }
      kind_.sint32_value_.set(value);
    }
    inline void set_sint32_value(const EmbeddedProto::sint32& value)
    {
      if(FieldNumber::SINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT32_VALUE);
      }
      kind_.sint32_value_ = value;
    }
    inline void set_sint32_value(const EmbeddedProto::sint32&& value)
    {
      if(FieldNumber::SINT32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT32_VALUE);
      }
      kind_.sint32_value_ = value;
    }
    inline const EmbeddedProto::sint32& get_sint32_value() const { return kind_.sint32_value_; }
    inline EmbeddedProto::sint32::FIELD_TYPE sint32_value() const { return kind_.sint32_value_.get(); }

    inline void clear_sint64_value()
    {
      if(FieldNumber::SINT64_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.sint64_value_.~sint64(); // NOSONAR Unions require this.
      }
    }
    inline void set_sint64_value(const EmbeddedProto::sint64::FIELD_TYPE& value)
    {
      if(FieldNumber::SINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT64_VALUE);
      }
      kind_.sint64_value_.set(value);
    }
    inline void set_sint64_value(const EmbeddedProto::sint64::FIELD_TYPE&& value)
    {
      if(FieldNumber::SINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT64_VALUE);
      }
      kind_.sint64_value_.set(value);
    }
    inline void set_sint64_value(const EmbeddedProto::sint64& value)
    {
      if(FieldNumber::SINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT64_VALUE);
      }
      kind_.sint64_value_ = value;
    }
    inline void set_sint64_value(const EmbeddedProto::sint64&& value)
    {
      if(FieldNumber::SINT64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SINT64_VALUE);
      }
      kind_.sint64_value_ = value;
    }
    inline const EmbeddedProto::sint64& get_sint64_value() const { return kind_.sint64_value_; }
    inline EmbeddedProto::sint64::FIELD_TYPE sint64_value() const { return kind_.sint64_value_.get(); }

    inline void clear_fixed32_value()
    {
      if(FieldNumber::FIXED32_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.fixed32_value_.~fixed32(); // NOSONAR Unions require this.
      }
    }
    inline void set_fixed32_value(const EmbeddedProto::fixed32::FIELD_TYPE& value)
    {
      if(FieldNumber::FIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED32_VALUE);
      }
      kind_.fixed32_value_.set(value);
    }
    inline void set_fixed32_value(const EmbeddedProto::fixed32::FIELD_TYPE&& value)
    {
      if(FieldNumber::FIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED32_VALUE);
      }
      kind_.fixed32_value_.set(value);
    }
    inline void set_fixed32_value(const EmbeddedProto::fixed32& value)
    {
      if(FieldNumber::FIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED32_VALUE);
      }
      kind_.fixed32_value_ = value;
    }
    inline void set_fixed32_value(const EmbeddedProto::fixed32&& value)
    {
      if(FieldNumber::FIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED32_VALUE);
      }
      kind_.fixed32_value_ = value;
    }
    inline const EmbeddedProto::fixed32& get_fixed32_value() const { return kind_.fixed32_value_; }
    inline EmbeddedProto::fixed32::FIELD_TYPE fixed32_value() const { return kind_.fixed32_value_.get(); }

    inline void clear_fixed64_value()
    {
      if(FieldNumber::FIXED64_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.fixed64_value_.~fixed64(); // NOSONAR Unions require this.
      }
    }
    inline void set_fixed64_value(const EmbeddedProto::fixed64::FIELD_TYPE& value)
    {
      if(FieldNumber::FIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED64_VALUE);
      }
      kind_.fixed64_value_.set(value);
    }
    inline void set_fixed64_value(const EmbeddedProto::fixed64::FIELD_TYPE&& value)
    {
      if(FieldNumber::FIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED64_VALUE);
      }
      kind_.fixed64_value_.set(value);
    }
    inline void set_fixed64_value(const EmbeddedProto::fixed64& value)
    {
      if(FieldNumber::FIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED64_VALUE);
      }
      kind_.fixed64_value_ = value;
    }
    inline void set_fixed64_value(const EmbeddedProto::fixed64&& value)
    {
      if(FieldNumber::FIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::FIXED64_VALUE);
      }
      kind_.fixed64_value_ = value;
    }
    inline const EmbeddedProto::fixed64& get_fixed64_value() const { return kind_.fixed64_value_; }
    inline EmbeddedProto::fixed64::FIELD_TYPE fixed64_value() const { return kind_.fixed64_value_.get(); }

    inline void clear_sfixed32_value()
    {
      if(FieldNumber::SFIXED32_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.sfixed32_value_.~sfixed32(); // NOSONAR Unions require this.
      }
    }
    inline void set_sfixed32_value(const EmbeddedProto::sfixed32::FIELD_TYPE& value)
    {
      if(FieldNumber::SFIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED32_VALUE);
      }
      kind_.sfixed32_value_.set(value);
    }
    inline void set_sfixed32_value(const EmbeddedProto::sfixed32::FIELD_TYPE&& value)
    {
      if(FieldNumber::SFIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED32_VALUE);
      }
      kind_.sfixed32_value_.set(value);
    }
    inline void set_sfixed32_value(const EmbeddedProto::sfixed32& value)
    {
      if(FieldNumber::SFIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED32_VALUE);
      }
      kind_.sfixed32_value_ = value;
    }
    inline void set_sfixed32_value(const EmbeddedProto::sfixed32&& value)
    {
      if(FieldNumber::SFIXED32_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED32_VALUE);
      }
      kind_.sfixed32_value_ = value;
    }
    inline const EmbeddedProto::sfixed32& get_sfixed32_value() const { return kind_.sfixed32_value_; }
    inline EmbeddedProto::sfixed32::FIELD_TYPE sfixed32_value() const { return kind_.sfixed32_value_.get(); }

    inline void clear_sfixed64_value()
    {
      if(FieldNumber::SFIXED64_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.sfixed64_value_.~sfixed64(); // NOSONAR Unions require this.
      }
    }
    inline void set_sfixed64_value(const EmbeddedProto::sfixed64::FIELD_TYPE& value)
    {
      if(FieldNumber::SFIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED64_VALUE);
      }
      kind_.sfixed64_value_.set(value);
    }
    inline void set_sfixed64_value(const EmbeddedProto::sfixed64::FIELD_TYPE&& value)
    {
      if(FieldNumber::SFIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED64_VALUE);
      }
      kind_.sfixed64_value_.set(value);
    }
    inline void set_sfixed64_value(const EmbeddedProto::sfixed64& value)
    {
      if(FieldNumber::SFIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED64_VALUE);
      }
      kind_.sfixed64_value_ = value;
    }
    inline void set_sfixed64_value(const EmbeddedProto::sfixed64&& value)
    {
      if(FieldNumber::SFIXED64_VALUE != which_kind_)
      {
        init_kind(FieldNumber::SFIXED64_VALUE);
      }
      kind_.sfixed64_value_ = value;
    }
    inline const EmbeddedProto::sfixed64& get_sfixed64_value() const { return kind_.sfixed64_value_; }
    inline EmbeddedProto::sfixed64::FIELD_TYPE sfixed64_value() const { return kind_.sfixed64_value_.get(); }

    inline void clear_bool_value()
    {
      if(FieldNumber::BOOL_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.bool_value_.~boolean(); // NOSONAR Unions require this.
      }
    }
    inline void set_bool_value(const EmbeddedProto::boolean::FIELD_TYPE& value)
    {
      if(FieldNumber::BOOL_VALUE != which_kind_)
      {
        init_kind(FieldNumber::BOOL_VALUE);
      }
      kind_.bool_value_.set(value);
    }
    inline void set_bool_value(const EmbeddedProto::boolean::FIELD_TYPE&& value)
    {
      if(FieldNumber::BOOL_VALUE != which_kind_)
      {
        init_kind(FieldNumber::BOOL_VALUE);
      }
      kind_.bool_value_.set(value);
    }
    inline void set_bool_value(const EmbeddedProto::boolean& value)
    {
      if(FieldNumber::BOOL_VALUE != which_kind_)
      {
        init_kind(FieldNumber::BOOL_VALUE);
      }
      kind_.bool_value_ = value;
    }
    inline void set_bool_value(const EmbeddedProto::boolean&& value)
    {
      if(FieldNumber::BOOL_VALUE != which_kind_)
      {
        init_kind(FieldNumber::BOOL_VALUE);
      }
      kind_.bool_value_ = value;
    }
    inline const EmbeddedProto::boolean& get_bool_value() const { return kind_.bool_value_; }
    inline EmbeddedProto::boolean::FIELD_TYPE bool_value() const { return kind_.bool_value_.get(); }

    inline void clear_string_value()
    {
      if(FieldNumber::STRING_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.string_value_.~FieldString();
      }
    }
    inline ::EmbeddedProto::FieldString<string_value_LENGTH>& mutable_string_value()
    {
      if(FieldNumber::STRING_VALUE != which_kind_)
      {
        init_kind(FieldNumber::STRING_VALUE);
      }
      return kind_.string_value_;
    }
    inline void set_string_value(const ::EmbeddedProto::FieldString<string_value_LENGTH>& rhs)
    {
      if(FieldNumber::STRING_VALUE != which_kind_)
      {
        init_kind(FieldNumber::STRING_VALUE);
      }
      kind_.string_value_.set(rhs);
    }
    inline const ::EmbeddedProto::FieldString<string_value_LENGTH>& get_string_value() const { return kind_.string_value_; }
    inline const char* string_value() const { return kind_.string_value_.get_const(); }

    inline void clear_bytes_value()
    {
      if(FieldNumber::BYTES_VALUE == which_kind_)
      {
        which_kind_ = FieldNumber::NOT_SET;
        kind_.bytes_value_.~FieldBytes();
      }
    }
    inline ::EmbeddedProto::FieldBytes<bytes_value_LENGTH>& mutable_bytes_value()
    {
      if(FieldNumber::BYTES_VALUE != which_kind_)
      {
        init_kind(FieldNumber::BYTES_VALUE);
      }
      return kind_.bytes_value_;
    }
    inline void set_bytes_value(const ::EmbeddedProto::FieldBytes<bytes_value_LENGTH>& rhs)
    {
      if(FieldNumber::BYTES_VALUE != which_kind_)
      {
        init_kind(FieldNumber::BYTES_VALUE);
      }
      kind_.bytes_value_.set(rhs);
    }
    inline const ::EmbeddedProto::FieldBytes<bytes_value_LENGTH>& get_bytes_value() const { return kind_.bytes_value_; }
    inline const uint8_t* bytes_value() const { return kind_.bytes_value_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_kind_)
      {
        case FieldNumber::ANY_VALUE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = kind_.any_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ANY_VALUE), buffer, false);
          }
          break;

        case FieldNumber::DOUBLE_VALUE:
          if((0.0 != kind_.double_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.double_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DOUBLE_VALUE), buffer, false);
          }
          break;

        case FieldNumber::FLOAT_VALUE:
          if((0.0 != kind_.float_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.float_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FLOAT_VALUE), buffer, false);
          }
          break;

        case FieldNumber::INT32_VALUE:
          if((0 != kind_.int32_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.int32_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::INT32_VALUE), buffer, false);
          }
          break;

        case FieldNumber::INT64_VALUE:
          if((0 != kind_.int64_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.int64_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::INT64_VALUE), buffer, false);
          }
          break;

        case FieldNumber::UINT32_VALUE:
          if((0U != kind_.uint32_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.uint32_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::UINT32_VALUE), buffer, false);
          }
          break;

        case FieldNumber::UINT64_VALUE:
          if((0U != kind_.uint64_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.uint64_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::UINT64_VALUE), buffer, false);
          }
          break;

        case FieldNumber::SINT32_VALUE:
          if((0 != kind_.sint32_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.sint32_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SINT32_VALUE), buffer, false);
          }
          break;

        case FieldNumber::SINT64_VALUE:
          if((0 != kind_.sint64_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.sint64_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SINT64_VALUE), buffer, false);
          }
          break;

        case FieldNumber::FIXED32_VALUE:
          if((0U != kind_.fixed32_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.fixed32_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FIXED32_VALUE), buffer, false);
          }
          break;

        case FieldNumber::FIXED64_VALUE:
          if((0U != kind_.fixed64_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.fixed64_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FIXED64_VALUE), buffer, false);
          }
          break;

        case FieldNumber::SFIXED32_VALUE:
          if((0 != kind_.sfixed32_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.sfixed32_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SFIXED32_VALUE), buffer, false);
          }
          break;

        case FieldNumber::SFIXED64_VALUE:
          if((0 != kind_.sfixed64_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.sfixed64_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SFIXED64_VALUE), buffer, false);
          }
          break;

        case FieldNumber::BOOL_VALUE:
          if((false != kind_.bool_value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = kind_.bool_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BOOL_VALUE), buffer, false);
          }
          break;

        case FieldNumber::STRING_VALUE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = kind_.string_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::STRING_VALUE), buffer, false);
          }
          break;

        case FieldNumber::BYTES_VALUE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = kind_.bytes_value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BYTES_VALUE), buffer, false);
          }
          break;

        default:
          break;
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
          case FieldNumber::ANY_VALUE:
            return_value = deserialize_kind(FieldNumber::ANY_VALUE, kind_.any_value_, buffer, wire_type);

            break;

          case FieldNumber::DOUBLE_VALUE:
            return_value = deserialize_kind(FieldNumber::DOUBLE_VALUE, kind_.double_value_, buffer, wire_type);
            break;

          case FieldNumber::FLOAT_VALUE:
            return_value = deserialize_kind(FieldNumber::FLOAT_VALUE, kind_.float_value_, buffer, wire_type);
            break;

          case FieldNumber::INT32_VALUE:
            return_value = deserialize_kind(FieldNumber::INT32_VALUE, kind_.int32_value_, buffer, wire_type);
            break;

          case FieldNumber::INT64_VALUE:
            return_value = deserialize_kind(FieldNumber::INT64_VALUE, kind_.int64_value_, buffer, wire_type);
            break;

          case FieldNumber::UINT32_VALUE:
            return_value = deserialize_kind(FieldNumber::UINT32_VALUE, kind_.uint32_value_, buffer, wire_type);
            break;

          case FieldNumber::UINT64_VALUE:
            return_value = deserialize_kind(FieldNumber::UINT64_VALUE, kind_.uint64_value_, buffer, wire_type);
            break;

          case FieldNumber::SINT32_VALUE:
            return_value = deserialize_kind(FieldNumber::SINT32_VALUE, kind_.sint32_value_, buffer, wire_type);
            break;

          case FieldNumber::SINT64_VALUE:
            return_value = deserialize_kind(FieldNumber::SINT64_VALUE, kind_.sint64_value_, buffer, wire_type);
            break;

          case FieldNumber::FIXED32_VALUE:
            return_value = deserialize_kind(FieldNumber::FIXED32_VALUE, kind_.fixed32_value_, buffer, wire_type);
            break;

          case FieldNumber::FIXED64_VALUE:
            return_value = deserialize_kind(FieldNumber::FIXED64_VALUE, kind_.fixed64_value_, buffer, wire_type);
            break;

          case FieldNumber::SFIXED32_VALUE:
            return_value = deserialize_kind(FieldNumber::SFIXED32_VALUE, kind_.sfixed32_value_, buffer, wire_type);
            break;

          case FieldNumber::SFIXED64_VALUE:
            return_value = deserialize_kind(FieldNumber::SFIXED64_VALUE, kind_.sfixed64_value_, buffer, wire_type);
            break;

          case FieldNumber::BOOL_VALUE:
            return_value = deserialize_kind(FieldNumber::BOOL_VALUE, kind_.bool_value_, buffer, wire_type);
            break;

          case FieldNumber::STRING_VALUE:
            return_value = deserialize_kind(FieldNumber::STRING_VALUE, kind_.string_value_, buffer, wire_type);
            break;

          case FieldNumber::BYTES_VALUE:
            return_value = deserialize_kind(FieldNumber::BYTES_VALUE, kind_.bytes_value_, buffer, wire_type);
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
      clear_kind();

    }

    private:



      FieldNumber which_kind_ = FieldNumber::NOT_SET;
      union kind
      {
        kind() {}
        ~kind() {}
        google::protobuf::Any any_value_;
        EmbeddedProto::doublefixed double_value_;
        EmbeddedProto::floatfixed float_value_;
        EmbeddedProto::int32 int32_value_;
        EmbeddedProto::int64 int64_value_;
        EmbeddedProto::uint32 uint32_value_;
        EmbeddedProto::uint64 uint64_value_;
        EmbeddedProto::sint32 sint32_value_;
        EmbeddedProto::sint64 sint64_value_;
        EmbeddedProto::fixed32 fixed32_value_;
        EmbeddedProto::fixed64 fixed64_value_;
        EmbeddedProto::sfixed32 sfixed32_value_;
        EmbeddedProto::sfixed64 sfixed64_value_;
        EmbeddedProto::boolean bool_value_;
        ::EmbeddedProto::FieldString<string_value_LENGTH> string_value_;
        ::EmbeddedProto::FieldBytes<bytes_value_LENGTH> bytes_value_;
      };
      kind kind_;

      void init_kind(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_kind_)
        {
          // First delete the old object in the oneof.
          clear_kind();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::ANY_VALUE:
            new(&kind_.any_value_) google::protobuf::Any;
            which_kind_ = FieldNumber::ANY_VALUE;
            break;

          case FieldNumber::DOUBLE_VALUE:
            new(&kind_.double_value_) EmbeddedProto::doublefixed;
            which_kind_ = FieldNumber::DOUBLE_VALUE;
            break;

          case FieldNumber::FLOAT_VALUE:
            new(&kind_.float_value_) EmbeddedProto::floatfixed;
            which_kind_ = FieldNumber::FLOAT_VALUE;
            break;

          case FieldNumber::INT32_VALUE:
            new(&kind_.int32_value_) EmbeddedProto::int32;
            which_kind_ = FieldNumber::INT32_VALUE;
            break;

          case FieldNumber::INT64_VALUE:
            new(&kind_.int64_value_) EmbeddedProto::int64;
            which_kind_ = FieldNumber::INT64_VALUE;
            break;

          case FieldNumber::UINT32_VALUE:
            new(&kind_.uint32_value_) EmbeddedProto::uint32;
            which_kind_ = FieldNumber::UINT32_VALUE;
            break;

          case FieldNumber::UINT64_VALUE:
            new(&kind_.uint64_value_) EmbeddedProto::uint64;
            which_kind_ = FieldNumber::UINT64_VALUE;
            break;

          case FieldNumber::SINT32_VALUE:
            new(&kind_.sint32_value_) EmbeddedProto::sint32;
            which_kind_ = FieldNumber::SINT32_VALUE;
            break;

          case FieldNumber::SINT64_VALUE:
            new(&kind_.sint64_value_) EmbeddedProto::sint64;
            which_kind_ = FieldNumber::SINT64_VALUE;
            break;

          case FieldNumber::FIXED32_VALUE:
            new(&kind_.fixed32_value_) EmbeddedProto::fixed32;
            which_kind_ = FieldNumber::FIXED32_VALUE;
            break;

          case FieldNumber::FIXED64_VALUE:
            new(&kind_.fixed64_value_) EmbeddedProto::fixed64;
            which_kind_ = FieldNumber::FIXED64_VALUE;
            break;

          case FieldNumber::SFIXED32_VALUE:
            new(&kind_.sfixed32_value_) EmbeddedProto::sfixed32;
            which_kind_ = FieldNumber::SFIXED32_VALUE;
            break;

          case FieldNumber::SFIXED64_VALUE:
            new(&kind_.sfixed64_value_) EmbeddedProto::sfixed64;
            which_kind_ = FieldNumber::SFIXED64_VALUE;
            break;

          case FieldNumber::BOOL_VALUE:
            new(&kind_.bool_value_) EmbeddedProto::boolean;
            which_kind_ = FieldNumber::BOOL_VALUE;
            break;

          case FieldNumber::STRING_VALUE:
            new(&kind_.string_value_) ::EmbeddedProto::FieldString<string_value_LENGTH>;
            which_kind_ = FieldNumber::STRING_VALUE;
            break;

          case FieldNumber::BYTES_VALUE:
            new(&kind_.bytes_value_) ::EmbeddedProto::FieldBytes<bytes_value_LENGTH>;
            which_kind_ = FieldNumber::BYTES_VALUE;
            break;

          default:
            break;
         }

         which_kind_ = field_id;
      }

      void clear_kind()
      {
        switch(which_kind_)
        {
          case FieldNumber::ANY_VALUE:
            kind_.any_value_.~Any(); // NOSONAR Unions require this.
            break;
          case FieldNumber::DOUBLE_VALUE:
            kind_.double_value_.~doublefixed(); // NOSONAR Unions require this.
            break;
          case FieldNumber::FLOAT_VALUE:
            kind_.float_value_.~floatfixed(); // NOSONAR Unions require this.
            break;
          case FieldNumber::INT32_VALUE:
            kind_.int32_value_.~int32(); // NOSONAR Unions require this.
            break;
          case FieldNumber::INT64_VALUE:
            kind_.int64_value_.~int64(); // NOSONAR Unions require this.
            break;
          case FieldNumber::UINT32_VALUE:
            kind_.uint32_value_.~uint32(); // NOSONAR Unions require this.
            break;
          case FieldNumber::UINT64_VALUE:
            kind_.uint64_value_.~uint64(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SINT32_VALUE:
            kind_.sint32_value_.~sint32(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SINT64_VALUE:
            kind_.sint64_value_.~sint64(); // NOSONAR Unions require this.
            break;
          case FieldNumber::FIXED32_VALUE:
            kind_.fixed32_value_.~fixed32(); // NOSONAR Unions require this.
            break;
          case FieldNumber::FIXED64_VALUE:
            kind_.fixed64_value_.~fixed64(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SFIXED32_VALUE:
            kind_.sfixed32_value_.~sfixed32(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SFIXED64_VALUE:
            kind_.sfixed64_value_.~sfixed64(); // NOSONAR Unions require this.
            break;
          case FieldNumber::BOOL_VALUE:
            kind_.bool_value_.~boolean(); // NOSONAR Unions require this.
            break;
          case FieldNumber::STRING_VALUE:
            kind_.string_value_.~FieldString(); // NOSONAR Unions require this.
            break;
          case FieldNumber::BYTES_VALUE:
            kind_.bytes_value_.~FieldBytes(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_kind_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_kind(const FieldNumber field_id, ::EmbeddedProto::Field& field,
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        if(field_id != which_kind_)
        {
          init_kind(field_id);
        }
        ::EmbeddedProto::Error return_value = field.deserialize_check_type(buffer, wire_type);
        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_kind();
        }
        return return_value;
      }

};

template<uint32_t value_REP_LENGTH, 
uint32_t value_string_value_LENGTH, 
uint32_t value_bytes_value_LENGTH>
class list_value final: public ::EmbeddedProto::MessageInterface
{
  public:
    list_value() = default;
    list_value(const list_value& rhs )
    {
      set_value(rhs.get_value());
    }

    list_value(const list_value&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~list_value() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    list_value& operator=(const list_value& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    list_value& operator=(const list_value&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline const value<value_string_value_LENGTH, value_bytes_value_LENGTH>& value(uint32_t index) const { return value_[index]; }
    inline void clear_value() { value_.clear(); }
    inline void set_value(uint32_t index, const value<value_string_value_LENGTH, value_bytes_value_LENGTH>& value) { value_.set(index, value); }
    inline void set_value(uint32_t index, const value<value_string_value_LENGTH, value_bytes_value_LENGTH>&& value) { value_.set(index, value); }
    inline void set_value(const ::EmbeddedProto::RepeatedFieldFixedSize<value<value_string_value_LENGTH, value_bytes_value_LENGTH>, value_REP_LENGTH>& values) { value_ = values; }
    inline void add_value(const value<value_string_value_LENGTH, value_bytes_value_LENGTH>& value) { value_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<value<value_string_value_LENGTH, value_bytes_value_LENGTH>, value_REP_LENGTH>& mutable_value() { return value_; }
    inline value<value_string_value_LENGTH, value_bytes_value_LENGTH>& mutable_value(uint32_t index) { return value_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<value<value_string_value_LENGTH, value_bytes_value_LENGTH>, value_REP_LENGTH>& get_value() const { return value_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<value<value_string_value_LENGTH, value_bytes_value_LENGTH>, value_REP_LENGTH>& value() const { return value_; }


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


      ::EmbeddedProto::RepeatedFieldFixedSize<value<value_string_value_LENGTH, value_bytes_value_LENGTH>, value_REP_LENGTH> value_;

};

} // End of namespace protocol
} // End of namespace koinos
#endif // KOINOS_PROTOCOL_VALUE_H