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

#ifndef KOINOS_ANY_H
#define KOINOS_ANY_H

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

#include <koinos/buffer.hpp>

// Include external proto definitions

namespace koinos {

template<uint32_t type_url_LENGTH,
uint32_t value_LENGTH>
class Any final: public ::EmbeddedProto::MessageInterface
{
  public:
    Any() = default;
    Any(const Any& rhs )
    {
      set_type_url(rhs.get_type_url());
      set_value(rhs.get_value());
    }

    Any(const Any&& rhs ) noexcept
    {
      set_type_url(rhs.get_type_url());
      set_value(rhs.get_value());
    }

    ~Any() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE_URL = 1,
      VALUE = 2
    };

    Any& operator=(const Any& rhs)
    {
      set_type_url(rhs.get_type_url());
      set_value(rhs.get_value());
      return *this;
    }

    Any& operator=(const Any&& rhs) noexcept
    {
      set_type_url(rhs.get_type_url());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_type_url() { type_url_.clear(); }
    inline ::EmbeddedProto::FieldString<type_url_LENGTH>& mutable_type_url() { return type_url_; }
    inline void set_type_url(const ::EmbeddedProto::FieldString<type_url_LENGTH>& rhs) { type_url_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<type_url_LENGTH>& get_type_url() const { return type_url_; }
    inline const char* type_url() const { return type_url_.get_const(); }

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
        return_value = type_url_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE_URL), buffer, false);
      }

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
          case FieldNumber::TYPE_URL:
            return_value = type_url_.deserialize_check_type(buffer, wire_type);
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
      clear_type_url();
      clear_value();

    }

    // Packs the given message into this Any
    ::EmbeddedProto::Error PackFrom(const ::EmbeddedProto::MessageInterface& message, const ::EmbeddedProto::FieldString<type_url_LENGTH>& type_url = ::EmbeddedProto::FieldString<type_url_LENGTH>())
    {
      koinos::write_buffer buffer(const_cast<uint8_t*>(reinterpret_cast<const uint8_t*>(get_value().get_const())), get_value().get_max_length());
      ::EmbeddedProto::Error return_value = message.serialize(buffer);

      if(return_value == ::EmbeddedProto::Error::NO_ERRORS)
      {
        return_value = mutable_value().set(buffer.data(), buffer.get_size());
      }

      if(return_value == ::EmbeddedProto::Error::NO_ERRORS)
      {
        set_type_url(type_url);
      }

      return return_value;
    }

    // Unpacks this Any to a message
    ::EmbeddedProto::Error UnpackTo(::EmbeddedProto::MessageInterface& message) const
    {
      koinos::read_buffer buffer(reinterpret_cast<const uint8_t*>(get_value().get_const()), get_value().get_max_length());
      return message.deserialize(buffer);
    }

    private:


      ::EmbeddedProto::FieldString<type_url_LENGTH> type_url_;
      ::EmbeddedProto::FieldBytes<value_LENGTH> value_;

};

} // End of namespace koinos
#endif // KOINOS_ANY_H
