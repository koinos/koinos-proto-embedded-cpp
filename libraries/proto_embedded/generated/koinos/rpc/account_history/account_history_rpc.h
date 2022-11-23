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
#ifndef KOINOS_RPC_ACCOUNT_HISTORY_ACCOUNT_HISTORY_RPC_H
#define KOINOS_RPC_ACCOUNT_HISTORY_ACCOUNT_HISTORY_RPC_H

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
#include <koinos/account_history/account_history.h>
#include <koinos/options.h>
#include <koinos/common.h>
#include <koinos/protocol/protocol.h>
#include <koinos/rpc/rpc.h>

namespace koinos {
namespace rpc {
namespace account_history {

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
uint32_t block_receipt_logs_REP_LENGTH, 
uint32_t block_receipt_logs_LENGTH>
class account_history_entry final: public ::EmbeddedProto::MessageInterface
{
  public:
    account_history_entry() = default;
    account_history_entry(const account_history_entry& rhs )
    {
      set_seq_num(rhs.get_seq_num());
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

    account_history_entry(const account_history_entry&& rhs ) noexcept
    {
      set_seq_num(rhs.get_seq_num());
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

    ~account_history_entry() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SEQ_NUM = 1,
      TRX = 2,
      BLOCK = 3
    };

    account_history_entry& operator=(const account_history_entry& rhs)
    {
      set_seq_num(rhs.get_seq_num());
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

    account_history_entry& operator=(const account_history_entry&& rhs) noexcept
    {
      set_seq_num(rhs.get_seq_num());
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

    inline void clear_seq_num() { seq_num_.clear(); }
    inline void set_seq_num(const EmbeddedProto::uint64& value) { seq_num_ = value; }
    inline void set_seq_num(const EmbeddedProto::uint64&& value) { seq_num_ = value; }
    inline EmbeddedProto::uint64& mutable_seq_num() { return seq_num_; }
    inline const EmbeddedProto::uint64& get_seq_num() const { return seq_num_; }
    inline EmbeddedProto::uint64::FIELD_TYPE seq_num() const { return seq_num_.get(); }

    FieldNumber get_which_record() const { return which_record_; }

    inline void clear_trx()
    {
      if(FieldNumber::TRX == which_record_)
      {
        which_record_ = FieldNumber::NOT_SET;
        record_.trx_.~transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>();
      }
    }
    inline void set_trx(const account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>& value)
    {
      if(FieldNumber::TRX != which_record_)
      {
        init_record(FieldNumber::TRX);
      }
      record_.trx_ = value;
    }
    inline void set_trx(const account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>&& value)
    {
      if(FieldNumber::TRX != which_record_)
      {
        init_record(FieldNumber::TRX);
      }
      record_.trx_ = value;
    }
    inline account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>& mutable_trx()
    {
      if(FieldNumber::TRX != which_record_)
      {
        init_record(FieldNumber::TRX);
      }
      return record_.trx_;
    }
    inline const account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>& get_trx() const { return record_.trx_; }
    inline const account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>& trx() const { return record_.trx_; }

    inline void clear_block()
    {
      if(FieldNumber::BLOCK == which_record_)
      {
        which_record_ = FieldNumber::NOT_SET;
        record_.block_.~block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>();
      }
    }
    inline void set_block(const account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>& value)
    {
      if(FieldNumber::BLOCK != which_record_)
      {
        init_record(FieldNumber::BLOCK);
      }
      record_.block_ = value;
    }
    inline void set_block(const account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>&& value)
    {
      if(FieldNumber::BLOCK != which_record_)
      {
        init_record(FieldNumber::BLOCK);
      }
      record_.block_ = value;
    }
    inline account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>& mutable_block()
    {
      if(FieldNumber::BLOCK != which_record_)
      {
        init_record(FieldNumber::BLOCK);
      }
      return record_.block_;
    }
    inline const account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>& get_block() const { return record_.block_; }
    inline const account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>& block() const { return record_.block_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != seq_num_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = seq_num_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SEQ_NUM), buffer, false);
      }

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
          case FieldNumber::SEQ_NUM:
            return_value = seq_num_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_seq_num();
      clear_record();

    }

    private:


      EmbeddedProto::uint64 seq_num_ = 0U;

      FieldNumber which_record_ = FieldNumber::NOT_SET;
      union record
      {
        record() {}
        ~record() {}
        account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH> trx_;
        account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH> block_;
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
            new(&record_.trx_) account_history::transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>;
            which_record_ = FieldNumber::TRX;
            break;

