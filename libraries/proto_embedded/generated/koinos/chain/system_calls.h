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
#ifndef KOINOS_CHAIN_SYSTEM_CALLS_H
#define KOINOS_CHAIN_SYSTEM_CALLS_H

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
#include <koinos/chain/authority.h>
#include <koinos/chain/chain.h>
#include <koinos/chain/value.h>

namespace koinos {
namespace chain {

enum class system_authorization_type : int32_t
{
  set_system_contract = 0,
  set_system_call = 1
};

class nop_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    nop_arguments() = default;
    nop_arguments(const nop_arguments& rhs )
    {
    }

    nop_arguments(const nop_arguments&& rhs ) noexcept
    {
    }

    ~nop_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    nop_arguments& operator=(const nop_arguments& rhs)
    {
      return *this;
    }

    nop_arguments& operator=(const nop_arguments&& rhs) noexcept
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

class nop_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    nop_result() = default;
    nop_result(const nop_result& rhs )
    {
    }

    nop_result(const nop_result&& rhs ) noexcept
    {
    }

    ~nop_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    nop_result& operator=(const nop_result& rhs)
    {
      return *this;
    }

    nop_result& operator=(const nop_result&& rhs) noexcept
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

template<uint32_t block_id_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_header_previous_state_merkle_root_LENGTH, 
uint32_t block_header_transaction_merkle_root_LENGTH, 
uint32_t block_header_signer_LENGTH, 
uint32_t block_header_approved_proposals_REP_LENGTH, 
uint32_t block_header_approved_proposals_LENGTH, 
uint32_t block_transactions_REP_LENGTH, 
uint32_t block_transactions_id_LENGTH, 
uint32_t block_transactions_header_chain_id_LENGTH, 
uint32_t block_transactions_header_nonce_LENGTH, 
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
uint32_t block_signature_LENGTH>
class apply_block_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_block_arguments() = default;
    apply_block_arguments(const apply_block_arguments& rhs )
    {
      set_block(rhs.get_block());
    }

    apply_block_arguments(const apply_block_arguments&& rhs ) noexcept
    {
      set_block(rhs.get_block());
    }

    ~apply_block_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK = 1
    };

    apply_block_arguments& operator=(const apply_block_arguments& rhs)
    {
      set_block(rhs.get_block());
      return *this;
    }

    apply_block_arguments& operator=(const apply_block_arguments&& rhs) noexcept
    {
      set_block(rhs.get_block());
      return *this;
    }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_chain_id_LENGTH, block_transactions_header_nonce_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_chain_id_LENGTH, block_transactions_header_nonce_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_chain_id_LENGTH, block_transactions_header_nonce_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_chain_id_LENGTH, block_transactions_header_nonce_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_chain_id_LENGTH, block_transactions_header_nonce_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH>& block() const { return block_; }


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


      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_header_previous_state_merkle_root_LENGTH, block_header_transaction_merkle_root_LENGTH, block_header_signer_LENGTH, block_header_approved_proposals_REP_LENGTH, block_header_approved_proposals_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_header_chain_id_LENGTH, block_transactions_header_nonce_LENGTH, block_transactions_header_operation_merkle_root_LENGTH, block_transactions_header_payer_LENGTH, block_transactions_header_payee_LENGTH, block_transactions_operations_REP_LENGTH, block_transactions_operations_upload_contract_contract_id_LENGTH, block_transactions_operations_upload_contract_bytecode_LENGTH, block_transactions_operations_upload_contract_abi_LENGTH, block_transactions_operations_call_contract_contract_id_LENGTH, block_transactions_operations_call_contract_args_LENGTH, block_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, block_transactions_operations_set_system_contract_contract_id_LENGTH, block_transactions_signatures_REP_LENGTH, block_transactions_signatures_LENGTH, block_signature_LENGTH> block_;

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
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& transaction() const { return transaction_; }


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


      protocol::transaction<transaction_id_LENGTH, transaction_header_chain_id_LENGTH, transaction_header_nonce_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH> transaction_;

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
uint32_t op_bytecode_LENGTH, 
uint32_t op_abi_LENGTH>
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
    inline void set_op(const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH, op_abi_LENGTH>& value) { op_ = value; }
    inline void set_op(const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH, op_abi_LENGTH>&& value) { op_ = value; }
    inline protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH, op_abi_LENGTH>& mutable_op() { return op_; }
    inline const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH, op_abi_LENGTH>& get_op() const { return op_; }
    inline const protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH, op_abi_LENGTH>& op() const { return op_; }


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


      protocol::upload_contract_operation<op_contract_id_LENGTH, op_bytecode_LENGTH, op_abi_LENGTH> op_;

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

template<uint32_t op_contract_id_LENGTH>
class apply_set_system_contract_operation_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_set_system_contract_operation_arguments() = default;
    apply_set_system_contract_operation_arguments(const apply_set_system_contract_operation_arguments& rhs )
    {
      set_op(rhs.get_op());
    }

    apply_set_system_contract_operation_arguments(const apply_set_system_contract_operation_arguments&& rhs ) noexcept
    {
      set_op(rhs.get_op());
    }

    ~apply_set_system_contract_operation_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      OP = 1
    };

    apply_set_system_contract_operation_arguments& operator=(const apply_set_system_contract_operation_arguments& rhs)
    {
      set_op(rhs.get_op());
      return *this;
    }

    apply_set_system_contract_operation_arguments& operator=(const apply_set_system_contract_operation_arguments&& rhs) noexcept
    {
      set_op(rhs.get_op());
      return *this;
    }

    inline void clear_op() { op_.clear(); }
    inline void set_op(const protocol::set_system_contract_operation<op_contract_id_LENGTH>& value) { op_ = value; }
    inline void set_op(const protocol::set_system_contract_operation<op_contract_id_LENGTH>&& value) { op_ = value; }
    inline protocol::set_system_contract_operation<op_contract_id_LENGTH>& mutable_op() { return op_; }
    inline const protocol::set_system_contract_operation<op_contract_id_LENGTH>& get_op() const { return op_; }
    inline const protocol::set_system_contract_operation<op_contract_id_LENGTH>& op() const { return op_; }


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


      protocol::set_system_contract_operation<op_contract_id_LENGTH> op_;

};

class apply_set_system_contract_operation_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    apply_set_system_contract_operation_result() = default;
    apply_set_system_contract_operation_result(const apply_set_system_contract_operation_result& rhs )
    {
    }

    apply_set_system_contract_operation_result(const apply_set_system_contract_operation_result&& rhs ) noexcept
    {
    }

    ~apply_set_system_contract_operation_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    apply_set_system_contract_operation_result& operator=(const apply_set_system_contract_operation_result& rhs)
    {
      return *this;
    }

    apply_set_system_contract_operation_result& operator=(const apply_set_system_contract_operation_result&& rhs) noexcept
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

class pre_block_callback_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    pre_block_callback_arguments() = default;
    pre_block_callback_arguments(const pre_block_callback_arguments& rhs )
    {
    }

    pre_block_callback_arguments(const pre_block_callback_arguments&& rhs ) noexcept
    {
    }

    ~pre_block_callback_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    pre_block_callback_arguments& operator=(const pre_block_callback_arguments& rhs)
    {
      return *this;
    }

    pre_block_callback_arguments& operator=(const pre_block_callback_arguments&& rhs) noexcept
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

class pre_block_callback_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    pre_block_callback_result() = default;
    pre_block_callback_result(const pre_block_callback_result& rhs )
    {
    }

    pre_block_callback_result(const pre_block_callback_result&& rhs ) noexcept
    {
    }

    ~pre_block_callback_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    pre_block_callback_result& operator=(const pre_block_callback_result& rhs)
    {
      return *this;
    }

    pre_block_callback_result& operator=(const pre_block_callback_result&& rhs) noexcept
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

class post_block_callback_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    post_block_callback_arguments() = default;
    post_block_callback_arguments(const post_block_callback_arguments& rhs )
    {
    }

    post_block_callback_arguments(const post_block_callback_arguments&& rhs ) noexcept
    {
    }

    ~post_block_callback_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    post_block_callback_arguments& operator=(const post_block_callback_arguments& rhs)
    {
      return *this;
    }

    post_block_callback_arguments& operator=(const post_block_callback_arguments&& rhs) noexcept
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

class post_block_callback_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    post_block_callback_result() = default;
    post_block_callback_result(const post_block_callback_result& rhs )
    {
    }

    post_block_callback_result(const post_block_callback_result&& rhs ) noexcept
    {
    }

    ~post_block_callback_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    post_block_callback_result& operator=(const post_block_callback_result& rhs)
    {
      return *this;
    }

    post_block_callback_result& operator=(const post_block_callback_result&& rhs) noexcept
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

