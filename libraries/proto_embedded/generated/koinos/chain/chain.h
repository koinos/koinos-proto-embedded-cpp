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

template<uint32_t message_LENGTH>
class prints_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    prints_arguments() = default;
    prints_arguments(const prints_arguments& rhs )
    {
      set_message(rhs.get_message());
    }

    prints_arguments(const prints_arguments&& rhs ) noexcept
    {
      set_message(rhs.get_message());
    }

    ~prints_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MESSAGE = 1
    };

    prints_arguments& operator=(const prints_arguments& rhs)
    {
      set_message(rhs.get_message());
      return *this;
    }

    prints_arguments& operator=(const prints_arguments&& rhs) noexcept
    {
      set_message(rhs.get_message());
      return *this;
    }

    inline void clear_message() { message_.clear(); }
    inline ::EmbeddedProto::FieldString<message_LENGTH>& mutable_message() { return message_; }
    inline void set_message(const ::EmbeddedProto::FieldString<message_LENGTH>& rhs) { message_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<message_LENGTH>& get_message() const { return message_; }
    inline const char* message() const { return message_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = message_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MESSAGE), buffer, false);
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
          case FieldNumber::MESSAGE:
            return_value = message_.deserialize_check_type(buffer, wire_type);
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
      clear_message();

    }

    private:


      ::EmbeddedProto::FieldString<message_LENGTH> message_;

};

class prints_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    prints_result() = default;
    prints_result(const prints_result& rhs )
    {
    }

    prints_result(const prints_result&& rhs ) noexcept
    {
    }

    ~prints_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    prints_result& operator=(const prints_result& rhs)
    {
      return *this;
    }

    prints_result& operator=(const prints_result&& rhs) noexcept
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

template<uint32_t digest_LENGTH, 
uint32_t active_LENGTH, 
uint32_t signature_data_LENGTH>
class verify_block_signature_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_block_signature_arguments() = default;
    verify_block_signature_arguments(const verify_block_signature_arguments& rhs )
    {
      set_digest(rhs.get_digest());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
    }

    verify_block_signature_arguments(const verify_block_signature_arguments&& rhs ) noexcept
    {
      set_digest(rhs.get_digest());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
    }

    ~verify_block_signature_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DIGEST = 1,
      ACTIVE = 2,
      SIGNATURE_DATA = 3
    };

    verify_block_signature_arguments& operator=(const verify_block_signature_arguments& rhs)
    {
      set_digest(rhs.get_digest());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
      return *this;
    }

    verify_block_signature_arguments& operator=(const verify_block_signature_arguments&& rhs) noexcept
    {
      set_digest(rhs.get_digest());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
      return *this;
    }

    inline void clear_digest() { digest_.clear(); }
    inline ::EmbeddedProto::FieldBytes<digest_LENGTH>& mutable_digest() { return digest_; }
    inline void set_digest(const ::EmbeddedProto::FieldBytes<digest_LENGTH>& rhs) { digest_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<digest_LENGTH>& get_digest() const { return digest_; }
    inline const uint8_t* digest() const { return digest_.get_const(); }

    inline void clear_active() { active_.clear(); }
    inline ::EmbeddedProto::FieldBytes<active_LENGTH>& mutable_active() { return active_; }
    inline void set_active(const ::EmbeddedProto::FieldBytes<active_LENGTH>& rhs) { active_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<active_LENGTH>& get_active() const { return active_; }
    inline const uint8_t* active() const { return active_.get_const(); }

    inline void clear_signature_data() { signature_data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& mutable_signature_data() { return signature_data_; }
    inline void set_signature_data(const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& rhs) { signature_data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& get_signature_data() const { return signature_data_; }
    inline const uint8_t* signature_data() const { return signature_data_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = digest_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DIGEST), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = active_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACTIVE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE_DATA), buffer, false);
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
          case FieldNumber::DIGEST:
            return_value = digest_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ACTIVE:
            return_value = active_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNATURE_DATA:
            return_value = signature_data_.deserialize_check_type(buffer, wire_type);
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
      clear_digest();
      clear_active();
      clear_signature_data();

    }

    private:


      ::EmbeddedProto::FieldBytes<digest_LENGTH> digest_;
      ::EmbeddedProto::FieldBytes<active_LENGTH> active_;
      ::EmbeddedProto::FieldBytes<signature_data_LENGTH> signature_data_;

};