          case FieldNumber::BLOCK:
            new(&record_.block_) account_history::block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>;
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
            record_.trx_.~transaction_record<trx_transaction_id_LENGTH, trx_transaction_header_chain_id_LENGTH, trx_transaction_header_nonce_LENGTH, trx_transaction_header_operation_merkle_root_LENGTH, trx_transaction_header_payer_LENGTH, trx_transaction_header_payee_LENGTH, trx_transaction_operations_REP_LENGTH, trx_transaction_operations_upload_contract_contract_id_LENGTH, trx_transaction_operations_upload_contract_bytecode_LENGTH, trx_transaction_operations_upload_contract_abi_LENGTH, trx_transaction_operations_call_contract_contract_id_LENGTH, trx_transaction_operations_call_contract_args_LENGTH, trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, trx_transaction_operations_set_system_contract_contract_id_LENGTH, trx_transaction_signatures_REP_LENGTH, trx_transaction_signatures_LENGTH, trx_receipt_id_LENGTH, trx_receipt_payer_LENGTH, trx_receipt_events_REP_LENGTH, trx_receipt_events_source_LENGTH, trx_receipt_events_name_LENGTH, trx_receipt_events_data_LENGTH, trx_receipt_events_impacted_REP_LENGTH, trx_receipt_events_impacted_LENGTH, trx_receipt_logs_REP_LENGTH, trx_receipt_logs_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::BLOCK:
            record_.block_.~block_record<block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_receipt_id_LENGTH, block_receipt_state_merkle_root_LENGTH, block_receipt_events_REP_LENGTH, block_receipt_events_source_LENGTH, block_receipt_events_name_LENGTH, block_receipt_events_data_LENGTH, block_receipt_events_impacted_REP_LENGTH, block_receipt_events_impacted_LENGTH, block_receipt_transaction_receipts_REP_LENGTH, block_receipt_transaction_receipts_id_LENGTH, block_receipt_transaction_receipts_payer_LENGTH, block_receipt_transaction_receipts_events_REP_LENGTH, block_receipt_transaction_receipts_events_source_LENGTH, block_receipt_transaction_receipts_events_name_LENGTH, block_receipt_transaction_receipts_events_data_LENGTH, block_receipt_transaction_receipts_events_impacted_REP_LENGTH, block_receipt_transaction_receipts_events_impacted_LENGTH, block_receipt_transaction_receipts_logs_REP_LENGTH, block_receipt_transaction_receipts_logs_LENGTH, block_receipt_logs_REP_LENGTH, block_receipt_logs_LENGTH>(); // NOSONAR Unions require this.
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

template<uint32_t address_LENGTH>
class get_account_history_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_history_request() = default;
    get_account_history_request(const get_account_history_request& rhs )
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
      set_limit(rhs.get_limit());
      set_ascending(rhs.get_ascending());
      set_irreversible(rhs.get_irreversible());
    }

    get_account_history_request(const get_account_history_request&& rhs ) noexcept
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
      set_limit(rhs.get_limit());
      set_ascending(rhs.get_ascending());
      set_irreversible(rhs.get_irreversible());
    }

    ~get_account_history_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ADDRESS = 1,
      SEQ_NUM = 2,
      LIMIT = 3,
      ASCENDING = 4,
      IRREVERSIBLE = 5
    };

    get_account_history_request& operator=(const get_account_history_request& rhs)
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
      set_limit(rhs.get_limit());
      set_ascending(rhs.get_ascending());
      set_irreversible(rhs.get_irreversible());
      return *this;
    }

    get_account_history_request& operator=(const get_account_history_request&& rhs) noexcept
    {
      set_address(rhs.get_address());
      set_seq_num(rhs.get_seq_num());
      set_limit(rhs.get_limit());
      set_ascending(rhs.get_ascending());
      set_irreversible(rhs.get_irreversible());
      return *this;
    }