class pre_transaction_callback_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    pre_transaction_callback_arguments() = default;
    pre_transaction_callback_arguments(const pre_transaction_callback_arguments& rhs )
    {
    }

    pre_transaction_callback_arguments(const pre_transaction_callback_arguments&& rhs ) noexcept
    {
    }

    ~pre_transaction_callback_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    pre_transaction_callback_arguments& operator=(const pre_transaction_callback_arguments& rhs)
    {
      return *this;
    }

    pre_transaction_callback_arguments& operator=(const pre_transaction_callback_arguments&& rhs) noexcept
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

class pre_transaction_callback_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    pre_transaction_callback_result() = default;
    pre_transaction_callback_result(const pre_transaction_callback_result& rhs )
    {
    }

    pre_transaction_callback_result(const pre_transaction_callback_result&& rhs ) noexcept
    {
    }

    ~pre_transaction_callback_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    pre_transaction_callback_result& operator=(const pre_transaction_callback_result& rhs)
    {
      return *this;
    }

    pre_transaction_callback_result& operator=(const pre_transaction_callback_result&& rhs) noexcept
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

class post_transaction_callback_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    post_transaction_callback_arguments() = default;
    post_transaction_callback_arguments(const post_transaction_callback_arguments& rhs )
    {
    }

    post_transaction_callback_arguments(const post_transaction_callback_arguments&& rhs ) noexcept
    {
    }

    ~post_transaction_callback_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    post_transaction_callback_arguments& operator=(const post_transaction_callback_arguments& rhs)
    {
      return *this;
    }

    post_transaction_callback_arguments& operator=(const post_transaction_callback_arguments&& rhs) noexcept
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

class post_transaction_callback_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    post_transaction_callback_result() = default;
    post_transaction_callback_result(const post_transaction_callback_result& rhs )
    {
    }

    post_transaction_callback_result(const post_transaction_callback_result&& rhs ) noexcept
    {
    }

    ~post_transaction_callback_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    post_transaction_callback_result& operator=(const post_transaction_callback_result& rhs)
    {
      return *this;
    }

    post_transaction_callback_result& operator=(const post_transaction_callback_result&& rhs) noexcept
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

