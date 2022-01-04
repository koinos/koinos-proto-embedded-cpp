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
#ifndef KOINOS_CHAIN_CHAIN_H
#define KOINOS_CHAIN_CHAIN_H

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
#include <koinos/common.h>
#include <koinos/protocol/protocol.h>

namespace koinos {
namespace chain {

enum class privilege : uint32_t
{
  kernel_mode = 0,
  user_mode = 1
};

template<uint32_t zone_LENGTH>
class object_space final: public ::EmbeddedProto::MessageInterface
{
  public:
    object_space() = default;
    object_space(const object_space& rhs )
    {
      set_system(rhs.get_system());
      set_zone(rhs.get_zone());
      set_id(rhs.get_id());
    }

    object_space(const object_space&& rhs ) noexcept
    {
      set_system(rhs.get_system());
      set_zone(rhs.get_zone());
      set_id(rhs.get_id());
    }

    ~object_space() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SYSTEM = 1,
      ZONE = 2,
      ID = 3
    };

    object_space& operator=(const object_space& rhs)
    {
      set_system(rhs.get_system());
      set_zone(rhs.get_zone());
      set_id(rhs.get_id());
      return *this;
    }

    object_space& operator=(const object_space&& rhs) noexcept
    {
      set_system(rhs.get_system());
      set_zone(rhs.get_zone());
      set_id(rhs.get_id());
      return *this;
    }

    inline void clear_system() { system_.clear(); }
    inline void set_system(const EmbeddedProto::boolean& value) { system_ = value; }
    inline void set_system(const EmbeddedProto::boolean&& value) { system_ = value; }
    inline EmbeddedProto::boolean& mutable_system() { return system_; }
    inline const EmbeddedProto::boolean& get_system() const { return system_; }
    inline EmbeddedProto::boolean::FIELD_TYPE system() const { return system_.get(); }

    inline void clear_zone() { zone_.clear(); }
    inline ::EmbeddedProto::FieldBytes<zone_LENGTH>& mutable_zone() { return zone_; }
    inline void set_zone(const ::EmbeddedProto::FieldBytes<zone_LENGTH>& rhs) { zone_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<zone_LENGTH>& get_zone() const { return zone_; }
    inline const uint8_t* zone() const { return zone_.get_const(); }

    inline void clear_id() { id_.clear(); }
    inline void set_id(const EmbeddedProto::uint32& value) { id_ = value; }
    inline void set_id(const EmbeddedProto::uint32&& value) { id_ = value; }
    inline EmbeddedProto::uint32& mutable_id() { return id_; }
    inline const EmbeddedProto::uint32& get_id() const { return id_; }
    inline EmbeddedProto::uint32::FIELD_TYPE id() const { return id_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != system_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = system_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SYSTEM), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = zone_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ZONE), buffer, false);
      }

      if((0U != id_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
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
          case FieldNumber::SYSTEM:
            return_value = system_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ZONE:
            return_value = zone_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ID:
            return_value = id_.deserialize_check_type(buffer, wire_type);
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
      clear_system();
      clear_zone();
      clear_id();

    }

    private:


      EmbeddedProto::boolean system_ = false;
      ::EmbeddedProto::FieldBytes<zone_LENGTH> zone_;
      EmbeddedProto::uint32 id_ = 0U;

};

template<uint32_t space_zone_LENGTH, 
uint32_t key_LENGTH>
class database_key final: public ::EmbeddedProto::MessageInterface
{
  public:
    database_key() = default;
    database_key(const database_key& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    database_key(const database_key&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    ~database_key() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2
    };

    database_key& operator=(const database_key& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      return *this;
    }

    database_key& operator=(const database_key&& rhs) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      return *this;
    }

    inline void clear_space() { space_.clear(); }
    inline void set_space(const object_space<space_zone_LENGTH>& value) { space_ = value; }
    inline void set_space(const object_space<space_zone_LENGTH>&& value) { space_ = value; }
    inline object_space<space_zone_LENGTH>& mutable_space() { return space_; }
    inline const object_space<space_zone_LENGTH>& get_space() const { return space_; }
    inline const object_space<space_zone_LENGTH>& space() const { return space_; }

