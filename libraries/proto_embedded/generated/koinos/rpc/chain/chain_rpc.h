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
#ifndef KOINOS_RPC_CHAIN_CHAIN_RPC_H
#define KOINOS_RPC_CHAIN_CHAIN_RPC_H

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
#include <koinos/chain/chain.h>
#include <koinos/protocol/protocol.h>
#include <koinos/rpc/rpc.h>

namespace koinos {
namespace rpc {
namespace chain {

template<uint32_t block_id_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_active_LENGTH, 
uint32_t block_signature_data_LENGTH, 
uint32_t block_transactions_REP_LENGTH, 
uint32_t block_transactions_id_LENGTH, 
uint32_t block_transactions_active_LENGTH, 
uint32_t block_transactions_signature_data_LENGTH>
class submit_block_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_block_request() = default;
    submit_block_request(const submit_block_request& rhs )
    {
      set_block(rhs.get_block());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_block_signature(rhs.get_verify_block_signature());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
    }

    submit_block_request(const submit_block_request&& rhs ) noexcept
    {
      set_block(rhs.get_block());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_block_signature(rhs.get_verify_block_signature());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
    }

    ~submit_block_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK = 1,
      VERIFY_PASSIVE_DATA = 2,
      VERIFY_BLOCK_SIGNATURE = 3,
      VERIFY_TRANSACTION_SIGNATURE = 4
    };

    submit_block_request& operator=(const submit_block_request& rhs)
    {
      set_block(rhs.get_block());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_block_signature(rhs.get_verify_block_signature());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
      return *this;
    }

    submit_block_request& operator=(const submit_block_request&& rhs) noexcept
    {
      set_block(rhs.get_block());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_block_signature(rhs.get_verify_block_signature());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
      return *this;
    }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_signature_data_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_signature_data_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_signature_data_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_signature_data_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_signature_data_LENGTH>& block() const { return block_; }

    inline void clear_verify_passive_data() { verify_passive_data_.clear(); }
    inline void set_verify_passive_data(const EmbeddedProto::boolean& value) { verify_passive_data_ = value; }
    inline void set_verify_passive_data(const EmbeddedProto::boolean&& value) { verify_passive_data_ = value; }
    inline EmbeddedProto::boolean& mutable_verify_passive_data() { return verify_passive_data_; }
    inline const EmbeddedProto::boolean& get_verify_passive_data() const { return verify_passive_data_; }
    inline EmbeddedProto::boolean::FIELD_TYPE verify_passive_data() const { return verify_passive_data_.get(); }

    inline void clear_verify_block_signature() { verify_block_signature_.clear(); }
    inline void set_verify_block_signature(const EmbeddedProto::boolean& value) { verify_block_signature_ = value; }
    inline void set_verify_block_signature(const EmbeddedProto::boolean&& value) { verify_block_signature_ = value; }
    inline EmbeddedProto::boolean& mutable_verify_block_signature() { return verify_block_signature_; }
    inline const EmbeddedProto::boolean& get_verify_block_signature() const { return verify_block_signature_; }
    inline EmbeddedProto::boolean::FIELD_TYPE verify_block_signature() const { return verify_block_signature_.get(); }

    inline void clear_verify_transaction_signature() { verify_transaction_signature_.clear(); }
    inline void set_verify_transaction_signature(const EmbeddedProto::boolean& value) { verify_transaction_signature_ = value; }
    inline void set_verify_transaction_signature(const EmbeddedProto::boolean&& value) { verify_transaction_signature_ = value; }
    inline EmbeddedProto::boolean& mutable_verify_transaction_signature() { return verify_transaction_signature_; }
    inline const EmbeddedProto::boolean& get_verify_transaction_signature() const { return verify_transaction_signature_; }
    inline EmbeddedProto::boolean::FIELD_TYPE verify_transaction_signature() const { return verify_transaction_signature_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK), buffer, false);
      }

      if((false != verify_passive_data_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_passive_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VERIFY_PASSIVE_DATA), buffer, false);
      }

      if((false != verify_block_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_block_signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VERIFY_BLOCK_SIGNATURE), buffer, false);
      }

      if((false != verify_transaction_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_transaction_signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VERIFY_TRANSACTION_SIGNATURE), buffer, false);
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

          case FieldNumber::VERIFY_PASSIVE_DATA:
            return_value = verify_passive_data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VERIFY_BLOCK_SIGNATURE:
            return_value = verify_block_signature_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VERIFY_TRANSACTION_SIGNATURE:
            return_value = verify_transaction_signature_.deserialize_check_type(buffer, wire_type);
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
      clear_verify_passive_data();
      clear_verify_block_signature();
      clear_verify_transaction_signature();

    }

    private:


      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_signature_data_LENGTH> block_;
      EmbeddedProto::boolean verify_passive_data_ = false;
      EmbeddedProto::boolean verify_block_signature_ = false;
      EmbeddedProto::boolean verify_transaction_signature_ = false;

};

template<uint32_t receipt_id_LENGTH, 
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
uint32_t receipt_transaction_receipts_events_impacted_LENGTH>
class submit_block_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_block_response() = default;
    submit_block_response(const submit_block_response& rhs )
    {
      set_receipt(rhs.get_receipt());
    }

    submit_block_response(const submit_block_response&& rhs ) noexcept
    {
      set_receipt(rhs.get_receipt());
    }

    ~submit_block_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RECEIPT = 1
    };

    submit_block_response& operator=(const submit_block_response& rhs)
    {
      set_receipt(rhs.get_receipt());
      return *this;
    }

    submit_block_response& operator=(const submit_block_response&& rhs) noexcept
    {
      set_receipt(rhs.get_receipt());
      return *this;
    }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::block_receipt<receipt_id_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH>& value) { receipt_ = value; }
    inline void set_receipt(const protocol::block_receipt<receipt_id_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH>&& value) { receipt_ = value; }
    inline protocol::block_receipt<receipt_id_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH>& mutable_receipt() { return receipt_; }
    inline const protocol::block_receipt<receipt_id_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH>& get_receipt() const { return receipt_; }
    inline const protocol::block_receipt<receipt_id_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH>& receipt() const { return receipt_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

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
      clear_receipt();

    }

    private:


      protocol::block_receipt<receipt_id_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH, receipt_transaction_receipts_REP_LENGTH, receipt_transaction_receipts_id_LENGTH, receipt_transaction_receipts_payer_LENGTH, receipt_transaction_receipts_events_REP_LENGTH, receipt_transaction_receipts_events_source_LENGTH, receipt_transaction_receipts_events_name_LENGTH, receipt_transaction_receipts_events_data_LENGTH, receipt_transaction_receipts_events_impacted_REP_LENGTH, receipt_transaction_receipts_events_impacted_LENGTH> receipt_;

};

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_active_LENGTH, 
uint32_t transaction_signature_data_LENGTH>
class submit_transaction_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_transaction_request() = default;
    submit_transaction_request(const submit_transaction_request& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
    }

    submit_transaction_request(const submit_transaction_request&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
    }

    ~submit_transaction_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      VERIFY_PASSIVE_DATA = 2,
      VERIFY_TRANSACTION_SIGNATURE = 3
    };

    submit_transaction_request& operator=(const submit_transaction_request& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
      return *this;
    }

    submit_transaction_request& operator=(const submit_transaction_request&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_verify_passive_data(rhs.get_verify_passive_data());
      set_verify_transaction_signature(rhs.get_verify_transaction_signature());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }

    inline void clear_verify_passive_data() { verify_passive_data_.clear(); }
    inline void set_verify_passive_data(const EmbeddedProto::boolean& value) { verify_passive_data_ = value; }
    inline void set_verify_passive_data(const EmbeddedProto::boolean&& value) { verify_passive_data_ = value; }
    inline EmbeddedProto::boolean& mutable_verify_passive_data() { return verify_passive_data_; }
    inline const EmbeddedProto::boolean& get_verify_passive_data() const { return verify_passive_data_; }
    inline EmbeddedProto::boolean::FIELD_TYPE verify_passive_data() const { return verify_passive_data_.get(); }

    inline void clear_verify_transaction_signature() { verify_transaction_signature_.clear(); }
    inline void set_verify_transaction_signature(const EmbeddedProto::boolean& value) { verify_transaction_signature_ = value; }
    inline void set_verify_transaction_signature(const EmbeddedProto::boolean&& value) { verify_transaction_signature_ = value; }
    inline EmbeddedProto::boolean& mutable_verify_transaction_signature() { return verify_transaction_signature_; }
    inline const EmbeddedProto::boolean& get_verify_transaction_signature() const { return verify_transaction_signature_; }
    inline EmbeddedProto::boolean::FIELD_TYPE verify_transaction_signature() const { return verify_transaction_signature_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
      }

      if((false != verify_passive_data_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_passive_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VERIFY_PASSIVE_DATA), buffer, false);
      }

      if((false != verify_transaction_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_transaction_signature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VERIFY_TRANSACTION_SIGNATURE), buffer, false);
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

          case FieldNumber::VERIFY_PASSIVE_DATA:
            return_value = verify_passive_data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VERIFY_TRANSACTION_SIGNATURE:
            return_value = verify_transaction_signature_.deserialize_check_type(buffer, wire_type);
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
      clear_verify_passive_data();
      clear_verify_transaction_signature();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_signature_data_LENGTH> transaction_;
      EmbeddedProto::boolean verify_passive_data_ = false;
      EmbeddedProto::boolean verify_transaction_signature_ = false;

};

