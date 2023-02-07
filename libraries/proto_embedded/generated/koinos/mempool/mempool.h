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
#ifndef KOINOS_MEMPOOL_MEMPOOL_H
#define KOINOS_MEMPOOL_MEMPOOL_H

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
#include <koinos/protocol/protocol.h>

namespace koinos {
namespace mempool {

class mempool_metadata final: public ::EmbeddedProto::MessageInterface
{
  public:
    mempool_metadata() = default;
    mempool_metadata(const mempool_metadata& rhs )
    {
      set_seq_num(rhs.get_seq_num());
    }

    mempool_metadata(const mempool_metadata&& rhs ) noexcept
    {
      set_seq_num(rhs.get_seq_num());
    }

    ~mempool_metadata() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SEQ_NUM = 1
    };

    mempool_metadata& operator=(const mempool_metadata& rhs)
    {
      set_seq_num(rhs.get_seq_num());
      return *this;
    }

    mempool_metadata& operator=(const mempool_metadata&& rhs) noexcept
    {
      set_seq_num(rhs.get_seq_num());
      return *this;
    }

    inline void clear_seq_num() { seq_num_.clear(); }
    inline void set_seq_num(const EmbeddedProto::uint64& value) { seq_num_ = value; }
    inline void set_seq_num(const EmbeddedProto::uint64&& value) { seq_num_ = value; }
    inline EmbeddedProto::uint64& mutable_seq_num() { return seq_num_; }
    inline const EmbeddedProto::uint64& get_seq_num() const { return seq_num_; }
    inline EmbeddedProto::uint64::FIELD_TYPE seq_num() const { return seq_num_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != seq_num_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = seq_num_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SEQ_NUM), buffer, false);
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
          case FieldNumber::SEQ_NUM:
            return_value = seq_num_.deserialize_check_type(buffer, wire_type);
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
      clear_seq_num();

    }

    private:


      EmbeddedProto::uint64 seq_num_ = 0U;

};

class address_resource_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    address_resource_record() = default;
    address_resource_record(const address_resource_record& rhs )
    {
      set_max_rc(rhs.get_max_rc());
      set_current_rc(rhs.get_current_rc());
    }

    address_resource_record(const address_resource_record&& rhs ) noexcept
    {
      set_max_rc(rhs.get_max_rc());
      set_current_rc(rhs.get_current_rc());
    }

    ~address_resource_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MAX_RC = 1,
      CURRENT_RC = 2
    };

    address_resource_record& operator=(const address_resource_record& rhs)
    {
      set_max_rc(rhs.get_max_rc());
      set_current_rc(rhs.get_current_rc());
      return *this;
    }

    address_resource_record& operator=(const address_resource_record&& rhs) noexcept
    {
      set_max_rc(rhs.get_max_rc());
      set_current_rc(rhs.get_current_rc());
      return *this;
    }

    inline void clear_max_rc() { max_rc_.clear(); }
    inline void set_max_rc(const EmbeddedProto::uint64& value) { max_rc_ = value; }
    inline void set_max_rc(const EmbeddedProto::uint64&& value) { max_rc_ = value; }
    inline EmbeddedProto::uint64& mutable_max_rc() { return max_rc_; }
    inline const EmbeddedProto::uint64& get_max_rc() const { return max_rc_; }
    inline EmbeddedProto::uint64::FIELD_TYPE max_rc() const { return max_rc_.get(); }

    inline void clear_current_rc() { current_rc_.clear(); }
    inline void set_current_rc(const EmbeddedProto::uint64& value) { current_rc_ = value; }
    inline void set_current_rc(const EmbeddedProto::uint64&& value) { current_rc_ = value; }
    inline EmbeddedProto::uint64& mutable_current_rc() { return current_rc_; }
    inline const EmbeddedProto::uint64& get_current_rc() const { return current_rc_; }
    inline EmbeddedProto::uint64::FIELD_TYPE current_rc() const { return current_rc_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != max_rc_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = max_rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAX_RC), buffer, false);
      }

      if((0U != current_rc_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = current_rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CURRENT_RC), buffer, false);
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
          case FieldNumber::MAX_RC:
            return_value = max_rc_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CURRENT_RC:
            return_value = current_rc_.deserialize_check_type(buffer, wire_type);
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
      clear_max_rc();
      clear_current_rc();

    }

    private:


      EmbeddedProto::uint64 max_rc_ = 0U;
      EmbeddedProto::uint64 current_rc_ = 0U;

};

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_header_chain_id_LENGTH, 
uint32_t transaction_header_nonce_LENGTH, 
uint32_t transaction_header_operation_merkle_root_LENGTH, 
uint32_t transaction_header_payer_LENGTH, 
uint32_t transaction_header_payee_LENGTH, 
uint32_t transaction_operations_REP_LENGTH, 
uint32_t transaction_operations_upload_contract_contract_id_LENGTH, 
uint32_t transaction_operations_upload_contract_bytecode_LENGTH, 
uint32_t transaction_operations_upload_contract_abi_LENGTH, 
uint32_t transaction_operations_call_contract_contract_id_LENGTH, 
uint32_t transaction_operations_call_contract_args_LENGTH, 
uint32_t transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t transaction_operations_set_system_contract_contract_id_LENGTH, 
uint32_t transaction_signatures_REP_LENGTH, 
uint32_t transaction_signatures_LENGTH>
class pending_transaction_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    pending_transaction_record() = default;
    pending_transaction_record(const pending_transaction_record& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_timestamp(rhs.get_timestamp());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
    }

    pending_transaction_record(const pending_transaction_record&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_timestamp(rhs.get_timestamp());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
    }

    ~pending_transaction_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      TIMESTAMP = 2,
      DISK_STORAGE_USED = 3,
      NETWORK_BANDWIDTH_USED = 4,
      COMPUTE_BANDWIDTH_USED = 5
    };

    pending_transaction_record& operator=(const pending_transaction_record& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_timestamp(rhs.get_timestamp());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      return *this;
    }

    pending_transaction_record& operator=(const pending_transaction_record&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_timestamp(rhs.get_timestamp());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& transaction() const { return transaction_; }

    inline void clear_timestamp() { timestamp_.clear(); }
    inline void set_timestamp(const EmbeddedProto::uint64& value) { timestamp_ = value; }
    inline void set_timestamp(const EmbeddedProto::uint64&& value) { timestamp_ = value; }
    inline EmbeddedProto::uint64& mutable_timestamp() { return timestamp_; }
    inline const EmbeddedProto::uint64& get_timestamp() const { return timestamp_; }
    inline EmbeddedProto::uint64::FIELD_TYPE timestamp() const { return timestamp_.get(); }

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

      if((0U != timestamp_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = timestamp_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TIMESTAMP), buffer, false);
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

          case FieldNumber::TIMESTAMP:
            return_value = timestamp_.deserialize_check_type(buffer, wire_type);
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
      clear_timestamp();
      clear_disk_storage_used();
      clear_network_bandwidth_used();
      clear_compute_bandwidth_used();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH> transaction_;
      EmbeddedProto::uint64 timestamp_ = 0U;
      EmbeddedProto::uint64 disk_storage_used_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_used_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_used_ = 0U;

};

} // End of namespace mempool
} // End of namespace koinos
#endif // KOINOS_MEMPOOL_MEMPOOL_H