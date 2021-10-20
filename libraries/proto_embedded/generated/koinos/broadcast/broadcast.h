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
#ifndef KOINOS_BROADCAST_BROADCAST_H
#define KOINOS_BROADCAST_BROADCAST_H

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
#include <koinos/common.h>
#include <koinos/options.h>
#include <koinos/protocol/protocol.h>

namespace koinos {
namespace broadcast {

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_active_LENGTH, 
uint32_t transaction_passive_LENGTH, 
uint32_t transaction_signature_data_LENGTH, 
uint32_t payer_LENGTH>
class transaction_accepted final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_accepted() = default;
    transaction_accepted(const transaction_accepted& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
    }

    transaction_accepted(const transaction_accepted&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
    }

    ~transaction_accepted() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      PAYER = 2,
      MAX_PAYER_RC = 3,
      RC_LIMIT = 4,
      HEIGHT = 5,
      DISK_STORAGE_USED = 6,
      NETWORK_BANDWIDTH_USED = 7,
      COMPUTE_BANDWIDTH_USED = 8
    };

    transaction_accepted& operator=(const transaction_accepted& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      return *this;
    }

    transaction_accepted& operator=(const transaction_accepted&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }

    inline void clear_payer() { payer_.clear(); }
    inline ::EmbeddedProto::FieldBytes<payer_LENGTH>& mutable_payer() { return payer_; }
    inline void set_payer(const ::EmbeddedProto::FieldBytes<payer_LENGTH>& rhs) { payer_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<payer_LENGTH>& get_payer() const { return payer_; }
    inline const uint8_t* payer() const { return payer_.get_const(); }

    inline void clear_max_payer_rc() { max_payer_rc_.clear(); }
    inline void set_max_payer_rc(const EmbeddedProto::uint64& value) { max_payer_rc_ = value; }
    inline void set_max_payer_rc(const EmbeddedProto::uint64&& value) { max_payer_rc_ = value; }
    inline EmbeddedProto::uint64& mutable_max_payer_rc() { return max_payer_rc_; }
    inline const EmbeddedProto::uint64& get_max_payer_rc() const { return max_payer_rc_; }
    inline EmbeddedProto::uint64::FIELD_TYPE max_payer_rc() const { return max_payer_rc_.get(); }

    inline void clear_rc_limit() { rc_limit_.clear(); }
    inline void set_rc_limit(const EmbeddedProto::uint64& value) { rc_limit_ = value; }
    inline void set_rc_limit(const EmbeddedProto::uint64&& value) { rc_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_rc_limit() { return rc_limit_; }
    inline const EmbeddedProto::uint64& get_rc_limit() const { return rc_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc_limit() const { return rc_limit_.get(); }

    inline void clear_height() { height_.clear(); }
    inline void set_height(const EmbeddedProto::uint64& value) { height_ = value; }
    inline void set_height(const EmbeddedProto::uint64&& value) { height_ = value; }
    inline EmbeddedProto::uint64& mutable_height() { return height_; }
    inline const EmbeddedProto::uint64& get_height() const { return height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE height() const { return height_.get(); }

    inline void clear_disk_storage_used() { disk_storage_used_.clear(); }
    inline void set_disk_storage_used(const EmbeddedProto::uint64& value) { disk_storage_used_ = value; }
    inline void set_disk_storage_used(const EmbeddedProto::uint64&& value) { disk_storage_used_ = value; }
    inline EmbeddedProto::uint64& mutable_disk_storage_used() { return disk_storage_used_; }
    inline const EmbeddedProto::uint64& get_disk_storage_used() const { return disk_storage_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE disk_storage_used() const { return disk_storage_used_.get(); }

    inline void clear_network_bandwidth_used() { network_bandwidth_used_.clear(); }
    inline void set_network_bandwidth_used(const EmbeddedProto::uint64& value) { network_bandwidth_used_ = value; }
    inline void set_network_bandwidth_used(const EmbeddedProto::uint64&& value) { network_bandwidth_used_ = value; }
    inline EmbeddedProto::uint64& mutable_network_bandwidth_used() { return network_bandwidth_used_; }
    inline const EmbeddedProto::uint64& get_network_bandwidth_used() const { return network_bandwidth_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE network_bandwidth_used() const { return network_bandwidth_used_.get(); }

    inline void clear_compute_bandwidth_used() { compute_bandwidth_used_.clear(); }
    inline void set_compute_bandwidth_used(const EmbeddedProto::uint64& value) { compute_bandwidth_used_ = value; }
    inline void set_compute_bandwidth_used(const EmbeddedProto::uint64&& value) { compute_bandwidth_used_ = value; }
    inline EmbeddedProto::uint64& mutable_compute_bandwidth_used() { return compute_bandwidth_used_; }
    inline const EmbeddedProto::uint64& get_compute_bandwidth_used() const { return compute_bandwidth_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE compute_bandwidth_used() const { return compute_bandwidth_used_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = payer_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PAYER), buffer, false);
      }

      if((0U != max_payer_rc_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = max_payer_rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAX_PAYER_RC), buffer, false);
      }

      if((0U != rc_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC_LIMIT), buffer, false);
      }

      if((0U != height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEIGHT), buffer, false);
      }

      if((0U != disk_storage_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = disk_storage_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DISK_STORAGE_USED), buffer, false);
      }

      if((0U != network_bandwidth_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = network_bandwidth_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NETWORK_BANDWIDTH_USED), buffer, false);
      }