template<uint32_t receipt_id_LENGTH, 
uint32_t receipt_payer_LENGTH, 
uint32_t receipt_events_REP_LENGTH, 
uint32_t receipt_events_source_LENGTH, 
uint32_t receipt_events_name_LENGTH, 
uint32_t receipt_events_data_LENGTH, 
uint32_t receipt_events_impacted_REP_LENGTH, 
uint32_t receipt_events_impacted_LENGTH>
class submit_transaction_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_transaction_response() = default;
    submit_transaction_response(const submit_transaction_response& rhs )
    {
      set_receipt(rhs.get_receipt());
    }

    submit_transaction_response(const submit_transaction_response&& rhs ) noexcept
    {
      set_receipt(rhs.get_receipt());
    }

    ~submit_transaction_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RECEIPT = 1
    };

    submit_transaction_response& operator=(const submit_transaction_response& rhs)
    {
      set_receipt(rhs.get_receipt());
      return *this;
    }

    submit_transaction_response& operator=(const submit_transaction_response&& rhs) noexcept
    {
      set_receipt(rhs.get_receipt());
      return *this;
    }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH>& value) { receipt_ = value; }
    inline void set_receipt(const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH>&& value) { receipt_ = value; }
    inline protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH>& mutable_receipt() { return receipt_; }
    inline const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH>& get_receipt() const { return receipt_; }
    inline const protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH>& receipt() const { return receipt_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

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
      clear_receipt();

    }

    private:


      protocol::transaction_receipt<receipt_id_LENGTH, receipt_payer_LENGTH, receipt_events_REP_LENGTH, receipt_events_source_LENGTH, receipt_events_name_LENGTH, receipt_events_data_LENGTH, receipt_events_impacted_REP_LENGTH, receipt_events_impacted_LENGTH> receipt_;

};

class get_head_info_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_head_info_request() = default;
    get_head_info_request(const get_head_info_request& rhs )
    {
    }

    get_head_info_request(const get_head_info_request&& rhs ) noexcept
    {
    }

    ~get_head_info_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_head_info_request& operator=(const get_head_info_request& rhs)
    {
      return *this;
    }

    get_head_info_request& operator=(const get_head_info_request&& rhs) noexcept
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

template<uint32_t head_topology_id_LENGTH, 
uint32_t head_topology_previous_LENGTH>
class get_head_info_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_head_info_response() = default;
    get_head_info_response(const get_head_info_response& rhs )
    {
      set_head_topology(rhs.get_head_topology());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
    }

    get_head_info_response(const get_head_info_response&& rhs ) noexcept
    {
      set_head_topology(rhs.get_head_topology());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
    }

    ~get_head_info_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      HEAD_TOPOLOGY = 1,
      LAST_IRREVERSIBLE_BLOCK = 2
    };

    get_head_info_response& operator=(const get_head_info_response& rhs)
    {
      set_head_topology(rhs.get_head_topology());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      return *this;
    }

    get_head_info_response& operator=(const get_head_info_response&& rhs) noexcept
    {
      set_head_topology(rhs.get_head_topology());
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      return *this;
    }

    inline void clear_head_topology() { head_topology_.clear(); }
    inline void set_head_topology(const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& value) { head_topology_ = value; }
    inline void set_head_topology(const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>&& value) { head_topology_ = value; }
    inline block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& mutable_head_topology() { return head_topology_; }
    inline const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& get_head_topology() const { return head_topology_; }
    inline const block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH>& head_topology() const { return head_topology_; }

    inline void clear_last_irreversible_block() { last_irreversible_block_.clear(); }
    inline void set_last_irreversible_block(const EmbeddedProto::uint64& value) { last_irreversible_block_ = value; }
    inline void set_last_irreversible_block(const EmbeddedProto::uint64&& value) { last_irreversible_block_ = value; }
    inline EmbeddedProto::uint64& mutable_last_irreversible_block() { return last_irreversible_block_; }
    inline const EmbeddedProto::uint64& get_last_irreversible_block() const { return last_irreversible_block_; }
    inline EmbeddedProto::uint64::FIELD_TYPE last_irreversible_block() const { return last_irreversible_block_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = head_topology_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEAD_TOPOLOGY), buffer, false);
      }

      if((0U != last_irreversible_block_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_irreversible_block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_IRREVERSIBLE_BLOCK), buffer, false);
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
          case FieldNumber::HEAD_TOPOLOGY:
            return_value = head_topology_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LAST_IRREVERSIBLE_BLOCK:
            return_value = last_irreversible_block_.deserialize_check_type(buffer, wire_type);
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
      clear_head_topology();
      clear_last_irreversible_block();

    }

    private:


      block_topology<head_topology_id_LENGTH, head_topology_previous_LENGTH> head_topology_;
      EmbeddedProto::uint64 last_irreversible_block_ = 0U;

};

class get_chain_id_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_chain_id_request() = default;
    get_chain_id_request(const get_chain_id_request& rhs )
    {
    }

    get_chain_id_request(const get_chain_id_request&& rhs ) noexcept
    {
    }

    ~get_chain_id_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_chain_id_request& operator=(const get_chain_id_request& rhs)
    {
      return *this;
    }

    get_chain_id_request& operator=(const get_chain_id_request&& rhs) noexcept
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

template<uint32_t chain_id_LENGTH>
class get_chain_id_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_chain_id_response() = default;
    get_chain_id_response(const get_chain_id_response& rhs )
    {
      set_chain_id(rhs.get_chain_id());
    }

    get_chain_id_response(const get_chain_id_response&& rhs ) noexcept
    {
      set_chain_id(rhs.get_chain_id());
    }

    ~get_chain_id_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CHAIN_ID = 1
    };

    get_chain_id_response& operator=(const get_chain_id_response& rhs)
    {
      set_chain_id(rhs.get_chain_id());
      return *this;
    }

    get_chain_id_response& operator=(const get_chain_id_response&& rhs) noexcept
    {
      set_chain_id(rhs.get_chain_id());
      return *this;
    }

    inline void clear_chain_id() { chain_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<chain_id_LENGTH>& mutable_chain_id() { return chain_id_; }
    inline void set_chain_id(const ::EmbeddedProto::FieldBytes<chain_id_LENGTH>& rhs) { chain_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<chain_id_LENGTH>& get_chain_id() const { return chain_id_; }
    inline const uint8_t* chain_id() const { return chain_id_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = chain_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHAIN_ID), buffer, false);
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
          case FieldNumber::CHAIN_ID:
            return_value = chain_id_.deserialize_check_type(buffer, wire_type);
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
      clear_chain_id();

    }

    private:


      ::EmbeddedProto::FieldBytes<chain_id_LENGTH> chain_id_;

};

class get_fork_heads_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_fork_heads_request() = default;
    get_fork_heads_request(const get_fork_heads_request& rhs )
    {
    }

    get_fork_heads_request(const get_fork_heads_request&& rhs ) noexcept
    {
    }

    ~get_fork_heads_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_fork_heads_request& operator=(const get_fork_heads_request& rhs)
    {
      return *this;
    }

    get_fork_heads_request& operator=(const get_fork_heads_request&& rhs) noexcept
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

