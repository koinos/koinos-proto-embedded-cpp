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
#ifndef KOINOS_TRANSACTION_STORE_TRANSACTION_STORE_H
#define KOINOS_TRANSACTION_STORE_TRANSACTION_STORE_H

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
namespace transaction_store {

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
uint32_t containing_blocks_REP_LENGTH, 
uint32_t containing_blocks_LENGTH>
class transaction_item final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_item() = default;
    transaction_item(const transaction_item& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_containing_blocks(rhs.get_containing_blocks());
    }

    transaction_item(const transaction_item&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_containing_blocks(rhs.get_containing_blocks());
    }

    ~transaction_item() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      CONTAINING_BLOCKS = 2
    };

    transaction_item& operator=(const transaction_item& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_containing_blocks(rhs.get_containing_blocks());
      return *this;
    }

    transaction_item& operator=(const transaction_item&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_containing_blocks(rhs.get_containing_blocks());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH>& transaction() const { return transaction_; }

    inline const ::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>& containing_blocks(uint32_t index) const { return containing_blocks_[index]; }
    inline void clear_containing_blocks() { containing_blocks_.clear(); }
    inline void set_containing_blocks(uint32_t index, const ::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>& value) { containing_blocks_.set(index, value); }
    inline void set_containing_blocks(uint32_t index, const ::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>&& value) { containing_blocks_.set(index, value); }
    inline void set_containing_blocks(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>, containing_blocks_REP_LENGTH>& values) { containing_blocks_ = values; }
    inline void add_containing_blocks(const ::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>& value) { containing_blocks_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>, containing_blocks_REP_LENGTH>& mutable_containing_blocks() { return containing_blocks_; }
    inline ::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>& mutable_containing_blocks(uint32_t index) { return containing_blocks_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>, containing_blocks_REP_LENGTH>& get_containing_blocks() const { return containing_blocks_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>, containing_blocks_REP_LENGTH>& containing_blocks() const { return containing_blocks_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = containing_blocks_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTAINING_BLOCKS), buffer, false);
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

          case FieldNumber::CONTAINING_BLOCKS:
            return_value = containing_blocks_.deserialize_check_type(buffer, wire_type);
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
      clear_containing_blocks();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_header_operation_merkle_root_LENGTH, transaction_header_payer_LENGTH, transaction_header_payee_LENGTH, transaction_operations_REP_LENGTH, transaction_operations_upload_contract_contract_id_LENGTH, transaction_operations_upload_contract_bytecode_LENGTH, transaction_operations_upload_contract_abi_LENGTH, transaction_operations_call_contract_contract_id_LENGTH, transaction_operations_call_contract_args_LENGTH, transaction_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, transaction_operations_set_system_contract_contract_id_LENGTH, transaction_signatures_REP_LENGTH, transaction_signatures_LENGTH> transaction_;
      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<containing_blocks_LENGTH>, containing_blocks_REP_LENGTH> containing_blocks_;

};

} // End of namespace transaction_store
} // End of namespace koinos
#endif // KOINOS_TRANSACTION_STORE_TRANSACTION_STORE_H