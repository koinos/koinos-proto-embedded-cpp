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
#ifndef KOINOS_RPC_TRANSACTION_STORE_TRANSACTION_STORE_RPC_H
#define KOINOS_RPC_TRANSACTION_STORE_TRANSACTION_STORE_RPC_H

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
#include <koinos/rpc/rpc.h>
#include <koinos/transaction_store/transaction_store.h>

namespace koinos {
namespace rpc {
namespace transaction_store {

template<uint32_t transaction_ids_REP_LENGTH, 
uint32_t transaction_ids_LENGTH>
class get_transactions_by_id_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transactions_by_id_request() = default;
    get_transactions_by_id_request(const get_transactions_by_id_request& rhs )
    {
      set_transaction_ids(rhs.get_transaction_ids());
    }

    get_transactions_by_id_request(const get_transactions_by_id_request&& rhs ) noexcept
    {
      set_transaction_ids(rhs.get_transaction_ids());
    }

    ~get_transactions_by_id_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION_IDS = 1
    };

    get_transactions_by_id_request& operator=(const get_transactions_by_id_request& rhs)
    {
      set_transaction_ids(rhs.get_transaction_ids());
      return *this;
    }

    get_transactions_by_id_request& operator=(const get_transactions_by_id_request&& rhs) noexcept
    {
      set_transaction_ids(rhs.get_transaction_ids());
      return *this;
    }

    inline const ::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>& transaction_ids(uint32_t index) const { return transaction_ids_[index]; }
    inline void clear_transaction_ids() { transaction_ids_.clear(); }
    inline void set_transaction_ids(uint32_t index, const ::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>& value) { transaction_ids_.set(index, value); }
    inline void set_transaction_ids(uint32_t index, const ::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>&& value) { transaction_ids_.set(index, value); }
    inline void set_transaction_ids(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>, transaction_ids_REP_LENGTH>& values) { transaction_ids_ = values; }
    inline void add_transaction_ids(const ::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>& value) { transaction_ids_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>, transaction_ids_REP_LENGTH>& mutable_transaction_ids() { return transaction_ids_; }
    inline ::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>& mutable_transaction_ids(uint32_t index) { return transaction_ids_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>, transaction_ids_REP_LENGTH>& get_transaction_ids() const { return transaction_ids_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>, transaction_ids_REP_LENGTH>& transaction_ids() const { return transaction_ids_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_ids_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION_IDS), buffer, false);
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
          case FieldNumber::TRANSACTION_IDS:
            return_value = transaction_ids_.deserialize_check_type(buffer, wire_type);
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
      clear_transaction_ids();

    }

    private:


      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<transaction_ids_LENGTH>, transaction_ids_REP_LENGTH> transaction_ids_;

};

template<uint32_t transactions_REP_LENGTH, 
uint32_t transactions_transaction_id_LENGTH, 
uint32_t transactions_transaction_header_operation_merkle_root_LENGTH, 
uint32_t transactions_transaction_operations_REP_LENGTH, 
uint32_t transactions_transaction_operations_upload_contract_contract_id_LENGTH, 
uint32_t transactions_transaction_operations_upload_contract_bytecode_LENGTH, 
uint32_t transactions_transaction_operations_upload_contract_abi_LENGTH, 
uint32_t transactions_transaction_operations_call_contract_contract_id_LENGTH, 
uint32_t transactions_transaction_operations_call_contract_args_LENGTH, 
uint32_t transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t transactions_transaction_operations_set_system_contract_contract_id_LENGTH, 
uint32_t transactions_transaction_signature_LENGTH, 
uint32_t transactions_containing_blocks_REP_LENGTH, 
uint32_t transactions_containing_blocks_LENGTH>
class get_transactions_by_id_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_transactions_by_id_response() = default;
    get_transactions_by_id_response(const get_transactions_by_id_response& rhs )
    {
      set_transactions(rhs.get_transactions());
    }

    get_transactions_by_id_response(const get_transactions_by_id_response&& rhs ) noexcept
    {
      set_transactions(rhs.get_transactions());
    }

    ~get_transactions_by_id_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTIONS = 1
    };

    get_transactions_by_id_response& operator=(const get_transactions_by_id_response& rhs)
    {
      set_transactions(rhs.get_transactions());
      return *this;
    }