class get_chain_id_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_chain_id_arguments() = default;
    get_chain_id_arguments(const get_chain_id_arguments& rhs )
    {
    }

    get_chain_id_arguments(const get_chain_id_arguments&& rhs ) noexcept
    {
    }

    ~get_chain_id_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_chain_id_arguments& operator=(const get_chain_id_arguments& rhs)
    {
      return *this;
    }

    get_chain_id_arguments& operator=(const get_chain_id_arguments&& rhs) noexcept
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
class get_chain_id_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_chain_id_result() = default;
    get_chain_id_result(const get_chain_id_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_chain_id_result(const get_chain_id_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_chain_id_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_chain_id_result& operator=(const get_chain_id_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_chain_id_result& operator=(const get_chain_id_result&& rhs) noexcept
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

template<uint32_t digest_LENGTH, 
uint32_t header_previous_LENGTH, 
uint32_t header_previous_state_merkle_root_LENGTH, 
uint32_t header_transaction_merkle_root_LENGTH, 
uint32_t header_signer_LENGTH, 
uint32_t header_approved_proposals_REP_LENGTH, 
uint32_t header_approved_proposals_LENGTH, 
uint32_t signature_LENGTH>
class process_block_signature_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    process_block_signature_arguments() = default;
    process_block_signature_arguments(const process_block_signature_arguments& rhs )
    {
      set_digest(rhs.get_digest());
      set_header(rhs.get_header());
      set_signature(rhs.get_signature());
    }

    process_block_signature_arguments(const process_block_signature_arguments&& rhs ) noexcept
    {
      set_digest(rhs.get_digest());
      set_header(rhs.get_header());
      set_signature(rhs.get_signature());
    }

    ~process_block_signature_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DIGEST = 1,
      HEADER = 2,
      SIGNATURE = 3
    };

    process_block_signature_arguments& operator=(const process_block_signature_arguments& rhs)
    {
      set_digest(rhs.get_digest());
      set_header(rhs.get_header());
      set_signature(rhs.get_signature());
      return *this;
    }

    process_block_signature_arguments& operator=(const process_block_signature_arguments&& rhs) noexcept
    {
      set_digest(rhs.get_digest());
      set_header(rhs.get_header());
      set_signature(rhs.get_signature());
      return *this;
    }

    inline void clear_digest() { digest_.clear(); }
    inline ::EmbeddedProto::FieldBytes<digest_LENGTH>& mutable_digest() { return digest_; }
    inline void set_digest(const ::EmbeddedProto::FieldBytes<digest_LENGTH>& rhs) { digest_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<digest_LENGTH>& get_digest() const { return digest_; }
    inline const uint8_t* digest() const { return digest_.get_const(); }

    inline void clear_header() { header_.clear(); }
    inline void set_header(const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& value) { header_ = value; }
    inline void set_header(const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>&& value) { header_ = value; }
    inline protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& mutable_header() { return header_; }
    inline const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& get_header() const { return header_; }
    inline const protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH>& header() const { return header_; }

    inline void clear_signature() { signature_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_LENGTH>& mutable_signature() { return signature_; }
    inline void set_signature(const ::EmbeddedProto::FieldBytes<signature_LENGTH>& rhs) { signature_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_LENGTH>& get_signature() const { return signature_; }
    inline const uint8_t* signature() const { return signature_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = digest_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DIGEST), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = header_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEADER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE), buffer, false);
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

          case FieldNumber::HEADER:
            return_value = header_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNATURE:
            return_value = signature_.deserialize_check_type(buffer, wire_type);
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
      clear_header();
      clear_signature();

    }

    private:


      ::EmbeddedProto::FieldBytes<digest_LENGTH> digest_;
      protocol::block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH, header_transaction_merkle_root_LENGTH, header_signer_LENGTH, header_approved_proposals_REP_LENGTH, header_approved_proposals_LENGTH> header_;
      ::EmbeddedProto::FieldBytes<signature_LENGTH> signature_;

};

class process_block_signature_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    process_block_signature_result() = default;
    process_block_signature_result(const process_block_signature_result& rhs )
    {
      set_value(rhs.get_value());
    }

    process_block_signature_result(const process_block_signature_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~process_block_signature_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    process_block_signature_result& operator=(const process_block_signature_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    process_block_signature_result& operator=(const process_block_signature_result&& rhs) noexcept
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

class get_transaction_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_arguments() = default;
    get_transaction_arguments(const get_transaction_arguments& rhs )
    {
    }

    get_transaction_arguments(const get_transaction_arguments&& rhs ) noexcept
    {
    }

    ~get_transaction_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_transaction_arguments& operator=(const get_transaction_arguments& rhs)
    {
      return *this;
    }

    get_transaction_arguments& operator=(const get_transaction_arguments&& rhs) noexcept
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

template<uint32_t value_id_LENGTH, 
uint32_t value_header_chain_id_LENGTH, 
uint32_t value_header_nonce_LENGTH, 
uint32_t value_header_operation_merkle_root_LENGTH, 
uint32_t value_header_payer_LENGTH, 
uint32_t value_header_payee_LENGTH, 
uint32_t value_operations_REP_LENGTH, 
uint32_t value_operations_upload_contract_contract_id_LENGTH, 
uint32_t value_operations_upload_contract_bytecode_LENGTH, 
uint32_t value_operations_upload_contract_abi_LENGTH, 
uint32_t value_operations_call_contract_contract_id_LENGTH, 
uint32_t value_operations_call_contract_args_LENGTH, 
uint32_t value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t value_operations_set_system_contract_contract_id_LENGTH, 
uint32_t value_signatures_REP_LENGTH, 
uint32_t value_signatures_LENGTH>
class get_transaction_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_result() = default;
    get_transaction_result(const get_transaction_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_transaction_result(const get_transaction_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_transaction_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_transaction_result& operator=(const get_transaction_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_transaction_result& operator=(const get_transaction_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const protocol::transaction<value_id_LENGTH, value_header_chain_id_LENGTH, value_header_nonce_LENGTH, value_header_operation_merkle_root_LENGTH, value_header_payer_LENGTH, value_header_payee_LENGTH, value_operations_REP_LENGTH, value_operations_upload_contract_contract_id_LENGTH, value_operations_upload_contract_bytecode_LENGTH, value_operations_upload_contract_abi_LENGTH, value_operations_call_contract_contract_id_LENGTH, value_operations_call_contract_args_LENGTH, value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_operations_set_system_contract_contract_id_LENGTH, value_signatures_REP_LENGTH, value_signatures_LENGTH>& value) { value_ = value; }
    inline void set_value(const protocol::transaction<value_id_LENGTH, value_header_chain_id_LENGTH, value_header_nonce_LENGTH, value_header_operation_merkle_root_LENGTH, value_header_payer_LENGTH, value_header_payee_LENGTH, value_operations_REP_LENGTH, value_operations_upload_contract_contract_id_LENGTH, value_operations_upload_contract_bytecode_LENGTH, value_operations_upload_contract_abi_LENGTH, value_operations_call_contract_contract_id_LENGTH, value_operations_call_contract_args_LENGTH, value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_operations_set_system_contract_contract_id_LENGTH, value_signatures_REP_LENGTH, value_signatures_LENGTH>&& value) { value_ = value; }
    inline protocol::transaction<value_id_LENGTH, value_header_chain_id_LENGTH, value_header_nonce_LENGTH, value_header_operation_merkle_root_LENGTH, value_header_payer_LENGTH, value_header_payee_LENGTH, value_operations_REP_LENGTH, value_operations_upload_contract_contract_id_LENGTH, value_operations_upload_contract_bytecode_LENGTH, value_operations_upload_contract_abi_LENGTH, value_operations_call_contract_contract_id_LENGTH, value_operations_call_contract_args_LENGTH, value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_operations_set_system_contract_contract_id_LENGTH, value_signatures_REP_LENGTH, value_signatures_LENGTH>& mutable_value() { return value_; }
    inline const protocol::transaction<value_id_LENGTH, value_header_chain_id_LENGTH, value_header_nonce_LENGTH, value_header_operation_merkle_root_LENGTH, value_header_payer_LENGTH, value_header_payee_LENGTH, value_operations_REP_LENGTH, value_operations_upload_contract_contract_id_LENGTH, value_operations_upload_contract_bytecode_LENGTH, value_operations_upload_contract_abi_LENGTH, value_operations_call_contract_contract_id_LENGTH, value_operations_call_contract_args_LENGTH, value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_operations_set_system_contract_contract_id_LENGTH, value_signatures_REP_LENGTH, value_signatures_LENGTH>& get_value() const { return value_; }
    inline const protocol::transaction<value_id_LENGTH, value_header_chain_id_LENGTH, value_header_nonce_LENGTH, value_header_operation_merkle_root_LENGTH, value_header_payer_LENGTH, value_header_payee_LENGTH, value_operations_REP_LENGTH, value_operations_upload_contract_contract_id_LENGTH, value_operations_upload_contract_bytecode_LENGTH, value_operations_upload_contract_abi_LENGTH, value_operations_call_contract_contract_id_LENGTH, value_operations_call_contract_args_LENGTH, value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_operations_set_system_contract_contract_id_LENGTH, value_signatures_REP_LENGTH, value_signatures_LENGTH>& value() const { return value_; }


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


      protocol::transaction<value_id_LENGTH, value_header_chain_id_LENGTH, value_header_nonce_LENGTH, value_header_operation_merkle_root_LENGTH, value_header_payer_LENGTH, value_header_payee_LENGTH, value_operations_REP_LENGTH, value_operations_upload_contract_contract_id_LENGTH, value_operations_upload_contract_bytecode_LENGTH, value_operations_upload_contract_abi_LENGTH, value_operations_call_contract_contract_id_LENGTH, value_operations_call_contract_args_LENGTH, value_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_operations_set_system_contract_contract_id_LENGTH, value_signatures_REP_LENGTH, value_signatures_LENGTH> value_;

};

template<uint32_t field_LENGTH>
class get_transaction_field_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_field_arguments() = default;
    get_transaction_field_arguments(const get_transaction_field_arguments& rhs )
    {
      set_field(rhs.get_field());
    }

    get_transaction_field_arguments(const get_transaction_field_arguments&& rhs ) noexcept
    {
      set_field(rhs.get_field());
    }

    ~get_transaction_field_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      FIELD = 1
    };

    get_transaction_field_arguments& operator=(const get_transaction_field_arguments& rhs)
    {
      set_field(rhs.get_field());
      return *this;
    }

    get_transaction_field_arguments& operator=(const get_transaction_field_arguments&& rhs) noexcept
    {
      set_field(rhs.get_field());
      return *this;
    }

    inline void clear_field() { field_.clear(); }
    inline ::EmbeddedProto::FieldString<field_LENGTH>& mutable_field() { return field_; }
    inline void set_field(const ::EmbeddedProto::FieldString<field_LENGTH>& rhs) { field_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<field_LENGTH>& get_field() const { return field_; }
    inline const char* field() const { return field_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = field_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FIELD), buffer, false);
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
          case FieldNumber::FIELD:
            return_value = field_.deserialize_check_type(buffer, wire_type);
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
      clear_field();

    }

    private:


      ::EmbeddedProto::FieldString<field_LENGTH> field_;

};

template<uint32_t value_string_value_LENGTH, 
uint32_t value_bytes_value_LENGTH>
class get_transaction_field_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transaction_field_result() = default;
    get_transaction_field_result(const get_transaction_field_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_transaction_field_result(const get_transaction_field_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_transaction_field_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_transaction_field_result& operator=(const get_transaction_field_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_transaction_field_result& operator=(const get_transaction_field_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& value) { value_ = value; }
    inline void set_value(const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>&& value) { value_ = value; }
    inline value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& mutable_value() { return value_; }
    inline const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& get_value() const { return value_; }
    inline const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& value() const { return value_; }


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


      value_type<value_string_value_LENGTH, value_bytes_value_LENGTH> value_;

};

class get_block_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_block_arguments() = default;
    get_block_arguments(const get_block_arguments& rhs )
    {
    }

    get_block_arguments(const get_block_arguments&& rhs ) noexcept
    {
    }

    ~get_block_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_block_arguments& operator=(const get_block_arguments& rhs)
    {
      return *this;
    }

    get_block_arguments& operator=(const get_block_arguments&& rhs) noexcept
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

template<uint32_t value_id_LENGTH, 
uint32_t value_header_previous_LENGTH, 
uint32_t value_header_previous_state_merkle_root_LENGTH, 
uint32_t value_header_transaction_merkle_root_LENGTH, 
uint32_t value_header_signer_LENGTH, 
uint32_t value_header_approved_proposals_REP_LENGTH, 
uint32_t value_header_approved_proposals_LENGTH, 
uint32_t value_transactions_REP_LENGTH, 
uint32_t value_transactions_id_LENGTH, 
uint32_t value_transactions_header_chain_id_LENGTH, 
uint32_t value_transactions_header_nonce_LENGTH, 
uint32_t value_transactions_header_operation_merkle_root_LENGTH, 
uint32_t value_transactions_header_payer_LENGTH, 
uint32_t value_transactions_header_payee_LENGTH, 
uint32_t value_transactions_operations_REP_LENGTH, 
uint32_t value_transactions_operations_upload_contract_contract_id_LENGTH, 
uint32_t value_transactions_operations_upload_contract_bytecode_LENGTH, 
uint32_t value_transactions_operations_upload_contract_abi_LENGTH, 
uint32_t value_transactions_operations_call_contract_contract_id_LENGTH, 
uint32_t value_transactions_operations_call_contract_args_LENGTH, 
uint32_t value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t value_transactions_operations_set_system_contract_contract_id_LENGTH, 
uint32_t value_transactions_signatures_REP_LENGTH, 
uint32_t value_transactions_signatures_LENGTH, 
uint32_t value_signature_LENGTH>
class get_block_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_block_result() = default;
    get_block_result(const get_block_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_block_result(const get_block_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_block_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_block_result& operator=(const get_block_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_block_result& operator=(const get_block_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const protocol::block<value_id_LENGTH, value_header_previous_LENGTH, value_header_previous_state_merkle_root_LENGTH, value_header_transaction_merkle_root_LENGTH, value_header_signer_LENGTH, value_header_approved_proposals_REP_LENGTH, value_header_approved_proposals_LENGTH, value_transactions_REP_LENGTH, value_transactions_id_LENGTH, value_transactions_header_chain_id_LENGTH, value_transactions_header_nonce_LENGTH, value_transactions_header_operation_merkle_root_LENGTH, value_transactions_header_payer_LENGTH, value_transactions_header_payee_LENGTH, value_transactions_operations_REP_LENGTH, value_transactions_operations_upload_contract_contract_id_LENGTH, value_transactions_operations_upload_contract_bytecode_LENGTH, value_transactions_operations_upload_contract_abi_LENGTH, value_transactions_operations_call_contract_contract_id_LENGTH, value_transactions_operations_call_contract_args_LENGTH, value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_transactions_operations_set_system_contract_contract_id_LENGTH, value_transactions_signatures_REP_LENGTH, value_transactions_signatures_LENGTH, value_signature_LENGTH>& value) { value_ = value; }
    inline void set_value(const protocol::block<value_id_LENGTH, value_header_previous_LENGTH, value_header_previous_state_merkle_root_LENGTH, value_header_transaction_merkle_root_LENGTH, value_header_signer_LENGTH, value_header_approved_proposals_REP_LENGTH, value_header_approved_proposals_LENGTH, value_transactions_REP_LENGTH, value_transactions_id_LENGTH, value_transactions_header_chain_id_LENGTH, value_transactions_header_nonce_LENGTH, value_transactions_header_operation_merkle_root_LENGTH, value_transactions_header_payer_LENGTH, value_transactions_header_payee_LENGTH, value_transactions_operations_REP_LENGTH, value_transactions_operations_upload_contract_contract_id_LENGTH, value_transactions_operations_upload_contract_bytecode_LENGTH, value_transactions_operations_upload_contract_abi_LENGTH, value_transactions_operations_call_contract_contract_id_LENGTH, value_transactions_operations_call_contract_args_LENGTH, value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_transactions_operations_set_system_contract_contract_id_LENGTH, value_transactions_signatures_REP_LENGTH, value_transactions_signatures_LENGTH, value_signature_LENGTH>&& value) { value_ = value; }
    inline protocol::block<value_id_LENGTH, value_header_previous_LENGTH, value_header_previous_state_merkle_root_LENGTH, value_header_transaction_merkle_root_LENGTH, value_header_signer_LENGTH, value_header_approved_proposals_REP_LENGTH, value_header_approved_proposals_LENGTH, value_transactions_REP_LENGTH, value_transactions_id_LENGTH, value_transactions_header_chain_id_LENGTH, value_transactions_header_nonce_LENGTH, value_transactions_header_operation_merkle_root_LENGTH, value_transactions_header_payer_LENGTH, value_transactions_header_payee_LENGTH, value_transactions_operations_REP_LENGTH, value_transactions_operations_upload_contract_contract_id_LENGTH, value_transactions_operations_upload_contract_bytecode_LENGTH, value_transactions_operations_upload_contract_abi_LENGTH, value_transactions_operations_call_contract_contract_id_LENGTH, value_transactions_operations_call_contract_args_LENGTH, value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_transactions_operations_set_system_contract_contract_id_LENGTH, value_transactions_signatures_REP_LENGTH, value_transactions_signatures_LENGTH, value_signature_LENGTH>& mutable_value() { return value_; }
    inline const protocol::block<value_id_LENGTH, value_header_previous_LENGTH, value_header_previous_state_merkle_root_LENGTH, value_header_transaction_merkle_root_LENGTH, value_header_signer_LENGTH, value_header_approved_proposals_REP_LENGTH, value_header_approved_proposals_LENGTH, value_transactions_REP_LENGTH, value_transactions_id_LENGTH, value_transactions_header_chain_id_LENGTH, value_transactions_header_nonce_LENGTH, value_transactions_header_operation_merkle_root_LENGTH, value_transactions_header_payer_LENGTH, value_transactions_header_payee_LENGTH, value_transactions_operations_REP_LENGTH, value_transactions_operations_upload_contract_contract_id_LENGTH, value_transactions_operations_upload_contract_bytecode_LENGTH, value_transactions_operations_upload_contract_abi_LENGTH, value_transactions_operations_call_contract_contract_id_LENGTH, value_transactions_operations_call_contract_args_LENGTH, value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_transactions_operations_set_system_contract_contract_id_LENGTH, value_transactions_signatures_REP_LENGTH, value_transactions_signatures_LENGTH, value_signature_LENGTH>& get_value() const { return value_; }
    inline const protocol::block<value_id_LENGTH, value_header_previous_LENGTH, value_header_previous_state_merkle_root_LENGTH, value_header_transaction_merkle_root_LENGTH, value_header_signer_LENGTH, value_header_approved_proposals_REP_LENGTH, value_header_approved_proposals_LENGTH, value_transactions_REP_LENGTH, value_transactions_id_LENGTH, value_transactions_header_chain_id_LENGTH, value_transactions_header_nonce_LENGTH, value_transactions_header_operation_merkle_root_LENGTH, value_transactions_header_payer_LENGTH, value_transactions_header_payee_LENGTH, value_transactions_operations_REP_LENGTH, value_transactions_operations_upload_contract_contract_id_LENGTH, value_transactions_operations_upload_contract_bytecode_LENGTH, value_transactions_operations_upload_contract_abi_LENGTH, value_transactions_operations_call_contract_contract_id_LENGTH, value_transactions_operations_call_contract_args_LENGTH, value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_transactions_operations_set_system_contract_contract_id_LENGTH, value_transactions_signatures_REP_LENGTH, value_transactions_signatures_LENGTH, value_signature_LENGTH>& value() const { return value_; }


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


      protocol::block<value_id_LENGTH, value_header_previous_LENGTH, value_header_previous_state_merkle_root_LENGTH, value_header_transaction_merkle_root_LENGTH, value_header_signer_LENGTH, value_header_approved_proposals_REP_LENGTH, value_header_approved_proposals_LENGTH, value_transactions_REP_LENGTH, value_transactions_id_LENGTH, value_transactions_header_chain_id_LENGTH, value_transactions_header_nonce_LENGTH, value_transactions_header_operation_merkle_root_LENGTH, value_transactions_header_payer_LENGTH, value_transactions_header_payee_LENGTH, value_transactions_operations_REP_LENGTH, value_transactions_operations_upload_contract_contract_id_LENGTH, value_transactions_operations_upload_contract_bytecode_LENGTH, value_transactions_operations_upload_contract_abi_LENGTH, value_transactions_operations_call_contract_contract_id_LENGTH, value_transactions_operations_call_contract_args_LENGTH, value_transactions_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_transactions_operations_set_system_contract_contract_id_LENGTH, value_transactions_signatures_REP_LENGTH, value_transactions_signatures_LENGTH, value_signature_LENGTH> value_;

};

template<uint32_t field_LENGTH>
class get_block_field_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_block_field_arguments() = default;
    get_block_field_arguments(const get_block_field_arguments& rhs )
    {
      set_field(rhs.get_field());
    }

    get_block_field_arguments(const get_block_field_arguments&& rhs ) noexcept
    {
      set_field(rhs.get_field());
    }

    ~get_block_field_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      FIELD = 1
    };

    get_block_field_arguments& operator=(const get_block_field_arguments& rhs)
    {
      set_field(rhs.get_field());
      return *this;
    }

    get_block_field_arguments& operator=(const get_block_field_arguments&& rhs) noexcept
    {
      set_field(rhs.get_field());
      return *this;
    }

    inline void clear_field() { field_.clear(); }
    inline ::EmbeddedProto::FieldString<field_LENGTH>& mutable_field() { return field_; }
    inline void set_field(const ::EmbeddedProto::FieldString<field_LENGTH>& rhs) { field_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<field_LENGTH>& get_field() const { return field_; }
    inline const char* field() const { return field_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = field_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FIELD), buffer, false);
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
          case FieldNumber::FIELD:
            return_value = field_.deserialize_check_type(buffer, wire_type);
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
      clear_field();

    }

    private:


      ::EmbeddedProto::FieldString<field_LENGTH> field_;

};

template<uint32_t value_string_value_LENGTH, 
uint32_t value_bytes_value_LENGTH>
class get_block_field_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_block_field_result() = default;
    get_block_field_result(const get_block_field_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_block_field_result(const get_block_field_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_block_field_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_block_field_result& operator=(const get_block_field_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_block_field_result& operator=(const get_block_field_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& value) { value_ = value; }
    inline void set_value(const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>&& value) { value_ = value; }
    inline value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& mutable_value() { return value_; }
    inline const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& get_value() const { return value_; }
    inline const value_type<value_string_value_LENGTH, value_bytes_value_LENGTH>& value() const { return value_; }


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


      value_type<value_string_value_LENGTH, value_bytes_value_LENGTH> value_;

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

template<uint32_t value_LENGTH>
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

template<uint32_t account_LENGTH, 
uint32_t nonce_LENGTH>
class verify_account_nonce_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_account_nonce_arguments() = default;
    verify_account_nonce_arguments(const verify_account_nonce_arguments& rhs )
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
    }

    verify_account_nonce_arguments(const verify_account_nonce_arguments&& rhs ) noexcept
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
    }

    ~verify_account_nonce_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1,
      NONCE = 2
    };

    verify_account_nonce_arguments& operator=(const verify_account_nonce_arguments& rhs)
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
      return *this;
    }

    verify_account_nonce_arguments& operator=(const verify_account_nonce_arguments&& rhs) noexcept
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
      return *this;
    }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }

    inline void clear_nonce() { nonce_.clear(); }
    inline ::EmbeddedProto::FieldBytes<nonce_LENGTH>& mutable_nonce() { return nonce_; }
    inline void set_nonce(const ::EmbeddedProto::FieldBytes<nonce_LENGTH>& rhs) { nonce_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<nonce_LENGTH>& get_nonce() const { return nonce_; }
    inline const uint8_t* nonce() const { return nonce_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = nonce_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NONCE), buffer, false);
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

          case FieldNumber::NONCE:
            return_value = nonce_.deserialize_check_type(buffer, wire_type);
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
      clear_nonce();

    }

    private:


      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;
      ::EmbeddedProto::FieldBytes<nonce_LENGTH> nonce_;

};

