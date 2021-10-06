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
#ifndef KOINOS_CONTRACTS_RESOURCES_RESOURCES_H
#define KOINOS_CONTRACTS_RESOURCES_RESOURCES_H

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
namespace contracts {
namespace resources {

class market final: public ::EmbeddedProto::MessageInterface
{
  public:
    market() = default;
    market(const market& rhs )
    {
      set_resource_supply(rhs.get_resource_supply());
      set_rc_reserve(rhs.get_rc_reserve());
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
    }

    market(const market&& rhs ) noexcept
    {
      set_resource_supply(rhs.get_resource_supply());
      set_rc_reserve(rhs.get_rc_reserve());
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
    }

    ~market() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESOURCE_SUPPLY = 1,
      RC_RESERVE = 2,
      BLOCK_BUDGET = 3,
      BLOCK_LIMIT = 4
    };

    market& operator=(const market& rhs)
    {
      set_resource_supply(rhs.get_resource_supply());
      set_rc_reserve(rhs.get_rc_reserve());
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
      return *this;
    }

    market& operator=(const market&& rhs) noexcept
    {
      set_resource_supply(rhs.get_resource_supply());
      set_rc_reserve(rhs.get_rc_reserve());
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
      return *this;
    }

    inline void clear_resource_supply() { resource_supply_.clear(); }
    inline void set_resource_supply(const EmbeddedProto::uint64& value) { resource_supply_ = value; }
    inline void set_resource_supply(const EmbeddedProto::uint64&& value) { resource_supply_ = value; }
    inline EmbeddedProto::uint64& mutable_resource_supply() { return resource_supply_; }
    inline const EmbeddedProto::uint64& get_resource_supply() const { return resource_supply_; }
    inline EmbeddedProto::uint64::FIELD_TYPE resource_supply() const { return resource_supply_.get(); }

    inline void clear_rc_reserve() { rc_reserve_.clear(); }
    inline void set_rc_reserve(const EmbeddedProto::uint64& value) { rc_reserve_ = value; }
    inline void set_rc_reserve(const EmbeddedProto::uint64&& value) { rc_reserve_ = value; }
    inline EmbeddedProto::uint64& mutable_rc_reserve() { return rc_reserve_; }
    inline const EmbeddedProto::uint64& get_rc_reserve() const { return rc_reserve_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc_reserve() const { return rc_reserve_.get(); }

    inline void clear_block_budget() { block_budget_.clear(); }
    inline void set_block_budget(const EmbeddedProto::uint64& value) { block_budget_ = value; }
    inline void set_block_budget(const EmbeddedProto::uint64&& value) { block_budget_ = value; }
    inline EmbeddedProto::uint64& mutable_block_budget() { return block_budget_; }
    inline const EmbeddedProto::uint64& get_block_budget() const { return block_budget_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_budget() const { return block_budget_.get(); }

    inline void clear_block_limit() { block_limit_.clear(); }
    inline void set_block_limit(const EmbeddedProto::uint64& value) { block_limit_ = value; }
    inline void set_block_limit(const EmbeddedProto::uint64&& value) { block_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_block_limit() { return block_limit_; }
    inline const EmbeddedProto::uint64& get_block_limit() const { return block_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_limit() const { return block_limit_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != resource_supply_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = resource_supply_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RESOURCE_SUPPLY), buffer, false);
      }

      if((0U != rc_reserve_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_reserve_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC_RESERVE), buffer, false);
      }

      if((0U != block_budget_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_budget_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_BUDGET), buffer, false);
      }

      if((0U != block_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_LIMIT), buffer, false);
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
          case FieldNumber::RESOURCE_SUPPLY:
            return_value = resource_supply_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RC_RESERVE:
            return_value = rc_reserve_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BLOCK_BUDGET:
            return_value = block_budget_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BLOCK_LIMIT:
            return_value = block_limit_.deserialize_check_type(buffer, wire_type);
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
      clear_resource_supply();
      clear_rc_reserve();
      clear_block_budget();
      clear_block_limit();

    }

    private:


