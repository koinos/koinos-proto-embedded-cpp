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
#ifndef KOINOS_ACCOUNT_HISTORY_ACCOUNT_HISTORY_H
#define KOINOS_ACCOUNT_HISTORY_ACCOUNT_HISTORY_H

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
namespace account_history {

class account_metadata final: public ::EmbeddedProto::MessageInterface
{
  public:
    account_metadata() = default;
    account_metadata(const account_metadata& rhs )
    {
      set_seq_num(rhs.get_seq_num());
    }

    account_metadata(const account_metadata&& rhs ) noexcept
    {
      set_seq_num(rhs.get_seq_num());
    }

    ~account_metadata() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SEQ_NUM = 1
    };

    account_metadata& operator=(const account_metadata& rhs)
    {
      set_seq_num(rhs.get_seq_num());
      return *this;
    }

    account_metadata& operator=(const account_metadata&& rhs) noexcept
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

template<uint32_t address_LENGTH>
class history_index final: public ::EmbeddedProto::MessageInterface
{
  public:
    history_index() = default;
    history_index(const history_index& rhs )
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
    }

    history_index(const history_index&& rhs ) noexcept
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
    }

    ~history_index() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ADDRESS = 1,
      SEQ_NUM = 2
    };

    history_index& operator=(const history_index& rhs)
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
      return *this;
    }

    history_index& operator=(const history_index&& rhs) noexcept
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
      return *this;
    }

    inline void clear_address() { address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<address_LENGTH>& mutable_address() { return address_; }
    inline void set_address(const ::EmbeddedProto::FieldBytes<address_LENGTH>& rhs) { address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<address_LENGTH>& get_address() const { return address_; }
    inline const uint8_t* address() const { return address_.get_const(); }

    inline void clear_seq_num() { seq_num_.clear(); }
    inline void set_seq_num(const EmbeddedProto::uint64& value) { seq_num_ = value; }
    inline void set_seq_num(const EmbeddedProto::uint64&& value) { seq_num_ = value; }
    inline EmbeddedProto::uint64& mutable_seq_num() { return seq_num_; }
    inline const EmbeddedProto::uint64& get_seq_num() const { return seq_num_; }
    inline EmbeddedProto::uint64::FIELD_TYPE seq_num() const { return seq_num_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ADDRESS), buffer, false);
      }

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
          case FieldNumber::ADDRESS:
            return_value = address_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_address();
      clear_seq_num();

    }

    private:


      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;
      EmbeddedProto::uint64 seq_num_ = 0U;

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
uint32_t transaction_signatures_LENGTH, 
uint32_t receipt_id_LENGTH, 
uint32_t receipt_payer_LENGTH, 
uint32_t receipt_events_REP_LENGTH, 
uint32_t receipt_events_source_LENGTH, 
uint32_t receipt_events_name_LENGTH, 
uint32_t receipt_events_data_LENGTH, 
uint32_t receipt_events_impacted_REP_LENGTH, 
uint32_t receipt_events_impacted_LENGTH, 
uint32_t receipt_logs_REP_LENGTH, 
uint32_t receipt_logs_LENGTH, 
uint32_t receipt_state_delta_entries_REP_LENGTH, 
uint32_t receipt_state_delta_entries_object_space_zone_LENGTH, 
uint32_t receipt_state_delta_entries_key_LENGTH, 
uint32_t receipt_state_delta_entries_value_LENGTH>
class transaction_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_record() = default;
    transaction_record(const transaction_record& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
    }

    transaction_record(const transaction_record&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
    }

    ~transaction_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      RECEIPT = 2
    };

    transaction_record& operator=(const transaction_record& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    transaction_record& operator=(const transaction_record&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& transaction() const { return transaction_; }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& value) { receipt_ = value; }
    inline void set_receipt(const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>&& value) { receipt_ = value; }
    inline protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& mutable_receipt() { return receipt_; }
    inline const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& get_receipt() const { return receipt_; }
    inline const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& receipt() const { return receipt_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = receipt_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RECEIPT), buffer, false);
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

          case FieldNumber::RECEIPT:
            return_value = receipt_.deserialize_check_type(buffer, wire_type);
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
      clear_receipt();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH> transaction_;
      protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH> receipt_;

};