class verify_block_signature_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_block_signature_result() = default;
    verify_block_signature_result(const verify_block_signature_result& rhs )
    {
      set_value(rhs.get_value());
    }

    verify_block_signature_result(const verify_block_signature_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~verify_block_signature_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    verify_block_signature_result& operator=(const verify_block_signature_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    verify_block_signature_result& operator=(const verify_block_signature_result&& rhs) noexcept
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

template<uint32_t root_LENGTH, 
uint32_t hashes_REP_LENGTH, 
uint32_t hashes_LENGTH>
class verify_merkle_root_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_merkle_root_arguments() = default;
    verify_merkle_root_arguments(const verify_merkle_root_arguments& rhs )
    {
      set_root(rhs.get_root());
      set_hashes(rhs.get_hashes());
    }

    verify_merkle_root_arguments(const verify_merkle_root_arguments&& rhs ) noexcept
    {
      set_root(rhs.get_root());
      set_hashes(rhs.get_hashes());
    }

    ~verify_merkle_root_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ROOT = 1,
      HASHES = 2
    };

    verify_merkle_root_arguments& operator=(const verify_merkle_root_arguments& rhs)
    {
      set_root(rhs.get_root());
      set_hashes(rhs.get_hashes());
      return *this;
    }

    verify_merkle_root_arguments& operator=(const verify_merkle_root_arguments&& rhs) noexcept
    {
      set_root(rhs.get_root());
      set_hashes(rhs.get_hashes());
      return *this;
    }

    inline void clear_root() { root_.clear(); }
    inline ::EmbeddedProto::FieldBytes<root_LENGTH>& mutable_root() { return root_; }
    inline void set_root(const ::EmbeddedProto::FieldBytes<root_LENGTH>& rhs) { root_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<root_LENGTH>& get_root() const { return root_; }
    inline const uint8_t* root() const { return root_.get_const(); }

    inline const ::EmbeddedProto::FieldBytes<hashes_LENGTH>& hashes(uint32_t index) const { return hashes_[index]; }
    inline void clear_hashes() { hashes_.clear(); }
    inline void set_hashes(uint32_t index, const ::EmbeddedProto::FieldBytes<hashes_LENGTH>& value) { hashes_.set(index, value); }
    inline void set_hashes(uint32_t index, const ::EmbeddedProto::FieldBytes<hashes_LENGTH>&& value) { hashes_.set(index, value); }
    inline void set_hashes(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<hashes_LENGTH>, hashes_REP_LENGTH>& values) { hashes_ = values; }
    inline void add_hashes(const ::EmbeddedProto::FieldBytes<hashes_LENGTH>& value) { hashes_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<hashes_LENGTH>, hashes_REP_LENGTH>& mutable_hashes() { return hashes_; }
    inline ::EmbeddedProto::FieldBytes<hashes_LENGTH>& mutable_hashes(uint32_t index) { return hashes_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<hashes_LENGTH>, hashes_REP_LENGTH>& get_hashes() const { return hashes_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<hashes_LENGTH>, hashes_REP_LENGTH>& hashes() const { return hashes_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = root_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ROOT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = hashes_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HASHES), buffer, false);
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
          case FieldNumber::ROOT:
            return_value = root_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HASHES:
            return_value = hashes_.deserialize_check_type(buffer, wire_type);
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
      clear_root();
      clear_hashes();

    }

    private:


      ::EmbeddedProto::FieldBytes<root_LENGTH> root_;
      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<hashes_LENGTH>, hashes_REP_LENGTH> hashes_;

};

class verify_merkle_root_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_merkle_root_result() = default;
    verify_merkle_root_result(const verify_merkle_root_result& rhs )
    {
      set_value(rhs.get_value());
    }

    verify_merkle_root_result(const verify_merkle_root_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~verify_merkle_root_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    verify_merkle_root_result& operator=(const verify_merkle_root_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    verify_merkle_root_result& operator=(const verify_merkle_root_result&& rhs) noexcept
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

template<uint32_t block_id_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_active_LENGTH, 
uint32_t block_passive_LENGTH, 
uint32_t block_signature_data_LENGTH, 
uint32_t block_transactions_REP_LENGTH, 
uint32_t block_transactions_id_LENGTH, 
uint32_t block_transactions_active_LENGTH, 
uint32_t block_transactions_passive_LENGTH, 
uint32_t block_transactions_signature_data_LENGTH>
class apply_block_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_block_arguments() = default;
    apply_block_arguments(const apply_block_arguments& rhs )
    {
      set_block(rhs.get_block());
      set_check_passive_data(rhs.get_check_passive_data());
      set_check_block_signature(rhs.get_check_block_signature());
      set_check_transaction_signature(rhs.get_check_transaction_signature());
    }

    apply_block_arguments(const apply_block_arguments&& rhs ) noexcept
    {
      set_block(rhs.get_block());
      set_check_passive_data(rhs.get_check_passive_data());
      set_check_block_signature(rhs.get_check_block_signature());
      set_check_transaction_signature(rhs.get_check_transaction_signature());
    }

    ~apply_block_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK = 1,
      CHECK_PASSIVE_DATA = 2,
      CHECK_BLOCK_SIGNATURE = 3,
      CHECK_TRANSACTION_SIGNATURE = 4
    };

    apply_block_arguments& operator=(const apply_block_arguments& rhs)
    {
      set_block(rhs.get_block());
      set_check_passive_data(rhs.get_check_passive_data());
      set_check_block_signature(rhs.get_check_block_signature());
      set_check_transaction_signature(rhs.get_check_transaction_signature());
      return *this;
    }

    apply_block_arguments& operator=(const apply_block_arguments&& rhs) noexcept
    {
      set_block(rhs.get_block());
      set_check_passive_data(rhs.get_check_passive_data());
      set_check_block_signature(rhs.get_check_block_signature());
      set_check_transaction_signature(rhs.get_check_transaction_signature());
      return *this;
    }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& block() const { return block_; }

    inline void clear_check_passive_data() { check_passive_data_.clear(); }
    inline void set_check_passive_data(const EmbeddedProto::boolean& value) { check_passive_data_ = value; }
    inline void set_check_passive_data(const EmbeddedProto::boolean&& value) { check_passive_data_ = value; }
    inline EmbeddedProto::boolean& mutable_check_passive_data() { return check_passive_data_; }
    inline const EmbeddedProto::boolean& get_check_passive_data() const { return check_passive_data_; }
    inline EmbeddedProto::boolean::FIELD_TYPE check_passive_data() const { return check_passive_data_.get(); }

    inline void clear_check_block_signature() { check_block_signature_.clear(); }
    inline void set_check_block_signature(const EmbeddedProto::boolean& value) { check_block_signature_ = value; }
    inline void set_check_block_signature(const EmbeddedProto::boolean&& value) { check_block_signature_ = value; }
    inline EmbeddedProto::boolean& mutable_check_block_signature() { return check_block_signature_; }
    inline const EmbeddedProto::boolean& get_check_block_signature() const { return check_block_signature_; }
    inline EmbeddedProto::boolean::FIELD_TYPE check_block_signature() const { return check_block_signature_.get(); }

    inline void clear_check_transaction_signature() { check_transaction_signature_.clear(); }
    inline void set_check_transaction_signature(const EmbeddedProto::boolean& value) { check_transaction_signature_ = value; }
    inline void set_check_transaction_signature(const EmbeddedProto::boolean&& value) { check_transaction_signature_ = value; }
    inline EmbeddedProto::boolean& mutable_check_transaction_signature() { return check_transaction_signature_; }
    inline const EmbeddedProto::boolean& get_check_transaction_signature() const { return check_transaction_signature_; }
    inline EmbeddedProto::boolean::FIELD_TYPE check_transaction_signature() const { return check_transaction_signature_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK), buffer, false);
      }

      if((false != check_passive_data_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = check_passive_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHECK_PASSIVE_DATA), buffer, false);
      }

      if((false != check_block_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = check_block_signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHECK_BLOCK_SIGNATURE), buffer, false);
      }

      if((false != check_transaction_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = check_transaction_signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHECK_TRANSACTION_SIGNATURE), buffer, false);
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
          case FieldNumber::BLOCK:
            return_value = block_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CHECK_PASSIVE_DATA:
            return_value = check_passive_data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CHECK_BLOCK_SIGNATURE:
            return_value = check_block_signature_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CHECK_TRANSACTION_SIGNATURE:
            return_value = check_transaction_signature_.deserialize_check_type(buffer, wire_type);
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
      clear_block();
      clear_check_passive_data();
      clear_check_block_signature();
      clear_check_transaction_signature();

    }

    private:


      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH> block_;
      EmbeddedProto::boolean check_passive_data_ = false;
      EmbeddedProto::boolean check_block_signature_ = false;
      EmbeddedProto::boolean check_transaction_signature_ = false;

};

class apply_block_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_block_result() = default;
    apply_block_result(const apply_block_result& rhs )
    {
    }

    apply_block_result(const apply_block_result&& rhs ) noexcept
    {
    }

    ~apply_block_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    apply_block_result& operator=(const apply_block_result& rhs)
    {
      return *this;
    }

    apply_block_result& operator=(const apply_block_result&& rhs) noexcept
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

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_active_LENGTH, 
uint32_t transaction_passive_LENGTH, 
uint32_t transaction_signature_data_LENGTH>
class apply_transaction_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_transaction_arguments() = default;
    apply_transaction_arguments(const apply_transaction_arguments& rhs )
    {
      set_transaction(rhs.get_transaction());
    }

    apply_transaction_arguments(const apply_transaction_arguments&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
    }

    ~apply_transaction_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1
    };

    apply_transaction_arguments& operator=(const apply_transaction_arguments& rhs)
    {
      set_transaction(rhs.get_transaction());
      return *this;
    }

    apply_transaction_arguments& operator=(const apply_transaction_arguments&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
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
          case FieldNumber::TRANSACTION:
            return_value = transaction_.deserialize_check_type(buffer, wire_type);
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
      clear_transaction();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH> transaction_;

};

class apply_transaction_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_transaction_result() = default;
    apply_transaction_result(const apply_transaction_result& rhs )
    {
    }

    apply_transaction_result(const apply_transaction_result&& rhs ) noexcept
    {
    }

    ~apply_transaction_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    apply_transaction_result& operator=(const apply_transaction_result& rhs)
    {
      return *this;
    }

    apply_transaction_result& operator=(const apply_transaction_result&& rhs) noexcept
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

template<uint32_t op_contract_id_LENGTH, 
uint32_t op_bytecode_LENGTH>
class apply_upload_contract_operation_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_upload_contract_operation_arguments() = default;
    apply_upload_contract_operation_arguments(const apply_upload_contract_operation_arguments& rhs )
    {
      set_op(rhs.get_op());
    }

    apply_upload_contract_operation_arguments(const apply_upload_contract_operation_arguments&& rhs ) noexcept
    {
      set_op(rhs.get_op());
    }

    ~apply_upload_contract_operation_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      OP = 1
    };

    apply_upload_contract_operation_arguments& operator=(const apply_upload_contract_operation_arguments& rhs)
    {
      set_op(rhs.get_op());
      return *this;
    }

    apply_upload_contract_operation_arguments& operator=(const apply_upload_contract_operation_arguments&& rhs) noexcept
    {
      set_op(rhs.get_op());
      return *this;
    }

    inline void clear_op() { op_.clear(); }
    inline void set_op(const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH>& value) { op_ = value; }
    inline void set_op(const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH>&& value) { op_ = value; }
    inline protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH>& mutable_op() { return op_; }
    inline const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH>& get_op() const { return op_; }
    inline const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH>& op() const { return op_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = op_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OP), buffer, false);
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
          case FieldNumber::OP:
            return_value = op_.deserialize_check_type(buffer, wire_type);
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
      clear_op();

    }

    private:


      protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH> op_;

};