    get_transactions_by_id_response& operator=(const get_transactions_by_id_response&& rhs) noexcept
    {
      set_transactions(rhs.get_transactions());
      return *this;
    }

    inline const transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>& transactions(uint32_t index) const { return transactions_[index]; }
    inline void clear_transactions() { transactions_.clear(); }
    inline void set_transactions(uint32_t index, const transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>& value) { transactions_.set(index, value); }
    inline void set_transactions(uint32_t index, const transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>&& value) { transactions_.set(index, value); }
    inline void set_transactions(const ::EmbeddedProto::RepeatedFieldFixedSize<transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>, transactions_REP_LENGTH>& values) { transactions_ = values; }
    inline void add_transactions(const transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>& value) { transactions_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>, transactions_REP_LENGTH>& mutable_transactions() { return transactions_; }
    inline transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>& mutable_transactions(uint32_t index) { return transactions_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>, transactions_REP_LENGTH>& get_transactions() const { return transactions_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>, transactions_REP_LENGTH>& transactions() const { return transactions_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transactions_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTIONS), buffer, false);
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
          case FieldNumber::TRANSACTIONS:
            return_value = transactions_.deserialize_check_type(buffer, wire_type);
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
      clear_transactions();

    }

    private:


      ::EmbeddedProto::RepeatedFieldFixedSize<transaction_store::transaction_item<transactions_transaction_id_LENGTH, transactions_transaction_header_operation_merkle_root_LENGTH, transactions_transaction_operations_REP_LENGTH, transactions_transaction_operations_upload_contract_contract_id_LENGTH, transactions_transaction_operations_upload_contract_bytecode_LENGTH, transactions_transaction_operations_upload_contract_abi_LENGTH, transactions_transaction_operations_call_contract_contract_id_LENGTH, transactions_transaction_operations_call_contract_args_LENGTH, transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transactions_transaction_operations_set_system_contract_contract_id_LENGTH, transactions_transaction_signature_LENGTH, transactions_containing_blocks_REP_LENGTH, transactions_containing_blocks_LENGTH>, transactions_REP_LENGTH> transactions_;

};

template<uint32_t get_transactions_by_id_transaction_ids_REP_LENGTH, 
uint32_t get_transactions_by_id_transaction_ids_LENGTH>
class transaction_store_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_store_request() = default;
    transaction_store_request(const transaction_store_request& rhs )
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
          break;

