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
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
    }

    market(const market&& rhs ) noexcept
    {
      set_resource_supply(rhs.get_resource_supply());
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
    }

    ~market() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESOURCE_SUPPLY = 1,
      BLOCK_BUDGET = 3,
      BLOCK_LIMIT = 4
    };

    market& operator=(const market& rhs)
    {
      set_resource_supply(rhs.get_resource_supply());
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
      return *this;
    }

    market& operator=(const market&& rhs) noexcept
    {
      set_resource_supply(rhs.get_resource_supply());
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
      clear_block_budget();
      clear_block_limit();

    }

    private:


      EmbeddedProto::uint64 resource_supply_ = 0U;
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

class market_parameters final: public ::EmbeddedProto::MessageInterface
{
  public:
    market_parameters() = default;
    market_parameters(const market_parameters& rhs )
    {
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
    }

    market_parameters(const market_parameters&& rhs ) noexcept
    {
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
    }

    ~market_parameters() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK_BUDGET = 1,
      BLOCK_LIMIT = 2
    };

    market_parameters& operator=(const market_parameters& rhs)
    {
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
      return *this;
    }

    market_parameters& operator=(const market_parameters&& rhs) noexcept
    {
      set_block_budget(rhs.get_block_budget());
      set_block_limit(rhs.get_block_limit());
      return *this;
    }

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
      clear_block_budget();
      clear_block_limit();

    }

    private:


      EmbeddedProto::uint64 block_budget_ = 0U;
      EmbeddedProto::uint64 block_limit_ = 0U;

};

class resource_parameters final: public ::EmbeddedProto::MessageInterface
{
  public:
    resource_parameters() = default;
    resource_parameters(const resource_parameters& rhs )
    {
      set_block_interval_ms(rhs.get_block_interval_ms());
      set_rc_regen_ms(rhs.get_rc_regen_ms());
      set_decay_constant(rhs.get_decay_constant());
      set_one_minus_decay_constant(rhs.get_one_minus_decay_constant());
      set_print_rate_premium(rhs.get_print_rate_premium());
      set_print_rate_precision(rhs.get_print_rate_precision());
    }

    resource_parameters(const resource_parameters&& rhs ) noexcept
    {
      set_block_interval_ms(rhs.get_block_interval_ms());
      set_rc_regen_ms(rhs.get_rc_regen_ms());
      set_decay_constant(rhs.get_decay_constant());
      set_one_minus_decay_constant(rhs.get_one_minus_decay_constant());
      set_print_rate_premium(rhs.get_print_rate_premium());
      set_print_rate_precision(rhs.get_print_rate_precision());
    }