template<uint32_t last_irreversible_block_id_LENGTH, 
uint32_t last_irreversible_block_previous_LENGTH, 
uint32_t fork_heads_REP_LENGTH, 
uint32_t fork_heads_id_LENGTH, 
uint32_t fork_heads_previous_LENGTH>
class get_fork_heads_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_fork_heads_response() = default;
    get_fork_heads_response(const get_fork_heads_response& rhs )
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_fork_heads(rhs.get_fork_heads());
    }

    get_fork_heads_response(const get_fork_heads_response&& rhs ) noexcept
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_fork_heads(rhs.get_fork_heads());
    }

    ~get_fork_heads_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      LAST_IRREVERSIBLE_BLOCK = 1,
      FORK_HEADS = 2
    };

    get_fork_heads_response& operator=(const get_fork_heads_response& rhs)
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_fork_heads(rhs.get_fork_heads());
      return *this;
    }

    get_fork_heads_response& operator=(const get_fork_heads_response&& rhs) noexcept
    {
      set_last_irreversible_block(rhs.get_last_irreversible_block());
      set_fork_heads(rhs.get_fork_heads());
      return *this;
    }

    inline void clear_last_irreversible_block() { last_irreversible_block_.clear(); }
    inline void set_last_irreversible_block(const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& value) { last_irreversible_block_ = value; }
    inline void set_last_irreversible_block(const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>&& value) { last_irreversible_block_ = value; }
    inline block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& mutable_last_irreversible_block() { return last_irreversible_block_; }
    inline const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& get_last_irreversible_block() const { return last_irreversible_block_; }
    inline const block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH>& last_irreversible_block() const { return last_irreversible_block_; }

    inline const block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>& fork_heads(uint32_t index) const { return fork_heads_[index]; }
    inline void clear_fork_heads() { fork_heads_.clear(); }
    inline void set_fork_heads(uint32_t index, const block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>& value) { fork_heads_.set(index, value); }
    inline void set_fork_heads(uint32_t index, const block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>&& value) { fork_heads_.set(index, value); }
    inline void set_fork_heads(const ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>, fork_heads_REP_LENGTH>& values) { fork_heads_ = values; }
    inline void add_fork_heads(const block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>& value) { fork_heads_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>, fork_heads_REP_LENGTH>& mutable_fork_heads() { return fork_heads_; }
    inline block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>& mutable_fork_heads(uint32_t index) { return fork_heads_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>, fork_heads_REP_LENGTH>& get_fork_heads() const { return fork_heads_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>, fork_heads_REP_LENGTH>& fork_heads() const { return fork_heads_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = last_irreversible_block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_IRREVERSIBLE_BLOCK), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = fork_heads_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FORK_HEADS), buffer, false);
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

          case FieldNumber::FORK_HEADS:
            return_value = fork_heads_.deserialize_check_type(buffer, wire_type);
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
      clear_fork_heads();

    }

    private:


      block_topology<last_irreversible_block_id_LENGTH, last_irreversible_block_previous_LENGTH> last_irreversible_block_;
      ::EmbeddedProto::RepeatedFieldFixedSize<block_topology<fork_heads_id_LENGTH, fork_heads_previous_LENGTH>, fork_heads_REP_LENGTH> fork_heads_;

};

template<uint32_t contract_id_LENGTH, 
uint32_t args_LENGTH>
class read_contract_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    read_contract_request() = default;
    read_contract_request(const read_contract_request& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    read_contract_request(const read_contract_request&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    ~read_contract_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      ENTRY_POINT = 2,
      ARGS = 3
    };

    read_contract_request& operator=(const read_contract_request& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
      return *this;
    }

    read_contract_request& operator=(const read_contract_request&& rhs) noexcept
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

template<uint32_t result_LENGTH, 
uint32_t logs_LENGTH>
class read_contract_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    read_contract_response() = default;
    read_contract_response(const read_contract_response& rhs )
    {
      set_result(rhs.get_result());
      set_logs(rhs.get_logs());
    }

    read_contract_response(const read_contract_response&& rhs ) noexcept
    {
      set_result(rhs.get_result());
      set_logs(rhs.get_logs());
    }

    ~read_contract_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESULT = 1,
      LOGS = 2
    };

    read_contract_response& operator=(const read_contract_response& rhs)
    {
      set_result(rhs.get_result());
      set_logs(rhs.get_logs());
      return *this;
    }

    read_contract_response& operator=(const read_contract_response&& rhs) noexcept
    {
      set_result(rhs.get_result());
      set_logs(rhs.get_logs());
      return *this;
    }

    inline void clear_result() { result_.clear(); }
    inline ::EmbeddedProto::FieldBytes<result_LENGTH>& mutable_result() { return result_; }
    inline void set_result(const ::EmbeddedProto::FieldBytes<result_LENGTH>& rhs) { result_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<result_LENGTH>& get_result() const { return result_; }
    inline const uint8_t* result() const { return result_.get_const(); }

    inline void clear_logs() { logs_.clear(); }
    inline ::EmbeddedProto::FieldString<logs_LENGTH>& mutable_logs() { return logs_; }
    inline void set_logs(const ::EmbeddedProto::FieldString<logs_LENGTH>& rhs) { logs_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<logs_LENGTH>& get_logs() const { return logs_; }
    inline const char* logs() const { return logs_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = result_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RESULT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = logs_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LOGS), buffer, false);
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
          case FieldNumber::RESULT:
            return_value = result_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LOGS:
            return_value = logs_.deserialize_check_type(buffer, wire_type);
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
      clear_result();
      clear_logs();

    }

    private:


      ::EmbeddedProto::FieldBytes<result_LENGTH> result_;
      ::EmbeddedProto::FieldString<logs_LENGTH> logs_;

};

template<uint32_t account_LENGTH>
class get_account_nonce_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_nonce_request() = default;
    get_account_nonce_request(const get_account_nonce_request& rhs )
    {
      set_account(rhs.get_account());
    }

    get_account_nonce_request(const get_account_nonce_request&& rhs ) noexcept
    {
      set_account(rhs.get_account());
    }

    ~get_account_nonce_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1
    };

    get_account_nonce_request& operator=(const get_account_nonce_request& rhs)
    {
      set_account(rhs.get_account());
      return *this;
    }

    get_account_nonce_request& operator=(const get_account_nonce_request&& rhs) noexcept
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

class get_account_nonce_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_nonce_response() = default;
    get_account_nonce_response(const get_account_nonce_response& rhs )
    {
      set_nonce(rhs.get_nonce());
    }

    get_account_nonce_response(const get_account_nonce_response&& rhs ) noexcept
    {
      set_nonce(rhs.get_nonce());
    }

    ~get_account_nonce_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      NONCE = 1
    };

    get_account_nonce_response& operator=(const get_account_nonce_response& rhs)
    {
      set_nonce(rhs.get_nonce());
      return *this;
    }

    get_account_nonce_response& operator=(const get_account_nonce_response&& rhs) noexcept
    {
      set_nonce(rhs.get_nonce());
      return *this;
    }

    inline void clear_nonce() { nonce_.clear(); }
    inline void set_nonce(const EmbeddedProto::uint64& value) { nonce_ = value; }
    inline void set_nonce(const EmbeddedProto::uint64&& value) { nonce_ = value; }
    inline EmbeddedProto::uint64& mutable_nonce() { return nonce_; }
    inline const EmbeddedProto::uint64& get_nonce() const { return nonce_; }
    inline EmbeddedProto::uint64::FIELD_TYPE nonce() const { return nonce_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != nonce_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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
      clear_nonce();

    }

    private:


      EmbeddedProto::uint64 nonce_ = 0U;

};

template<uint32_t account_LENGTH>
class get_account_rc_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_rc_request() = default;
    get_account_rc_request(const get_account_rc_request& rhs )
    {
      set_account(rhs.get_account());
    }

    get_account_rc_request(const get_account_rc_request&& rhs ) noexcept
    {
      set_account(rhs.get_account());
    }

    ~get_account_rc_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCOUNT = 1
    };

    get_account_rc_request& operator=(const get_account_rc_request& rhs)
    {
      set_account(rhs.get_account());
      return *this;
    }

    get_account_rc_request& operator=(const get_account_rc_request&& rhs) noexcept
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