class verify_account_nonce_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_account_nonce_result() = default;
    verify_account_nonce_result(const verify_account_nonce_result& rhs )
    {
      set_value(rhs.get_value());
    }

    verify_account_nonce_result(const verify_account_nonce_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~verify_account_nonce_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    verify_account_nonce_result& operator=(const verify_account_nonce_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    verify_account_nonce_result& operator=(const verify_account_nonce_result&& rhs) noexcept
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

template<uint32_t account_LENGTH, 
uint32_t nonce_LENGTH>
class set_account_nonce_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_account_nonce_arguments() = default;
    set_account_nonce_arguments(const set_account_nonce_arguments& rhs )
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
    }

    set_account_nonce_arguments(const set_account_nonce_arguments&& rhs ) noexcept
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
    }

    ~set_account_nonce_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1,
      NONCE = 2
    };

    set_account_nonce_arguments& operator=(const set_account_nonce_arguments& rhs)
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
      return *this;
    }

    set_account_nonce_arguments& operator=(const set_account_nonce_arguments&& rhs) noexcept
    {
      set_account(rhs.get_account());
      set_nonce(rhs.get_nonce());
      return *this;
    }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }

    inline void clear_nonce() { nonce_.clear(); }
    inline ::EmbeddedProto::FieldBytes<nonce_LENGTH>& mutable_nonce() { return nonce_; }
    inline void set_nonce(const ::EmbeddedProto::FieldBytes<nonce_LENGTH>& rhs) { nonce_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<nonce_LENGTH>& get_nonce() const { return nonce_; }
    inline const uint8_t* nonce() const { return nonce_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = nonce_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NONCE), buffer, false);
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

          case FieldNumber::NONCE:
            return_value = nonce_.deserialize_check_type(buffer, wire_type);
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
      clear_nonce();

    }

    private:


      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;
      ::EmbeddedProto::FieldBytes<nonce_LENGTH> nonce_;

};