template<uint32_t header_previous_LENGTH, 
uint32_t header_previous_state_merkle_root_LENGTH, 
uint32_t header_transaction_merkle_root_LENGTH, 
uint32_t header_signer_LENGTH, 
uint32_t header_approved_proposals_REP_LENGTH, 
uint32_t header_approved_proposals_LENGTH, 
uint32_t receipt_id_LENGTH, 
uint32_t receipt_state_merkle_root_LENGTH, 
uint32_t receipt_events_REP_LENGTH, 
uint32_t receipt_events_source_LENGTH, 
uint32_t receipt_events_name_LENGTH, 
uint32_t receipt_events_data_LENGTH, 
uint32_t receipt_events_impacted_REP_LENGTH, 
uint32_t receipt_events_impacted_LENGTH, 
uint32_t receipt_transaction_receipts_REP_LENGTH, 
uint32_t receipt_transaction_receipts_id_LENGTH, 
uint32_t receipt_transaction_receipts_payer_LENGTH, 
uint32_t receipt_transaction_receipts_events_REP_LENGTH, 
uint32_t receipt_transaction_receipts_events_source_LENGTH, 
uint32_t receipt_transaction_receipts_events_name_LENGTH, 
uint32_t receipt_transaction_receipts_events_data_LENGTH, 
uint32_t receipt_transaction_receipts_events_impacted_REP_LENGTH, 
uint32_t receipt_transaction_receipts_events_impacted_LENGTH, 
uint32_t receipt_transaction_receipts_logs_REP_LENGTH, 
uint32_t receipt_transaction_receipts_logs_LENGTH, 
uint32_t receipt_transaction_receipts_state_delta_entries_REP_LENGTH, 
uint32_t receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, 
uint32_t receipt_transaction_receipts_state_delta_entries_key_LENGTH, 
uint32_t receipt_transaction_receipts_state_delta_entries_value_LENGTH, 
uint32_t receipt_logs_REP_LENGTH, 
uint32_t receipt_logs_LENGTH, 
uint32_t receipt_state_delta_entries_REP_LENGTH, 
uint32_t receipt_state_delta_entries_object_space_zone_LENGTH, 
uint32_t receipt_state_delta_entries_key_LENGTH, 
uint32_t receipt_state_delta_entries_value_LENGTH>
class block_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_record() = default;
    block_record(const block_record& rhs )
    {
      set_header(rhs.get_header());
      set_receipt(rhs.get_receipt());
    }

    block_record(const block_record&& rhs ) noexcept
    {
      set_header(rhs.get_header());
      set_receipt(rhs.get_receipt());
    }

    ~block_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      HEADER = 1,
      RECEIPT = 2
    };

    block_record& operator=(const block_record& rhs)
    {
      set_header(rhs.get_header());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    block_record& operator=(const block_record&& rhs) noexcept
    {
      set_header(rhs.get_header());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    inline void clear_header() { header_.clear(); }
    inline void set_header(const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& value) { header_ = value; }
    inline void set_header(const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>&& value) { header_ = value; }
    inline protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& mutable_header() { return header_; }
    inline const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& get_header() const { return header_; }
    inline const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& header() const { return header_; }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_transaction_receipts_state_delta_entries_REP_LENGTH, receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, receipt_transaction_receipts_state_delta_entries_key_LENGTH, receipt_transaction_receipts_state_delta_entries_value_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& value) { receipt_ = value; }
    inline void set_receipt(const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_transaction_receipts_state_delta_entries_REP_LENGTH, receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, receipt_transaction_receipts_state_delta_entries_key_LENGTH, receipt_transaction_receipts_state_delta_entries_value_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>&& value) { receipt_ = value; }
    inline protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_transaction_receipts_state_delta_entries_REP_LENGTH, receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, receipt_transaction_receipts_state_delta_entries_key_LENGTH, receipt_transaction_receipts_state_delta_entries_value_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& mutable_receipt() { return receipt_; }
    inline const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_transaction_receipts_state_delta_entries_REP_LENGTH, receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, receipt_transaction_receipts_state_delta_entries_key_LENGTH, receipt_transaction_receipts_state_delta_entries_value_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& get_receipt() const { return receipt_; }
    inline const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_transaction_receipts_state_delta_entries_REP_LENGTH, receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, receipt_transaction_receipts_state_delta_entries_key_LENGTH, receipt_transaction_receipts_state_delta_entries_value_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH>& receipt() const { return receipt_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = header_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEADER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = receipt_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RECEIPT), buffer, false);
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
          case FieldNumber::HEADER:
            return_value = header_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RECEIPT:
            return_value = receipt_.deserialize_check_type(buffer, wire_type);
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
      clear_header();
      clear_receipt();

    }

    private:


      protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH> header_;
      protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_transaction_receipts_state_delta_entries_REP_LENGTH, receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, receipt_transaction_receipts_state_delta_entries_key_LENGTH, receipt_transaction_receipts_state_delta_entries_value_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH, receipt_state_delta_entries_REP_LENGTH, receipt_state_delta_entries_object_space_zone_LENGTH, receipt_state_delta_entries_key_LENGTH, receipt_state_delta_entries_value_LENGTH> receipt_;

};