    inline void clear_key() { key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<key_LENGTH>& mutable_key() { return key_; }
    inline void set_key(const ::EmbeddedProto::FieldBytes<key_LENGTH>& rhs) { key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<key_LENGTH>& get_key() const { return key_; }
    inline const uint8_t* key() const { return key_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = space_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SPACE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::KEY), buffer, false);
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
          case FieldNumber::SPACE:
            return_value = space_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::KEY:
            return_value = key_.deserialize_check_type(buffer, wire_type);
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
      clear_space();
      clear_key();

    }

    private:


      object_space<space_zone_LENGTH> space_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;

};

template<uint32_t head_topology_id_LENGTH, 
uint32_t head_topology_previous_LENGTH>
class head_info final: public ::EmbeddedProto::MessageInterface
{
  public:
    head_info() = default;
    head_info(const head_info& rhs )
    {
      set_head_topology(rhs.get_head_topology());
      set_head_block_time(rhs.get_head_block_time());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
    }

    head_info(const head_info&& rhs ) noexcept
    {
      set_head_topology(rhs.get_head_topology());
      set_head_block_time(rhs.get_head_block_time());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
    }

    ~head_info() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      HEAD_TOPOLOGY = 1,
      HEAD_BLOCK_TIME = 2,
      LAST_IRREVERSIBLE_BLOCK = 3
    };

    head_info& operator=(const head_info& rhs)
    {
      set_head_topology(rhs.get_head_topology());
      set_head_block_time(rhs.get_head_block_time());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      return *this;
    }

    head_info& operator=(const head_info&& rhs) noexcept
    {
      set_head_topology(rhs.get_head_topology());
      set_head_block_time(rhs.get_head_block_time());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      return *this;
    }

    inline void clear_head_topology() { head_topology_.clear(); }
    inline void set_head_topology(const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& value) { head_topology_ = value; }
    inline void set_head_topology(const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>&& value) { head_topology_ = value; }
    inline block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& mutable_head_topology() { return head_topology_; }
    inline const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& get_head_topology() const { return head_topology_; }
    inline const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& head_topology() const { return head_topology_; }

    inline void clear_head_block_time() { head_block_time_.clear(); }
    inline void set_head_block_time(const EmbeddedProto::uint64& value) { head_block_time_ = value; }
    inline void set_head_block_time(const EmbeddedProto::uint64&& value) { head_block_time_ = value; }
    inline EmbeddedProto::uint64& mutable_head_block_time() { return head_block_time_; }
    inline const EmbeddedProto::uint64& get_head_block_time() const { return head_block_time_; }
    inline EmbeddedProto::uint64::FIELD_TYPE head_block_time() const { return head_block_time_.get(); }

    inline void clear_last_irreversible_block() { last_irreversible_block_.clear(); }
    inline void set_last_irreversible_block(const EmbeddedProto::uint64& value) { last_irreversible_block_ = value; }
    inline void set_last_irreversible_block(const EmbeddedProto::uint64&& value) { last_irreversible_block_ = value; }
    inline EmbeddedProto::uint64& mutable_last_irreversible_block() { return last_irreversible_block_; }
    inline const EmbeddedProto::uint64& get_last_irreversible_block() const { return last_irreversible_block_; }
    inline EmbeddedProto::uint64::FIELD_TYPE last_irreversible_block() const { return last_irreversible_block_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = head_topology_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEAD_TOPOLOGY), buffer, false);
      }

      if((0U != head_block_time_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = head_block_time_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEAD_BLOCK_TIME), buffer, false);
      }

      if((0U != last_irreversible_block_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_irreversible_block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_IRREVERSIBLE_BLOCK), buffer, false);
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
          case FieldNumber::HEAD_TOPOLOGY:
            return_value = head_topology_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HEAD_BLOCK_TIME:
            return_value = head_block_time_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LAST_IRREVERSIBLE_BLOCK:
            return_value = last_irreversible_block_.deserialize_check_type(buffer, wire_type);
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
      clear_head_topology();
      clear_head_block_time();
      clear_last_irreversible_block();

    }

    private:


      block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH> head_topology_;
      EmbeddedProto::uint64 head_block_time_ = 0U;
      EmbeddedProto::uint64 last_irreversible_block_ = 0U;

};