class set_account_nonce_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_account_nonce_result() = default;
    set_account_nonce_result(const set_account_nonce_result& rhs )
    {
    }

    set_account_nonce_result(const set_account_nonce_result&& rhs ) noexcept
    {
    }

    ~set_account_nonce_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    set_account_nonce_result& operator=(const set_account_nonce_result& rhs)
    {
      return *this;
    }

    set_account_nonce_result& operator=(const set_account_nonce_result&& rhs) noexcept
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

class check_system_authority_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_system_authority_arguments() = default;
    check_system_authority_arguments(const check_system_authority_arguments& rhs )
    {
      set_type(rhs.get_type());
    }

    check_system_authority_arguments(const check_system_authority_arguments&& rhs ) noexcept
    {
      set_type(rhs.get_type());
    }

    ~check_system_authority_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE = 1
    };

    check_system_authority_arguments& operator=(const check_system_authority_arguments& rhs)
    {
      set_type(rhs.get_type());
      return *this;
    }

    check_system_authority_arguments& operator=(const check_system_authority_arguments&& rhs) noexcept
    {
      set_type(rhs.get_type());
      return *this;
    }

    inline void clear_type() { type_ = static_cast<system_authorization_type>(0); }
    inline void set_type(const system_authorization_type& value) { type_ = value; }
    inline void set_type(const system_authorization_type&& value) { type_ = value; }
    inline const system_authorization_type& get_type() const { return type_; }
    inline system_authorization_type type() const { return type_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((static_cast<system_authorization_type>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE), buffer, false);
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
          case FieldNumber::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<system_authorization_type>(value));
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
      clear_type();

    }

    private:


      system_authorization_type type_ = static_cast<system_authorization_type>(0);

};