template<uint32_t trx_transaction_id_LENGTH, 
uint32_t trx_transaction_header_chain_id_LENGTH, 
uint32_t trx_transaction_header_nonce_LENGTH, 
uint32_t trx_transaction_header_operation_merkle_root_LENGTH, 
uint32_t trx_transaction_header_payer_LENGTH, 
uint32_t trx_transaction_header_payee_LENGTH, 
uint32_t trx_transaction_operations_REP_LENGTH, 
uint32_t trx_transaction_operations_upload_contract_contract_id_LENGTH, 
uint32_t trx_transaction_operations_upload_contract_bytecode_LENGTH, 
uint32_t trx_transaction_operations_upload_contract_abi_LENGTH, 
uint32_t trx_transaction_operations_call_contract_contract_id_LENGTH, 
uint32_t trx_transaction_operations_call_contract_args_LENGTH, 
uint32_t trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t trx_transaction_operations_set_system_contract_contract_id_LENGTH, 
uint32_t trx_transaction_signatures_REP_LENGTH, 
uint32_t trx_transaction_signatures_LENGTH, 
uint32_t trx_receipt_id_LENGTH, 
uint32_t trx_receipt_payer_LENGTH, 
uint32_t trx_receipt_events_REP_LENGTH, 
uint32_t trx_receipt_events_source_LENGTH, 
uint32_t trx_receipt_events_name_LENGTH, 
uint32_t trx_receipt_events_data_LENGTH, 
uint32_t trx_receipt_events_impacted_REP_LENGTH, 
uint32_t trx_receipt_events_impacted_LENGTH, 
uint32_t trx_receipt_logs_REP_LENGTH, 
uint32_t trx_receipt_logs_LENGTH, 
uint32_t trx_receipt_state_delta_entries_REP_LENGTH, 
uint32_t trx_receipt_state_delta_entries_object_space_zone_LENGTH, 
uint32_t trx_receipt_state_delta_entries_key_LENGTH, 
uint32_t trx_receipt_state_delta_entries_value_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_header_previous_state_merkle_root_LENGTH, 
uint32_t block_header_transaction_merkle_root_LENGTH, 
uint32_t block_header_signer_LENGTH, 
uint32_t block_header_approved_proposals_REP_LENGTH, 
uint32_t block_header_approved_proposals_LENGTH, 
uint32_t block_receipt_id_LENGTH, 
uint32_t block_receipt_state_merkle_root_LENGTH, 
uint32_t block_receipt_events_REP_LENGTH, 
uint32_t block_receipt_events_source_LENGTH, 
uint32_t block_receipt_events_name_LENGTH, 
uint32_t block_receipt_events_data_LENGTH, 
uint32_t block_receipt_events_impacted_REP_LENGTH, 
uint32_t block_receipt_events_impacted_LENGTH, 
uint32_t block_receipt_transaction_receipts_REP_LENGTH, 
uint32_t block_receipt_transaction_receipts_id_LENGTH, 
uint32_t block_receipt_transaction_receipts_payer_LENGTH, 
uint32_t block_receipt_transaction_receipts_events_REP_LENGTH, 
uint32_t block_receipt_transaction_receipts_events_source_LENGTH, 
uint32_t block_receipt_transaction_receipts_events_name_LENGTH, 
uint32_t block_receipt_transaction_receipts_events_data_LENGTH, 
uint32_t block_receipt_transaction_receipts_events_impacted_REP_LENGTH, 
uint32_t block_receipt_transaction_receipts_events_impacted_LENGTH, 
uint32_t block_receipt_transaction_receipts_logs_REP_LENGTH, 
uint32_t block_receipt_transaction_receipts_logs_LENGTH, 
uint32_t block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, 
uint32_t block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, 
uint32_t block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, 
uint32_t block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, 
uint32_t block_receipt_logs_REP_LENGTH, 
uint32_t block_receipt_logs_LENGTH, 
uint32_t block_receipt_state_delta_entries_REP_LENGTH, 
uint32_t block_receipt_state_delta_entries_object_space_zone_LENGTH, 
uint32_t block_receipt_state_delta_entries_key_LENGTH, 
uint32_t block_receipt_state_delta_entries_value_LENGTH>
class history_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    history_record() = default;
    history_record(const history_record& rhs )
    {
      if(rhs.get_which_record() != which_record_)
      {
        // First delete the old object in the oneof.
        clear_record();
      }

      switch(rhs.get_which_record())
      {
        case FieldNumber::TRX:
          set_trx(rhs.get_trx());
          break;

        case FieldNumber::BLOCK:
          set_block(rhs.get_block());
          break;

        default:
          break;
      }

    }

    history_record(const history_record&& rhs ) noexcept
    {
      if(rhs.get_which_record() != which_record_)
      {
        // First delete the old object in the oneof.
        clear_record();
      }

      switch(rhs.get_which_record())
      {
        case FieldNumber::TRX:
          set_trx(rhs.get_trx());
          break;

        case FieldNumber::BLOCK:
          set_block(rhs.get_block());
          break;

        default:
          break;
      }

    }

    ~history_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRX = 1,
      BLOCK = 2
    };

    history_record& operator=(const history_record& rhs)
    {
      if(rhs.get_which_record() != which_record_)
      {
        // First delete the old object in the oneof.
        clear_record();
      }

      switch(rhs.get_which_record())
      {
        case FieldNumber::TRX:
          set_trx(rhs.get_trx());
          break;

        case FieldNumber::BLOCK:
          set_block(rhs.get_block());
          break;

        default:
          break;
      }

      return *this;
    }

    history_record& operator=(const history_record&& rhs) noexcept
    {
      if(rhs.get_which_record() != which_record_)
      {
        // First delete the old object in the oneof.
        clear_record();
      }

      switch(rhs.get_which_record())
      {
        case FieldNumber::TRX:
          set_trx(rhs.get_trx());
          break;

        case FieldNumber::BLOCK:
          set_block(rhs.get_block());
          break;

        default:
          break;
      }

      return *this;
    }

    FieldNumber get_which_record() const { return which_record_; }

    inline void clear_trx()
    {
      if(FieldNumber::TRX == which_record_)
      {
        which_record_ = FieldNumber::NOT_SET;
        record_.trx_.~transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>();
      }
    }
    inline void set_trx(const transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>& value)
    {
      if(FieldNumber::TRX != which_record_)
      {
        init_record(FieldNumber::TRX);
      }
      record_.trx_ = value;
    }
    inline void set_trx(const transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>&& value)
    {
      if(FieldNumber::TRX != which_record_)
      {
        init_record(FieldNumber::TRX);
      }
      record_.trx_ = value;
    }
    inline transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>& mutable_trx()
    {
      if(FieldNumber::TRX != which_record_)
      {
        init_record(FieldNumber::TRX);
      }
      return record_.trx_;
    }
    inline const transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>& get_trx() const { return record_.trx_; }
    inline const transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>& trx() const { return record_.trx_; }

    inline void clear_block()
    {
      if(FieldNumber::BLOCK == which_record_)
      {
        which_record_ = FieldNumber::NOT_SET;
        record_.block_.~block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>();
      }
    }
    inline void set_block(const block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>& value)
    {
      if(FieldNumber::BLOCK != which_record_)
      {
        init_record(FieldNumber::BLOCK);
      }
      record_.block_ = value;
    }
    inline void set_block(const block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>&& value)
    {
      if(FieldNumber::BLOCK != which_record_)
      {
        init_record(FieldNumber::BLOCK);
      }
      record_.block_ = value;
    }
    inline block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>& mutable_block()
    {
      if(FieldNumber::BLOCK != which_record_)
      {
        init_record(FieldNumber::BLOCK);
      }
      return record_.block_;
    }
    inline const block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>& get_block() const { return record_.block_; }
    inline const block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>& block() const { return record_.block_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_record_)
      {
        case FieldNumber::TRX:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = record_.trx_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRX), buffer, false);
          }
          break;

        case FieldNumber::BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = record_.block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK), buffer, false);
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
          case FieldNumber::TRX:
            return_value = deserialize_record(FieldNumber::TRX, record_.trx_, buffer, wire_type);

            break;

          case FieldNumber::BLOCK:
            return_value = deserialize_record(FieldNumber::BLOCK, record_.block_, buffer, wire_type);

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
      clear_record();

    }

    private:



      FieldNumber which_record_ = FieldNumber::NOT_SET;
      union record
      {
        record() {}
        ~record() {}
        transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH> trx_;
        block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH> block_;
      };
      record record_;

      void init_record(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_record_)
        {
          // First delete the old object in the oneof.
          clear_record();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::TRX:
            new(&record_.trx_) transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>;
            which_record_ = FieldNumber::TRX;
            break;

          case FieldNumber::BLOCK:
            new(&record_.block_) block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>;
            which_record_ = FieldNumber::BLOCK;
            break;

          default:
            break;
         }

         which_record_ = field_id;
      }

      void clear_record()
      {
        switch(which_record_)
        {
          case FieldNumber::TRX:
            record_.trx_.~transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH, trx_receipt_state_delta_entries_REP_LENGTH, trx_receipt_state_delta_entries_object_space_zone_LENGTH, trx_receipt_state_delta_entries_key_LENGTH, trx_receipt_state_delta_entries_value_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::BLOCK:
            record_.block_.~block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_transaction_receipts_state_delta_entries_REP_LENGTH, block_receipt_transaction_receipts_state_delta_entries_object_space_zone_LENGTH, block_receipt_transaction_receipts_state_delta_entries_key_LENGTH, block_receipt_transaction_receipts_state_delta_entries_value_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH, block_receipt_state_delta_entries_REP_LENGTH, block_receipt_state_delta_entries_object_space_zone_LENGTH, block_receipt_state_delta_entries_key_LENGTH, block_receipt_state_delta_entries_value_LENGTH>(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_record_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_record(const FieldNumber field_id, ::EmbeddedProto::Field& field,
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        if(field_id != which_record_)
        {
          init_record(field_id);
        }
        ::EmbeddedProto::Error return_value = field.deserialize_check_type(buffer, wire_type);
        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_record();
        }
        return return_value;
      }

};

} // End of namespace account_history
} // End of namespace koinos
#endif // KOINOS_ACCOUNT_HISTORY_ACCOUNT_HISTORY_H