template<uint32_t caller_LENGTH>
class caller_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    caller_data() = default;
    caller_data(const caller_data& rhs )
    {
      set_caller(rhs.get_caller());
      set_caller_privilege(rhs.get_caller_privilege());
    }

    caller_data(const caller_data&& rhs ) noexcept
    {
      set_caller(rhs.get_caller());
      set_caller_privilege(rhs.get_caller_privilege());
    }

    ~caller_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CALLER = 1,
      CALLER_PRIVILEGE = 2
    };

    caller_data& operator=(const caller_data& rhs)
    {
      set_caller(rhs.get_caller());
      set_caller_privilege(rhs.get_caller_privilege());
      return *this;
    }

    caller_data& operator=(const caller_data&& rhs) noexcept
    {
      set_caller(rhs.get_caller());
      set_caller_privilege(rhs.get_caller_privilege());
      return *this;
    }

    inline void clear_caller() { caller_.clear(); }
    inline ::EmbeddedProto::FieldBytes<caller_LENGTH>& mutable_caller() { return caller_; }
    inline void set_caller(const ::EmbeddedProto::FieldBytes<caller_LENGTH>& rhs) { caller_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<caller_LENGTH>& get_caller() const { return caller_; }
    inline const uint8_t* caller() const { return caller_.get_const(); }

    inline void clear_caller_privilege() { caller_privilege_ = static_cast<privilege>(0); }
    inline void set_caller_privilege(const privilege& value) { caller_privilege_ = value; }
    inline void set_caller_privilege(const privilege&& value) { caller_privilege_ = value; }
    inline const privilege& get_caller_privilege() const { return caller_privilege_; }
    inline privilege caller_privilege() const { return caller_privilege_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = caller_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALLER), buffer, false);
      }

      if((static_cast<privilege>(0) != caller_privilege_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(caller_privilege_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALLER_PRIVILEGE), buffer, false);
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
          case FieldNumber::CALLER:
            return_value = caller_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CALLER_PRIVILEGE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_caller_privilege(static_cast<privilege>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
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
      clear_caller();
      clear_caller_privilege();

    }

    private:


      ::EmbeddedProto::FieldBytes<caller_LENGTH> caller_;
      privilege caller_privilege_ = static_cast<privilege>(0);

};