class check_system_authority_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_system_authority_result() = default;
    check_system_authority_result(const check_system_authority_result& rhs )
    {
      set_value(rhs.get_value());
    }

    check_system_authority_result(const check_system_authority_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~check_system_authority_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    check_system_authority_result& operator=(const check_system_authority_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    check_system_authority_result& operator=(const check_system_authority_result&& rhs) noexcept
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

class get_operation_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_operation_arguments() = default;
    get_operation_arguments(const get_operation_arguments& rhs )
    {
    }

    get_operation_arguments(const get_operation_arguments&& rhs ) noexcept
    {
    }

    ~get_operation_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_operation_arguments& operator=(const get_operation_arguments& rhs)
    {
      return *this;
    }

    get_operation_arguments& operator=(const get_operation_arguments&& rhs) noexcept
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

template<uint32_t value_upload_contract_contract_id_LENGTH, 
uint32_t value_upload_contract_bytecode_LENGTH, 
uint32_t value_upload_contract_abi_LENGTH, 
uint32_t value_call_contract_contract_id_LENGTH, 
uint32_t value_call_contract_args_LENGTH, 
uint32_t value_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t value_set_system_contract_contract_id_LENGTH>
class get_operation_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_operation_result() = default;
    get_operation_result(const get_operation_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_operation_result(const get_operation_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_operation_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_operation_result& operator=(const get_operation_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_operation_result& operator=(const get_operation_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const protocol::operation<value_upload_contract_contract_id_LENGTH, value_upload_contract_bytecode_LENGTH, value_upload_contract_abi_LENGTH, value_call_contract_contract_id_LENGTH, value_call_contract_args_LENGTH, value_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_set_system_contract_contract_id_LENGTH>& value) { value_ = value; }
    inline void set_value(const protocol::operation<value_upload_contract_contract_id_LENGTH, value_upload_contract_bytecode_LENGTH, value_upload_contract_abi_LENGTH, value_call_contract_contract_id_LENGTH, value_call_contract_args_LENGTH, value_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_set_system_contract_contract_id_LENGTH>&& value) { value_ = value; }
    inline protocol::operation<value_upload_contract_contract_id_LENGTH, value_upload_contract_bytecode_LENGTH, value_upload_contract_abi_LENGTH, value_call_contract_contract_id_LENGTH, value_call_contract_args_LENGTH, value_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_set_system_contract_contract_id_LENGTH>& mutable_value() { return value_; }
    inline const protocol::operation<value_upload_contract_contract_id_LENGTH, value_upload_contract_bytecode_LENGTH, value_upload_contract_abi_LENGTH, value_call_contract_contract_id_LENGTH, value_call_contract_args_LENGTH, value_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_set_system_contract_contract_id_LENGTH>& get_value() const { return value_; }
    inline const protocol::operation<value_upload_contract_contract_id_LENGTH, value_upload_contract_bytecode_LENGTH, value_upload_contract_abi_LENGTH, value_call_contract_contract_id_LENGTH, value_call_contract_args_LENGTH, value_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_set_system_contract_contract_id_LENGTH>& value() const { return value_; }


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


      protocol::operation<value_upload_contract_contract_id_LENGTH, value_upload_contract_bytecode_LENGTH, value_upload_contract_abi_LENGTH, value_call_contract_contract_id_LENGTH, value_call_contract_args_LENGTH, value_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_set_system_contract_contract_id_LENGTH> value_;

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
    }

    put_object_result(const put_object_result&& rhs ) noexcept
    {
    }

    ~put_object_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    put_object_result& operator=(const put_object_result& rhs)
    {
      return *this;
    }

    put_object_result& operator=(const put_object_result&& rhs) noexcept
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
uint32_t key_LENGTH>
class remove_object_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    remove_object_arguments() = default;
    remove_object_arguments(const remove_object_arguments& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    remove_object_arguments(const remove_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    ~remove_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2
    };

    remove_object_arguments& operator=(const remove_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      return *this;
    }

    remove_object_arguments& operator=(const remove_object_arguments&& rhs) noexcept
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

class remove_object_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    remove_object_result() = default;
    remove_object_result(const remove_object_result& rhs )
    {
    }

    remove_object_result(const remove_object_result&& rhs ) noexcept
    {
    }

    ~remove_object_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    remove_object_result& operator=(const remove_object_result& rhs)
    {
      return *this;
    }

    remove_object_result& operator=(const remove_object_result&& rhs) noexcept
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
uint32_t key_LENGTH>
class get_object_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_object_arguments() = default;
    get_object_arguments(const get_object_arguments& rhs )
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    get_object_arguments(const get_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    ~get_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2
    };

    get_object_arguments& operator=(const get_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      return *this;
    }

    get_object_arguments& operator=(const get_object_arguments&& rhs) noexcept
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

template<uint32_t value_LENGTH, 
uint32_t key_LENGTH>
class database_object final: public ::EmbeddedProto::MessageInterface
{
  public:
    database_object() = default;
    database_object(const database_object& rhs )
    {
      set_exists(rhs.get_exists());
      set_value(rhs.get_value());
      set_key(rhs.get_key());
    }

    database_object(const database_object&& rhs ) noexcept
    {
      set_exists(rhs.get_exists());
      set_value(rhs.get_value());
      set_key(rhs.get_key());
    }

    ~database_object() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      EXISTS = 1,
      VALUE = 2,
      KEY = 3
    };

    database_object& operator=(const database_object& rhs)
    {
      set_exists(rhs.get_exists());
      set_value(rhs.get_value());
      set_key(rhs.get_key());
      return *this;
    }

    database_object& operator=(const database_object&& rhs) noexcept
    {
      set_exists(rhs.get_exists());
      set_value(rhs.get_value());
      set_key(rhs.get_key());
      return *this;
    }

    inline void clear_exists() { exists_.clear(); }
    inline void set_exists(const EmbeddedProto::boolean& value) { exists_ = value; }
    inline void set_exists(const EmbeddedProto::boolean&& value) { exists_ = value; }
    inline EmbeddedProto::boolean& mutable_exists() { return exists_; }
    inline const EmbeddedProto::boolean& get_exists() const { return exists_; }
    inline EmbeddedProto::boolean::FIELD_TYPE exists() const { return exists_.get(); }

    inline void clear_value() { value_.clear(); }
    inline ::EmbeddedProto::FieldBytes<value_LENGTH>& mutable_value() { return value_; }
    inline void set_value(const ::EmbeddedProto::FieldBytes<value_LENGTH>& rhs) { value_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<value_LENGTH>& get_value() const { return value_; }
    inline const uint8_t* value() const { return value_.get_const(); }

    inline void clear_key() { key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<key_LENGTH>& mutable_key() { return key_; }
    inline void set_key(const ::EmbeddedProto::FieldBytes<key_LENGTH>& rhs) { key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<key_LENGTH>& get_key() const { return key_; }
    inline const uint8_t* key() const { return key_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != exists_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = exists_.serialize_with_id(static_cast<uint32_t>(FieldNumber::EXISTS), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = value_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VALUE), buffer, false);
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
          case FieldNumber::EXISTS:
            return_value = exists_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VALUE:
            return_value = value_.deserialize_check_type(buffer, wire_type);
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
      clear_exists();
      clear_value();
      clear_key();

    }

    private:


      EmbeddedProto::boolean exists_ = false;
      ::EmbeddedProto::FieldBytes<value_LENGTH> value_;
      ::EmbeddedProto::FieldBytes<key_LENGTH> key_;

};

template<uint32_t value_value_LENGTH, 
uint32_t value_key_LENGTH>
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
      VALUE = 1
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
    inline void set_value(const database_object<value_value_LENGTH, value_key_LENGTH>& value) { value_ = value; }
    inline void set_value(const database_object<value_value_LENGTH, value_key_LENGTH>&& value) { value_ = value; }
    inline database_object<value_value_LENGTH, value_key_LENGTH>& mutable_value() { return value_; }
    inline const database_object<value_value_LENGTH, value_key_LENGTH>& get_value() const { return value_; }
    inline const database_object<value_value_LENGTH, value_key_LENGTH>& value() const { return value_; }


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


      database_object<value_value_LENGTH, value_key_LENGTH> value_;

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
    }

    get_next_object_arguments(const get_next_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    ~get_next_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2
    };

    get_next_object_arguments& operator=(const get_next_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      return *this;
    }

    get_next_object_arguments& operator=(const get_next_object_arguments&& rhs) noexcept
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

template<uint32_t value_value_LENGTH, 
uint32_t value_key_LENGTH>
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
      VALUE = 1
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
    inline void set_value(const database_object<value_value_LENGTH, value_key_LENGTH>& value) { value_ = value; }
    inline void set_value(const database_object<value_value_LENGTH, value_key_LENGTH>&& value) { value_ = value; }
    inline database_object<value_value_LENGTH, value_key_LENGTH>& mutable_value() { return value_; }
    inline const database_object<value_value_LENGTH, value_key_LENGTH>& get_value() const { return value_; }
    inline const database_object<value_value_LENGTH, value_key_LENGTH>& value() const { return value_; }


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


      database_object<value_value_LENGTH, value_key_LENGTH> value_;

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
    }

    get_prev_object_arguments(const get_prev_object_arguments&& rhs ) noexcept
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
    }

    ~get_prev_object_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SPACE = 1,
      KEY = 2
    };

    get_prev_object_arguments& operator=(const get_prev_object_arguments& rhs)
    {
      set_space(rhs.get_space());
      set_key(rhs.get_key());
      return *this;
    }

    get_prev_object_arguments& operator=(const get_prev_object_arguments&& rhs) noexcept
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

template<uint32_t value_value_LENGTH, 
uint32_t value_key_LENGTH>
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
      VALUE = 1
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
    inline void set_value(const database_object<value_value_LENGTH, value_key_LENGTH>& value) { value_ = value; }
    inline void set_value(const database_object<value_value_LENGTH, value_key_LENGTH>&& value) { value_ = value; }
    inline database_object<value_value_LENGTH, value_key_LENGTH>& mutable_value() { return value_; }
    inline const database_object<value_value_LENGTH, value_key_LENGTH>& get_value() const { return value_; }
    inline const database_object<value_value_LENGTH, value_key_LENGTH>& value() const { return value_; }


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


      database_object<value_value_LENGTH, value_key_LENGTH> value_;

};

template<uint32_t message_LENGTH>
class log_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    log_arguments() = default;
    log_arguments(const log_arguments& rhs )
    {
      set_message(rhs.get_message());
    }

    log_arguments(const log_arguments&& rhs ) noexcept
    {
      set_message(rhs.get_message());
    }

    ~log_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MESSAGE = 1
    };

    log_arguments& operator=(const log_arguments& rhs)
    {
      set_message(rhs.get_message());
      return *this;
    }

    log_arguments& operator=(const log_arguments&& rhs) noexcept
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

class log_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    log_result() = default;
    log_result(const log_result& rhs )
    {
    }

    log_result(const log_result&& rhs ) noexcept
    {
    }

    ~log_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    log_result& operator=(const log_result& rhs)
    {
      return *this;
    }

    log_result& operator=(const log_result&& rhs) noexcept
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