class apply_upload_contract_operation_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_upload_contract_operation_result() = default;
    apply_upload_contract_operation_result(const apply_upload_contract_operation_result& rhs )
    {
    }

    apply_upload_contract_operation_result(const apply_upload_contract_operation_result&& rhs ) noexcept
    {
    }

    ~apply_upload_contract_operation_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    apply_upload_contract_operation_result& operator=(const apply_upload_contract_operation_result& rhs)
    {
      return *this;
    }

    apply_upload_contract_operation_result& operator=(const apply_upload_contract_operation_result&& rhs) noexcept
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

template<uint32_t op_contract_id_LENGTH, 
uint32_t op_args_LENGTH>
class apply_call_contract_operation_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_call_contract_operation_arguments() = default;
    apply_call_contract_operation_arguments(const apply_call_contract_operation_arguments& rhs )
    {
      set_op(rhs.get_op());
    }

    apply_call_contract_operation_arguments(const apply_call_contract_operation_arguments&& rhs ) noexcept
    {
      set_op(rhs.get_op());
    }

    ~apply_call_contract_operation_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      OP = 1
    };

    apply_call_contract_operation_arguments& operator=(const apply_call_contract_operation_arguments& rhs)
    {
      set_op(rhs.get_op());
      return *this;
    }

    apply_call_contract_operation_arguments& operator=(const apply_call_contract_operation_arguments&& rhs) noexcept
    {
      set_op(rhs.get_op());
      return *this;
    }

    inline void clear_op() { op_.clear(); }
    inline void set_op(const protocol::call_contract_operation<op_contract_id_LENGTH, op_args_LENGTH>& value) { op_ = value; }
    inline void set_op(const protocol::call_contract_operation<op_contract_id_LENGTH, op_args_LENGTH>&& value) { op_ = value; }
    inline protocol::call_contract_operation<op_contract_id_LENGTH, op_args_LENGTH>& mutable_op() { return op_; }
    inline const protocol::call_contract_operation<op_contract_id_LENGTH, op_args_LENGTH>& get_op() const { return op_; }
    inline const protocol::call_contract_operation<op_contract_id_LENGTH, op_args_LENGTH>& op() const { return op_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = op_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OP), buffer, false);
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
          case FieldNumber::OP:
            return_value = op_.deserialize_check_type(buffer, wire_type);
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
      clear_op();

    }

    private:


      protocol::call_contract_operation<op_contract_id_LENGTH, op_args_LENGTH> op_;

};

class apply_call_contract_operation_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_call_contract_operation_result() = default;
    apply_call_contract_operation_result(const apply_call_contract_operation_result& rhs )
    {
    }

    apply_call_contract_operation_result(const apply_call_contract_operation_result&& rhs ) noexcept
    {
    }

    ~apply_call_contract_operation_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    apply_call_contract_operation_result& operator=(const apply_call_contract_operation_result& rhs)
    {
      return *this;
    }

    apply_call_contract_operation_result& operator=(const apply_call_contract_operation_result&& rhs) noexcept
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

template<uint32_t op_target_system_call_bundle_contract_id_LENGTH>
class apply_set_system_call_operation_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_set_system_call_operation_arguments() = default;
    apply_set_system_call_operation_arguments(const apply_set_system_call_operation_arguments& rhs )
    {
      set_op(rhs.get_op());
    }

    apply_set_system_call_operation_arguments(const apply_set_system_call_operation_arguments&& rhs ) noexcept
    {
      set_op(rhs.get_op());
    }

    ~apply_set_system_call_operation_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      OP = 1
    };

    apply_set_system_call_operation_arguments& operator=(const apply_set_system_call_operation_arguments& rhs)
    {
      set_op(rhs.get_op());
      return *this;
    }

    apply_set_system_call_operation_arguments& operator=(const apply_set_system_call_operation_arguments&& rhs) noexcept
    {
      set_op(rhs.get_op());
      return *this;
    }

    inline void clear_op() { op_.clear(); }
    inline void set_op(const protocol::set_system_call_operation<op_target_system_call_bundle_contract_id_LENGTH>& value) { op_ = value; }
    inline void set_op(const protocol::set_system_call_operation<op_target_system_call_bundle_contract_id_LENGTH>&& value) { op_ = value; }
    inline protocol::set_system_call_operation<op_target_system_call_bundle_contract_id_LENGTH>& mutable_op() { return op_; }
    inline const protocol::set_system_call_operation<op_target_system_call_bundle_contract_id_LENGTH>& get_op() const { return op_; }
    inline const protocol::set_system_call_operation<op_target_system_call_bundle_contract_id_LENGTH>& op() const { return op_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = op_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OP), buffer, false);
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
          case FieldNumber::OP:
            return_value = op_.deserialize_check_type(buffer, wire_type);
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
      clear_op();

    }

    private:


      protocol::set_system_call_operation<op_target_system_call_bundle_contract_id_LENGTH> op_;

};

class apply_set_system_call_operation_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_set_system_call_operation_result() = default;
    apply_set_system_call_operation_result(const apply_set_system_call_operation_result& rhs )
    {
    }

    apply_set_system_call_operation_result(const apply_set_system_call_operation_result&& rhs ) noexcept
    {
    }

    ~apply_set_system_call_operation_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    apply_set_system_call_operation_result& operator=(const apply_set_system_call_operation_result& rhs)
    {
      return *this;
    }

    apply_set_system_call_operation_result& operator=(const apply_set_system_call_operation_result&& rhs) noexcept
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

template<uint32_t space_zone_LENGTH, 
uint32_t key_LENGTH, 
uint32_t obj_LENGTH>
class put_object_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    put_object_arguments() = default;
    put_object_arguments(const put_object_arguments& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_obj(rhs.get_obj());
    }

    put_object_arguments(const put_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_obj(rhs.get_obj());
    }

    ~put_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2,
      OBJ = 3
    };

    put_object_arguments& operator=(const put_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_obj(rhs.get_obj());
      return *this;
    }

    put_object_arguments& operator=(const put_object_arguments&& rhs) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_obj(rhs.get_obj());
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

    inline void clear_obj() { obj_.clear(); }
    inline ::EmbeddedProto::FieldBytes<obj_LENGTH>& mutable_obj() { return obj_; }
    inline void set_obj(const ::EmbeddedProto::FieldBytes<obj_LENGTH>& rhs) { obj_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<obj_LENGTH>& get_obj() const { return obj_; }
    inline const uint8_t* obj() const { return obj_.get_const(); }


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
        return_value = obj_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OBJ), buffer, false);
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

          case FieldNumber::OBJ:
            return_value = obj_.deserialize_check_type(buffer, wire_type);
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
      clear_obj();

    }

    private:


      object_space<space_zone_LENGTH> space_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;
      ::EmbeddedProto::FieldBytes<obj_LENGTH> obj_;

};