        default:
          break;
      }

    }

    transaction_store_request(const transaction_store_request&& rhs ) noexcept
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
          break;

        default:
          break;
      }

    }

    ~transaction_store_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      GET_TRANSACTIONS_BY_ID = 2
    };

    transaction_store_request& operator=(const transaction_store_request& rhs)
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
          break;

        default:
          break;
      }

      return *this;
    }

    transaction_store_request& operator=(const transaction_store_request&& rhs) noexcept
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
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

    inline void clear_get_transactions_by_id()
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_transactions_by_id_.~get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>();
      }
    }
    inline void set_get_transactions_by_id(const get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>& value)
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID != which_request_)
      {
        init_request(FieldNumber::GET_TRANSACTIONS_BY_ID);
      }
      request_.get_transactions_by_id_ = value;
    }
    inline void set_get_transactions_by_id(const get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>&& value)
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID != which_request_)
      {
        init_request(FieldNumber::GET_TRANSACTIONS_BY_ID);
      }
      request_.get_transactions_by_id_ = value;
    }
    inline get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>& mutable_get_transactions_by_id()
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID != which_request_)
      {
        init_request(FieldNumber::GET_TRANSACTIONS_BY_ID);
      }
      return request_.get_transactions_by_id_;
    }
    inline const get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>& get_get_transactions_by_id() const { return request_.get_transactions_by_id_; }
    inline const get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>& get_transactions_by_id() const { return request_.get_transactions_by_id_; }


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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_transactions_by_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_TRANSACTIONS_BY_ID), buffer, false);
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

          case FieldNumber::GET_TRANSACTIONS_BY_ID:
            return_value = deserialize_request(FieldNumber::GET_TRANSACTIONS_BY_ID, request_.get_transactions_by_id_, buffer, wire_type);

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
        get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH> get_transactions_by_id_;
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

          case FieldNumber::GET_TRANSACTIONS_BY_ID:
            new(&request_.get_transactions_by_id_) get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>;
            which_request_ = FieldNumber::GET_TRANSACTIONS_BY_ID;
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
          case FieldNumber::GET_TRANSACTIONS_BY_ID:
            request_.get_transactions_by_id_.~get_transactions_by_id_request<get_transactions_by_id_transaction_ids_REP_LENGTH, get_transactions_by_id_transaction_ids_LENGTH>(); // NOSONAR Unions require this.
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
uint32_t get_transactions_by_id_transactions_REP_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_id_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, 
uint32_t get_transactions_by_id_transactions_transaction_signature_LENGTH, 
uint32_t get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, 
uint32_t get_transactions_by_id_transactions_containing_blocks_LENGTH>
class transaction_store_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_store_response() = default;
    transaction_store_response(const transaction_store_response& rhs )
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
          break;

        default:
          break;
      }

    }

    transaction_store_response(const transaction_store_response&& rhs ) noexcept
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
          break;

        default:
          break;
      }

    }

    ~transaction_store_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      ERROR = 2,
      GET_TRANSACTIONS_BY_ID = 3
    };

    transaction_store_response& operator=(const transaction_store_response& rhs)
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
          break;

        default:
          break;
      }

      return *this;
    }

    transaction_store_response& operator=(const transaction_store_response&& rhs) noexcept
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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          set_get_transactions_by_id(rhs.get_get_transactions_by_id());
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

    inline void clear_get_transactions_by_id()
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_transactions_by_id_.~get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>();
      }
    }
    inline void set_get_transactions_by_id(const get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>& value)
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID != which_response_)
      {
        init_response(FieldNumber::GET_TRANSACTIONS_BY_ID);
      }
      response_.get_transactions_by_id_ = value;
    }
    inline void set_get_transactions_by_id(const get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>&& value)
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID != which_response_)
      {
        init_response(FieldNumber::GET_TRANSACTIONS_BY_ID);
      }
      response_.get_transactions_by_id_ = value;
    }
    inline get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>& mutable_get_transactions_by_id()
    {
      if(FieldNumber::GET_TRANSACTIONS_BY_ID != which_response_)
      {
        init_response(FieldNumber::GET_TRANSACTIONS_BY_ID);
      }
      return response_.get_transactions_by_id_;
    }
    inline const get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>& get_get_transactions_by_id() const { return response_.get_transactions_by_id_; }
    inline const get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>& get_transactions_by_id() const { return response_.get_transactions_by_id_; }


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

        case FieldNumber::GET_TRANSACTIONS_BY_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_transactions_by_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_TRANSACTIONS_BY_ID), buffer, false);
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

          case FieldNumber::GET_TRANSACTIONS_BY_ID:
            return_value = deserialize_response(FieldNumber::GET_TRANSACTIONS_BY_ID, response_.get_transactions_by_id_, buffer, wire_type);

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
        get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH> get_transactions_by_id_;
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

          case FieldNumber::GET_TRANSACTIONS_BY_ID:
            new(&response_.get_transactions_by_id_) get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>;
            which_response_ = FieldNumber::GET_TRANSACTIONS_BY_ID;
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
          case FieldNumber::GET_TRANSACTIONS_BY_ID:
            response_.get_transactions_by_id_.~get_transactions_by_id_response<get_transactions_by_id_transactions_REP_LENGTH, get_transactions_by_id_transactions_transaction_id_LENGTH, get_transactions_by_id_transactions_transaction_header_operation_merkle_root_LENGTH, get_transactions_by_id_transactions_transaction_operations_REP_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_bytecode_LENGTH, get_transactions_by_id_transactions_transaction_operations_upload_contract_abi_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_call_contract_args_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_operations_set_system_contract_contract_id_LENGTH, get_transactions_by_id_transactions_transaction_signature_LENGTH, get_transactions_by_id_transactions_containing_blocks_REP_LENGTH, get_transactions_by_id_transactions_containing_blocks_LENGTH>(); // NOSONAR Unions require this.
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

} // End of namespace transaction_store
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_TRANSACTION_STORE_TRANSACTION_STORE_RPC_H