    ~resource_parameters() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK_INTERVAL_MS = 1,
      RC_REGEN_MS = 2,
      DECAY_CONSTANT = 3,
      ONE_MINUS_DECAY_CONSTANT = 4,
      PRINT_RATE_PREMIUM = 5,
      PRINT_RATE_PRECISION = 6
    };

    resource_parameters& operator=(const resource_parameters& rhs)
    {
      set_block_interval_ms(rhs.get_block_interval_ms());
      set_rc_regen_ms(rhs.get_rc_regen_ms());
      set_decay_constant(rhs.get_decay_constant());
      set_one_minus_decay_constant(rhs.get_one_minus_decay_constant());
      set_print_rate_premium(rhs.get_print_rate_premium());
      set_print_rate_precision(rhs.get_print_rate_precision());
      return *this;
    }

    resource_parameters& operator=(const resource_parameters&& rhs) noexcept
    {
      set_block_interval_ms(rhs.get_block_interval_ms());
      set_rc_regen_ms(rhs.get_rc_regen_ms());
      set_decay_constant(rhs.get_decay_constant());
      set_one_minus_decay_constant(rhs.get_one_minus_decay_constant());
      set_print_rate_premium(rhs.get_print_rate_premium());
      set_print_rate_precision(rhs.get_print_rate_precision());
      return *this;
    }

    inline void clear_block_interval_ms() { block_interval_ms_.clear(); }
    inline void set_block_interval_ms(const EmbeddedProto::uint64& value) { block_interval_ms_ = value; }
    inline void set_block_interval_ms(const EmbeddedProto::uint64&& value) { block_interval_ms_ = value; }
    inline EmbeddedProto::uint64& mutable_block_interval_ms() { return block_interval_ms_; }
    inline const EmbeddedProto::uint64& get_block_interval_ms() const { return block_interval_ms_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_interval_ms() const { return block_interval_ms_.get(); }

    inline void clear_rc_regen_ms() { rc_regen_ms_.clear(); }
    inline void set_rc_regen_ms(const EmbeddedProto::uint64& value) { rc_regen_ms_ = value; }
    inline void set_rc_regen_ms(const EmbeddedProto::uint64&& value) { rc_regen_ms_ = value; }
    inline EmbeddedProto::uint64& mutable_rc_regen_ms() { return rc_regen_ms_; }
    inline const EmbeddedProto::uint64& get_rc_regen_ms() const { return rc_regen_ms_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc_regen_ms() const { return rc_regen_ms_.get(); }

    inline void clear_decay_constant() { decay_constant_.clear(); }
    inline void set_decay_constant(const EmbeddedProto::uint64& value) { decay_constant_ = value; }
    inline void set_decay_constant(const EmbeddedProto::uint64&& value) { decay_constant_ = value; }
    inline EmbeddedProto::uint64& mutable_decay_constant() { return decay_constant_; }
    inline const EmbeddedProto::uint64& get_decay_constant() const { return decay_constant_; }
    inline EmbeddedProto::uint64::FIELD_TYPE decay_constant() const { return decay_constant_.get(); }

    inline void clear_one_minus_decay_constant() { one_minus_decay_constant_.clear(); }
    inline void set_one_minus_decay_constant(const EmbeddedProto::uint64& value) { one_minus_decay_constant_ = value; }
    inline void set_one_minus_decay_constant(const EmbeddedProto::uint64&& value) { one_minus_decay_constant_ = value; }
    inline EmbeddedProto::uint64& mutable_one_minus_decay_constant() { return one_minus_decay_constant_; }
    inline const EmbeddedProto::uint64& get_one_minus_decay_constant() const { return one_minus_decay_constant_; }
    inline EmbeddedProto::uint64::FIELD_TYPE one_minus_decay_constant() const { return one_minus_decay_constant_.get(); }

    inline void clear_print_rate_premium() { print_rate_premium_.clear(); }
    inline void set_print_rate_premium(const EmbeddedProto::uint64& value) { print_rate_premium_ = value; }
    inline void set_print_rate_premium(const EmbeddedProto::uint64&& value) { print_rate_premium_ = value; }
    inline EmbeddedProto::uint64& mutable_print_rate_premium() { return print_rate_premium_; }
    inline const EmbeddedProto::uint64& get_print_rate_premium() const { return print_rate_premium_; }
    inline EmbeddedProto::uint64::FIELD_TYPE print_rate_premium() const { return print_rate_premium_.get(); }

    inline void clear_print_rate_precision() { print_rate_precision_.clear(); }
    inline void set_print_rate_precision(const EmbeddedProto::uint64& value) { print_rate_precision_ = value; }
    inline void set_print_rate_precision(const EmbeddedProto::uint64&& value) { print_rate_precision_ = value; }
    inline EmbeddedProto::uint64& mutable_print_rate_precision() { return print_rate_precision_; }
    inline const EmbeddedProto::uint64& get_print_rate_precision() const { return print_rate_precision_; }
    inline EmbeddedProto::uint64::FIELD_TYPE print_rate_precision() const { return print_rate_precision_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != block_interval_ms_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_interval_ms_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_INTERVAL_MS), buffer, false);
      }

      if((0U != rc_regen_ms_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_regen_ms_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC_REGEN_MS), buffer, false);
      }

      if((0U != decay_constant_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = decay_constant_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DECAY_CONSTANT), buffer, false);
      }

      if((0U != one_minus_decay_constant_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = one_minus_decay_constant_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ONE_MINUS_DECAY_CONSTANT), buffer, false);
      }

      if((0U != print_rate_premium_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = print_rate_premium_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PRINT_RATE_PREMIUM), buffer, false);
      }

      if((0U != print_rate_precision_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = print_rate_precision_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PRINT_RATE_PRECISION), buffer, false);
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
          case FieldNumber::BLOCK_INTERVAL_MS:
            return_value = block_interval_ms_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RC_REGEN_MS:
            return_value = rc_regen_ms_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DECAY_CONSTANT:
            return_value = decay_constant_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ONE_MINUS_DECAY_CONSTANT:
            return_value = one_minus_decay_constant_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PRINT_RATE_PREMIUM:
            return_value = print_rate_premium_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PRINT_RATE_PRECISION:
            return_value = print_rate_precision_.deserialize_check_type(buffer, wire_type);
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
      clear_block_interval_ms();
      clear_rc_regen_ms();
      clear_decay_constant();
      clear_one_minus_decay_constant();
      clear_print_rate_premium();
      clear_print_rate_precision();

    }

    private:


      EmbeddedProto::uint64 block_interval_ms_ = 0U;
      EmbeddedProto::uint64 rc_regen_ms_ = 0U;
      EmbeddedProto::uint64 decay_constant_ = 0U;
      EmbeddedProto::uint64 one_minus_decay_constant_ = 0U;
      EmbeddedProto::uint64 print_rate_premium_ = 0U;
      EmbeddedProto::uint64 print_rate_precision_ = 0U;

};