    inline void clear_address() { address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<address_LENGTH>& mutable_address() { return address_; }
    inline void set_address(const ::EmbeddedProto::FieldBytes<address_LENGTH>& rhs) { address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<address_LENGTH>& get_address() const { return address_; }
    inline const uint8_t* address() const { return address_.get_const(); }

    inline bool has_seq_num() const
    {
      return 0 != (presence::mask(presence::fields::SEQ_NUM) & presence_[presence::index(presence::fields::SEQ_NUM)]);
    }
    inline void clear_seq_num()
    {
      presence_[presence::index(presence::fields::SEQ_NUM)] &= ~(presence::mask(presence::fields::SEQ_NUM));
      seq_num_.clear();
    }
    inline void set_seq_num(const EmbeddedProto::uint64& value)
    {
      presence_[presence::index(presence::fields::SEQ_NUM)] |= presence::mask(presence::fields::SEQ_NUM);
      seq_num_ = value;
    }
    inline void set_seq_num(const EmbeddedProto::uint64&& value)
    {
      presence_[presence::index(presence::fields::SEQ_NUM)] |= presence::mask(presence::fields::SEQ_NUM);
      seq_num_ = value;
    }
    inline EmbeddedProto::uint64& mutable_seq_num()
    {
      presence_[presence::index(presence::fields::SEQ_NUM)] |= presence::mask(presence::fields::SEQ_NUM);
      return seq_num_;
    }
    inline const EmbeddedProto::uint64& get_seq_num() const { return seq_num_; }
    inline EmbeddedProto::uint64::FIELD_TYPE seq_num() const { return seq_num_.get(); }

    inline void clear_limit() { limit_.clear(); }
    inline void set_limit(const EmbeddedProto::uint64& value) { limit_ = value; }
    inline void set_limit(const EmbeddedProto::uint64&& value) { limit_ = value; }
    inline EmbeddedProto::uint64& mutable_limit() { return limit_; }
    inline const EmbeddedProto::uint64& get_limit() const { return limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE limit() const { return limit_.get(); }

    inline void clear_ascending() { ascending_.clear(); }
    inline void set_ascending(const EmbeddedProto::boolean& value) { ascending_ = value; }
    inline void set_ascending(const EmbeddedProto::boolean&& value) { ascending_ = value; }
    inline EmbeddedProto::boolean& mutable_ascending() { return ascending_; }
    inline const EmbeddedProto::boolean& get_ascending() const { return ascending_; }
    inline EmbeddedProto::boolean::FIELD_TYPE ascending() const { return ascending_.get(); }

    inline void clear_irreversible() { irreversible_.clear(); }
    inline void set_irreversible(const EmbeddedProto::boolean& value) { irreversible_ = value; }
    inline void set_irreversible(const EmbeddedProto::boolean&& value) { irreversible_ = value; }
    inline EmbeddedProto::boolean& mutable_irreversible() { return irreversible_; }
    inline const EmbeddedProto::boolean& get_irreversible() const { return irreversible_; }
    inline EmbeddedProto::boolean::FIELD_TYPE irreversible() const { return irreversible_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ADDRESS), buffer, false);
      }

      if(has_seq_num() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = seq_num_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SEQ_NUM), buffer, true);
      }

      if((0U != limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LIMIT), buffer, false);
      }

      if((false != ascending_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = ascending_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ASCENDING), buffer, false);
      }

      if((false != irreversible_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = irreversible_.serialize_with_id(static_cast<uint32_t>(FieldNumber::IRREVERSIBLE), buffer, false);
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
            presence_[presence::index(presence::fields::SEQ_NUM)] |= presence::mask(presence::fields::SEQ_NUM);
            return_value = seq_num_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LIMIT:
            return_value = limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ASCENDING:
            return_value = ascending_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::IRREVERSIBLE:
            return_value = irreversible_.deserialize_check_type(buffer, wire_type);
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
      clear_limit();
      clear_ascending();
      clear_irreversible();

    }

    private:

      // Define constants for tracking the presence of fields.
      // Use a struct to scope the variables from user fields as namespaces are not allowed within classes.
      struct presence
      {
        // An enumeration with all the fields for which presence has to be tracked.
        enum class fields : uint32_t
        {
          SEQ_NUM
        };

        // The number of fields for which presence has to be tracked.
        static constexpr uint32_t N_FIELDS = 1;

        // Which type are we using to track presence.
        using TYPE = uint32_t;

        // How many bits are there in the presence type.
        static constexpr uint32_t N_BITS = std::numeric_limits<TYPE>::digits;

        // How many variables of TYPE do we need to bit mask all presence fields.
        static constexpr uint32_t SIZE = (N_FIELDS / N_BITS) + ((N_FIELDS % N_BITS) > 0 ? 1 : 0);

        // Obtain the index of a given field in the presence array.
        static constexpr uint32_t index(const fields& field) { return static_cast<uint32_t>(field) / N_BITS; }

        // Obtain the bit mask for the given field assuming we are at the correct index in the presence array.
        static constexpr TYPE mask(const fields& field)
        {
          return static_cast<uint32_t>(0x01) << (static_cast<uint32_t>(field) % N_BITS);
        }
      };

      // Create an array in which the presence flags are stored.
      typename presence::TYPE presence_[presence::SIZE] = {0};

      ::EmbeddedProto::FieldBytes<address_LENGTH> address_;
      EmbeddedProto::uint64 seq_num_ = 0U;
      EmbeddedProto::uint64 limit_ = 0U;
      EmbeddedProto::boolean ascending_ = false;
      EmbeddedProto::boolean irreversible_ = false;

};