template<uint32_t name_LENGTH, 
uint32_t data_LENGTH, 
uint32_t impacted_REP_LENGTH, 
uint32_t impacted_LENGTH>
class event_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    event_arguments() = default;
    event_arguments(const event_arguments& rhs )
    {
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
    }

    event_arguments(const event_arguments&& rhs ) noexcept
    {
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
    }

    ~event_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NAME = 1,
      DATA = 2,
      IMPACTED = 3
    };

    event_arguments& operator=(const event_arguments& rhs)
    {
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
      return *this;
    }

    event_arguments& operator=(const event_arguments&& rhs) noexcept
    {
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }

    inline void clear_data() { data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<data_LENGTH>& mutable_data() { return data_; }
    inline void set_data(const ::EmbeddedProto::FieldBytes<data_LENGTH>& rhs) { data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<data_LENGTH>& get_data() const { return data_; }
    inline const uint8_t* data() const { return data_.get_const(); }

    inline const ::EmbeddedProto::FieldBytes<impacted_LENGTH>& impacted(uint32_t index) const { return impacted_[index]; }
    inline void clear_impacted() { impacted_.clear(); }
    inline void set_impacted(uint32_t index, const ::EmbeddedProto::FieldBytes<impacted_LENGTH>& value) { impacted_.set(index, value); }
    inline void set_impacted(uint32_t index, const ::EmbeddedProto::FieldBytes<impacted_LENGTH>&& value) { impacted_.set(index, value); }
    inline void set_impacted(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& values) { impacted_ = values; }
    inline void add_impacted(const ::EmbeddedProto::FieldBytes<impacted_LENGTH>& value) { impacted_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& mutable_impacted() { return impacted_; }
    inline ::EmbeddedProto::FieldBytes<impacted_LENGTH>& mutable_impacted(uint32_t index) { return impacted_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& get_impacted() const { return impacted_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& impacted() const { return impacted_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DATA), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = impacted_.serialize_with_id(static_cast<uint32_t>(FieldNumber::IMPACTED), buffer, false);
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
          case FieldNumber::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DATA:
            return_value = data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::IMPACTED:
            return_value = impacted_.deserialize_check_type(buffer, wire_type);
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
      clear_name();
      clear_data();
      clear_impacted();

    }

    private:


      ::EmbeddedProto::FieldString<name_LENGTH> name_;
      ::EmbeddedProto::FieldBytes<data_LENGTH> data_;
      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH> impacted_;

};

class event_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    event_result() = default;
    event_result(const event_result& rhs )
    {
    }

    event_result(const event_result&& rhs ) noexcept
    {
    }

    ~event_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    event_result& operator=(const event_result& rhs)
    {
      return *this;
    }

    event_result& operator=(const event_result&& rhs) noexcept
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

template<uint32_t signature_LENGTH, 
uint32_t digest_LENGTH>
class recover_public_key_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    recover_public_key_arguments() = default;
    recover_public_key_arguments(const recover_public_key_arguments& rhs )
    {
      set_type(rhs.get_type());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
    }

    recover_public_key_arguments(const recover_public_key_arguments&& rhs ) noexcept
    {
      set_type(rhs.get_type());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
    }

    ~recover_public_key_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE = 1,
      SIGNATURE = 2,
      DIGEST = 3
    };

    recover_public_key_arguments& operator=(const recover_public_key_arguments& rhs)
    {
      set_type(rhs.get_type());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
      return *this;
    }

    recover_public_key_arguments& operator=(const recover_public_key_arguments&& rhs) noexcept
    {
      set_type(rhs.get_type());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
      return *this;
    }

    inline void clear_type() { type_ = static_cast<dsa>(0); }
    inline void set_type(const dsa& value) { type_ = value; }
    inline void set_type(const dsa&& value) { type_ = value; }
    inline const dsa& get_type() const { return type_; }
    inline dsa type() const { return type_; }

    inline void clear_signature() { signature_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_LENGTH>& mutable_signature() { return signature_; }
    inline void set_signature(const ::EmbeddedProto::FieldBytes<signature_LENGTH>& rhs) { signature_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_LENGTH>& get_signature() const { return signature_; }
    inline const uint8_t* signature() const { return signature_.get_const(); }

    inline void clear_digest() { digest_.clear(); }
    inline ::EmbeddedProto::FieldBytes<digest_LENGTH>& mutable_digest() { return digest_; }
    inline void set_digest(const ::EmbeddedProto::FieldBytes<digest_LENGTH>& rhs) { digest_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<digest_LENGTH>& get_digest() const { return digest_; }
    inline const uint8_t* digest() const { return digest_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((static_cast<dsa>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE), buffer, false);
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
          case FieldNumber::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<dsa>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;

          case FieldNumber::SIGNATURE:
            return_value = signature_.deserialize_check_type(buffer, wire_type);
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
      clear_type();
      clear_signature();
      clear_digest();

    }

    private:


      dsa type_ = static_cast<dsa>(0);
      ::EmbeddedProto::FieldBytes<signature_LENGTH> signature_;
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

template<uint32_t public_key_LENGTH, 
uint32_t signature_LENGTH, 
uint32_t digest_LENGTH>
class verify_signature_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_signature_arguments() = default;
    verify_signature_arguments(const verify_signature_arguments& rhs )
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
    }

    verify_signature_arguments(const verify_signature_arguments&& rhs ) noexcept
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
    }

    ~verify_signature_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE = 1,
      PUBLIC_KEY = 2,
      SIGNATURE = 3,
      DIGEST = 4
    };

    verify_signature_arguments& operator=(const verify_signature_arguments& rhs)
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
      return *this;
    }

    verify_signature_arguments& operator=(const verify_signature_arguments&& rhs) noexcept
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_signature(rhs.get_signature());
      set_digest(rhs.get_digest());
      return *this;
    }

    inline void clear_type() { type_ = static_cast<dsa>(0); }
    inline void set_type(const dsa& value) { type_ = value; }
    inline void set_type(const dsa&& value) { type_ = value; }
    inline const dsa& get_type() const { return type_; }
    inline dsa type() const { return type_; }

    inline void clear_public_key() { public_key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<public_key_LENGTH>& mutable_public_key() { return public_key_; }
    inline void set_public_key(const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& rhs) { public_key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& get_public_key() const { return public_key_; }
    inline const uint8_t* public_key() const { return public_key_.get_const(); }

    inline void clear_signature() { signature_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_LENGTH>& mutable_signature() { return signature_; }
    inline void set_signature(const ::EmbeddedProto::FieldBytes<signature_LENGTH>& rhs) { signature_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_LENGTH>& get_signature() const { return signature_; }
    inline const uint8_t* signature() const { return signature_.get_const(); }

    inline void clear_digest() { digest_.clear(); }
    inline ::EmbeddedProto::FieldBytes<digest_LENGTH>& mutable_digest() { return digest_; }
    inline void set_digest(const ::EmbeddedProto::FieldBytes<digest_LENGTH>& rhs) { digest_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<digest_LENGTH>& get_digest() const { return digest_; }
    inline const uint8_t* digest() const { return digest_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((static_cast<dsa>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = public_key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PUBLIC_KEY), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE), buffer, false);
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
          case FieldNumber::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<dsa>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;

          case FieldNumber::PUBLIC_KEY:
            return_value = public_key_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNATURE:
            return_value = signature_.deserialize_check_type(buffer, wire_type);
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
      clear_type();
      clear_public_key();
      clear_signature();
      clear_digest();

    }

    private:


      dsa type_ = static_cast<dsa>(0);
      ::EmbeddedProto::FieldBytes<public_key_LENGTH> public_key_;
      ::EmbeddedProto::FieldBytes<signature_LENGTH> signature_;
      ::EmbeddedProto::FieldBytes<digest_LENGTH> digest_;

};

class verify_signature_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_signature_result() = default;
    verify_signature_result(const verify_signature_result& rhs )
    {
      set_value(rhs.get_value());
    }

    verify_signature_result(const verify_signature_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~verify_signature_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    verify_signature_result& operator=(const verify_signature_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    verify_signature_result& operator=(const verify_signature_result&& rhs) noexcept
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

template<uint32_t public_key_LENGTH, 
uint32_t proof_LENGTH, 
uint32_t hash_LENGTH, 
uint32_t message_LENGTH>
class verify_vrf_proof_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_vrf_proof_arguments() = default;
    verify_vrf_proof_arguments(const verify_vrf_proof_arguments& rhs )
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_proof(rhs.get_proof());
      set_hash(rhs.get_hash());
      set_message(rhs.get_message());
    }

    verify_vrf_proof_arguments(const verify_vrf_proof_arguments&& rhs ) noexcept
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_proof(rhs.get_proof());
      set_hash(rhs.get_hash());
      set_message(rhs.get_message());
    }

    ~verify_vrf_proof_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE = 1,
      PUBLIC_KEY = 2,
      PROOF = 3,
      HASH = 4,
      MESSAGE = 5
    };

    verify_vrf_proof_arguments& operator=(const verify_vrf_proof_arguments& rhs)
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_proof(rhs.get_proof());
      set_hash(rhs.get_hash());
      set_message(rhs.get_message());
      return *this;
    }

    verify_vrf_proof_arguments& operator=(const verify_vrf_proof_arguments&& rhs) noexcept
    {
      set_type(rhs.get_type());
      set_public_key(rhs.get_public_key());
      set_proof(rhs.get_proof());
      set_hash(rhs.get_hash());
      set_message(rhs.get_message());
      return *this;
    }

    inline void clear_type() { type_ = static_cast<dsa>(0); }
    inline void set_type(const dsa& value) { type_ = value; }
    inline void set_type(const dsa&& value) { type_ = value; }
    inline const dsa& get_type() const { return type_; }
    inline dsa type() const { return type_; }

    inline void clear_public_key() { public_key_.clear(); }
    inline ::EmbeddedProto::FieldBytes<public_key_LENGTH>& mutable_public_key() { return public_key_; }
    inline void set_public_key(const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& rhs) { public_key_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<public_key_LENGTH>& get_public_key() const { return public_key_; }
    inline const uint8_t* public_key() const { return public_key_.get_const(); }

    inline void clear_proof() { proof_.clear(); }
    inline ::EmbeddedProto::FieldBytes<proof_LENGTH>& mutable_proof() { return proof_; }
    inline void set_proof(const ::EmbeddedProto::FieldBytes<proof_LENGTH>& rhs) { proof_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<proof_LENGTH>& get_proof() const { return proof_; }
    inline const uint8_t* proof() const { return proof_.get_const(); }

    inline void clear_hash() { hash_.clear(); }
    inline ::EmbeddedProto::FieldBytes<hash_LENGTH>& mutable_hash() { return hash_; }
    inline void set_hash(const ::EmbeddedProto::FieldBytes<hash_LENGTH>& rhs) { hash_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<hash_LENGTH>& get_hash() const { return hash_; }
    inline const uint8_t* hash() const { return hash_.get_const(); }

    inline void clear_message() { message_.clear(); }
    inline ::EmbeddedProto::FieldBytes<message_LENGTH>& mutable_message() { return message_; }
    inline void set_message(const ::EmbeddedProto::FieldBytes<message_LENGTH>& rhs) { message_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<message_LENGTH>& get_message() const { return message_; }
    inline const uint8_t* message() const { return message_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((static_cast<dsa>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = public_key_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PUBLIC_KEY), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = proof_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PROOF), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = hash_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HASH), buffer, false);
      }

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
          case FieldNumber::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<dsa>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;

          case FieldNumber::PUBLIC_KEY:
            return_value = public_key_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PROOF:
            return_value = proof_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HASH:
            return_value = hash_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_type();
      clear_public_key();
      clear_proof();
      clear_hash();
      clear_message();

    }

    private:


      dsa type_ = static_cast<dsa>(0);
      ::EmbeddedProto::FieldBytes<public_key_LENGTH> public_key_;
      ::EmbeddedProto::FieldBytes<proof_LENGTH> proof_;
      ::EmbeddedProto::FieldBytes<hash_LENGTH> hash_;
      ::EmbeddedProto::FieldBytes<message_LENGTH> message_;

};

class verify_vrf_proof_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    verify_vrf_proof_result() = default;
    verify_vrf_proof_result(const verify_vrf_proof_result& rhs )
    {
      set_value(rhs.get_value());
    }

    verify_vrf_proof_result(const verify_vrf_proof_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~verify_vrf_proof_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    verify_vrf_proof_result& operator=(const verify_vrf_proof_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    verify_vrf_proof_result& operator=(const verify_vrf_proof_result&& rhs) noexcept
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

template<uint32_t contract_id_LENGTH, 
uint32_t args_LENGTH>
class call_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    call_arguments() = default;
    call_arguments(const call_arguments& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    call_arguments(const call_arguments&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    ~call_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      ENTRY_POINT = 2,
      ARGS = 3
    };

    call_arguments& operator=(const call_arguments& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
      return *this;
    }

    call_arguments& operator=(const call_arguments&& rhs) noexcept
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
class call_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    call_result() = default;
    call_result(const call_result& rhs )
    {
      set_value(rhs.get_value());
    }

    call_result(const call_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~call_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    call_result& operator=(const call_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    call_result& operator=(const call_result&& rhs) noexcept
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

class get_arguments_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_arguments_arguments() = default;
    get_arguments_arguments(const get_arguments_arguments& rhs )
    {
    }

    get_arguments_arguments(const get_arguments_arguments&& rhs ) noexcept
    {
    }

    ~get_arguments_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_arguments_arguments& operator=(const get_arguments_arguments& rhs)
    {
      return *this;
    }

    get_arguments_arguments& operator=(const get_arguments_arguments&& rhs) noexcept
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

template<uint32_t value_arguments_LENGTH>
class get_arguments_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_arguments_result() = default;
    get_arguments_result(const get_arguments_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_arguments_result(const get_arguments_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_arguments_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_arguments_result& operator=(const get_arguments_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_arguments_result& operator=(const get_arguments_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const argument_data<value_arguments_LENGTH>& value) { value_ = value; }
    inline void set_value(const argument_data<value_arguments_LENGTH>&& value) { value_ = value; }
    inline argument_data<value_arguments_LENGTH>& mutable_value() { return value_; }
    inline const argument_data<value_arguments_LENGTH>& get_value() const { return value_; }
    inline const argument_data<value_arguments_LENGTH>& value() const { return value_; }


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


      argument_data<value_arguments_LENGTH> value_;

};

template<uint32_t res_object_LENGTH, 
uint32_t res_error_message_LENGTH>
class exit_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    exit_arguments() = default;
    exit_arguments(const exit_arguments& rhs )
    {
      set_code(rhs.get_code());
      set_res(rhs.get_res());
    }

    exit_arguments(const exit_arguments&& rhs ) noexcept
    {
      set_code(rhs.get_code());
      set_res(rhs.get_res());
    }

    ~exit_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CODE = 1,
      RES = 2
    };

    exit_arguments& operator=(const exit_arguments& rhs)
    {
      set_code(rhs.get_code());
      set_res(rhs.get_res());
      return *this;
    }

    exit_arguments& operator=(const exit_arguments&& rhs) noexcept
    {
      set_code(rhs.get_code());
      set_res(rhs.get_res());
      return *this;
    }

    inline void clear_code() { code_.clear(); }
    inline void set_code(const EmbeddedProto::int32& value) { code_ = value; }
    inline void set_code(const EmbeddedProto::int32&& value) { code_ = value; }
    inline EmbeddedProto::int32& mutable_code() { return code_; }
    inline const EmbeddedProto::int32& get_code() const { return code_; }
    inline EmbeddedProto::int32::FIELD_TYPE code() const { return code_.get(); }

    inline void clear_res() { res_.clear(); }
    inline void set_res(const result<res_object_LENGTH, res_error_message_LENGTH>& value) { res_ = value; }
    inline void set_res(const result<res_object_LENGTH, res_error_message_LENGTH>&& value) { res_ = value; }
    inline result<res_object_LENGTH, res_error_message_LENGTH>& mutable_res() { return res_; }
    inline const result<res_object_LENGTH, res_error_message_LENGTH>& get_res() const { return res_; }
    inline const result<res_object_LENGTH, res_error_message_LENGTH>& res() const { return res_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != code_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = code_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CODE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = res_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RES), buffer, false);
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

          case FieldNumber::RES:
            return_value = res_.deserialize_check_type(buffer, wire_type);
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
      clear_res();

    }

    private:


      EmbeddedProto::int32 code_ = 0;
      result<res_object_LENGTH, res_error_message_LENGTH> res_;

};

class exit_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    exit_result() = default;
    exit_result(const exit_result& rhs )
    {
    }

    exit_result(const exit_result&& rhs ) noexcept
    {
    }

    ~exit_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    exit_result& operator=(const exit_result& rhs)
    {
      return *this;
    }

    exit_result& operator=(const exit_result&& rhs) noexcept
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

template<uint32_t account_LENGTH, 
uint32_t data_LENGTH>
class check_authority_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_authority_arguments() = default;
    check_authority_arguments(const check_authority_arguments& rhs )
    {
      set_type(rhs.get_type());
      set_account(rhs.get_account());
      set_data(rhs.get_data());
    }

    check_authority_arguments(const check_authority_arguments&& rhs ) noexcept
    {
      set_type(rhs.get_type());
      set_account(rhs.get_account());
      set_data(rhs.get_data());
    }

    ~check_authority_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE = 1,
      ACCOUNT = 2,
      DATA = 3
    };

    check_authority_arguments& operator=(const check_authority_arguments& rhs)
    {
      set_type(rhs.get_type());
      set_account(rhs.get_account());
      set_data(rhs.get_data());
      return *this;
    }

    check_authority_arguments& operator=(const check_authority_arguments&& rhs) noexcept
    {
      set_type(rhs.get_type());
      set_account(rhs.get_account());
      set_data(rhs.get_data());
      return *this;
    }

    inline void clear_type() { type_ = static_cast<authorization_type>(0); }
    inline void set_type(const authorization_type& value) { type_ = value; }
    inline void set_type(const authorization_type&& value) { type_ = value; }
    inline const authorization_type& get_type() const { return type_; }
    inline authorization_type type() const { return type_; }

    inline void clear_account() { account_.clear(); }
    inline ::EmbeddedProto::FieldBytes<account_LENGTH>& mutable_account() { return account_; }
    inline void set_account(const ::EmbeddedProto::FieldBytes<account_LENGTH>& rhs) { account_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<account_LENGTH>& get_account() const { return account_; }
    inline const uint8_t* account() const { return account_.get_const(); }

    inline void clear_data() { data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<data_LENGTH>& mutable_data() { return data_; }
    inline void set_data(const ::EmbeddedProto::FieldBytes<data_LENGTH>& rhs) { data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<data_LENGTH>& get_data() const { return data_; }
    inline const uint8_t* data() const { return data_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((static_cast<authorization_type>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = account_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCOUNT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DATA), buffer, false);
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
          case FieldNumber::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<authorization_type>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;

          case FieldNumber::ACCOUNT:
            return_value = account_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DATA:
            return_value = data_.deserialize_check_type(buffer, wire_type);
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
      clear_type();
      clear_account();
      clear_data();

    }

    private:


      authorization_type type_ = static_cast<authorization_type>(0);
      ::EmbeddedProto::FieldBytes<account_LENGTH> account_;
      ::EmbeddedProto::FieldBytes<data_LENGTH> data_;

};

class check_authority_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_authority_result() = default;
    check_authority_result(const check_authority_result& rhs )
    {
      set_value(rhs.get_value());
    }

    check_authority_result(const check_authority_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~check_authority_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    check_authority_result& operator=(const check_authority_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    check_authority_result& operator=(const check_authority_result&& rhs) noexcept
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

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_SYSTEM_CALLS_H