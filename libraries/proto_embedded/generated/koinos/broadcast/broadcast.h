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
uint32_t receipt_logs_LENGTH>
class transaction_accepted final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_accepted() = default;
    transaction_accepted(const transaction_accepted& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
      set_height(rhs.get_height());
    }

    transaction_accepted(const transaction_accepted&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
      set_height(rhs.get_height());
    }

    ~transaction_accepted() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      RECEIPT = 2,
      HEIGHT = 3
    };

    transaction_accepted& operator=(const transaction_accepted& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
      set_height(rhs.get_height());
      return *this;
    }

    transaction_accepted& operator=(const transaction_accepted&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_receipt(rhs.get_receipt());
      set_height(rhs.get_height());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& transaction() const { return transaction_; }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& value) { receipt_ = value; }
    inline void set_receipt(const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>&& value) { receipt_ = value; }
    inline protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& mutable_receipt() { return receipt_; }
    inline const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& get_receipt() const { return receipt_; }
    inline const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& receipt() const { return receipt_; }

    inline void clear_height() { height_.clear(); }
    inline void set_height(const EmbeddedProto::uint64& value) { height_ = value; }
    inline void set_height(const EmbeddedProto::uint64&& value) { height_ = value; }
    inline EmbeddedProto::uint64& mutable_height() { return height_; }
    inline const EmbeddedProto::uint64& get_height() const { return height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE height() const { return height_.get(); }


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

      if((0U != height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEIGHT), buffer, false);
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

          case FieldNumber::HEIGHT:
            return_value = height_.deserialize_check_type(buffer, wire_type);
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
      clear_height();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH> transaction_;
      protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH> receipt_;
      EmbeddedProto::uint64 height_ = 0U;

};

template<uint32_t id_LENGTH>
class transaction_failed final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_failed() = default;
    transaction_failed(const transaction_failed& rhs )
    {
      set_id(rhs.get_id());
    }

    transaction_failed(const transaction_failed&& rhs ) noexcept
    {
      set_id(rhs.get_id());
    }

    ~transaction_failed() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1
    };

    transaction_failed& operator=(const transaction_failed& rhs)
    {
      set_id(rhs.get_id());
      return *this;
    }

    transaction_failed& operator=(const transaction_failed&& rhs) noexcept
    {
      set_id(rhs.get_id());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
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
      clear_id();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;

};

template<uint32_t block_id_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_header_previous_state_merkle_root_LENGTH, 
uint32_t block_header_transaction_merkle_root_LENGTH, 
uint32_t block_header_signer_LENGTH, 
uint32_t block_transactions_REP_LENGTH, 
uint32_t block_transactions_id_LENGTH, 
uint32_t block_transactions_header_operation_merkle_root_LENGTH, 
uint32_t block_transactions_header_payer_LENGTH, 
uint32_t block_transactions_header_payee_LENGTH, 
uint32_t block_transactions_operations_REP_LENGTH, 
uint32_t block_transactions_operations_upload_contract_contract_id_LENGTH, 
uint32_t block_transactions_operations_upload_contract_bytecode_LENGTH, 
uint32_t block_transactions_operations_upload_contract_abi_LENGTH, 
uint32_t block_transactions_operations_call_contract_contract_id_LENGTH, 
uint32_t block_transactions_operations_call_contract_args_LENGTH, 
uint32_t block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t block_transactions_operations_set_system_contract_contract_id_LENGTH, 
uint32_t block_transactions_signatures_REP_LENGTH, 
uint32_t block_transactions_signatures_LENGTH, 
uint32_t block_signature_LENGTH, 
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
uint32_t receipt_logs_REP_LENGTH, 
uint32_t receipt_logs_LENGTH>
class block_accepted final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_accepted() = default;
    block_accepted(const block_accepted& rhs )
    {
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
    }

    block_accepted(const block_accepted&& rhs ) noexcept
    {
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
    }

    ~block_accepted() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK = 1,
      RECEIPT = 2
    };

    block_accepted& operator=(const block_accepted& rhs)
    {
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    block_accepted& operator=(const block_accepted&& rhs) noexcept
    {
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& block() const { return block_; }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& value) { receipt_ = value; }
    inline void set_receipt(const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>&& value) { receipt_ = value; }
    inline protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& mutable_receipt() { return receipt_; }
    inline const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& get_receipt() const { return receipt_; }
    inline const protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH>& receipt() const { return receipt_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK), buffer, false);
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
          case FieldNumber::BLOCK:
            return_value = block_.deserialize_check_type(buffer, wire_type);
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
      clear_block();
      clear_receipt();

    }

    private:


      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH> block_;
      protocol::block_receipt<receipt_id_LENGTH, receipt_state_merkle_root_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH, receipt_transaction_receipts_logs_REP_LENGTH, receipt_transaction_receipts_logs_LENGTH, receipt_logs_REP_LENGTH, receipt_logs_LENGTH> receipt_;

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