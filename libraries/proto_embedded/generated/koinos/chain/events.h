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
#ifndef KOINOS_CHAIN_EVENTS_H
#define KOINOS_CHAIN_EVENTS_H

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
#include <koinos/protocol/protocol.h>

namespace koinos {
namespace chain {

template<uint32_t target_system_call_bundle_contract_id_LENGTH>
class set_system_call_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_system_call_event() = default;
    set_system_call_event(const set_system_call_event& rhs )
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
    }

    set_system_call_event(const set_system_call_event&& rhs ) noexcept
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
    }

    ~set_system_call_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CALL_ID = 1,
      TARGET = 2
    };

    set_system_call_event& operator=(const set_system_call_event& rhs)
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
      return *this;
    }

    set_system_call_event& operator=(const set_system_call_event&& rhs) noexcept
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
      return *this;
    }

    inline void clear_call_id() { call_id_.clear(); }
    inline void set_call_id(const EmbeddedProto::uint32& value) { call_id_ = value; }
    inline void set_call_id(const EmbeddedProto::uint32&& value) { call_id_ = value; }
    inline EmbeddedProto::uint32& mutable_call_id() { return call_id_; }
    inline const EmbeddedProto::uint32& get_call_id() const { return call_id_; }
    inline EmbeddedProto::uint32::FIELD_TYPE call_id() const { return call_id_.get(); }

    inline void clear_target() { target_.clear(); }
    inline void set_target(const protocol::system_call_target<target_system_call_bundle_contract_id_LENGTH>& value) { target_ = value; }
    inline void set_target(const protocol::system_call_target<target_system_call_bundle_contract_id_LENGTH>&& value) { target_ = value; }
    inline protocol::system_call_target<target_system_call_bundle_contract_id_LENGTH>& mutable_target() { return target_; }
    inline const protocol::system_call_target<target_system_call_bundle_contract_id_LENGTH>& get_target() const { return target_; }
    inline const protocol::system_call_target<target_system_call_bundle_contract_id_LENGTH>& target() const { return target_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != call_id_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = call_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALL_ID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = target_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TARGET), buffer, false);
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
          case FieldNumber::CALL_ID:
            return_value = call_id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TARGET:
            return_value = target_.deserialize_check_type(buffer, wire_type);
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
      clear_call_id();
      clear_target();

    }

    private:


      EmbeddedProto::uint32 call_id_ = 0U;
      protocol::system_call_target<target_system_call_bundle_contract_id_LENGTH> target_;

};

template<uint32_t contract_id_LENGTH>
class set_system_contract_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_system_contract_event() = default;
    set_system_contract_event(const set_system_contract_event& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
    }

    set_system_contract_event(const set_system_contract_event&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
    }

    ~set_system_contract_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      SYSTEM_CONTRACT = 2
    };

    set_system_contract_event& operator=(const set_system_contract_event& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
      return *this;
    }

    set_system_contract_event& operator=(const set_system_contract_event&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
      return *this;
    }

    inline void clear_contract_id() { contract_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& mutable_contract_id() { return contract_id_; }
    inline void set_contract_id(const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& rhs) { contract_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& get_contract_id() const { return contract_id_; }
    inline const uint8_t* contract_id() const { return contract_id_.get_const(); }

    inline void clear_system_contract() { system_contract_.clear(); }
    inline void set_system_contract(const EmbeddedProto::boolean& value) { system_contract_ = value; }
    inline void set_system_contract(const EmbeddedProto::boolean&& value) { system_contract_ = value; }
    inline EmbeddedProto::boolean& mutable_system_contract() { return system_contract_; }
    inline const EmbeddedProto::boolean& get_system_contract() const { return system_contract_; }
    inline EmbeddedProto::boolean::FIELD_TYPE system_contract() const { return system_contract_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
      }

      if((false != system_contract_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = system_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SYSTEM_CONTRACT), buffer, false);
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
          case FieldNumber::CONTRACT_ID:
            return_value = contract_id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SYSTEM_CONTRACT:
            return_value = system_contract_.deserialize_check_type(buffer, wire_type);
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
      clear_contract_id();
      clear_system_contract();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      EmbeddedProto::boolean system_contract_ = false;

};

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_EVENTS_H