class put_object_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    put_object_result() = default;
    put_object_result(const put_object_result& rhs )
    {
      set_value(rhs.get_value());
    }

    put_object_result(const put_object_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~put_object_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    put_object_result& operator=(const put_object_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    put_object_result& operator=(const put_object_result&& rhs) noexcept
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

template<uint32_t space_zone_LENGTH, 
uint32_t key_LENGTH>
class get_object_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_object_arguments() = default;
    get_object_arguments(const get_object_arguments& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
    }

    get_object_arguments(const get_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
    }

    ~get_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2,
      OBJECT_SIZE_HINT = 3
    };

    get_object_arguments& operator=(const get_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
      return *this;
    }

    get_object_arguments& operator=(const get_object_arguments&& rhs) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
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

    inline void clear_object_size_hint() { object_size_hint_.clear(); }
    inline void set_object_size_hint(const EmbeddedProto::uint32& value) { object_size_hint_ = value; }
    inline void set_object_size_hint(const EmbeddedProto::uint32&& value) { object_size_hint_ = value; }
    inline EmbeddedProto::uint32& mutable_object_size_hint() { return object_size_hint_; }
    inline const EmbeddedProto::uint32& get_object_size_hint() const { return object_size_hint_; }
    inline EmbeddedProto::uint32::FIELD_TYPE object_size_hint() const { return object_size_hint_.get(); }


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

      if((0U != object_size_hint_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = object_size_hint_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OBJECT_SIZE_HINT), buffer, false);
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

          case FieldNumber::OBJECT_SIZE_HINT:
            return_value = object_size_hint_.deserialize_check_type(buffer, wire_type);
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
      clear_object_size_hint();

    }

    private:


      object_space<space_zone_LENGTH> space_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;
      EmbeddedProto::uint32 object_size_hint_ = 0U;

};

template<uint32_t value_LENGTH>
class get_object_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_object_result() = default;
    get_object_result(const get_object_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_object_result(const get_object_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_object_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 3
    };

    get_object_result& operator=(const get_object_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_object_result& operator=(const get_object_result&& rhs) noexcept
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

template<uint32_t space_zone_LENGTH, 
uint32_t key_LENGTH>
class get_next_object_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_next_object_arguments() = default;
    get_next_object_arguments(const get_next_object_arguments& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
    }

    get_next_object_arguments(const get_next_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
    }

    ~get_next_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2,
      OBJECT_SIZE_HINT = 3
    };

    get_next_object_arguments& operator=(const get_next_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
      return *this;
    }

    get_next_object_arguments& operator=(const get_next_object_arguments&& rhs) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
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

    inline void clear_object_size_hint() { object_size_hint_.clear(); }
    inline void set_object_size_hint(const EmbeddedProto::uint32& value) { object_size_hint_ = value; }
    inline void set_object_size_hint(const EmbeddedProto::uint32&& value) { object_size_hint_ = value; }
    inline EmbeddedProto::uint32& mutable_object_size_hint() { return object_size_hint_; }
    inline const EmbeddedProto::uint32& get_object_size_hint() const { return object_size_hint_; }
    inline EmbeddedProto::uint32::FIELD_TYPE object_size_hint() const { return object_size_hint_.get(); }


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

      if((0U != object_size_hint_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = object_size_hint_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OBJECT_SIZE_HINT), buffer, false);
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

          case FieldNumber::OBJECT_SIZE_HINT:
            return_value = object_size_hint_.deserialize_check_type(buffer, wire_type);
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
      clear_object_size_hint();

    }

    private:


      object_space<space_zone_LENGTH> space_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;
      EmbeddedProto::uint32 object_size_hint_ = 0U;

};

template<uint32_t value_LENGTH>
class get_next_object_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_next_object_result() = default;
    get_next_object_result(const get_next_object_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_next_object_result(const get_next_object_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_next_object_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 3
    };

    get_next_object_result& operator=(const get_next_object_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_next_object_result& operator=(const get_next_object_result&& rhs) noexcept
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

template<uint32_t space_zone_LENGTH, 
uint32_t key_LENGTH>
class get_prev_object_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_prev_object_arguments() = default;
    get_prev_object_arguments(const get_prev_object_arguments& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
    }

    get_prev_object_arguments(const get_prev_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
    }

    ~get_prev_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2,
      OBJECT_SIZE_HINT = 3
    };

    get_prev_object_arguments& operator=(const get_prev_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
      return *this;
    }

    get_prev_object_arguments& operator=(const get_prev_object_arguments&& rhs) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      set_object_size_hint(rhs.get_object_size_hint());
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

    inline void clear_object_size_hint() { object_size_hint_.clear(); }
    inline void set_object_size_hint(const EmbeddedProto::uint32& value) { object_size_hint_ = value; }
    inline void set_object_size_hint(const EmbeddedProto::uint32&& value) { object_size_hint_ = value; }
    inline EmbeddedProto::uint32& mutable_object_size_hint() { return object_size_hint_; }
    inline const EmbeddedProto::uint32& get_object_size_hint() const { return object_size_hint_; }
    inline EmbeddedProto::uint32::FIELD_TYPE object_size_hint() const { return object_size_hint_.get(); }


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

      if((0U != object_size_hint_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = object_size_hint_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OBJECT_SIZE_HINT), buffer, false);
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

          case FieldNumber::OBJECT_SIZE_HINT:
            return_value = object_size_hint_.deserialize_check_type(buffer, wire_type);
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
      clear_object_size_hint();

    }

    private:


      object_space<space_zone_LENGTH> space_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;
      EmbeddedProto::uint32 object_size_hint_ = 0U;

};