class resource_limit_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    resource_limit_data() = default;
    resource_limit_data(const resource_limit_data& rhs )
    {
      set_disk_storage_limit(rhs.get_disk_storage_limit());
      set_disk_storage_cost(rhs.get_disk_storage_cost());
      set_network_bandwidth_limit(rhs.get_network_bandwidth_limit());
      set_network_bandwidth_cost(rhs.get_network_bandwidth_cost());
      set_compute_bandwidth_limit(rhs.get_compute_bandwidth_limit());
      set_compute_bandwidth_cost(rhs.get_compute_bandwidth_cost());
    }

    resource_limit_data(const resource_limit_data&& rhs ) noexcept
    {
      set_disk_storage_limit(rhs.get_disk_storage_limit());
      set_disk_storage_cost(rhs.get_disk_storage_cost());
      set_network_bandwidth_limit(rhs.get_network_bandwidth_limit());
      set_network_bandwidth_cost(rhs.get_network_bandwidth_cost());
      set_compute_bandwidth_limit(rhs.get_compute_bandwidth_limit());
      set_compute_bandwidth_cost(rhs.get_compute_bandwidth_cost());
    }

    ~resource_limit_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DISK_STORAGE_LIMIT = 1,
      DISK_STORAGE_COST = 2,
      NETWORK_BANDWIDTH_LIMIT = 3,
      NETWORK_BANDWIDTH_COST = 4,
      COMPUTE_BANDWIDTH_LIMIT = 5,
      COMPUTE_BANDWIDTH_COST = 6
    };

    resource_limit_data& operator=(const resource_limit_data& rhs)
    {
      set_disk_storage_limit(rhs.get_disk_storage_limit());
      set_disk_storage_cost(rhs.get_disk_storage_cost());
      set_network_bandwidth_limit(rhs.get_network_bandwidth_limit());
      set_network_bandwidth_cost(rhs.get_network_bandwidth_cost());
      set_compute_bandwidth_limit(rhs.get_compute_bandwidth_limit());
      set_compute_bandwidth_cost(rhs.get_compute_bandwidth_cost());
      return *this;
    }

    resource_limit_data& operator=(const resource_limit_data&& rhs) noexcept
    {
      set_disk_storage_limit(rhs.get_disk_storage_limit());
      set_disk_storage_cost(rhs.get_disk_storage_cost());
      set_network_bandwidth_limit(rhs.get_network_bandwidth_limit());
      set_network_bandwidth_cost(rhs.get_network_bandwidth_cost());
      set_compute_bandwidth_limit(rhs.get_compute_bandwidth_limit());
      set_compute_bandwidth_cost(rhs.get_compute_bandwidth_cost());
      return *this;
    }

    inline void clear_disk_storage_limit() { disk_storage_limit_.clear(); }
    inline void set_disk_storage_limit(const EmbeddedProto::uint64& value) { disk_storage_limit_ = value; }
    inline void set_disk_storage_limit(const EmbeddedProto::uint64&& value) { disk_storage_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_disk_storage_limit() { return disk_storage_limit_; }
    inline const EmbeddedProto::uint64& get_disk_storage_limit() const { return disk_storage_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE disk_storage_limit() const { return disk_storage_limit_.get(); }

    inline void clear_disk_storage_cost() { disk_storage_cost_.clear(); }
    inline void set_disk_storage_cost(const EmbeddedProto::uint64& value) { disk_storage_cost_ = value; }
    inline void set_disk_storage_cost(const EmbeddedProto::uint64&& value) { disk_storage_cost_ = value; }
    inline EmbeddedProto::uint64& mutable_disk_storage_cost() { return disk_storage_cost_; }
    inline const EmbeddedProto::uint64& get_disk_storage_cost() const { return disk_storage_cost_; }
    inline EmbeddedProto::uint64::FIELD_TYPE disk_storage_cost() const { return disk_storage_cost_.get(); }

    inline void clear_network_bandwidth_limit() { network_bandwidth_limit_.clear(); }
    inline void set_network_bandwidth_limit(const EmbeddedProto::uint64& value) { network_bandwidth_limit_ = value; }
    inline void set_network_bandwidth_limit(const EmbeddedProto::uint64&& value) { network_bandwidth_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_network_bandwidth_limit() { return network_bandwidth_limit_; }
    inline const EmbeddedProto::uint64& get_network_bandwidth_limit() const { return network_bandwidth_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE network_bandwidth_limit() const { return network_bandwidth_limit_.get(); }

    inline void clear_network_bandwidth_cost() { network_bandwidth_cost_.clear(); }
    inline void set_network_bandwidth_cost(const EmbeddedProto::uint64& value) { network_bandwidth_cost_ = value; }
    inline void set_network_bandwidth_cost(const EmbeddedProto::uint64&& value) { network_bandwidth_cost_ = value; }
    inline EmbeddedProto::uint64& mutable_network_bandwidth_cost() { return network_bandwidth_cost_; }
    inline const EmbeddedProto::uint64& get_network_bandwidth_cost() const { return network_bandwidth_cost_; }
    inline EmbeddedProto::uint64::FIELD_TYPE network_bandwidth_cost() const { return network_bandwidth_cost_.get(); }

    inline void clear_compute_bandwidth_limit() { compute_bandwidth_limit_.clear(); }
    inline void set_compute_bandwidth_limit(const EmbeddedProto::uint64& value) { compute_bandwidth_limit_ = value; }
    inline void set_compute_bandwidth_limit(const EmbeddedProto::uint64&& value) { compute_bandwidth_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_compute_bandwidth_limit() { return compute_bandwidth_limit_; }
    inline const EmbeddedProto::uint64& get_compute_bandwidth_limit() const { return compute_bandwidth_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE compute_bandwidth_limit() const { return compute_bandwidth_limit_.get(); }

    inline void clear_compute_bandwidth_cost() { compute_bandwidth_cost_.clear(); }
    inline void set_compute_bandwidth_cost(const EmbeddedProto::uint64& value) { compute_bandwidth_cost_ = value; }
    inline void set_compute_bandwidth_cost(const EmbeddedProto::uint64&& value) { compute_bandwidth_cost_ = value; }
    inline EmbeddedProto::uint64& mutable_compute_bandwidth_cost() { return compute_bandwidth_cost_; }
    inline const EmbeddedProto::uint64& get_compute_bandwidth_cost() const { return compute_bandwidth_cost_; }
    inline EmbeddedProto::uint64::FIELD_TYPE compute_bandwidth_cost() const { return compute_bandwidth_cost_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != disk_storage_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = disk_storage_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DISK_STORAGE_LIMIT), buffer, false);
      }

      if((0U != disk_storage_cost_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = disk_storage_cost_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DISK_STORAGE_COST), buffer, false);
      }

      if((0U != network_bandwidth_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = network_bandwidth_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NETWORK_BANDWIDTH_LIMIT), buffer, false);
      }

      if((0U != network_bandwidth_cost_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = network_bandwidth_cost_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NETWORK_BANDWIDTH_COST), buffer, false);
      }

      if((0U != compute_bandwidth_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = compute_bandwidth_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::COMPUTE_BANDWIDTH_LIMIT), buffer, false);
      }

      if((0U != compute_bandwidth_cost_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = compute_bandwidth_cost_.serialize_with_id(static_cast<uint32_t>(FieldNumber::COMPUTE_BANDWIDTH_COST), buffer, false);
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
          case FieldNumber::DISK_STORAGE_LIMIT:
            return_value = disk_storage_limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DISK_STORAGE_COST:
            return_value = disk_storage_cost_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NETWORK_BANDWIDTH_LIMIT:
            return_value = network_bandwidth_limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NETWORK_BANDWIDTH_COST:
            return_value = network_bandwidth_cost_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::COMPUTE_BANDWIDTH_LIMIT:
            return_value = compute_bandwidth_limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::COMPUTE_BANDWIDTH_COST:
            return_value = compute_bandwidth_cost_.deserialize_check_type(buffer, wire_type);
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
      clear_disk_storage_limit();
      clear_disk_storage_cost();
      clear_network_bandwidth_limit();
      clear_network_bandwidth_cost();
      clear_compute_bandwidth_limit();
      clear_compute_bandwidth_cost();

    }

    private:


      EmbeddedProto::uint64 disk_storage_limit_ = 0U;
      EmbeddedProto::uint64 disk_storage_cost_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_limit_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_cost_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_limit_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_cost_ = 0U;

};