class set_resource_markets_parameters_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_resource_markets_parameters_arguments() = default;
    set_resource_markets_parameters_arguments(const set_resource_markets_parameters_arguments& rhs )
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
    }

    set_resource_markets_parameters_arguments(const set_resource_markets_parameters_arguments&& rhs ) noexcept
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
    }

    ~set_resource_markets_parameters_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DISK_STORAGE = 1,
      NETWORK_BANDWIDTH = 2,
      COMPUTE_BANDWIDTH = 3
    };

    set_resource_markets_parameters_arguments& operator=(const set_resource_markets_parameters_arguments& rhs)
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
      return *this;
    }

    set_resource_markets_parameters_arguments& operator=(const set_resource_markets_parameters_arguments&& rhs) noexcept
    {
      set_disk_storage(rhs.get_disk_storage());
      set_network_bandwidth(rhs.get_network_bandwidth());
      set_compute_bandwidth(rhs.get_compute_bandwidth());
      return *this;
    }

    inline void clear_disk_storage() { disk_storage_.clear(); }
    inline void set_disk_storage(const market_parameters& value) { disk_storage_ = value; }
    inline void set_disk_storage(const market_parameters&& value) { disk_storage_ = value; }
    inline market_parameters& mutable_disk_storage() { return disk_storage_; }
    inline const market_parameters& get_disk_storage() const { return disk_storage_; }
    inline const market_parameters& disk_storage() const { return disk_storage_; }

    inline void clear_network_bandwidth() { network_bandwidth_.clear(); }
    inline void set_network_bandwidth(const market_parameters& value) { network_bandwidth_ = value; }
    inline void set_network_bandwidth(const market_parameters&& value) { network_bandwidth_ = value; }
    inline market_parameters& mutable_network_bandwidth() { return network_bandwidth_; }
    inline const market_parameters& get_network_bandwidth() const { return network_bandwidth_; }
    inline const market_parameters& network_bandwidth() const { return network_bandwidth_; }

    inline void clear_compute_bandwidth() { compute_bandwidth_.clear(); }
    inline void set_compute_bandwidth(const market_parameters& value) { compute_bandwidth_ = value; }
    inline void set_compute_bandwidth(const market_parameters&& value) { compute_bandwidth_ = value; }
    inline market_parameters& mutable_compute_bandwidth() { return compute_bandwidth_; }
    inline const market_parameters& get_compute_bandwidth() const { return compute_bandwidth_; }
    inline const market_parameters& compute_bandwidth() const { return compute_bandwidth_; }


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


      market_parameters disk_storage_;
      market_parameters network_bandwidth_;
      market_parameters compute_bandwidth_;

};