template<uint32_t value_LENGTH>
class get_prev_object_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_prev_object_result() = default;
    get_prev_object_result(const get_prev_object_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_prev_object_result(const get_prev_object_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_prev_object_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 3
    };

    get_prev_object_result& operator=(const get_prev_object_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_prev_object_result& operator=(const get_prev_object_result&& rhs) noexcept
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

template<uint32_t contract_id_LENGTH, 
uint32_t args_LENGTH>
class call_contract_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    call_contract_arguments() = default;
    call_contract_arguments(const call_contract_arguments& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    call_contract_arguments(const call_contract_arguments&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    ~call_contract_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      ENTRY_POINT = 2,
      ARGS = 3
    };

    call_contract_arguments& operator=(const call_contract_arguments& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
      return *this;
    }

    call_contract_arguments& operator=(const call_contract_arguments&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
      return *this;
    }

    inline void clear_contract_id() { contract_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& mutable_contract_id() { return contract_id_; }
    inline void set_contract_id(const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& rhs) { contract_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& get_contract_id() const { return contract_id_; }
    inline const uint8_t* contract_id() const { return contract_id_.get_const(); }

    inline void clear_entry_point() { entry_point_.clear(); }
    inline void set_entry_point(const EmbeddedProto::uint32& value) { entry_point_ = value; }
    inline void set_entry_point(const EmbeddedProto::uint32&& value) { entry_point_ = value; }
    inline EmbeddedProto::uint32& mutable_entry_point() { return entry_point_; }
    inline const EmbeddedProto::uint32& get_entry_point() const { return entry_point_; }
    inline EmbeddedProto::uint32::FIELD_TYPE entry_point() const { return entry_point_.get(); }

    inline void clear_args() { args_.clear(); }
    inline ::EmbeddedProto::FieldBytes<args_LENGTH>& mutable_args() { return args_; }
    inline void set_args(const ::EmbeddedProto::FieldBytes<args_LENGTH>& rhs) { args_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<args_LENGTH>& get_args() const { return args_; }
    inline const uint8_t* args() const { return args_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
      }

      if((0U != entry_point_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = entry_point_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ENTRY_POINT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = args_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ARGS), buffer, false);
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

          case FieldNumber::ENTRY_POINT:
            return_value = entry_point_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ARGS:
            return_value = args_.deserialize_check_type(buffer, wire_type);
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
      clear_entry_point();
      clear_args();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      EmbeddedProto::uint32 entry_point_ = 0U;
      ::EmbeddedProto::FieldBytes<args_LENGTH> args_;

};

template<uint32_t value_LENGTH>
class call_contract_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    call_contract_result() = default;
    call_contract_result(const call_contract_result& rhs )
    {
      set_value(rhs.get_value());
    }

    call_contract_result(const call_contract_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~call_contract_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    call_contract_result& operator=(const call_contract_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    call_contract_result& operator=(const call_contract_result&& rhs) noexcept
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

class get_entry_point_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_entry_point_arguments() = default;
    get_entry_point_arguments(const get_entry_point_arguments& rhs )
    {
    }

    get_entry_point_arguments(const get_entry_point_arguments&& rhs ) noexcept
    {
    }

    ~get_entry_point_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_entry_point_arguments& operator=(const get_entry_point_arguments& rhs)
    {
      return *this;
    }

    get_entry_point_arguments& operator=(const get_entry_point_arguments&& rhs) noexcept
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

class get_entry_point_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_entry_point_result() = default;
    get_entry_point_result(const get_entry_point_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_entry_point_result(const get_entry_point_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_entry_point_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_entry_point_result& operator=(const get_entry_point_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_entry_point_result& operator=(const get_entry_point_result&& rhs) noexcept
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

class get_contract_arguments_size_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_arguments_size_arguments() = default;
    get_contract_arguments_size_arguments(const get_contract_arguments_size_arguments& rhs )
    {
    }

    get_contract_arguments_size_arguments(const get_contract_arguments_size_arguments&& rhs ) noexcept
    {
    }

    ~get_contract_arguments_size_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_contract_arguments_size_arguments& operator=(const get_contract_arguments_size_arguments& rhs)
    {
      return *this;
    }

    get_contract_arguments_size_arguments& operator=(const get_contract_arguments_size_arguments&& rhs) noexcept
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

class get_contract_arguments_size_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_arguments_size_result() = default;
    get_contract_arguments_size_result(const get_contract_arguments_size_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_contract_arguments_size_result(const get_contract_arguments_size_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_contract_arguments_size_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_contract_arguments_size_result& operator=(const get_contract_arguments_size_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_contract_arguments_size_result& operator=(const get_contract_arguments_size_result&& rhs) noexcept
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

class get_contract_arguments_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_arguments_arguments() = default;
    get_contract_arguments_arguments(const get_contract_arguments_arguments& rhs )
    {
    }

    get_contract_arguments_arguments(const get_contract_arguments_arguments&& rhs ) noexcept
    {
    }

    ~get_contract_arguments_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_contract_arguments_arguments& operator=(const get_contract_arguments_arguments& rhs)
    {
      return *this;
    }

    get_contract_arguments_arguments& operator=(const get_contract_arguments_arguments&& rhs) noexcept
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
class get_contract_arguments_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_arguments_result() = default;
    get_contract_arguments_result(const get_contract_arguments_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_contract_arguments_result(const get_contract_arguments_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_contract_arguments_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_contract_arguments_result& operator=(const get_contract_arguments_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_contract_arguments_result& operator=(const get_contract_arguments_result&& rhs) noexcept
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

template<uint32_t value_LENGTH>
class set_contract_result_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_contract_result_arguments() = default;
    set_contract_result_arguments(const set_contract_result_arguments& rhs )
    {
      set_value(rhs.get_value());
    }

    set_contract_result_arguments(const set_contract_result_arguments&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~set_contract_result_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    set_contract_result_arguments& operator=(const set_contract_result_arguments& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    set_contract_result_arguments& operator=(const set_contract_result_arguments&& rhs) noexcept
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

class set_contract_result_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_contract_result_result() = default;
    set_contract_result_result(const set_contract_result_result& rhs )
    {
    }

    set_contract_result_result(const set_contract_result_result&& rhs ) noexcept
    {
    }

    ~set_contract_result_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    set_contract_result_result& operator=(const set_contract_result_result& rhs)
    {
      return *this;
    }

    set_contract_result_result& operator=(const set_contract_result_result&& rhs) noexcept
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

class exit_contract_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    exit_contract_arguments() = default;
    exit_contract_arguments(const exit_contract_arguments& rhs )
    {
      set_exit_code(rhs.get_exit_code());
    }

    exit_contract_arguments(const exit_contract_arguments&& rhs ) noexcept
    {
      set_exit_code(rhs.get_exit_code());
    }

    ~exit_contract_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      EXIT_CODE = 1
    };

    exit_contract_arguments& operator=(const exit_contract_arguments& rhs)
    {
      set_exit_code(rhs.get_exit_code());
      return *this;
    }

    exit_contract_arguments& operator=(const exit_contract_arguments&& rhs) noexcept
    {
      set_exit_code(rhs.get_exit_code());
      return *this;
    }

    inline void clear_exit_code() { exit_code_.clear(); }
    inline void set_exit_code(const EmbeddedProto::uint32& value) { exit_code_ = value; }
    inline void set_exit_code(const EmbeddedProto::uint32&& value) { exit_code_ = value; }
    inline EmbeddedProto::uint32& mutable_exit_code() { return exit_code_; }
    inline const EmbeddedProto::uint32& get_exit_code() const { return exit_code_; }
    inline EmbeddedProto::uint32::FIELD_TYPE exit_code() const { return exit_code_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != exit_code_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = exit_code_.serialize_with_id(static_cast<uint32_t>(FieldNumber::EXIT_CODE), buffer, false);
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
          case FieldNumber::EXIT_CODE:
            return_value = exit_code_.deserialize_check_type(buffer, wire_type);
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
      clear_exit_code();

    }

    private:


      EmbeddedProto::uint32 exit_code_ = 0U;

};

class exit_contract_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    exit_contract_result() = default;
    exit_contract_result(const exit_contract_result& rhs )
    {
    }

    exit_contract_result(const exit_contract_result&& rhs ) noexcept
    {
    }

    ~exit_contract_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    exit_contract_result& operator=(const exit_contract_result& rhs)
    {
      return *this;
    }

    exit_contract_result& operator=(const exit_contract_result&& rhs) noexcept
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

class get_head_info_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_head_info_arguments() = default;
    get_head_info_arguments(const get_head_info_arguments& rhs )
    {
    }

    get_head_info_arguments(const get_head_info_arguments&& rhs ) noexcept
    {
    }

    ~get_head_info_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_head_info_arguments& operator=(const get_head_info_arguments& rhs)
    {
      return *this;
    }

    get_head_info_arguments& operator=(const get_head_info_arguments&& rhs) noexcept
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

template<uint32_t value_head_topology_id_LENGTH, 
uint32_t value_head_topology_previous_LENGTH>
class get_head_info_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_head_info_result() = default;
    get_head_info_result(const get_head_info_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_head_info_result(const get_head_info_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_head_info_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_head_info_result& operator=(const get_head_info_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_head_info_result& operator=(const get_head_info_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const head_info<value_head_topology_id_LENGTH, value_head_topology_previous_LENGTH>& value) { value_ = value; }
    inline void set_value(const head_info<value_head_topology_id_LENGTH, value_head_topology_previous_LENGTH>&& value) { value_ = value; }
    inline head_info<value_head_topology_id_LENGTH, value_head_topology_previous_LENGTH>& mutable_value() { return value_; }
    inline const head_info<value_head_topology_id_LENGTH, value_head_topology_previous_LENGTH>& get_value() const { return value_; }
    inline const head_info<value_head_topology_id_LENGTH, value_head_topology_previous_LENGTH>& value() const { return value_; }


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


      head_info<value_head_topology_id_LENGTH, value_head_topology_previous_LENGTH> value_;

};

template<uint32_t obj_LENGTH>
class hash_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    hash_arguments() = default;
    hash_arguments(const hash_arguments& rhs )
    {
      set_code(rhs.get_code());
      set_obj(rhs.get_obj());
      set_size(rhs.get_size());
    }

    hash_arguments(const hash_arguments&& rhs ) noexcept
    {
      set_code(rhs.get_code());
      set_obj(rhs.get_obj());
      set_size(rhs.get_size());
    }

    ~hash_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CODE = 1,
      OBJ = 2,
      SIZE = 3
    };

    hash_arguments& operator=(const hash_arguments& rhs)
    {
      set_code(rhs.get_code());
      set_obj(rhs.get_obj());
      set_size(rhs.get_size());
      return *this;
    }

    hash_arguments& operator=(const hash_arguments&& rhs) noexcept
    {
      set_code(rhs.get_code());
      set_obj(rhs.get_obj());
      set_size(rhs.get_size());
      return *this;
    }

    inline void clear_code() { code_.clear(); }
    inline void set_code(const EmbeddedProto::uint64& value) { code_ = value; }
    inline void set_code(const EmbeddedProto::uint64&& value) { code_ = value; }
    inline EmbeddedProto::uint64& mutable_code() { return code_; }
    inline const EmbeddedProto::uint64& get_code() const { return code_; }
    inline EmbeddedProto::uint64::FIELD_TYPE code() const { return code_.get(); }

    inline void clear_obj() { obj_.clear(); }
    inline ::EmbeddedProto::FieldBytes<obj_LENGTH>& mutable_obj() { return obj_; }
    inline void set_obj(const ::EmbeddedProto::FieldBytes<obj_LENGTH>& rhs) { obj_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<obj_LENGTH>& get_obj() const { return obj_; }
    inline const uint8_t* obj() const { return obj_.get_const(); }

    inline void clear_size() { size_.clear(); }
    inline void set_size(const EmbeddedProto::uint64& value) { size_ = value; }
    inline void set_size(const EmbeddedProto::uint64&& value) { size_ = value; }
    inline EmbeddedProto::uint64& mutable_size() { return size_; }
    inline const EmbeddedProto::uint64& get_size() const { return size_; }
    inline EmbeddedProto::uint64::FIELD_TYPE size() const { return size_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != code_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = code_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CODE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = obj_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OBJ), buffer, false);
      }

      if((0U != size_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = size_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIZE), buffer, false);
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
          case FieldNumber::CODE:
            return_value = code_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::OBJ:
            return_value = obj_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIZE:
            return_value = size_.deserialize_check_type(buffer, wire_type);
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
      clear_code();
      clear_obj();
      clear_size();

    }

    private:


      EmbeddedProto::uint64 code_ = 0U;
      ::EmbeddedProto::FieldBytes<obj_LENGTH> obj_;
      EmbeddedProto::uint64 size_ = 0U;

};

template<uint32_t value_LENGTH>
class hash_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    hash_result() = default;
    hash_result(const hash_result& rhs )
    {
      set_value(rhs.get_value());
    }

    hash_result(const hash_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~hash_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    hash_result& operator=(const hash_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    hash_result& operator=(const hash_result&& rhs) noexcept
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

template<uint32_t signature_data_LENGTH, 
uint32_t digest_LENGTH>
class recover_public_key_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    recover_public_key_arguments() = default;
    recover_public_key_arguments(const recover_public_key_arguments& rhs )
    {
      set_signature_data(rhs.get_signature_data());
      set_digest(rhs.get_digest());
    }

    recover_public_key_arguments(const recover_public_key_arguments&& rhs ) noexcept
    {
      set_signature_data(rhs.get_signature_data());
      set_digest(rhs.get_digest());
    }

    ~recover_public_key_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SIGNATURE_DATA = 1,
      DIGEST = 2
    };

    recover_public_key_arguments& operator=(const recover_public_key_arguments& rhs)
    {
      set_signature_data(rhs.get_signature_data());
      set_digest(rhs.get_digest());
      return *this;
    }

    recover_public_key_arguments& operator=(const recover_public_key_arguments&& rhs) noexcept
    {
      set_signature_data(rhs.get_signature_data());
      set_digest(rhs.get_digest());
      return *this;
    }

    inline void clear_signature_data() { signature_data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& mutable_signature_data() { return signature_data_; }
    inline void set_signature_data(const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& rhs) { signature_data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& get_signature_data() const { return signature_data_; }
    inline const uint8_t* signature_data() const { return signature_data_.get_const(); }

    inline void clear_digest() { digest_.clear(); }
    inline ::EmbeddedProto::FieldBytes<digest_LENGTH>& mutable_digest() { return digest_; }
    inline void set_digest(const ::EmbeddedProto::FieldBytes<digest_LENGTH>& rhs) { digest_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<digest_LENGTH>& get_digest() const { return digest_; }
    inline const uint8_t* digest() const { return digest_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE_DATA), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = digest_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DIGEST), buffer, false);
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
          case FieldNumber::SIGNATURE_DATA:
            return_value = signature_data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DIGEST:
            return_value = digest_.deserialize_check_type(buffer, wire_type);
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
      clear_signature_data();
      clear_digest();

    }

    private:


      ::EmbeddedProto::FieldBytes<signature_data_LENGTH> signature_data_;
      ::EmbeddedProto::FieldBytes<digest_LENGTH> digest_;

};

template<uint32_t value_LENGTH>
class recover_public_key_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    recover_public_key_result() = default;
    recover_public_key_result(const recover_public_key_result& rhs )
    {
      set_value(rhs.get_value());
    }

    recover_public_key_result(const recover_public_key_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~recover_public_key_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    recover_public_key_result& operator=(const recover_public_key_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    recover_public_key_result& operator=(const recover_public_key_result&& rhs) noexcept
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

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_active_LENGTH, 
uint32_t transaction_passive_LENGTH, 
uint32_t transaction_signature_data_LENGTH>
class get_transaction_payer_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_payer_arguments() = default;
    get_transaction_payer_arguments(const get_transaction_payer_arguments& rhs )
    {
      set_transaction(rhs.get_transaction());
    }

    get_transaction_payer_arguments(const get_transaction_payer_arguments&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
    }

    ~get_transaction_payer_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1
    };

    get_transaction_payer_arguments& operator=(const get_transaction_payer_arguments& rhs)
    {
      set_transaction(rhs.get_transaction());
      return *this;
    }

    get_transaction_payer_arguments& operator=(const get_transaction_payer_arguments&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
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
          case FieldNumber::TRANSACTION:
            return_value = transaction_.deserialize_check_type(buffer, wire_type);
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
      clear_transaction();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH> transaction_;

};

template<uint32_t value_LENGTH>
class get_transaction_payer_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_payer_result() = default;
    get_transaction_payer_result(const get_transaction_payer_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_transaction_payer_result(const get_transaction_payer_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_transaction_payer_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_transaction_payer_result& operator=(const get_transaction_payer_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_transaction_payer_result& operator=(const get_transaction_payer_result&& rhs) noexcept
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

template<uint32_t account_LENGTH>
class get_account_rc_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_rc_arguments() = default;
    get_account_rc_arguments(const get_account_rc_arguments& rhs )
    {
      set_account(rhs.get_account());
    }

    get_account_rc_arguments(const get_account_rc_arguments&& rhs ) noexcept
    {
      set_account(rhs.get_account());
    }

    ~get_account_rc_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1
    };

    get_account_rc_arguments& operator=(const get_account_rc_arguments& rhs)
    {
      set_account(rhs.get_account());
      return *this;
    }

    get_account_rc_arguments& operator=(const get_account_rc_arguments&& rhs) noexcept
    {
      set_account(rhs.get_account());
      return *this;
    }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
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
          case FieldNumber::ACCOUNT:
            return_value = account_.deserialize_check_type(buffer, wire_type);
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
      clear_account();

    }

    private:


      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;

};

class get_account_rc_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_rc_result() = default;
    get_account_rc_result(const get_account_rc_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_account_rc_result(const get_account_rc_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_account_rc_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_account_rc_result& operator=(const get_account_rc_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_account_rc_result& operator=(const get_account_rc_result&& rhs) noexcept
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

template<uint32_t account_LENGTH>
class consume_account_rc_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    consume_account_rc_arguments() = default;
    consume_account_rc_arguments(const consume_account_rc_arguments& rhs )
    {
      set_account(rhs.get_account());
      set_value(rhs.get_value());
    }

    consume_account_rc_arguments(const consume_account_rc_arguments&& rhs ) noexcept
    {
      set_account(rhs.get_account());
      set_value(rhs.get_value());
    }

    ~consume_account_rc_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1,
      VALUE = 2
    };

    consume_account_rc_arguments& operator=(const consume_account_rc_arguments& rhs)
    {
      set_account(rhs.get_account());
      set_value(rhs.get_value());
      return *this;
    }

    consume_account_rc_arguments& operator=(const consume_account_rc_arguments&& rhs) noexcept
    {
      set_account(rhs.get_account());
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }

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
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
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
          case FieldNumber::ACCOUNT:
            return_value = account_.deserialize_check_type(buffer, wire_type);
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
      clear_account();
      clear_value();

    }

    private:


      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;
      EmbeddedProto::uint64 value_ = 0U;

};

class consume_account_rc_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    consume_account_rc_result() = default;
    consume_account_rc_result(const consume_account_rc_result& rhs )
    {
      set_value(rhs.get_value());
    }

    consume_account_rc_result(const consume_account_rc_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~consume_account_rc_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    consume_account_rc_result& operator=(const consume_account_rc_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    consume_account_rc_result& operator=(const consume_account_rc_result&& rhs) noexcept
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

class get_resource_limits_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_limits_arguments() = default;
    get_resource_limits_arguments(const get_resource_limits_arguments& rhs )
    {
    }

    get_resource_limits_arguments(const get_resource_limits_arguments&& rhs ) noexcept
    {
    }

    ~get_resource_limits_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_resource_limits_arguments& operator=(const get_resource_limits_arguments& rhs)
    {
      return *this;
    }

    get_resource_limits_arguments& operator=(const get_resource_limits_arguments&& rhs) noexcept
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

class get_resource_limits_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_limits_result() = default;
    get_resource_limits_result(const get_resource_limits_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_resource_limits_result(const get_resource_limits_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_resource_limits_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_resource_limits_result& operator=(const get_resource_limits_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_resource_limits_result& operator=(const get_resource_limits_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const resource_limit_data& value) { value_ = value; }
    inline void set_value(const resource_limit_data&& value) { value_ = value; }
    inline resource_limit_data& mutable_value() { return value_; }
    inline const resource_limit_data& get_value() const { return value_; }
    inline const resource_limit_data& value() const { return value_; }


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


      resource_limit_data value_;

};

class consume_block_resources_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    consume_block_resources_arguments() = default;
    consume_block_resources_arguments(const consume_block_resources_arguments& rhs )
    {
      set_disk_storage_consumed(rhs.get_disk_storage_consumed());
      set_network_bandwidth_consumed(rhs.get_network_bandwidth_consumed());
      set_compute_bandwidth_consumed(rhs.get_compute_bandwidth_consumed());
    }

    consume_block_resources_arguments(const consume_block_resources_arguments&& rhs ) noexcept
    {
      set_disk_storage_consumed(rhs.get_disk_storage_consumed());
      set_network_bandwidth_consumed(rhs.get_network_bandwidth_consumed());
      set_compute_bandwidth_consumed(rhs.get_compute_bandwidth_consumed());
    }

    ~consume_block_resources_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DISK_STORAGE_CONSUMED = 1,
      NETWORK_BANDWIDTH_CONSUMED = 2,
      COMPUTE_BANDWIDTH_CONSUMED = 3
    };

    consume_block_resources_arguments& operator=(const consume_block_resources_arguments& rhs)
    {
      set_disk_storage_consumed(rhs.get_disk_storage_consumed());
      set_network_bandwidth_consumed(rhs.get_network_bandwidth_consumed());
      set_compute_bandwidth_consumed(rhs.get_compute_bandwidth_consumed());
      return *this;
    }

    consume_block_resources_arguments& operator=(const consume_block_resources_arguments&& rhs) noexcept
    {
      set_disk_storage_consumed(rhs.get_disk_storage_consumed());
      set_network_bandwidth_consumed(rhs.get_network_bandwidth_consumed());
      set_compute_bandwidth_consumed(rhs.get_compute_bandwidth_consumed());
      return *this;
    }

    inline void clear_disk_storage_consumed() { disk_storage_consumed_.clear(); }
    inline void set_disk_storage_consumed(const EmbeddedProto::uint64& value) { disk_storage_consumed_ = value; }
    inline void set_disk_storage_consumed(const EmbeddedProto::uint64&& value) { disk_storage_consumed_ = value; }
    inline EmbeddedProto::uint64& mutable_disk_storage_consumed() { return disk_storage_consumed_; }
    inline const EmbeddedProto::uint64& get_disk_storage_consumed() const { return disk_storage_consumed_; }
    inline EmbeddedProto::uint64::FIELD_TYPE disk_storage_consumed() const { return disk_storage_consumed_.get(); }

    inline void clear_network_bandwidth_consumed() { network_bandwidth_consumed_.clear(); }
    inline void set_network_bandwidth_consumed(const EmbeddedProto::uint64& value) { network_bandwidth_consumed_ = value; }
    inline void set_network_bandwidth_consumed(const EmbeddedProto::uint64&& value) { network_bandwidth_consumed_ = value; }
    inline EmbeddedProto::uint64& mutable_network_bandwidth_consumed() { return network_bandwidth_consumed_; }
    inline const EmbeddedProto::uint64& get_network_bandwidth_consumed() const { return network_bandwidth_consumed_; }
    inline EmbeddedProto::uint64::FIELD_TYPE network_bandwidth_consumed() const { return network_bandwidth_consumed_.get(); }

    inline void clear_compute_bandwidth_consumed() { compute_bandwidth_consumed_.clear(); }
    inline void set_compute_bandwidth_consumed(const EmbeddedProto::uint64& value) { compute_bandwidth_consumed_ = value; }
    inline void set_compute_bandwidth_consumed(const EmbeddedProto::uint64&& value) { compute_bandwidth_consumed_ = value; }
    inline EmbeddedProto::uint64& mutable_compute_bandwidth_consumed() { return compute_bandwidth_consumed_; }
    inline const EmbeddedProto::uint64& get_compute_bandwidth_consumed() const { return compute_bandwidth_consumed_; }
    inline EmbeddedProto::uint64::FIELD_TYPE compute_bandwidth_consumed() const { return compute_bandwidth_consumed_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != disk_storage_consumed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = disk_storage_consumed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DISK_STORAGE_CONSUMED), buffer, false);
      }

      if((0U != network_bandwidth_consumed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = network_bandwidth_consumed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NETWORK_BANDWIDTH_CONSUMED), buffer, false);
      }

      if((0U != compute_bandwidth_consumed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = compute_bandwidth_consumed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::COMPUTE_BANDWIDTH_CONSUMED), buffer, false);
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
          case FieldNumber::DISK_STORAGE_CONSUMED:
            return_value = disk_storage_consumed_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NETWORK_BANDWIDTH_CONSUMED:
            return_value = network_bandwidth_consumed_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::COMPUTE_BANDWIDTH_CONSUMED:
            return_value = compute_bandwidth_consumed_.deserialize_check_type(buffer, wire_type);
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
      clear_disk_storage_consumed();
      clear_network_bandwidth_consumed();
      clear_compute_bandwidth_consumed();

    }

    private:


      EmbeddedProto::uint64 disk_storage_consumed_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_consumed_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_consumed_ = 0U;

};

class consume_block_resources_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    consume_block_resources_result() = default;
    consume_block_resources_result(const consume_block_resources_result& rhs )
    {
      set_value(rhs.get_value());
    }

    consume_block_resources_result(const consume_block_resources_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~consume_block_resources_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    consume_block_resources_result& operator=(const consume_block_resources_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    consume_block_resources_result& operator=(const consume_block_resources_result&& rhs) noexcept
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

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_active_LENGTH, 
uint32_t transaction_passive_LENGTH, 
uint32_t transaction_signature_data_LENGTH>
class get_transaction_rc_limit_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_rc_limit_arguments() = default;
    get_transaction_rc_limit_arguments(const get_transaction_rc_limit_arguments& rhs )
    {
      set_transaction(rhs.get_transaction());
    }

    get_transaction_rc_limit_arguments(const get_transaction_rc_limit_arguments&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
    }

    ~get_transaction_rc_limit_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1
    };

    get_transaction_rc_limit_arguments& operator=(const get_transaction_rc_limit_arguments& rhs)
    {
      set_transaction(rhs.get_transaction());
      return *this;
    }

    get_transaction_rc_limit_arguments& operator=(const get_transaction_rc_limit_arguments&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
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
          case FieldNumber::TRANSACTION:
            return_value = transaction_.deserialize_check_type(buffer, wire_type);
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
      clear_transaction();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH> transaction_;

};

class get_transaction_rc_limit_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_rc_limit_result() = default;
    get_transaction_rc_limit_result(const get_transaction_rc_limit_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_transaction_rc_limit_result(const get_transaction_rc_limit_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_transaction_rc_limit_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_transaction_rc_limit_result& operator=(const get_transaction_rc_limit_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_transaction_rc_limit_result& operator=(const get_transaction_rc_limit_result&& rhs) noexcept
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

class get_last_irreversible_block_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_last_irreversible_block_arguments() = default;
    get_last_irreversible_block_arguments(const get_last_irreversible_block_arguments& rhs )
    {
    }

    get_last_irreversible_block_arguments(const get_last_irreversible_block_arguments&& rhs ) noexcept
    {
    }

    ~get_last_irreversible_block_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_last_irreversible_block_arguments& operator=(const get_last_irreversible_block_arguments& rhs)
    {
      return *this;
    }

    get_last_irreversible_block_arguments& operator=(const get_last_irreversible_block_arguments&& rhs) noexcept
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

class get_last_irreversible_block_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_last_irreversible_block_result() = default;
    get_last_irreversible_block_result(const get_last_irreversible_block_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_last_irreversible_block_result(const get_last_irreversible_block_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_last_irreversible_block_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_last_irreversible_block_result& operator=(const get_last_irreversible_block_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_last_irreversible_block_result& operator=(const get_last_irreversible_block_result&& rhs) noexcept
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

class get_caller_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_caller_arguments() = default;
    get_caller_arguments(const get_caller_arguments& rhs )
    {
    }

    get_caller_arguments(const get_caller_arguments&& rhs ) noexcept
    {
    }

    ~get_caller_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_caller_arguments& operator=(const get_caller_arguments& rhs)
    {
      return *this;
    }

    get_caller_arguments& operator=(const get_caller_arguments&& rhs) noexcept
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

template<uint32_t value_caller_LENGTH>
class get_caller_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_caller_result() = default;
    get_caller_result(const get_caller_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_caller_result(const get_caller_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_caller_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_caller_result& operator=(const get_caller_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_caller_result& operator=(const get_caller_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const caller_data<value_caller_LENGTH>& value) { value_ = value; }
    inline void set_value(const caller_data<value_caller_LENGTH>&& value) { value_ = value; }
    inline caller_data<value_caller_LENGTH>& mutable_value() { return value_; }
    inline const caller_data<value_caller_LENGTH>& get_value() const { return value_; }
    inline const caller_data<value_caller_LENGTH>& value() const { return value_; }


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


      caller_data<value_caller_LENGTH> value_;

};

template<uint32_t account_LENGTH>
class require_authority_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    require_authority_arguments() = default;
    require_authority_arguments(const require_authority_arguments& rhs )
    {
      set_account(rhs.get_account());
    }

    require_authority_arguments(const require_authority_arguments&& rhs ) noexcept
    {
      set_account(rhs.get_account());
    }

    ~require_authority_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1
    };

    require_authority_arguments& operator=(const require_authority_arguments& rhs)
    {
      set_account(rhs.get_account());
      return *this;
    }

    require_authority_arguments& operator=(const require_authority_arguments&& rhs) noexcept
    {
      set_account(rhs.get_account());
      return *this;
    }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
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
          case FieldNumber::ACCOUNT:
            return_value = account_.deserialize_check_type(buffer, wire_type);
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
      clear_account();

    }

    private:


      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;

};

class require_authority_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    require_authority_result() = default;
    require_authority_result(const require_authority_result& rhs )
    {
    }

    require_authority_result(const require_authority_result&& rhs ) noexcept
    {
    }

    ~require_authority_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    require_authority_result& operator=(const require_authority_result& rhs)
    {
      return *this;
    }

    require_authority_result& operator=(const require_authority_result&& rhs) noexcept
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

class get_transaction_signature_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_signature_arguments() = default;
    get_transaction_signature_arguments(const get_transaction_signature_arguments& rhs )
    {
    }

    get_transaction_signature_arguments(const get_transaction_signature_arguments&& rhs ) noexcept
    {
    }

    ~get_transaction_signature_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_transaction_signature_arguments& operator=(const get_transaction_signature_arguments& rhs)
    {
      return *this;
    }

    get_transaction_signature_arguments& operator=(const get_transaction_signature_arguments&& rhs) noexcept
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
class get_transaction_signature_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_signature_result() = default;
    get_transaction_signature_result(const get_transaction_signature_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_transaction_signature_result(const get_transaction_signature_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_transaction_signature_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_transaction_signature_result& operator=(const get_transaction_signature_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_transaction_signature_result& operator=(const get_transaction_signature_result&& rhs) noexcept
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

class get_contract_id_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_id_arguments() = default;
    get_contract_id_arguments(const get_contract_id_arguments& rhs )
    {
    }

    get_contract_id_arguments(const get_contract_id_arguments&& rhs ) noexcept
    {
    }

    ~get_contract_id_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_contract_id_arguments& operator=(const get_contract_id_arguments& rhs)
    {
      return *this;
    }

    get_contract_id_arguments& operator=(const get_contract_id_arguments&& rhs) noexcept
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
class get_contract_id_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_id_result() = default;
    get_contract_id_result(const get_contract_id_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_contract_id_result(const get_contract_id_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_contract_id_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_contract_id_result& operator=(const get_contract_id_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_contract_id_result& operator=(const get_contract_id_result&& rhs) noexcept
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

template<uint32_t account_LENGTH>
class get_account_nonce_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_nonce_arguments() = default;
    get_account_nonce_arguments(const get_account_nonce_arguments& rhs )
    {
      set_account(rhs.get_account());
    }

    get_account_nonce_arguments(const get_account_nonce_arguments&& rhs ) noexcept
    {
      set_account(rhs.get_account());
    }

    ~get_account_nonce_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1
    };

    get_account_nonce_arguments& operator=(const get_account_nonce_arguments& rhs)
    {
      set_account(rhs.get_account());
      return *this;
    }

    get_account_nonce_arguments& operator=(const get_account_nonce_arguments&& rhs) noexcept
    {
      set_account(rhs.get_account());
      return *this;
    }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
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
          case FieldNumber::ACCOUNT:
            return_value = account_.deserialize_check_type(buffer, wire_type);
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
      clear_account();

    }

    private:


      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;

};

class get_account_nonce_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_nonce_result() = default;
    get_account_nonce_result(const get_account_nonce_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_account_nonce_result(const get_account_nonce_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_account_nonce_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_account_nonce_result& operator=(const get_account_nonce_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_account_nonce_result& operator=(const get_account_nonce_result&& rhs) noexcept
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

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_CHAIN_H