template<uint32_t hash_LENGTH>
class contract_metadata_object final: public ::EmbeddedProto::MessageInterface
{
  public:
    contract_metadata_object() = default;
    contract_metadata_object(const contract_metadata_object& rhs )
    {
      set_hash(rhs.get_hash());
      set_system(rhs.get_system());
    }

    contract_metadata_object(const contract_metadata_object&& rhs ) noexcept
    {
      set_hash(rhs.get_hash());
      set_system(rhs.get_system());
    }

    ~contract_metadata_object() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      HASH = 1,
      SYSTEM = 2
    };

    contract_metadata_object& operator=(const contract_metadata_object& rhs)
    {
      set_hash(rhs.get_hash());
      set_system(rhs.get_system());
      return *this;
    }

    contract_metadata_object& operator=(const contract_metadata_object&& rhs) noexcept
    {
      set_hash(rhs.get_hash());
      set_system(rhs.get_system());
      return *this;
    }

    inline void clear_hash() { hash_.clear(); }
    inline ::EmbeddedProto::FieldBytes<hash_LENGTH>& mutable_hash() { return hash_; }
    inline void set_hash(const ::EmbeddedProto::FieldBytes<hash_LENGTH>& rhs) { hash_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<hash_LENGTH>& get_hash() const { return hash_; }
    inline const uint8_t* hash() const { return hash_.get_const(); }

    inline void clear_system() { system_.clear(); }
    inline void set_system(const EmbeddedProto::boolean& value) { system_ = value; }
    inline void set_system(const EmbeddedProto::boolean&& value) { system_ = value; }
    inline EmbeddedProto::boolean& mutable_system() { return system_; }
    inline const EmbeddedProto::boolean& get_system() const { return system_; }
    inline EmbeddedProto::boolean::FIELD_TYPE system() const { return system_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = hash_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HASH), buffer, false);
      }

      if((false != system_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = system_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SYSTEM), buffer, false);
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
          case FieldNumber::HASH:
            return_value = hash_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SYSTEM:
            return_value = system_.deserialize_check_type(buffer, wire_type);
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
      clear_hash();
      clear_system();

    }

    private:


      ::EmbeddedProto::FieldBytes<hash_LENGTH> hash_;
      EmbeddedProto::boolean system_ = false;

};