class set_resource_markets_parameters_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_resource_markets_parameters_result() = default;
    set_resource_markets_parameters_result(const set_resource_markets_parameters_result& rhs )
    {
    }

    set_resource_markets_parameters_result(const set_resource_markets_parameters_result&& rhs ) noexcept
    {
    }

    ~set_resource_markets_parameters_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    set_resource_markets_parameters_result& operator=(const set_resource_markets_parameters_result& rhs)
    {
      return *this;
    }

    set_resource_markets_parameters_result& operator=(const set_resource_markets_parameters_result&& rhs) noexcept
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

class set_resource_parameters_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_resource_parameters_arguments() = default;
    set_resource_parameters_arguments(const set_resource_parameters_arguments& rhs )
    {
      set_params(rhs.get_params());
    }

    set_resource_parameters_arguments(const set_resource_parameters_arguments&& rhs ) noexcept
    {
      set_params(rhs.get_params());
    }

    ~set_resource_parameters_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PARAMS = 1
    };

    set_resource_parameters_arguments& operator=(const set_resource_parameters_arguments& rhs)
    {
      set_params(rhs.get_params());
      return *this;
    }

    set_resource_parameters_arguments& operator=(const set_resource_parameters_arguments&& rhs) noexcept
    {
      set_params(rhs.get_params());
      return *this;
    }

    inline void clear_params() { params_.clear(); }
    inline void set_params(const resource_parameters& value) { params_ = value; }
    inline void set_params(const resource_parameters&& value) { params_ = value; }
    inline resource_parameters& mutable_params() { return params_; }
    inline const resource_parameters& get_params() const { return params_; }
    inline const resource_parameters& params() const { return params_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = params_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PARAMS), buffer, false);
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
          case FieldNumber::PARAMS:
            return_value = params_.deserialize_check_type(buffer, wire_type);
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
      clear_params();

    }

    private:


      resource_parameters params_;

};

class set_resource_parameters_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_resource_parameters_result() = default;
    set_resource_parameters_result(const set_resource_parameters_result& rhs )
    {
    }

    set_resource_parameters_result(const set_resource_parameters_result&& rhs ) noexcept
    {
    }

    ~set_resource_parameters_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    set_resource_parameters_result& operator=(const set_resource_parameters_result& rhs)
    {
      return *this;
    }

    set_resource_parameters_result& operator=(const set_resource_parameters_result&& rhs) noexcept
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

class get_resource_parameters_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_parameters_arguments() = default;
    get_resource_parameters_arguments(const get_resource_parameters_arguments& rhs )
    {
    }

    get_resource_parameters_arguments(const get_resource_parameters_arguments&& rhs ) noexcept
    {
    }

    ~get_resource_parameters_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_resource_parameters_arguments& operator=(const get_resource_parameters_arguments& rhs)
    {
      return *this;
    }

    get_resource_parameters_arguments& operator=(const get_resource_parameters_arguments&& rhs) noexcept
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

class get_resource_parameters_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_parameters_result() = default;
    get_resource_parameters_result(const get_resource_parameters_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_resource_parameters_result(const get_resource_parameters_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_resource_parameters_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_resource_parameters_result& operator=(const get_resource_parameters_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_resource_parameters_result& operator=(const get_resource_parameters_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const resource_parameters& value) { value_ = value; }
    inline void set_value(const resource_parameters&& value) { value_ = value; }
    inline resource_parameters& mutable_value() { return value_; }
    inline const resource_parameters& get_value() const { return value_; }
    inline const resource_parameters& value() const { return value_; }


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


      resource_parameters value_;

};

} // End of namespace resources
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_RESOURCES_RESOURCES_H