template<uint32_t values_REP_LENGTH, 
uint32_t values_trx_transaction_id_LENGTH, 
uint32_t values_trx_transaction_header_chain_id_LENGTH, 
uint32_t values_trx_transaction_header_nonce_LENGTH, 
uint32_t values_trx_transaction_header_operation_merkle_root_LENGTH, 
uint32_t values_trx_transaction_header_payer_LENGTH, 
uint32_t values_trx_transaction_header_payee_LENGTH, 
uint32_t values_trx_transaction_operations_REP_LENGTH, 
uint32_t values_trx_transaction_operations_upload_contract_contract_id_LENGTH, 
uint32_t values_trx_transaction_operations_upload_contract_bytecode_LENGTH, 
uint32_t values_trx_transaction_operations_upload_contract_abi_LENGTH, 
uint32_t values_trx_transaction_operations_call_contract_contract_id_LENGTH, 
uint32_t values_trx_transaction_operations_call_contract_args_LENGTH, 
uint32_t values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, 
uint32_t values_trx_transaction_signatures_REP_LENGTH, 
uint32_t values_trx_transaction_signatures_LENGTH, 
uint32_t values_trx_receipt_id_LENGTH, 
uint32_t values_trx_receipt_payer_LENGTH, 
uint32_t values_trx_receipt_events_REP_LENGTH, 
uint32_t values_trx_receipt_events_source_LENGTH, 
uint32_t values_trx_receipt_events_name_LENGTH, 
uint32_t values_trx_receipt_events_data_LENGTH, 
uint32_t values_trx_receipt_events_impacted_REP_LENGTH, 
uint32_t values_trx_receipt_events_impacted_LENGTH, 
uint32_t values_trx_receipt_logs_REP_LENGTH, 
uint32_t values_trx_receipt_logs_LENGTH, 
uint32_t values_block_header_previous_LENGTH, 
uint32_t values_block_header_previous_state_merkle_root_LENGTH, 
uint32_t values_block_header_transaction_merkle_root_LENGTH, 
uint32_t values_block_header_signer_LENGTH, 
uint32_t values_block_header_approved_proposals_REP_LENGTH, 
uint32_t values_block_header_approved_proposals_LENGTH, 
uint32_t values_block_receipt_id_LENGTH, 
uint32_t values_block_receipt_state_merkle_root_LENGTH, 
uint32_t values_block_receipt_events_REP_LENGTH, 
uint32_t values_block_receipt_events_source_LENGTH, 
uint32_t values_block_receipt_events_name_LENGTH, 
uint32_t values_block_receipt_events_data_LENGTH, 
uint32_t values_block_receipt_events_impacted_REP_LENGTH, 
uint32_t values_block_receipt_events_impacted_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_REP_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_id_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_payer_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_events_REP_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_events_source_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_events_name_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_events_data_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_events_impacted_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_logs_REP_LENGTH, 
uint32_t values_block_receipt_transaction_receipts_logs_LENGTH, 
uint32_t values_block_receipt_logs_REP_LENGTH, 
uint32_t values_block_receipt_logs_LENGTH>
class get_account_history_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_history_response() = default;
    get_account_history_response(const get_account_history_response& rhs )
    {
      set_values(rhs.get_values());
    }

    get_account_history_response(const get_account_history_response&& rhs ) noexcept
    {
      set_values(rhs.get_values());
    }

    ~get_account_history_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUES = 1
    };

    get_account_history_response& operator=(const get_account_history_response& rhs)
    {
      set_values(rhs.get_values());
      return *this;
    }

    get_account_history_response& operator=(const get_account_history_response&& rhs) noexcept
    {
      set_values(rhs.get_values());
      return *this;
    }

    inline const account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>& values(uint32_t index) const { return values_[index]; }
    inline void clear_values() { values_.clear(); }
    inline void set_values(uint32_t index, const account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>& value) { values_.set(index, value); }
    inline void set_values(uint32_t index, const account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>&& value) { values_.set(index, value); }
    inline void set_values(const ::EmbeddedProto::RepeatedFieldFixedSize<account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>, values_REP_LENGTH>& values) { values_ = values; }
    inline void add_values(const account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>& value) { values_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>, values_REP_LENGTH>& mutable_values() { return values_; }
    inline account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>& mutable_values(uint32_t index) { return values_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>, values_REP_LENGTH>& get_values() const { return values_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>, values_REP_LENGTH>& values() const { return values_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = values_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VALUES), buffer, false);
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
          case FieldNumber::VALUES:
            return_value = values_.deserialize_check_type(buffer, wire_type);
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
      clear_values();

    }

    private:


      ::EmbeddedProto::RepeatedFieldFixedSize<account_history_entry<values_trx_transaction_id_LENGTH, values_trx_transaction_header_chain_id_LENGTH, values_trx_transaction_header_nonce_LENGTH, values_trx_transaction_header_operation_merkle_root_LENGTH, values_trx_transaction_header_payer_LENGTH, values_trx_transaction_header_payee_LENGTH, values_trx_transaction_operations_REP_LENGTH, values_trx_transaction_operations_upload_contract_contract_id_LENGTH, values_trx_transaction_operations_upload_contract_bytecode_LENGTH, values_trx_transaction_operations_upload_contract_abi_LENGTH, values_trx_transaction_operations_call_contract_contract_id_LENGTH, values_trx_transaction_operations_call_contract_args_LENGTH, values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, values_trx_transaction_signatures_REP_LENGTH, values_trx_transaction_signatures_LENGTH, values_trx_receipt_id_LENGTH, values_trx_receipt_payer_LENGTH, values_trx_receipt_events_REP_LENGTH, values_trx_receipt_events_source_LENGTH, values_trx_receipt_events_name_LENGTH, values_trx_receipt_events_data_LENGTH, values_trx_receipt_events_impacted_REP_LENGTH, values_trx_receipt_events_impacted_LENGTH, values_trx_receipt_logs_REP_LENGTH, values_trx_receipt_logs_LENGTH, values_block_header_previous_LENGTH, values_block_header_previous_state_merkle_root_LENGTH, values_block_header_transaction_merkle_root_LENGTH, values_block_header_signer_LENGTH, values_block_header_approved_proposals_REP_LENGTH, values_block_header_approved_proposals_LENGTH, values_block_receipt_id_LENGTH, values_block_receipt_state_merkle_root_LENGTH, values_block_receipt_events_REP_LENGTH, values_block_receipt_events_source_LENGTH, values_block_receipt_events_name_LENGTH, values_block_receipt_events_data_LENGTH, values_block_receipt_events_impacted_REP_LENGTH, values_block_receipt_events_impacted_LENGTH, values_block_receipt_transaction_receipts_REP_LENGTH, values_block_receipt_transaction_receipts_id_LENGTH, values_block_receipt_transaction_receipts_payer_LENGTH, values_block_receipt_transaction_receipts_events_REP_LENGTH, values_block_receipt_transaction_receipts_events_source_LENGTH, values_block_receipt_transaction_receipts_events_name_LENGTH, values_block_receipt_transaction_receipts_events_data_LENGTH, values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, values_block_receipt_transaction_receipts_events_impacted_LENGTH, values_block_receipt_transaction_receipts_logs_REP_LENGTH, values_block_receipt_transaction_receipts_logs_LENGTH, values_block_receipt_logs_REP_LENGTH, values_block_receipt_logs_LENGTH>, values_REP_LENGTH> values_;

};