class get_account_rc_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_account_rc_response() = default;
    get_account_rc_response(const get_account_rc_response& rhs )
    {
      set_rc(rhs.get_rc());
    }

    get_account_rc_response(const get_account_rc_response&& rhs ) noexcept
    {
      set_rc(rhs.get_rc());
    }

    ~get_account_rc_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RC = 1
    };

    get_account_rc_response& operator=(const get_account_rc_response& rhs)
    {
      set_rc(rhs.get_rc());
      return *this;
    }

    get_account_rc_response& operator=(const get_account_rc_response&& rhs) noexcept
    {
      set_rc(rhs.get_rc());
      return *this;
    }

    inline void clear_rc() { rc_.clear(); }
    inline void set_rc(const EmbeddedProto::uint64& value) { rc_ = value; }
    inline void set_rc(const EmbeddedProto::uint64&& value) { rc_ = value; }
    inline EmbeddedProto::uint64& mutable_rc() { return rc_; }
    inline const EmbeddedProto::uint64& get_rc() const { return rc_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc() const { return rc_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != rc_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC), buffer, false);
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
          case FieldNumber::RC:
            return_value = rc_.deserialize_check_type(buffer, wire_type);
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
      clear_rc();

    }

    private:


      EmbeddedProto::uint64 rc_ = 0U;

};

class get_resource_limits_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_limits_request() = default;
    get_resource_limits_request(const get_resource_limits_request& rhs )
    {
    }

    get_resource_limits_request(const get_resource_limits_request&& rhs ) noexcept
    {
    }

    ~get_resource_limits_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_resource_limits_request& operator=(const get_resource_limits_request& rhs)
    {
      return *this;
    }

    get_resource_limits_request& operator=(const get_resource_limits_request&& rhs) noexcept
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

class get_resource_limits_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_resource_limits_response() = default;
    get_resource_limits_response(const get_resource_limits_response& rhs )
    {
      set_resource_limit_data(rhs.get_resource_limit_data());
    }

    get_resource_limits_response(const get_resource_limits_response&& rhs ) noexcept
    {
      set_resource_limit_data(rhs.get_resource_limit_data());
    }

    ~get_resource_limits_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESOURCE_LIMIT_DATA = 1
    };

    get_resource_limits_response& operator=(const get_resource_limits_response& rhs)
    {
      set_resource_limit_data(rhs.get_resource_limit_data());
      return *this;
    }

    get_resource_limits_response& operator=(const get_resource_limits_response&& rhs) noexcept
    {
      set_resource_limit_data(rhs.get_resource_limit_data());
      return *this;
    }

    inline void clear_resource_limit_data() { resource_limit_data_.clear(); }
    inline void set_resource_limit_data(const chain::resource_limit_data& value) { resource_limit_data_ = value; }
    inline void set_resource_limit_data(const chain::resource_limit_data&& value) { resource_limit_data_ = value; }
    inline chain::resource_limit_data& mutable_resource_limit_data() { return resource_limit_data_; }
    inline const chain::resource_limit_data& get_resource_limit_data() const { return resource_limit_data_; }
    inline const chain::resource_limit_data& resource_limit_data() const { return resource_limit_data_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = resource_limit_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RESOURCE_LIMIT_DATA), buffer, false);
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
          case FieldNumber::RESOURCE_LIMIT_DATA:
            return_value = resource_limit_data_.deserialize_check_type(buffer, wire_type);
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
      clear_resource_limit_data();

    }

    private:


      chain::resource_limit_data resource_limit_data_;

};