      EmbeddedProto::uint64 resource_supply_ = 0U;
      EmbeddedProto::uint64 rc_reserve_ = 0U;
      EmbeddedProto::uint64 block_budget_ = 0U;
      EmbeddedProto::uint64 block_limit_ = 0U;

};

class resource_markets final: public ::EmbeddedProto::MessageInterface
{
  public:
    resource_markets() = default;
    resource_markets(const resource_markets& rhs )
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
    }

    resource_markets(const resource_markets&& rhs ) noexcept
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
    }

    ~resource_markets() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DISK_STORAGE = 1,
      NETWORK_BANDWIDTH = 2,
      COMPUTE_BANDWIDTH = 3
    };

    resource_markets& operator=(const resource_markets& rhs)
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
      return *this;
    }

    resource_markets& operator=(const resource_markets&& rhs) noexcept
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
      return *this;
    }

    inline void clear_disk_storage() { disk_storage_.clear(); }
    inline void set_disk_storage(const market& value) { disk_storage_ = value; }
    inline void set_disk_storage(const market&& value) { disk_storage_ = value; }
    inline market& mutable_disk_storage() { return disk_storage_; }
    inline const market& get_disk_storage() const { return disk_storage_; }
    inline const market& disk_storage() const { return disk_storage_; }

    inline void clear_network_bandwidth() { network_bandwidth_.clear(); }
    inline void set_network_bandwidth(const market& value) { network_bandwidth_ = value; }
    inline void set_network_bandwidth(const market&& value) { network_bandwidth_ = value; }
    inline market& mutable_network_bandwidth() { return network_bandwidth_; }
    inline const market& get_network_bandwidth() const { return network_bandwidth_; }
    inline const market& network_bandwidth() const { return network_bandwidth_; }

    inline void clear_compute_bandwidth() { compute_bandwidth_.clear(); }
    inline void set_compute_bandwidth(const market& value) { compute_bandwidth_ = value; }
    inline void set_compute_bandwidth(const market&& value) { compute_bandwidth_ = value; }
    inline market& mutable_compute_bandwidth() { return compute_bandwidth_; }
    inline const market& get_compute_bandwidth() const { return compute_bandwidth_; }
    inline const market& compute_bandwidth() const { return compute_bandwidth_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = disk_storage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DISK_STORAGE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = network_bandwidth_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NETWORK_BANDWIDTH), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = compute_bandwidth_.serialize_with_id(static_cast<uint32_t>(FieldNumber::COMPUTE_BANDWIDTH), buffer, false);
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
          case FieldNumber::DISK_STORAGE:
            return_value = disk_storage_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NETWORK_BANDWIDTH:
            return_value = network_bandwidth_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::COMPUTE_BANDWIDTH:
            return_value = compute_bandwidth_.deserialize_check_type(buffer, wire_type);
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
      clear_disk_storage();
      clear_network_bandwidth();
      clear_compute_bandwidth();

    }

    private:


      market disk_storage_;
      market network_bandwidth_;
      market compute_bandwidth_;

};

class get_resource_markets_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_markets_arguments() = default;
    get_resource_markets_arguments(const get_resource_markets_arguments& rhs )
    {
    }

    get_resource_markets_arguments(const get_resource_markets_arguments&& rhs ) noexcept
    {
    }

    ~get_resource_markets_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_resource_markets_arguments& operator=(const get_resource_markets_arguments& rhs)
    {
      return *this;
    }

    get_resource_markets_arguments& operator=(const get_resource_markets_arguments&& rhs) noexcept
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

class get_resource_markets_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_markets_result() = default;
    get_resource_markets_result(const get_resource_markets_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_resource_markets_result(const get_resource_markets_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_resource_markets_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_resource_markets_result& operator=(const get_resource_markets_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_resource_markets_result& operator=(const get_resource_markets_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const resource_markets& value) { value_ = value; }
    inline void set_value(const resource_markets&& value) { value_ = value; }
    inline resource_markets& mutable_value() { return value_; }
    inline const resource_markets& get_value() const { return value_; }
    inline const resource_markets& value() const { return value_; }


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


      resource_markets value_;

};

} // End of namespace resources
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_RESOURCES_RESOURCES_H