template<uint32_t space_zone_LENGTH, 
uint32_t key_LENGTH, 
uint32_t value_LENGTH>
class genesis_entry final: public ::EmbeddedProto::MessageInterface
{
  public:
    genesis_entry() = default;
    genesis_entry(const genesis_entry& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_value(rhs.get_value());
    }

    genesis_entry(const genesis_entry&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_value(rhs.get_value());
    }

    ~genesis_entry() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2,
      VALUE = 3
    };

    genesis_entry& operator=(const genesis_entry& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_value(rhs.get_value());
      return *this;
    }

    genesis_entry& operator=(const genesis_entry&& rhs) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_space() { space_.clear(); }
    inline void set_space(const object_space<space_zone_LENGTH>& value) { space_ = value; }
    inline void set_space(const object_space<space_zone_LENGTH>&& value) { space_ = value; }
    inline object_space<space_zone_LENGTH>& mutable_space() { return space_; }
    inline const object_space<space_zone_LENGTH>& get_space() const { return space_; }
    inline const object_space<space_zone_LENGTH>& space() const { return space_; }

    inline void clear_key() { key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<key_LENGTH>& mutable_key() { return key_; }
    inline void set_key(const ::EmbeddedProto::FieldBytes<key_LENGTH>& rhs) { key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<key_LENGTH>& get_key() const { return key_; }
    inline const uint8_t* key() const { return key_.get_const(); }

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
        return_value = space_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SPACE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::KEY), buffer, false);
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
          case FieldNumber::SPACE:
            return_value = space_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::KEY:
            return_value = key_.deserialize_check_type(buffer, wire_type);
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
      clear_space();
      clear_key();
      clear_value();

    }

    private:


      object_space<space_zone_LENGTH> space_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;
      ::EmbeddedProto::FieldBytes<value_LENGTH> value_;

};

template<uint32_t entries_REP_LENGTH, 
uint32_t entries_space_zone_LENGTH, 
uint32_t entries_key_LENGTH, 
uint32_t entries_value_LENGTH>
class genesis_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    genesis_data() = default;
    genesis_data(const genesis_data& rhs )
    {
      set_entries(rhs.get_entries());
    }

    genesis_data(const genesis_data&& rhs ) noexcept
    {
      set_entries(rhs.get_entries());
    }

    ~genesis_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ENTRIES = 1
    };

    genesis_data& operator=(const genesis_data& rhs)
    {
      set_entries(rhs.get_entries());
      return *this;
    }

    genesis_data& operator=(const genesis_data&& rhs) noexcept
    {
      set_entries(rhs.get_entries());
      return *this;
    }

    inline const genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>& entries(uint32_t index) const { return entries_[index]; }
    inline void clear_entries() { entries_.clear(); }
    inline void set_entries(uint32_t index, const genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>& value) { entries_.set(index, value); }
    inline void set_entries(uint32_t index, const genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>&& value) { entries_.set(index, value); }
    inline void set_entries(const ::EmbeddedProto::RepeatedFieldFixedSize<genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>, entries_REP_LENGTH>& values) { entries_ = values; }
    inline void add_entries(const genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>& value) { entries_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>, entries_REP_LENGTH>& mutable_entries() { return entries_; }
    inline genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>& mutable_entries(uint32_t index) { return entries_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>, entries_REP_LENGTH>& get_entries() const { return entries_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>, entries_REP_LENGTH>& entries() const { return entries_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = entries_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ENTRIES), buffer, false);
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
          case FieldNumber::ENTRIES:
            return_value = entries_.deserialize_check_type(buffer, wire_type);
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
      clear_entries();

    }

    private:


      ::EmbeddedProto::RepeatedFieldFixedSize<genesis_entry<entries_space_zone_LENGTH, entries_key_LENGTH, entries_value_LENGTH>, entries_REP_LENGTH> entries_;

};

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_CHAIN_H