template<uint32_t submit_block_block_id_LENGTH, 
uint32_t submit_block_block_header_previous_LENGTH, 
uint32_t submit_block_block_active_LENGTH, 
uint32_t submit_block_block_signature_data_LENGTH, 
uint32_t submit_block_block_transactions_REP_LENGTH, 
uint32_t submit_block_block_transactions_id_LENGTH, 
uint32_t submit_block_block_transactions_active_LENGTH, 
uint32_t submit_block_block_transactions_signature_data_LENGTH, 
uint32_t submit_transaction_transaction_id_LENGTH, 
uint32_t submit_transaction_transaction_active_LENGTH, 
uint32_t submit_transaction_transaction_signature_data_LENGTH, 
uint32_t read_contract_contract_id_LENGTH, 
uint32_t read_contract_args_LENGTH, 
uint32_t get_account_nonce_account_LENGTH, 
uint32_t get_account_rc_account_LENGTH>
class chain_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    chain_request() = default;
    chain_request(const chain_request& rhs )
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
          break;

        default:
          break;
      }

    }

    chain_request(const chain_request&& rhs ) noexcept
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
          break;

        default:
          break;
      }

    }

    ~chain_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      SUBMIT_BLOCK = 2,
      SUBMIT_TRANSACTION = 3,
      GET_HEAD_INFO = 4,
      GET_CHAIN_ID = 5,
      GET_FORK_HEADS = 6,
      READ_CONTRACT = 7,
      GET_ACCOUNT_NONCE = 8,
      GET_ACCOUNT_RC = 9,
      GET_RESOURCE_LIMITS = 10
    };

    chain_request& operator=(const chain_request& rhs)
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
          break;

        default:
          break;
      }

      return *this;
    }

    chain_request& operator=(const chain_request&& rhs) noexcept
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
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

    inline void clear_submit_block()
    {
      if(FieldNumber::SUBMIT_BLOCK == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.submit_block_.~submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>();
      }
    }
    inline void set_submit_block(const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& value)
    {
      if(FieldNumber::SUBMIT_BLOCK != which_request_)
      {
        init_request(FieldNumber::SUBMIT_BLOCK);
      }
      request_.submit_block_ = value;
    }
    inline void set_submit_block(const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>&& value)
    {
      if(FieldNumber::SUBMIT_BLOCK != which_request_)
      {
        init_request(FieldNumber::SUBMIT_BLOCK);
      }
      request_.submit_block_ = value;
    }
    inline submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& mutable_submit_block()
    {
      if(FieldNumber::SUBMIT_BLOCK != which_request_)
      {
        init_request(FieldNumber::SUBMIT_BLOCK);
      }
      return request_.submit_block_;
    }
    inline const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& get_submit_block() const { return request_.submit_block_; }
    inline const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& submit_block() const { return request_.submit_block_; }

    inline void clear_submit_transaction()
    {
      if(FieldNumber::SUBMIT_TRANSACTION == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.submit_transaction_.~submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>();
      }
    }
    inline void set_submit_transaction(const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& value)
    {
      if(FieldNumber::SUBMIT_TRANSACTION != which_request_)
      {
        init_request(FieldNumber::SUBMIT_TRANSACTION);
      }
      request_.submit_transaction_ = value;
    }
    inline void set_submit_transaction(const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>&& value)
    {
      if(FieldNumber::SUBMIT_TRANSACTION != which_request_)
      {
        init_request(FieldNumber::SUBMIT_TRANSACTION);
      }
      request_.submit_transaction_ = value;
    }
    inline submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& mutable_submit_transaction()
    {
      if(FieldNumber::SUBMIT_TRANSACTION != which_request_)
      {
        init_request(FieldNumber::SUBMIT_TRANSACTION);
      }
      return request_.submit_transaction_;
    }
    inline const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& get_submit_transaction() const { return request_.submit_transaction_; }
    inline const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& submit_transaction() const { return request_.submit_transaction_; }

    inline void clear_get_head_info()
    {
      if(FieldNumber::GET_HEAD_INFO == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_head_info_.~get_head_info_request();
      }
    }
    inline void set_get_head_info(const get_head_info_request& value)
    {
      if(FieldNumber::GET_HEAD_INFO != which_request_)
      {
        init_request(FieldNumber::GET_HEAD_INFO);
      }
      request_.get_head_info_ = value;
    }
    inline void set_get_head_info(const get_head_info_request&& value)
    {
      if(FieldNumber::GET_HEAD_INFO != which_request_)
      {
        init_request(FieldNumber::GET_HEAD_INFO);
      }
      request_.get_head_info_ = value;
    }
    inline get_head_info_request& mutable_get_head_info()
    {
      if(FieldNumber::GET_HEAD_INFO != which_request_)
      {
        init_request(FieldNumber::GET_HEAD_INFO);
      }
      return request_.get_head_info_;
    }
    inline const get_head_info_request& get_get_head_info() const { return request_.get_head_info_; }
    inline const get_head_info_request& get_head_info() const { return request_.get_head_info_; }

    inline void clear_get_chain_id()
    {
      if(FieldNumber::GET_CHAIN_ID == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_chain_id_.~get_chain_id_request();
      }
    }
    inline void set_get_chain_id(const get_chain_id_request& value)
    {
      if(FieldNumber::GET_CHAIN_ID != which_request_)
      {
        init_request(FieldNumber::GET_CHAIN_ID);
      }
      request_.get_chain_id_ = value;
    }
    inline void set_get_chain_id(const get_chain_id_request&& value)
    {
      if(FieldNumber::GET_CHAIN_ID != which_request_)
      {
        init_request(FieldNumber::GET_CHAIN_ID);
      }
      request_.get_chain_id_ = value;
    }
    inline get_chain_id_request& mutable_get_chain_id()
    {
      if(FieldNumber::GET_CHAIN_ID != which_request_)
      {
        init_request(FieldNumber::GET_CHAIN_ID);
      }
      return request_.get_chain_id_;
    }
    inline const get_chain_id_request& get_get_chain_id() const { return request_.get_chain_id_; }
    inline const get_chain_id_request& get_chain_id() const { return request_.get_chain_id_; }

    inline void clear_get_fork_heads()
    {
      if(FieldNumber::GET_FORK_HEADS == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_fork_heads_.~get_fork_heads_request();
      }
    }
    inline void set_get_fork_heads(const get_fork_heads_request& value)
    {
      if(FieldNumber::GET_FORK_HEADS != which_request_)
      {
        init_request(FieldNumber::GET_FORK_HEADS);
      }
      request_.get_fork_heads_ = value;
    }
    inline void set_get_fork_heads(const get_fork_heads_request&& value)
    {
      if(FieldNumber::GET_FORK_HEADS != which_request_)
      {
        init_request(FieldNumber::GET_FORK_HEADS);
      }
      request_.get_fork_heads_ = value;
    }
    inline get_fork_heads_request& mutable_get_fork_heads()
    {
      if(FieldNumber::GET_FORK_HEADS != which_request_)
      {
        init_request(FieldNumber::GET_FORK_HEADS);
      }
      return request_.get_fork_heads_;
    }
    inline const get_fork_heads_request& get_get_fork_heads() const { return request_.get_fork_heads_; }
    inline const get_fork_heads_request& get_fork_heads() const { return request_.get_fork_heads_; }

    inline void clear_read_contract()
    {
      if(FieldNumber::READ_CONTRACT == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.read_contract_.~read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>();
      }
    }
    inline void set_read_contract(const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& value)
    {
      if(FieldNumber::READ_CONTRACT != which_request_)
      {
        init_request(FieldNumber::READ_CONTRACT);
      }
      request_.read_contract_ = value;
    }
    inline void set_read_contract(const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>&& value)
    {
      if(FieldNumber::READ_CONTRACT != which_request_)
      {
        init_request(FieldNumber::READ_CONTRACT);
      }
      request_.read_contract_ = value;
    }
    inline read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& mutable_read_contract()
    {
      if(FieldNumber::READ_CONTRACT != which_request_)
      {
        init_request(FieldNumber::READ_CONTRACT);
      }
      return request_.read_contract_;
    }
    inline const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& get_read_contract() const { return request_.read_contract_; }
    inline const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& read_contract() const { return request_.read_contract_; }

    inline void clear_get_account_nonce()
    {
      if(FieldNumber::GET_ACCOUNT_NONCE == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_account_nonce_.~get_account_nonce_request<get_account_nonce_account_LENGTH>();
      }
    }
    inline void set_get_account_nonce(const get_account_nonce_request<get_account_nonce_account_LENGTH>& value)
    {
      if(FieldNumber::GET_ACCOUNT_NONCE != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_NONCE);
      }
      request_.get_account_nonce_ = value;
    }
    inline void set_get_account_nonce(const get_account_nonce_request<get_account_nonce_account_LENGTH>&& value)
    {
      if(FieldNumber::GET_ACCOUNT_NONCE != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_NONCE);
      }
      request_.get_account_nonce_ = value;
    }
    inline get_account_nonce_request<get_account_nonce_account_LENGTH>& mutable_get_account_nonce()
    {
      if(FieldNumber::GET_ACCOUNT_NONCE != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_NONCE);
      }
      return request_.get_account_nonce_;
    }
    inline const get_account_nonce_request<get_account_nonce_account_LENGTH>& get_get_account_nonce() const { return request_.get_account_nonce_; }
    inline const get_account_nonce_request<get_account_nonce_account_LENGTH>& get_account_nonce() const { return request_.get_account_nonce_; }

    inline void clear_get_account_rc()
    {
      if(FieldNumber::GET_ACCOUNT_RC == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_account_rc_.~get_account_rc_request<get_account_rc_account_LENGTH>();
      }
    }
    inline void set_get_account_rc(const get_account_rc_request<get_account_rc_account_LENGTH>& value)
    {
      if(FieldNumber::GET_ACCOUNT_RC != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_RC);
      }
      request_.get_account_rc_ = value;
    }
    inline void set_get_account_rc(const get_account_rc_request<get_account_rc_account_LENGTH>&& value)
    {
      if(FieldNumber::GET_ACCOUNT_RC != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_RC);
      }
      request_.get_account_rc_ = value;
    }
    inline get_account_rc_request<get_account_rc_account_LENGTH>& mutable_get_account_rc()
    {
      if(FieldNumber::GET_ACCOUNT_RC != which_request_)
      {
        init_request(FieldNumber::GET_ACCOUNT_RC);
      }
      return request_.get_account_rc_;
    }
    inline const get_account_rc_request<get_account_rc_account_LENGTH>& get_get_account_rc() const { return request_.get_account_rc_; }
    inline const get_account_rc_request<get_account_rc_account_LENGTH>& get_account_rc() const { return request_.get_account_rc_; }

    inline void clear_get_resource_limits()
    {
      if(FieldNumber::GET_RESOURCE_LIMITS == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_resource_limits_.~get_resource_limits_request();
      }
    }
    inline void set_get_resource_limits(const get_resource_limits_request& value)
    {
      if(FieldNumber::GET_RESOURCE_LIMITS != which_request_)
      {
        init_request(FieldNumber::GET_RESOURCE_LIMITS);
      }
      request_.get_resource_limits_ = value;
    }
    inline void set_get_resource_limits(const get_resource_limits_request&& value)
    {
      if(FieldNumber::GET_RESOURCE_LIMITS != which_request_)
      {
        init_request(FieldNumber::GET_RESOURCE_LIMITS);
      }
      request_.get_resource_limits_ = value;
    }
    inline get_resource_limits_request& mutable_get_resource_limits()
    {
      if(FieldNumber::GET_RESOURCE_LIMITS != which_request_)
      {
        init_request(FieldNumber::GET_RESOURCE_LIMITS);
      }
      return request_.get_resource_limits_;
    }
    inline const get_resource_limits_request& get_get_resource_limits() const { return request_.get_resource_limits_; }
    inline const get_resource_limits_request& get_resource_limits() const { return request_.get_resource_limits_; }


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

        case FieldNumber::SUBMIT_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.submit_block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SUBMIT_BLOCK), buffer, false);
          }
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.submit_transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SUBMIT_TRANSACTION), buffer, false);
          }
          break;

        case FieldNumber::GET_HEAD_INFO:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_head_info_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_HEAD_INFO), buffer, false);
          }
          break;

        case FieldNumber::GET_CHAIN_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_chain_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_CHAIN_ID), buffer, false);
          }
          break;

        case FieldNumber::GET_FORK_HEADS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_fork_heads_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_FORK_HEADS), buffer, false);
          }
          break;

        case FieldNumber::READ_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.read_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::READ_CONTRACT), buffer, false);
          }
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_account_nonce_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_ACCOUNT_NONCE), buffer, false);
          }
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_account_rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_ACCOUNT_RC), buffer, false);
          }
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_resource_limits_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_RESOURCE_LIMITS), buffer, false);
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

          case FieldNumber::SUBMIT_BLOCK:
            return_value = deserialize_request(FieldNumber::SUBMIT_BLOCK, request_.submit_block_, buffer, wire_type);

            break;

          case FieldNumber::SUBMIT_TRANSACTION:
            return_value = deserialize_request(FieldNumber::SUBMIT_TRANSACTION, request_.submit_transaction_, buffer, wire_type);

            break;

          case FieldNumber::GET_HEAD_INFO:
            return_value = deserialize_request(FieldNumber::GET_HEAD_INFO, request_.get_head_info_, buffer, wire_type);

            break;

          case FieldNumber::GET_CHAIN_ID:
            return_value = deserialize_request(FieldNumber::GET_CHAIN_ID, request_.get_chain_id_, buffer, wire_type);

            break;

          case FieldNumber::GET_FORK_HEADS:
            return_value = deserialize_request(FieldNumber::GET_FORK_HEADS, request_.get_fork_heads_, buffer, wire_type);

            break;

          case FieldNumber::READ_CONTRACT:
            return_value = deserialize_request(FieldNumber::READ_CONTRACT, request_.read_contract_, buffer, wire_type);

            break;

          case FieldNumber::GET_ACCOUNT_NONCE:
            return_value = deserialize_request(FieldNumber::GET_ACCOUNT_NONCE, request_.get_account_nonce_, buffer, wire_type);

            break;

          case FieldNumber::GET_ACCOUNT_RC:
            return_value = deserialize_request(FieldNumber::GET_ACCOUNT_RC, request_.get_account_rc_, buffer, wire_type);

            break;

          case FieldNumber::GET_RESOURCE_LIMITS:
            return_value = deserialize_request(FieldNumber::GET_RESOURCE_LIMITS, request_.get_resource_limits_, buffer, wire_type);

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
        submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH> submit_block_;
        submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH> submit_transaction_;
        get_head_info_request get_head_info_;
        get_chain_id_request get_chain_id_;
        get_fork_heads_request get_fork_heads_;
        read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH> read_contract_;
        get_account_nonce_request<get_account_nonce_account_LENGTH> get_account_nonce_;
        get_account_rc_request<get_account_rc_account_LENGTH> get_account_rc_;
        get_resource_limits_request get_resource_limits_;
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

          case FieldNumber::SUBMIT_BLOCK:
            new(&request_.submit_block_) submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>;
            which_request_ = FieldNumber::SUBMIT_BLOCK;
            break;

          case FieldNumber::SUBMIT_TRANSACTION:
            new(&request_.submit_transaction_) submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>;
            which_request_ = FieldNumber::SUBMIT_TRANSACTION;
            break;

          case FieldNumber::GET_HEAD_INFO:
            new(&request_.get_head_info_) get_head_info_request;
            which_request_ = FieldNumber::GET_HEAD_INFO;
            break;

          case FieldNumber::GET_CHAIN_ID:
            new(&request_.get_chain_id_) get_chain_id_request;
            which_request_ = FieldNumber::GET_CHAIN_ID;
            break;

          case FieldNumber::GET_FORK_HEADS:
            new(&request_.get_fork_heads_) get_fork_heads_request;
            which_request_ = FieldNumber::GET_FORK_HEADS;
            break;

          case FieldNumber::READ_CONTRACT:
            new(&request_.read_contract_) read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>;
            which_request_ = FieldNumber::READ_CONTRACT;
            break;

          case FieldNumber::GET_ACCOUNT_NONCE:
            new(&request_.get_account_nonce_) get_account_nonce_request<get_account_nonce_account_LENGTH>;
            which_request_ = FieldNumber::GET_ACCOUNT_NONCE;
            break;

          case FieldNumber::GET_ACCOUNT_RC:
            new(&request_.get_account_rc_) get_account_rc_request<get_account_rc_account_LENGTH>;
            which_request_ = FieldNumber::GET_ACCOUNT_RC;
            break;

          case FieldNumber::GET_RESOURCE_LIMITS:
            new(&request_.get_resource_limits_) get_resource_limits_request;
            which_request_ = FieldNumber::GET_RESOURCE_LIMITS;
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
          case FieldNumber::SUBMIT_BLOCK:
            request_.submit_block_.~submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SUBMIT_TRANSACTION:
            request_.submit_transaction_.~submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_HEAD_INFO:
            request_.get_head_info_.~get_head_info_request(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_CHAIN_ID:
            request_.get_chain_id_.~get_chain_id_request(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_FORK_HEADS:
            request_.get_fork_heads_.~get_fork_heads_request(); // NOSONAR Unions require this.
            break;
          case FieldNumber::READ_CONTRACT:
            request_.read_contract_.~read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_ACCOUNT_NONCE:
            request_.get_account_nonce_.~get_account_nonce_request<get_account_nonce_account_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_ACCOUNT_RC:
            request_.get_account_rc_.~get_account_rc_request<get_account_rc_account_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_RESOURCE_LIMITS:
            request_.get_resource_limits_.~get_resource_limits_request(); // NOSONAR Unions require this.
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
uint32_t submit_block_receipt_id_LENGTH, 
uint32_t submit_block_receipt_events_REP_LENGTH, 
uint32_t submit_block_receipt_events_source_LENGTH, 
uint32_t submit_block_receipt_events_name_LENGTH, 
uint32_t submit_block_receipt_events_data_LENGTH, 
uint32_t submit_block_receipt_events_impacted_REP_LENGTH, 
uint32_t submit_block_receipt_events_impacted_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_REP_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_id_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_payer_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_events_REP_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_events_source_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_events_name_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_events_data_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, 
uint32_t submit_block_receipt_transaction_receipts_events_impacted_LENGTH, 
uint32_t submit_transaction_receipt_id_LENGTH, 
uint32_t submit_transaction_receipt_payer_LENGTH, 
uint32_t submit_transaction_receipt_events_REP_LENGTH, 
uint32_t submit_transaction_receipt_events_source_LENGTH, 
uint32_t submit_transaction_receipt_events_name_LENGTH, 
uint32_t submit_transaction_receipt_events_data_LENGTH, 
uint32_t submit_transaction_receipt_events_impacted_REP_LENGTH, 
uint32_t submit_transaction_receipt_events_impacted_LENGTH, 
uint32_t get_head_info_head_topology_id_LENGTH, 
uint32_t get_head_info_head_topology_previous_LENGTH, 
uint32_t get_chain_id_chain_id_LENGTH, 
uint32_t get_fork_heads_last_irreversible_block_id_LENGTH, 
uint32_t get_fork_heads_last_irreversible_block_previous_LENGTH, 
uint32_t get_fork_heads_fork_heads_REP_LENGTH, 
uint32_t get_fork_heads_fork_heads_id_LENGTH, 
uint32_t get_fork_heads_fork_heads_previous_LENGTH, 
uint32_t read_contract_result_LENGTH, 
uint32_t read_contract_logs_LENGTH>
class chain_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    chain_response() = default;
    chain_response(const chain_response& rhs )
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
          break;

        default:
          break;
      }

    }

    chain_response(const chain_response&& rhs ) noexcept
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
          break;

        default:
          break;
      }

    }

    ~chain_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      ERROR = 2,
      SUBMIT_BLOCK = 3,
      SUBMIT_TRANSACTION = 4,
      GET_HEAD_INFO = 5,
      GET_CHAIN_ID = 6,
      GET_FORK_HEADS = 7,
      READ_CONTRACT = 8,
      GET_ACCOUNT_NONCE = 9,
      GET_ACCOUNT_RC = 10,
      GET_RESOURCE_LIMITS = 11
    };

    chain_response& operator=(const chain_response& rhs)
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
          break;

        default:
          break;
      }

      return *this;
    }

    chain_response& operator=(const chain_response&& rhs) noexcept
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

        case FieldNumber::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case FieldNumber::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case FieldNumber::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case FieldNumber::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case FieldNumber::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          set_get_account_rc(rhs.get_get_account_rc());
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          set_get_resource_limits(rhs.get_get_resource_limits());
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

    inline void clear_submit_block()
    {
      if(FieldNumber::SUBMIT_BLOCK == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.submit_block_.~submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>();
      }
    }
    inline void set_submit_block(const submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>& value)
    {
      if(FieldNumber::SUBMIT_BLOCK != which_response_)
      {
        init_response(FieldNumber::SUBMIT_BLOCK);
      }
      response_.submit_block_ = value;
    }
    inline void set_submit_block(const submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>&& value)
    {
      if(FieldNumber::SUBMIT_BLOCK != which_response_)
      {
        init_response(FieldNumber::SUBMIT_BLOCK);
      }
      response_.submit_block_ = value;
    }
    inline submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>& mutable_submit_block()
    {
      if(FieldNumber::SUBMIT_BLOCK != which_response_)
      {
        init_response(FieldNumber::SUBMIT_BLOCK);
      }
      return response_.submit_block_;
    }
    inline const submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>& get_submit_block() const { return response_.submit_block_; }
    inline const submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>& submit_block() const { return response_.submit_block_; }

    inline void clear_submit_transaction()
    {
      if(FieldNumber::SUBMIT_TRANSACTION == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.submit_transaction_.~submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>();
      }
    }
    inline void set_submit_transaction(const submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>& value)
    {
      if(FieldNumber::SUBMIT_TRANSACTION != which_response_)
      {
        init_response(FieldNumber::SUBMIT_TRANSACTION);
      }
      response_.submit_transaction_ = value;
    }
    inline void set_submit_transaction(const submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>&& value)
    {
      if(FieldNumber::SUBMIT_TRANSACTION != which_response_)
      {
        init_response(FieldNumber::SUBMIT_TRANSACTION);
      }
      response_.submit_transaction_ = value;
    }
    inline submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>& mutable_submit_transaction()
    {
      if(FieldNumber::SUBMIT_TRANSACTION != which_response_)
      {
        init_response(FieldNumber::SUBMIT_TRANSACTION);
      }
      return response_.submit_transaction_;
    }
    inline const submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>& get_submit_transaction() const { return response_.submit_transaction_; }
    inline const submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>& submit_transaction() const { return response_.submit_transaction_; }

    inline void clear_get_head_info()
    {
      if(FieldNumber::GET_HEAD_INFO == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_head_info_.~get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>();
      }
    }
    inline void set_get_head_info(const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& value)
    {
      if(FieldNumber::GET_HEAD_INFO != which_response_)
      {
        init_response(FieldNumber::GET_HEAD_INFO);
      }
      response_.get_head_info_ = value;
    }
    inline void set_get_head_info(const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>&& value)
    {
      if(FieldNumber::GET_HEAD_INFO != which_response_)
      {
        init_response(FieldNumber::GET_HEAD_INFO);
      }
      response_.get_head_info_ = value;
    }
    inline get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& mutable_get_head_info()
    {
      if(FieldNumber::GET_HEAD_INFO != which_response_)
      {
        init_response(FieldNumber::GET_HEAD_INFO);
      }
      return response_.get_head_info_;
    }
    inline const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& get_get_head_info() const { return response_.get_head_info_; }
    inline const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& get_head_info() const { return response_.get_head_info_; }

    inline void clear_get_chain_id()
    {
      if(FieldNumber::GET_CHAIN_ID == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_chain_id_.~get_chain_id_response<get_chain_id_chain_id_LENGTH>();
      }
    }
    inline void set_get_chain_id(const get_chain_id_response<get_chain_id_chain_id_LENGTH>& value)
    {
      if(FieldNumber::GET_CHAIN_ID != which_response_)
      {
        init_response(FieldNumber::GET_CHAIN_ID);
      }
      response_.get_chain_id_ = value;
    }
    inline void set_get_chain_id(const get_chain_id_response<get_chain_id_chain_id_LENGTH>&& value)
    {
      if(FieldNumber::GET_CHAIN_ID != which_response_)
      {
        init_response(FieldNumber::GET_CHAIN_ID);
      }
      response_.get_chain_id_ = value;
    }
    inline get_chain_id_response<get_chain_id_chain_id_LENGTH>& mutable_get_chain_id()
    {
      if(FieldNumber::GET_CHAIN_ID != which_response_)
      {
        init_response(FieldNumber::GET_CHAIN_ID);
      }
      return response_.get_chain_id_;
    }
    inline const get_chain_id_response<get_chain_id_chain_id_LENGTH>& get_get_chain_id() const { return response_.get_chain_id_; }
    inline const get_chain_id_response<get_chain_id_chain_id_LENGTH>& get_chain_id() const { return response_.get_chain_id_; }

    inline void clear_get_fork_heads()
    {
      if(FieldNumber::GET_FORK_HEADS == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_fork_heads_.~get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>();
      }
    }
    inline void set_get_fork_heads(const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& value)
    {
      if(FieldNumber::GET_FORK_HEADS != which_response_)
      {
        init_response(FieldNumber::GET_FORK_HEADS);
      }
      response_.get_fork_heads_ = value;
    }
    inline void set_get_fork_heads(const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>&& value)
    {
      if(FieldNumber::GET_FORK_HEADS != which_response_)
      {
        init_response(FieldNumber::GET_FORK_HEADS);
      }
      response_.get_fork_heads_ = value;
    }
    inline get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& mutable_get_fork_heads()
    {
      if(FieldNumber::GET_FORK_HEADS != which_response_)
      {
        init_response(FieldNumber::GET_FORK_HEADS);
      }
      return response_.get_fork_heads_;
    }
    inline const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& get_get_fork_heads() const { return response_.get_fork_heads_; }
    inline const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& get_fork_heads() const { return response_.get_fork_heads_; }

    inline void clear_read_contract()
    {
      if(FieldNumber::READ_CONTRACT == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.read_contract_.~read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>();
      }
    }
    inline void set_read_contract(const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& value)
    {
      if(FieldNumber::READ_CONTRACT != which_response_)
      {
        init_response(FieldNumber::READ_CONTRACT);
      }
      response_.read_contract_ = value;
    }
    inline void set_read_contract(const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>&& value)
    {
      if(FieldNumber::READ_CONTRACT != which_response_)
      {
        init_response(FieldNumber::READ_CONTRACT);
      }
      response_.read_contract_ = value;
    }
    inline read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& mutable_read_contract()
    {
      if(FieldNumber::READ_CONTRACT != which_response_)
      {
        init_response(FieldNumber::READ_CONTRACT);
      }
      return response_.read_contract_;
    }
    inline const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& get_read_contract() const { return response_.read_contract_; }
    inline const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& read_contract() const { return response_.read_contract_; }

    inline void clear_get_account_nonce()
    {
      if(FieldNumber::GET_ACCOUNT_NONCE == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_account_nonce_.~get_account_nonce_response();
      }
    }
    inline void set_get_account_nonce(const get_account_nonce_response& value)
    {
      if(FieldNumber::GET_ACCOUNT_NONCE != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_NONCE);
      }
      response_.get_account_nonce_ = value;
    }
    inline void set_get_account_nonce(const get_account_nonce_response&& value)
    {
      if(FieldNumber::GET_ACCOUNT_NONCE != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_NONCE);
      }
      response_.get_account_nonce_ = value;
    }
    inline get_account_nonce_response& mutable_get_account_nonce()
    {
      if(FieldNumber::GET_ACCOUNT_NONCE != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_NONCE);
      }
      return response_.get_account_nonce_;
    }
    inline const get_account_nonce_response& get_get_account_nonce() const { return response_.get_account_nonce_; }
    inline const get_account_nonce_response& get_account_nonce() const { return response_.get_account_nonce_; }

    inline void clear_get_account_rc()
    {
      if(FieldNumber::GET_ACCOUNT_RC == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_account_rc_.~get_account_rc_response();
      }
    }
    inline void set_get_account_rc(const get_account_rc_response& value)
    {
      if(FieldNumber::GET_ACCOUNT_RC != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_RC);
      }
      response_.get_account_rc_ = value;
    }
    inline void set_get_account_rc(const get_account_rc_response&& value)
    {
      if(FieldNumber::GET_ACCOUNT_RC != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_RC);
      }
      response_.get_account_rc_ = value;
    }
    inline get_account_rc_response& mutable_get_account_rc()
    {
      if(FieldNumber::GET_ACCOUNT_RC != which_response_)
      {
        init_response(FieldNumber::GET_ACCOUNT_RC);
      }
      return response_.get_account_rc_;
    }
    inline const get_account_rc_response& get_get_account_rc() const { return response_.get_account_rc_; }
    inline const get_account_rc_response& get_account_rc() const { return response_.get_account_rc_; }

    inline void clear_get_resource_limits()
    {
      if(FieldNumber::GET_RESOURCE_LIMITS == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_resource_limits_.~get_resource_limits_response();
      }
    }
    inline void set_get_resource_limits(const get_resource_limits_response& value)
    {
      if(FieldNumber::GET_RESOURCE_LIMITS != which_response_)
      {
        init_response(FieldNumber::GET_RESOURCE_LIMITS);
      }
      response_.get_resource_limits_ = value;
    }
    inline void set_get_resource_limits(const get_resource_limits_response&& value)
    {
      if(FieldNumber::GET_RESOURCE_LIMITS != which_response_)
      {
        init_response(FieldNumber::GET_RESOURCE_LIMITS);
      }
      response_.get_resource_limits_ = value;
    }
    inline get_resource_limits_response& mutable_get_resource_limits()
    {
      if(FieldNumber::GET_RESOURCE_LIMITS != which_response_)
      {
        init_response(FieldNumber::GET_RESOURCE_LIMITS);
      }
      return response_.get_resource_limits_;
    }
    inline const get_resource_limits_response& get_get_resource_limits() const { return response_.get_resource_limits_; }
    inline const get_resource_limits_response& get_resource_limits() const { return response_.get_resource_limits_; }


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

        case FieldNumber::SUBMIT_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.submit_block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SUBMIT_BLOCK), buffer, false);
          }
          break;

        case FieldNumber::SUBMIT_TRANSACTION:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.submit_transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SUBMIT_TRANSACTION), buffer, false);
          }
          break;

        case FieldNumber::GET_HEAD_INFO:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_head_info_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_HEAD_INFO), buffer, false);
          }
          break;

        case FieldNumber::GET_CHAIN_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_chain_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_CHAIN_ID), buffer, false);
          }
          break;

        case FieldNumber::GET_FORK_HEADS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_fork_heads_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_FORK_HEADS), buffer, false);
          }
          break;

        case FieldNumber::READ_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.read_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::READ_CONTRACT), buffer, false);
          }
          break;

        case FieldNumber::GET_ACCOUNT_NONCE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_account_nonce_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_ACCOUNT_NONCE), buffer, false);
          }
          break;

        case FieldNumber::GET_ACCOUNT_RC:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_account_rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_ACCOUNT_RC), buffer, false);
          }
          break;

        case FieldNumber::GET_RESOURCE_LIMITS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_resource_limits_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_RESOURCE_LIMITS), buffer, false);
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

          case FieldNumber::SUBMIT_BLOCK:
            return_value = deserialize_response(FieldNumber::SUBMIT_BLOCK, response_.submit_block_, buffer, wire_type);

            break;

          case FieldNumber::SUBMIT_TRANSACTION:
            return_value = deserialize_response(FieldNumber::SUBMIT_TRANSACTION, response_.submit_transaction_, buffer, wire_type);

            break;

          case FieldNumber::GET_HEAD_INFO:
            return_value = deserialize_response(FieldNumber::GET_HEAD_INFO, response_.get_head_info_, buffer, wire_type);

            break;

          case FieldNumber::GET_CHAIN_ID:
            return_value = deserialize_response(FieldNumber::GET_CHAIN_ID, response_.get_chain_id_, buffer, wire_type);

            break;

          case FieldNumber::GET_FORK_HEADS:
            return_value = deserialize_response(FieldNumber::GET_FORK_HEADS, response_.get_fork_heads_, buffer, wire_type);

            break;

          case FieldNumber::READ_CONTRACT:
            return_value = deserialize_response(FieldNumber::READ_CONTRACT, response_.read_contract_, buffer, wire_type);

            break;

          case FieldNumber::GET_ACCOUNT_NONCE:
            return_value = deserialize_response(FieldNumber::GET_ACCOUNT_NONCE, response_.get_account_nonce_, buffer, wire_type);

            break;

          case FieldNumber::GET_ACCOUNT_RC:
            return_value = deserialize_response(FieldNumber::GET_ACCOUNT_RC, response_.get_account_rc_, buffer, wire_type);

            break;

          case FieldNumber::GET_RESOURCE_LIMITS:
            return_value = deserialize_response(FieldNumber::GET_RESOURCE_LIMITS, response_.get_resource_limits_, buffer, wire_type);

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
        submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH> submit_block_;
        submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH> submit_transaction_;
        get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH> get_head_info_;
        get_chain_id_response<get_chain_id_chain_id_LENGTH> get_chain_id_;
        get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH> get_fork_heads_;
        read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH> read_contract_;
        get_account_nonce_response get_account_nonce_;
        get_account_rc_response get_account_rc_;
        get_resource_limits_response get_resource_limits_;
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

          case FieldNumber::SUBMIT_BLOCK:
            new(&response_.submit_block_) submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>;
            which_response_ = FieldNumber::SUBMIT_BLOCK;
            break;

          case FieldNumber::SUBMIT_TRANSACTION:
            new(&response_.submit_transaction_) submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>;
            which_response_ = FieldNumber::SUBMIT_TRANSACTION;
            break;

          case FieldNumber::GET_HEAD_INFO:
            new(&response_.get_head_info_) get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>;
            which_response_ = FieldNumber::GET_HEAD_INFO;
            break;

          case FieldNumber::GET_CHAIN_ID:
            new(&response_.get_chain_id_) get_chain_id_response<get_chain_id_chain_id_LENGTH>;
            which_response_ = FieldNumber::GET_CHAIN_ID;
            break;

          case FieldNumber::GET_FORK_HEADS:
            new(&response_.get_fork_heads_) get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>;
            which_response_ = FieldNumber::GET_FORK_HEADS;
            break;

          case FieldNumber::READ_CONTRACT:
            new(&response_.read_contract_) read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>;
            which_response_ = FieldNumber::READ_CONTRACT;
            break;

          case FieldNumber::GET_ACCOUNT_NONCE:
            new(&response_.get_account_nonce_) get_account_nonce_response;
            which_response_ = FieldNumber::GET_ACCOUNT_NONCE;
            break;

          case FieldNumber::GET_ACCOUNT_RC:
            new(&response_.get_account_rc_) get_account_rc_response;
            which_response_ = FieldNumber::GET_ACCOUNT_RC;
            break;

          case FieldNumber::GET_RESOURCE_LIMITS:
            new(&response_.get_resource_limits_) get_resource_limits_response;
            which_response_ = FieldNumber::GET_RESOURCE_LIMITS;
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
          case FieldNumber::SUBMIT_BLOCK:
            response_.submit_block_.~submit_block_response<submit_block_receipt_id_LENGTH, submit_block_receipt_events_REP_LENGTH, submit_block_receipt_events_source_LENGTH, submit_block_receipt_events_name_LENGTH, submit_block_receipt_events_data_LENGTH, submit_block_receipt_events_impacted_REP_LENGTH, submit_block_receipt_events_impacted_LENGTH, submit_block_receipt_transaction_receipts_REP_LENGTH, submit_block_receipt_transaction_receipts_id_LENGTH, submit_block_receipt_transaction_receipts_payer_LENGTH, submit_block_receipt_transaction_receipts_events_REP_LENGTH, submit_block_receipt_transaction_receipts_events_source_LENGTH, submit_block_receipt_transaction_receipts_events_name_LENGTH, submit_block_receipt_transaction_receipts_events_data_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_REP_LENGTH, submit_block_receipt_transaction_receipts_events_impacted_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SUBMIT_TRANSACTION:
            response_.submit_transaction_.~submit_transaction_response<submit_transaction_receipt_id_LENGTH, submit_transaction_receipt_payer_LENGTH, submit_transaction_receipt_events_REP_LENGTH, submit_transaction_receipt_events_source_LENGTH, submit_transaction_receipt_events_name_LENGTH, submit_transaction_receipt_events_data_LENGTH, submit_transaction_receipt_events_impacted_REP_LENGTH, submit_transaction_receipt_events_impacted_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_HEAD_INFO:
            response_.get_head_info_.~get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_CHAIN_ID:
            response_.get_chain_id_.~get_chain_id_response<get_chain_id_chain_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_FORK_HEADS:
            response_.get_fork_heads_.~get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::READ_CONTRACT:
            response_.read_contract_.~read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_ACCOUNT_NONCE:
            response_.get_account_nonce_.~get_account_nonce_response(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_ACCOUNT_RC:
            response_.get_account_rc_.~get_account_rc_response(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_RESOURCE_LIMITS:
            response_.get_resource_limits_.~get_resource_limits_response(); // NOSONAR Unions require this.
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

} // End of namespace chain
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_CHAIN_CHAIN_RPC_H