template<uint32_t get_account_history_address_LENGTH>
class account_history_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    account_history_request() = default;
    account_history_request(const account_history_request& rhs )
    {
      if(rhs.get_which_request() != which_request_)
      {
        // First delete the old object in the oneof.
        clear_request();
      }

      switch(rhs.get_which_request())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

    }

    account_history_request(const account_history_request&& rhs ) noexcept
    {
      if(rhs.get_which_request() != which_request_)
      {
        // First delete the old object in the oneof.
        clear_request();
      }

      switch(rhs.get_which_request())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

    }

    ~account_history_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      GET_ACCOUNT_HISTORY = 2
    };

    account_history_request& operator=(const account_history_request& rhs)
    {
      if(rhs.get_which_request() != which_request_)
      {
        // First delete the old object in the oneof.
        clear_request();
      }

      switch(rhs.get_which_request())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

      return *this;
    }

    account_history_request& operator=(const account_history_request&& rhs) noexcept
    {
      if(rhs.get_which_request() != which_request_)
      {
        // First delete the old object in the oneof.
        clear_request();
      }

      switch(rhs.get_which_request())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

      return *this;
    }

    FieldNumber get_which_request() const { return which_request_; }

    inline void clear_reserved()
    {
      if(FieldNumber::RESERVED == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.reserved_.~reserved_rpc();
      }
    }
    inline void set_reserved(const reserved_rpc& value)
    {
      if(FieldNumber::RESERVED != which_request_)
      {
        init_request(FieldNumber::RESERVED);
      }
      request_.reserved_ = value;
    }
    inline void set_reserved(const reserved_rpc&& value)
    {
      if(FieldNumber::RESERVED != which_request_)
      {
        init_request(FieldNumber::RESERVED);
      }
      request_.reserved_ = value;
    }
    inline reserved_rpc& mutable_reserved()
    {
      if(FieldNumber::RESERVED != which_request_)
      {
        init_request(FieldNumber::RESERVED);
      }
      return request_.reserved_;
    }
    inline const reserved_rpc& get_reserved() const { return request_.reserved_; }
    inline const reserved_rpc& reserved() const { return request_.reserved_; }

    inline void clear_get_account_history()
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_account_history_.~get_account_history_request<get_account_history_address_LENGTH>();
      }
    }
    inline void set_get_account_history(const get_account_history_request<get_account_history_address_LENGTH>& value)
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_HISTORY);
      }
      request_.get_account_history_ = value;
    }
    inline void set_get_account_history(const get_account_history_request<get_account_history_address_LENGTH>&& value)
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_HISTORY);
      }
      request_.get_account_history_ = value;
    }
    inline get_account_history_request<get_account_history_address_LENGTH>& mutable_get_account_history()
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_HISTORY);
      }
      return request_.get_account_history_;
    }
    inline const get_account_history_request<get_account_history_address_LENGTH>& get_get_account_history() const { return request_.get_account_history_; }
    inline const get_account_history_request<get_account_history_address_LENGTH>& get_account_history() const { return request_.get_account_history_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_request_)
      {
        case FieldNumber::RESERVED:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.reserved_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RESERVED), buffer, false);
          }
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_account_history_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_ACCOUNT_HISTORY), buffer, false);
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
          case FieldNumber::RESERVED:
            return_value = deserialize_request(FieldNumber::RESERVED, request_.reserved_, buffer, wire_type);

            break;

          case FieldNumber::GET_ACCOUNT_HISTORY:
            return_value = deserialize_request(FieldNumber::GET_ACCOUNT_HISTORY, request_.get_account_history_, buffer, wire_type);

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
      clear_request();

    }

    private:



      FieldNumber which_request_ = FieldNumber::NOT_SET;
      union request
      {
        request() {}
        ~request() {}
        reserved_rpc reserved_;
        get_account_history_request<get_account_history_address_LENGTH> get_account_history_;
      };
      request request_;

      void init_request(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_request_)
        {
          // First delete the old object in the oneof.
          clear_request();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::RESERVED:
            new(&request_.reserved_) reserved_rpc;
            which_request_ = FieldNumber::RESERVED;
            break;

          case FieldNumber::GET_ACCOUNT_HISTORY:
            new(&request_.get_account_history_) get_account_history_request<get_account_history_address_LENGTH>;
            which_request_ = FieldNumber::GET_ACCOUNT_HISTORY;
            break;

          default:
            break;
         }

         which_request_ = field_id;
      }

      void clear_request()
      {
        switch(which_request_)
        {
          case FieldNumber::RESERVED:
            request_.reserved_.~reserved_rpc(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_ACCOUNT_HISTORY:
            request_.get_account_history_.~get_account_history_request<get_account_history_address_LENGTH>(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_request_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_request(const FieldNumber field_id, ::EmbeddedProto::Field& field,
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        if(field_id != which_request_)
        {
          init_request(field_id);
        }
        ::EmbeddedProto::Error return_value = field.deserialize_check_type(buffer, wire_type);
        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_request();
        }
        return return_value;
      }

};

template<uint32_t error_message_LENGTH, 
uint32_t error_data_LENGTH, 
uint32_t get_account_history_values_REP_LENGTH, 
uint32_t get_account_history_values_trx_transaction_id_LENGTH, 
uint32_t get_account_history_values_trx_transaction_header_chain_id_LENGTH, 
uint32_t get_account_history_values_trx_transaction_header_nonce_LENGTH, 
uint32_t get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, 
uint32_t get_account_history_values_trx_transaction_header_payer_LENGTH, 
uint32_t get_account_history_values_trx_transaction_header_payee_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_REP_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, 
uint32_t get_account_history_values_trx_transaction_signatures_REP_LENGTH, 
uint32_t get_account_history_values_trx_transaction_signatures_LENGTH, 
uint32_t get_account_history_values_trx_receipt_id_LENGTH, 
uint32_t get_account_history_values_trx_receipt_payer_LENGTH, 
uint32_t get_account_history_values_trx_receipt_events_REP_LENGTH, 
uint32_t get_account_history_values_trx_receipt_events_source_LENGTH, 
uint32_t get_account_history_values_trx_receipt_events_name_LENGTH, 
uint32_t get_account_history_values_trx_receipt_events_data_LENGTH, 
uint32_t get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, 
uint32_t get_account_history_values_trx_receipt_events_impacted_LENGTH, 
uint32_t get_account_history_values_trx_receipt_logs_REP_LENGTH, 
uint32_t get_account_history_values_trx_receipt_logs_LENGTH, 
uint32_t get_account_history_values_block_header_previous_LENGTH, 
uint32_t get_account_history_values_block_header_previous_state_merkle_root_LENGTH, 
uint32_t get_account_history_values_block_header_transaction_merkle_root_LENGTH, 
uint32_t get_account_history_values_block_header_signer_LENGTH, 
uint32_t get_account_history_values_block_header_approved_proposals_REP_LENGTH, 
uint32_t get_account_history_values_block_header_approved_proposals_LENGTH, 
uint32_t get_account_history_values_block_receipt_id_LENGTH, 
uint32_t get_account_history_values_block_receipt_state_merkle_root_LENGTH, 
uint32_t get_account_history_values_block_receipt_events_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_events_source_LENGTH, 
uint32_t get_account_history_values_block_receipt_events_name_LENGTH, 
uint32_t get_account_history_values_block_receipt_events_data_LENGTH, 
uint32_t get_account_history_values_block_receipt_events_impacted_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_events_impacted_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, 
uint32_t get_account_history_values_block_receipt_logs_REP_LENGTH, 
uint32_t get_account_history_values_block_receipt_logs_LENGTH>
class account_history_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    account_history_response() = default;
    account_history_response(const account_history_response& rhs )
    {
      if(rhs.get_which_response() != which_response_)
      {
        // First delete the old object in the oneof.
        clear_response();
      }

      switch(rhs.get_which_response())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::ERROR:
          set_error(rhs.get_error());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

    }

    account_history_response(const account_history_response&& rhs ) noexcept
    {
      if(rhs.get_which_response() != which_response_)
      {
        // First delete the old object in the oneof.
        clear_response();
      }

      switch(rhs.get_which_response())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::ERROR:
          set_error(rhs.get_error());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

    }

    ~account_history_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      ERROR = 2,
      GET_ACCOUNT_HISTORY = 3
    };

    account_history_response& operator=(const account_history_response& rhs)
    {
      if(rhs.get_which_response() != which_response_)
      {
        // First delete the old object in the oneof.
        clear_response();
      }

      switch(rhs.get_which_response())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::ERROR:
          set_error(rhs.get_error());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

      return *this;
    }

    account_history_response& operator=(const account_history_response&& rhs) noexcept
    {
      if(rhs.get_which_response() != which_response_)
      {
        // First delete the old object in the oneof.
        clear_response();
      }

      switch(rhs.get_which_response())
      {
        case FieldNumber::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case FieldNumber::ERROR:
          set_error(rhs.get_error());
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          set_get_account_history(rhs.get_get_account_history());
          break;

        default:
          break;
      }

      return *this;
    }

    FieldNumber get_which_response() const { return which_response_; }

    inline void clear_reserved()
    {
      if(FieldNumber::RESERVED == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.reserved_.~reserved_rpc();
      }
    }
    inline void set_reserved(const reserved_rpc& value)
    {
      if(FieldNumber::RESERVED != which_response_)
      {
        init_response(FieldNumber::RESERVED);
      }
      response_.reserved_ = value;
    }
    inline void set_reserved(const reserved_rpc&& value)
    {
      if(FieldNumber::RESERVED != which_response_)
      {
        init_response(FieldNumber::RESERVED);
      }
      response_.reserved_ = value;
    }
    inline reserved_rpc& mutable_reserved()
    {
      if(FieldNumber::RESERVED != which_response_)
      {
        init_response(FieldNumber::RESERVED);
      }
      return response_.reserved_;
    }
    inline const reserved_rpc& get_reserved() const { return response_.reserved_; }
    inline const reserved_rpc& reserved() const { return response_.reserved_; }

    inline void clear_error()
    {
      if(FieldNumber::ERROR == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.error_.~error_response<error_message_LENGTH, error_data_LENGTH>();
      }
    }
    inline void set_error(const error_response<error_message_LENGTH, error_data_LENGTH>& value)
    {
      if(FieldNumber::ERROR != which_response_)
      {
        init_response(FieldNumber::ERROR);
      }
      response_.error_ = value;
    }
    inline void set_error(const error_response<error_message_LENGTH, error_data_LENGTH>&& value)
    {
      if(FieldNumber::ERROR != which_response_)
      {
        init_response(FieldNumber::ERROR);
      }
      response_.error_ = value;
    }
    inline error_response<error_message_LENGTH, error_data_LENGTH>& mutable_error()
    {
      if(FieldNumber::ERROR != which_response_)
      {
        init_response(FieldNumber::ERROR);
      }
      return response_.error_;
    }
    inline const error_response<error_message_LENGTH, error_data_LENGTH>& get_error() const { return response_.error_; }
    inline const error_response<error_message_LENGTH, error_data_LENGTH>& error() const { return response_.error_; }

    inline void clear_get_account_history()
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_account_history_.~get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>();
      }
    }
    inline void set_get_account_history(const get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>& value)
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_HISTORY);
      }
      response_.get_account_history_ = value;
    }
    inline void set_get_account_history(const get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>&& value)
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_HISTORY);
      }
      response_.get_account_history_ = value;
    }
    inline get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>& mutable_get_account_history()
    {
      if(FieldNumber::GET_ACCOUNT_HISTORY != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_HISTORY);
      }
      return response_.get_account_history_;
    }
    inline const get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>& get_get_account_history() const { return response_.get_account_history_; }
    inline const get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>& get_account_history() const { return response_.get_account_history_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_response_)
      {
        case FieldNumber::RESERVED:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.reserved_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RESERVED), buffer, false);
          }
          break;

        case FieldNumber::ERROR:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.error_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ERROR), buffer, false);
          }
          break;

        case FieldNumber::GET_ACCOUNT_HISTORY:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_account_history_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_ACCOUNT_HISTORY), buffer, false);
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
          case FieldNumber::RESERVED:
            return_value = deserialize_response(FieldNumber::RESERVED, response_.reserved_, buffer, wire_type);

            break;

          case FieldNumber::ERROR:
            return_value = deserialize_response(FieldNumber::ERROR, response_.error_, buffer, wire_type);

            break;

          case FieldNumber::GET_ACCOUNT_HISTORY:
            return_value = deserialize_response(FieldNumber::GET_ACCOUNT_HISTORY, response_.get_account_history_, buffer, wire_type);

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
      clear_response();

    }

    private:



      FieldNumber which_response_ = FieldNumber::NOT_SET;
      union response
      {
        response() {}
        ~response() {}
        reserved_rpc reserved_;
        error_response<error_message_LENGTH, error_data_LENGTH> error_;
        get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH> get_account_history_;
      };
      response response_;

      void init_response(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_response_)
        {
          // First delete the old object in the oneof.
          clear_response();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::RESERVED:
            new(&response_.reserved_) reserved_rpc;
            which_response_ = FieldNumber::RESERVED;
            break;

          case FieldNumber::ERROR:
            new(&response_.error_) error_response<error_message_LENGTH, error_data_LENGTH>;
            which_response_ = FieldNumber::ERROR;
            break;

          case FieldNumber::GET_ACCOUNT_HISTORY:
            new(&response_.get_account_history_) get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>;
            which_response_ = FieldNumber::GET_ACCOUNT_HISTORY;
            break;

          default:
            break;
         }

         which_response_ = field_id;
      }

      void clear_response()
      {
        switch(which_response_)
        {
          case FieldNumber::RESERVED:
            response_.reserved_.~reserved_rpc(); // NOSONAR Unions require this.
            break;
          case FieldNumber::ERROR:
            response_.error_.~error_response<error_message_LENGTH, error_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_ACCOUNT_HISTORY:
            response_.get_account_history_.~get_account_history_response<get_account_history_values_REP_LENGTH, get_account_history_values_trx_transaction_id_LENGTH, get_account_history_values_trx_transaction_header_chain_id_LENGTH, get_account_history_values_trx_transaction_header_nonce_LENGTH, get_account_history_values_trx_transaction_header_operation_merkle_root_LENGTH, get_account_history_values_trx_transaction_header_payer_LENGTH, get_account_history_values_trx_transaction_header_payee_LENGTH, get_account_history_values_trx_transaction_operations_REP_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_bytecode_LENGTH, get_account_history_values_trx_transaction_operations_upload_contract_abi_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_call_contract_args_LENGTH, get_account_history_values_trx_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_account_history_values_trx_transaction_operations_set_system_contract_contract_id_LENGTH, get_account_history_values_trx_transaction_signatures_REP_LENGTH, get_account_history_values_trx_transaction_signatures_LENGTH, get_account_history_values_trx_receipt_id_LENGTH, get_account_history_values_trx_receipt_payer_LENGTH, get_account_history_values_trx_receipt_events_REP_LENGTH, get_account_history_values_trx_receipt_events_source_LENGTH, get_account_history_values_trx_receipt_events_name_LENGTH, get_account_history_values_trx_receipt_events_data_LENGTH, get_account_history_values_trx_receipt_events_impacted_REP_LENGTH, get_account_history_values_trx_receipt_events_impacted_LENGTH, get_account_history_values_trx_receipt_logs_REP_LENGTH, get_account_history_values_trx_receipt_logs_LENGTH, get_account_history_values_block_header_previous_LENGTH, get_account_history_values_block_header_previous_state_merkle_root_LENGTH, get_account_history_values_block_header_transaction_merkle_root_LENGTH, get_account_history_values_block_header_signer_LENGTH, get_account_history_values_block_header_approved_proposals_REP_LENGTH, get_account_history_values_block_header_approved_proposals_LENGTH, get_account_history_values_block_receipt_id_LENGTH, get_account_history_values_block_receipt_state_merkle_root_LENGTH, get_account_history_values_block_receipt_events_REP_LENGTH, get_account_history_values_block_receipt_events_source_LENGTH, get_account_history_values_block_receipt_events_name_LENGTH, get_account_history_values_block_receipt_events_data_LENGTH, get_account_history_values_block_receipt_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_id_LENGTH, get_account_history_values_block_receipt_transaction_receipts_payer_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_source_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_name_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_data_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_events_impacted_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_REP_LENGTH, get_account_history_values_block_receipt_transaction_receipts_logs_LENGTH, get_account_history_values_block_receipt_logs_REP_LENGTH, get_account_history_values_block_receipt_logs_LENGTH>(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_response_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_response(const FieldNumber field_id, ::EmbeddedProto::Field& field,
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        if(field_id != which_response_)
        {
          init_response(field_id);
        }
        ::EmbeddedProto::Error return_value = field.deserialize_check_type(buffer, wire_type);
        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_response();
        }
        return return_value;
      }

};

} // End of namespace account_history
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_ACCOUNT_HISTORY_ACCOUNT_HISTORY_RPC_H