      if((0U != compute_bandwidth_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = compute_bandwidth_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::COMPUTE_BANDWIDTH_USED), buffer, false);
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

          case FieldNumber::PAYER:
            return_value = payer_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MAX_PAYER_RC:
            return_value = max_payer_rc_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RC_LIMIT:
            return_value = rc_limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HEIGHT:
            return_value = height_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DISK_STORAGE_USED:
            return_value = disk_storage_used_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NETWORK_BANDWIDTH_USED:
            return_value = network_bandwidth_used_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::COMPUTE_BANDWIDTH_USED:
            return_value = compute_bandwidth_used_.deserialize_check_type(buffer, wire_type);
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
      clear_payer();
      clear_max_payer_rc();
      clear_rc_limit();
      clear_height();
      clear_disk_storage_used();
      clear_network_bandwidth_used();
      clear_compute_bandwidth_used();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH> transaction_;
      ::EmbeddedProto::FieldBytes<payer_LENGTH> payer_;
      EmbeddedProto::uint64 max_payer_rc_ = 0U;
      EmbeddedProto::uint64 rc_limit_ = 0U;
      EmbeddedProto::uint64 height_ = 0U;
      EmbeddedProto::uint64 disk_storage_used_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_used_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_used_ = 0U;

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
class block_accepted final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_accepted() = default;
    block_accepted(const block_accepted& rhs )
    {
      set_block(rhs.get_block());
    }

    block_accepted(const block_accepted&& rhs ) noexcept
    {
      set_block(rhs.get_block());
    }

    ~block_accepted() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK = 1
    };

    block_accepted& operator=(const block_accepted& rhs)
    {
      set_block(rhs.get_block());
      return *this;
    }

    block_accepted& operator=(const block_accepted&& rhs) noexcept
    {
      set_block(rhs.get_block());
      return *this;
    }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& block() const { return block_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK), buffer, false);
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

    }

    private:


      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH> block_;

};

template<uint32_t topology_id_LENGTH, 
uint32_t topology_previous_LENGTH>
class block_irreversible final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_irreversible() = default;
    block_irreversible(const block_irreversible& rhs )
    {
      set_topology(rhs.get_topology());
    }

    block_irreversible(const block_irreversible&& rhs ) noexcept
    {
      set_topology(rhs.get_topology());
    }

    ~block_irreversible() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TOPOLOGY = 1
    };

    block_irreversible& operator=(const block_irreversible& rhs)
    {
      set_topology(rhs.get_topology());
      return *this;
    }

    block_irreversible& operator=(const block_irreversible&& rhs) noexcept
    {
      set_topology(rhs.get_topology());
      return *this;
    }

    inline void clear_topology() { topology_.clear(); }
    inline void set_topology(const block_topology<topology_id_LENGTH, topology_previous_LENGTH>& value) { topology_ = value; }
    inline void set_topology(const block_topology<topology_id_LENGTH, topology_previous_LENGTH>&& value) { topology_ = value; }
    inline block_topology<topology_id_LENGTH, topology_previous_LENGTH>& mutable_topology() { return topology_; }
    inline const block_topology<topology_id_LENGTH, topology_previous_LENGTH>& get_topology() const { return topology_; }
    inline const block_topology<topology_id_LENGTH, topology_previous_LENGTH>& topology() const { return topology_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = topology_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TOPOLOGY), buffer, false);
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
          case FieldNumber::TOPOLOGY:
            return_value = topology_.deserialize_check_type(buffer, wire_type);
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
      clear_topology();

    }

    private:


      block_topology<topology_id_LENGTH, topology_previous_LENGTH> topology_;

};

template<uint32_t last_irreversible_block_id_LENGTH, 
uint32_t last_irreversible_block_previous_LENGTH, 
uint32_t heads_REP_LENGTH, 
uint32_t heads_id_LENGTH, 
uint32_t heads_previous_LENGTH>
class fork_heads final: public ::EmbeddedProto::MessageInterface
{
  public:
    fork_heads() = default;
    fork_heads(const fork_heads& rhs )
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_heads(rhs.get_heads());
    }

    fork_heads(const fork_heads&& rhs ) noexcept
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_heads(rhs.get_heads());
    }

    ~fork_heads() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      LAST_IRREVERSIBLE_BLOCK = 1,
      HEADS = 2
    };

    fork_heads& operator=(const fork_heads& rhs)
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_heads(rhs.get_heads());
      return *this;
    }

    fork_heads& operator=(const fork_heads&& rhs) noexcept
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_heads(rhs.get_heads());
      return *this;
    }

    inline void clear_last_irreversible_block() { last_irreversible_block_.clear(); }
    inline void set_last_irreversible_block(const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& value) { last_irreversible_block_ = value; }
    inline void set_last_irreversible_block(const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>&& value) { last_irreversible_block_ = value; }
    inline block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& mutable_last_irreversible_block() { return last_irreversible_block_; }
    inline const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& get_last_irreversible_block() const { return last_irreversible_block_; }
    inline const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& last_irreversible_block() const { return last_irreversible_block_; }

    inline const block_topology<heads_id_LENGTH, heads_previous_LENGTH>& heads(uint32_t index) const { return heads_[index]; }
    inline void clear_heads() { heads_.clear(); }
    inline void set_heads(uint32_t index, const block_topology<heads_id_LENGTH, heads_previous_LENGTH>& value) { heads_.set(index, value); }
    inline void set_heads(uint32_t index, const block_topology<heads_id_LENGTH, heads_previous_LENGTH>&& value) { heads_.set(index, value); }
    inline void set_heads(const ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<heads_id_LENGTH, heads_previous_LENGTH>, heads_REP_LENGTH>& values) { heads_ = values; }
    inline void add_heads(const block_topology<heads_id_LENGTH, heads_previous_LENGTH>& value) { heads_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<heads_id_LENGTH, heads_previous_LENGTH>, heads_REP_LENGTH>& mutable_heads() { return heads_; }
    inline block_topology<heads_id_LENGTH, heads_previous_LENGTH>& mutable_heads(uint32_t index) { return heads_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<heads_id_LENGTH, heads_previous_LENGTH>, heads_REP_LENGTH>& get_heads() const { return heads_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<heads_id_LENGTH, heads_previous_LENGTH>, heads_REP_LENGTH>& heads() const { return heads_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = last_irreversible_block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_IRREVERSIBLE_BLOCK), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = heads_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEADS), buffer, false);
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
          case FieldNumber::LAST_IRREVERSIBLE_BLOCK:
            return_value = last_irreversible_block_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HEADS:
            return_value = heads_.deserialize_check_type(buffer, wire_type);
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
      clear_last_irreversible_block();
      clear_heads();

    }

    private:


      block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH> last_irreversible_block_;
      ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<heads_id_LENGTH, heads_previous_LENGTH>, heads_REP_LENGTH> heads_;

};

} // End of namespace broadcast
} // End of namespace koinos
#endif // KOINOS_BROADCAST_BROADCAST_H