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

// Include external proto definitions
#include <koinos/common.h>
#include <koinos/protocol/protocol.h>
#include <koinos/rpc/rpc.h>

namespace koinos {
namespace rpc {
namespace chain {

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

    enum class id : uint32_t
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
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& block() const { return block_; }

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
        return_value = block_.serialize_with_id(static_cast<uint32_t>(id::BLOCK), buffer);
      }

      if((false != verify_passive_data_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_passive_data_.serialize_with_id(static_cast<uint32_t>(id::VERIFY_PASSIVE_DATA), buffer);
      }

      if((false != verify_block_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_block_signature_.serialize_with_id(static_cast<uint32_t>(id::VERIFY_BLOCK_SIGNATURE), buffer);
      }

      if((false != verify_transaction_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_transaction_signature_.serialize_with_id(static_cast<uint32_t>(id::VERIFY_TRANSACTION_SIGNATURE), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::BLOCK:
            return_value = block_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VERIFY_PASSIVE_DATA:
            return_value = verify_passive_data_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VERIFY_BLOCK_SIGNATURE:
            return_value = verify_block_signature_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VERIFY_TRANSACTION_SIGNATURE:
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

      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH> block_;
      EmbeddedProto::boolean verify_passive_data_ = false;
      EmbeddedProto::boolean verify_block_signature_ = false;
      EmbeddedProto::boolean verify_transaction_signature_ = false;

};

class submit_block_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_block_response() = default;
    submit_block_response(const submit_block_response& rhs )
    {
    }

    submit_block_response(const submit_block_response&& rhs ) noexcept
    {
    }

    ~submit_block_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
    };

    submit_block_response& operator=(const submit_block_response& rhs)
    {
      return *this;
    }

    submit_block_response& operator=(const submit_block_response&& rhs) noexcept
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
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
uint32_t transaction_active_LENGTH, 
uint32_t transaction_passive_LENGTH, 
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

    enum class id : uint32_t
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
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }

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
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(id::TRANSACTION), buffer);
      }

      if((false != verify_passive_data_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_passive_data_.serialize_with_id(static_cast<uint32_t>(id::VERIFY_PASSIVE_DATA), buffer);
      }

      if((false != verify_transaction_signature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = verify_transaction_signature_.serialize_with_id(static_cast<uint32_t>(id::VERIFY_TRANSACTION_SIGNATURE), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::TRANSACTION:
            return_value = transaction_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VERIFY_PASSIVE_DATA:
            return_value = verify_passive_data_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VERIFY_TRANSACTION_SIGNATURE:
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

      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH> transaction_;
      EmbeddedProto::boolean verify_passive_data_ = false;
      EmbeddedProto::boolean verify_transaction_signature_ = false;

};

class submit_transaction_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_transaction_response() = default;
    submit_transaction_response(const submit_transaction_response& rhs )
    {
    }

    submit_transaction_response(const submit_transaction_response&& rhs ) noexcept
    {
    }

    ~submit_transaction_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
    };

    submit_transaction_response& operator=(const submit_transaction_response& rhs)
    {
      return *this;
    }

    submit_transaction_response& operator=(const submit_transaction_response&& rhs) noexcept
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
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

    enum class id : uint32_t
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
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

    enum class id : uint32_t
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
        return_value = head_topology_.serialize_with_id(static_cast<uint32_t>(id::HEAD_TOPOLOGY), buffer);
      }

      if((0U != last_irreversible_block_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_irreversible_block_.serialize_with_id(static_cast<uint32_t>(id::LAST_IRREVERSIBLE_BLOCK), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::HEAD_TOPOLOGY:
            return_value = head_topology_.deserialize_check_type(buffer, wire_type);
            break;

          case id::LAST_IRREVERSIBLE_BLOCK:
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

    enum class id : uint32_t
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
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

    enum class id : uint32_t
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
        return_value = chain_id_.serialize_with_id(static_cast<uint32_t>(id::CHAIN_ID), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::CHAIN_ID:
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

    enum class id : uint32_t
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
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

    enum class id : uint32_t
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
        return_value = last_irreversible_block_.serialize_with_id(static_cast<uint32_t>(id::LAST_IRREVERSIBLE_BLOCK), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = fork_heads_.serialize_with_id(static_cast<uint32_t>(id::FORK_HEADS), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::LAST_IRREVERSIBLE_BLOCK:
            return_value = last_irreversible_block_.deserialize_check_type(buffer, wire_type);
            break;

          case id::FORK_HEADS:
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

    enum class id : uint32_t
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
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(id::CONTRACT_ID), buffer);
      }

      if((0U != entry_point_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = entry_point_.serialize_with_id(static_cast<uint32_t>(id::ENTRY_POINT), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = args_.serialize_with_id(static_cast<uint32_t>(id::ARGS), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::CONTRACT_ID:
            return_value = contract_id_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ENTRY_POINT:
            return_value = entry_point_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ARGS:
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

    enum class id : uint32_t
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
        return_value = result_.serialize_with_id(static_cast<uint32_t>(id::RESULT), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = logs_.serialize_with_id(static_cast<uint32_t>(id::LOGS), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::RESULT:
            return_value = result_.deserialize_check_type(buffer, wire_type);
            break;

          case id::LOGS:
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

    enum class id : uint32_t
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
        return_value = account_.serialize_with_id(static_cast<uint32_t>(id::ACCOUNT), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::ACCOUNT:
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

    enum class id : uint32_t
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
        return_value = nonce_.serialize_with_id(static_cast<uint32_t>(id::NONCE), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::NONCE:
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

template<uint32_t submit_block_block_id_LENGTH, 
uint32_t submit_block_block_header_previous_LENGTH, 
uint32_t submit_block_block_active_LENGTH, 
uint32_t submit_block_block_passive_LENGTH, 
uint32_t submit_block_block_signature_data_LENGTH, 
uint32_t submit_block_block_transactions_REP_LENGTH, 
uint32_t submit_block_block_transactions_id_LENGTH, 
uint32_t submit_block_block_transactions_active_LENGTH, 
uint32_t submit_block_block_transactions_passive_LENGTH, 
uint32_t submit_block_block_transactions_signature_data_LENGTH, 
uint32_t submit_transaction_transaction_id_LENGTH, 
uint32_t submit_transaction_transaction_active_LENGTH, 
uint32_t submit_transaction_transaction_passive_LENGTH, 
uint32_t submit_transaction_transaction_signature_data_LENGTH, 
uint32_t read_contract_contract_id_LENGTH, 
uint32_t read_contract_args_LENGTH, 
uint32_t get_account_nonce_account_LENGTH>
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        default:
          break;
      }

    }

    ~chain_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      SUBMIT_BLOCK = 2,
      SUBMIT_TRANSACTION = 3,
      GET_HEAD_INFO = 4,
      GET_CHAIN_ID = 5,
      GET_FORK_HEADS = 6,
      READ_CONTRACT = 7,
      GET_ACCOUNT_NONCE = 8
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        default:
          break;
      }

      return *this;
    }

    id get_which_request() const { return which_request_; }

    inline void clear_reserved()
    {
      if(id::RESERVED == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.reserved_.~reserved_rpc();
      }
    }
    inline void set_reserved(const reserved_rpc& value)
    {
      if(id::RESERVED != which_request_)
      {
        init_request(id::RESERVED);
      }
      request_.reserved_ = value;
    }
    inline void set_reserved(const reserved_rpc&& value)
    {
      if(id::RESERVED != which_request_)
      {
        init_request(id::RESERVED);
      }
      request_.reserved_ = value;
    }
    inline reserved_rpc& mutable_reserved()
    {
      if(id::RESERVED != which_request_)
      {
        init_request(id::RESERVED);
      }
      return request_.reserved_;
    }
    inline const reserved_rpc& get_reserved() const { return request_.reserved_; }
    inline const reserved_rpc& reserved() const { return request_.reserved_; }

    inline void clear_submit_block()
    {
      if(id::SUBMIT_BLOCK == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.submit_block_.~submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>();
      }
    }
    inline void set_submit_block(const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& value)
    {
      if(id::SUBMIT_BLOCK != which_request_)
      {
        init_request(id::SUBMIT_BLOCK);
      }
      request_.submit_block_ = value;
    }
    inline void set_submit_block(const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>&& value)
    {
      if(id::SUBMIT_BLOCK != which_request_)
      {
        init_request(id::SUBMIT_BLOCK);
      }
      request_.submit_block_ = value;
    }
    inline submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& mutable_submit_block()
    {
      if(id::SUBMIT_BLOCK != which_request_)
      {
        init_request(id::SUBMIT_BLOCK);
      }
      return request_.submit_block_;
    }
    inline const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& get_submit_block() const { return request_.submit_block_; }
    inline const submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>& submit_block() const { return request_.submit_block_; }

    inline void clear_submit_transaction()
    {
      if(id::SUBMIT_TRANSACTION == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.submit_transaction_.~submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>();
      }
    }
    inline void set_submit_transaction(const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& value)
    {
      if(id::SUBMIT_TRANSACTION != which_request_)
      {
        init_request(id::SUBMIT_TRANSACTION);
      }
      request_.submit_transaction_ = value;
    }
    inline void set_submit_transaction(const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>&& value)
    {
      if(id::SUBMIT_TRANSACTION != which_request_)
      {
        init_request(id::SUBMIT_TRANSACTION);
      }
      request_.submit_transaction_ = value;
    }
    inline submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& mutable_submit_transaction()
    {
      if(id::SUBMIT_TRANSACTION != which_request_)
      {
        init_request(id::SUBMIT_TRANSACTION);
      }
      return request_.submit_transaction_;
    }
    inline const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& get_submit_transaction() const { return request_.submit_transaction_; }
    inline const submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>& submit_transaction() const { return request_.submit_transaction_; }

    inline void clear_get_head_info()
    {
      if(id::GET_HEAD_INFO == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_head_info_.~get_head_info_request();
      }
    }
    inline void set_get_head_info(const get_head_info_request& value)
    {
      if(id::GET_HEAD_INFO != which_request_)
      {
        init_request(id::GET_HEAD_INFO);
      }
      request_.get_head_info_ = value;
    }
    inline void set_get_head_info(const get_head_info_request&& value)
    {
      if(id::GET_HEAD_INFO != which_request_)
      {
        init_request(id::GET_HEAD_INFO);
      }
      request_.get_head_info_ = value;
    }
    inline get_head_info_request& mutable_get_head_info()
    {
      if(id::GET_HEAD_INFO != which_request_)
      {
        init_request(id::GET_HEAD_INFO);
      }
      return request_.get_head_info_;
    }
    inline const get_head_info_request& get_get_head_info() const { return request_.get_head_info_; }
    inline const get_head_info_request& get_head_info() const { return request_.get_head_info_; }

    inline void clear_get_chain_id()
    {
      if(id::GET_CHAIN_ID == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_chain_id_.~get_chain_id_request();
      }
    }
    inline void set_get_chain_id(const get_chain_id_request& value)
    {
      if(id::GET_CHAIN_ID != which_request_)
      {
        init_request(id::GET_CHAIN_ID);
      }
      request_.get_chain_id_ = value;
    }
    inline void set_get_chain_id(const get_chain_id_request&& value)
    {
      if(id::GET_CHAIN_ID != which_request_)
      {
        init_request(id::GET_CHAIN_ID);
      }
      request_.get_chain_id_ = value;
    }
    inline get_chain_id_request& mutable_get_chain_id()
    {
      if(id::GET_CHAIN_ID != which_request_)
      {
        init_request(id::GET_CHAIN_ID);
      }
      return request_.get_chain_id_;
    }
    inline const get_chain_id_request& get_get_chain_id() const { return request_.get_chain_id_; }
    inline const get_chain_id_request& get_chain_id() const { return request_.get_chain_id_; }

    inline void clear_get_fork_heads()
    {
      if(id::GET_FORK_HEADS == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_fork_heads_.~get_fork_heads_request();
      }
    }
    inline void set_get_fork_heads(const get_fork_heads_request& value)
    {
      if(id::GET_FORK_HEADS != which_request_)
      {
        init_request(id::GET_FORK_HEADS);
      }
      request_.get_fork_heads_ = value;
    }
    inline void set_get_fork_heads(const get_fork_heads_request&& value)
    {
      if(id::GET_FORK_HEADS != which_request_)
      {
        init_request(id::GET_FORK_HEADS);
      }
      request_.get_fork_heads_ = value;
    }
    inline get_fork_heads_request& mutable_get_fork_heads()
    {
      if(id::GET_FORK_HEADS != which_request_)
      {
        init_request(id::GET_FORK_HEADS);
      }
      return request_.get_fork_heads_;
    }
    inline const get_fork_heads_request& get_get_fork_heads() const { return request_.get_fork_heads_; }
    inline const get_fork_heads_request& get_fork_heads() const { return request_.get_fork_heads_; }

    inline void clear_read_contract()
    {
      if(id::READ_CONTRACT == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.read_contract_.~read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>();
      }
    }
    inline void set_read_contract(const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& value)
    {
      if(id::READ_CONTRACT != which_request_)
      {
        init_request(id::READ_CONTRACT);
      }
      request_.read_contract_ = value;
    }
    inline void set_read_contract(const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>&& value)
    {
      if(id::READ_CONTRACT != which_request_)
      {
        init_request(id::READ_CONTRACT);
      }
      request_.read_contract_ = value;
    }
    inline read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& mutable_read_contract()
    {
      if(id::READ_CONTRACT != which_request_)
      {
        init_request(id::READ_CONTRACT);
      }
      return request_.read_contract_;
    }
    inline const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& get_read_contract() const { return request_.read_contract_; }
    inline const read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>& read_contract() const { return request_.read_contract_; }

    inline void clear_get_account_nonce()
    {
      if(id::GET_ACCOUNT_NONCE == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_account_nonce_.~get_account_nonce_request<get_account_nonce_account_LENGTH>();
      }
    }
    inline void set_get_account_nonce(const get_account_nonce_request<get_account_nonce_account_LENGTH>& value)
    {
      if(id::GET_ACCOUNT_NONCE != which_request_)
      {
        init_request(id::GET_ACCOUNT_NONCE);
      }
      request_.get_account_nonce_ = value;
    }
    inline void set_get_account_nonce(const get_account_nonce_request<get_account_nonce_account_LENGTH>&& value)
    {
      if(id::GET_ACCOUNT_NONCE != which_request_)
      {
        init_request(id::GET_ACCOUNT_NONCE);
      }
      request_.get_account_nonce_ = value;
    }
    inline get_account_nonce_request<get_account_nonce_account_LENGTH>& mutable_get_account_nonce()
    {
      if(id::GET_ACCOUNT_NONCE != which_request_)
      {
        init_request(id::GET_ACCOUNT_NONCE);
      }
      return request_.get_account_nonce_;
    }
    inline const get_account_nonce_request<get_account_nonce_account_LENGTH>& get_get_account_nonce() const { return request_.get_account_nonce_; }
    inline const get_account_nonce_request<get_account_nonce_account_LENGTH>& get_account_nonce() const { return request_.get_account_nonce_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_request_)
      {
        case id::RESERVED:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.reserved_.serialize_with_id(static_cast<uint32_t>(id::RESERVED), buffer);
          }
          break;

        case id::SUBMIT_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.submit_block_.serialize_with_id(static_cast<uint32_t>(id::SUBMIT_BLOCK), buffer);
          }
          break;

        case id::SUBMIT_TRANSACTION:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.submit_transaction_.serialize_with_id(static_cast<uint32_t>(id::SUBMIT_TRANSACTION), buffer);
          }
          break;

        case id::GET_HEAD_INFO:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_head_info_.serialize_with_id(static_cast<uint32_t>(id::GET_HEAD_INFO), buffer);
          }
          break;

        case id::GET_CHAIN_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_chain_id_.serialize_with_id(static_cast<uint32_t>(id::GET_CHAIN_ID), buffer);
          }
          break;

        case id::GET_FORK_HEADS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_fork_heads_.serialize_with_id(static_cast<uint32_t>(id::GET_FORK_HEADS), buffer);
          }
          break;

        case id::READ_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.read_contract_.serialize_with_id(static_cast<uint32_t>(id::READ_CONTRACT), buffer);
          }
          break;

        case id::GET_ACCOUNT_NONCE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_account_nonce_.serialize_with_id(static_cast<uint32_t>(id::GET_ACCOUNT_NONCE), buffer);
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::RESERVED:
            return_value = deserialize_request(id::RESERVED, request_.reserved_, buffer, wire_type);

            break;

          case id::SUBMIT_BLOCK:
            return_value = deserialize_request(id::SUBMIT_BLOCK, request_.submit_block_, buffer, wire_type);

            break;

          case id::SUBMIT_TRANSACTION:
            return_value = deserialize_request(id::SUBMIT_TRANSACTION, request_.submit_transaction_, buffer, wire_type);

            break;

          case id::GET_HEAD_INFO:
            return_value = deserialize_request(id::GET_HEAD_INFO, request_.get_head_info_, buffer, wire_type);

            break;

          case id::GET_CHAIN_ID:
            return_value = deserialize_request(id::GET_CHAIN_ID, request_.get_chain_id_, buffer, wire_type);

            break;

          case id::GET_FORK_HEADS:
            return_value = deserialize_request(id::GET_FORK_HEADS, request_.get_fork_heads_, buffer, wire_type);

            break;

          case id::READ_CONTRACT:
            return_value = deserialize_request(id::READ_CONTRACT, request_.read_contract_, buffer, wire_type);

            break;

          case id::GET_ACCOUNT_NONCE:
            return_value = deserialize_request(id::GET_ACCOUNT_NONCE, request_.get_account_nonce_, buffer, wire_type);

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


      id which_request_ = id::NOT_SET;
      union request
      {
        request() {}
        ~request() {}
        reserved_rpc reserved_;
        submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH> submit_block_;
        submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH> submit_transaction_;
        get_head_info_request get_head_info_;
        get_chain_id_request get_chain_id_;
        get_fork_heads_request get_fork_heads_;
        read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH> read_contract_;
        get_account_nonce_request<get_account_nonce_account_LENGTH> get_account_nonce_;
      };
      request request_;

      void init_request(const id field_id)
      {
        if(id::NOT_SET != which_request_)
        {
          // First delete the old object in the oneof.
          clear_request();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case id::RESERVED:
            new(&request_.reserved_) reserved_rpc;
            which_request_ = id::RESERVED;
            break;

          case id::SUBMIT_BLOCK:
            new(&request_.submit_block_) submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>;
            which_request_ = id::SUBMIT_BLOCK;
            break;

          case id::SUBMIT_TRANSACTION:
            new(&request_.submit_transaction_) submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>;
            which_request_ = id::SUBMIT_TRANSACTION;
            break;

          case id::GET_HEAD_INFO:
            new(&request_.get_head_info_) get_head_info_request;
            which_request_ = id::GET_HEAD_INFO;
            break;

          case id::GET_CHAIN_ID:
            new(&request_.get_chain_id_) get_chain_id_request;
            which_request_ = id::GET_CHAIN_ID;
            break;

          case id::GET_FORK_HEADS:
            new(&request_.get_fork_heads_) get_fork_heads_request;
            which_request_ = id::GET_FORK_HEADS;
            break;

          case id::READ_CONTRACT:
            new(&request_.read_contract_) read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>;
            which_request_ = id::READ_CONTRACT;
            break;

          case id::GET_ACCOUNT_NONCE:
            new(&request_.get_account_nonce_) get_account_nonce_request<get_account_nonce_account_LENGTH>;
            which_request_ = id::GET_ACCOUNT_NONCE;
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
          case id::RESERVED:
            request_.reserved_.~reserved_rpc(); // NOSONAR Unions require this.
            break;
          case id::SUBMIT_BLOCK:
            request_.submit_block_.~submit_block_request<submit_block_block_id_LENGTH, submit_block_block_header_previous_LENGTH, submit_block_block_active_LENGTH, submit_block_block_passive_LENGTH, submit_block_block_signature_data_LENGTH, submit_block_block_transactions_REP_LENGTH, submit_block_block_transactions_id_LENGTH, submit_block_block_transactions_active_LENGTH, submit_block_block_transactions_passive_LENGTH, submit_block_block_transactions_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::SUBMIT_TRANSACTION:
            request_.submit_transaction_.~submit_transaction_request<submit_transaction_transaction_id_LENGTH, submit_transaction_transaction_active_LENGTH, submit_transaction_transaction_passive_LENGTH, submit_transaction_transaction_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_HEAD_INFO:
            request_.get_head_info_.~get_head_info_request(); // NOSONAR Unions require this.
            break;
          case id::GET_CHAIN_ID:
            request_.get_chain_id_.~get_chain_id_request(); // NOSONAR Unions require this.
            break;
          case id::GET_FORK_HEADS:
            request_.get_fork_heads_.~get_fork_heads_request(); // NOSONAR Unions require this.
            break;
          case id::READ_CONTRACT:
            request_.read_contract_.~read_contract_request<read_contract_contract_id_LENGTH, read_contract_args_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_ACCOUNT_NONCE:
            request_.get_account_nonce_.~get_account_nonce_request<get_account_nonce_account_LENGTH>(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_request_ = id::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_request(const id field_id, ::EmbeddedProto::Field& field,
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        default:
          break;
      }

    }

    ~chain_response() override = default;

    enum class id : uint32_t
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
      GET_ACCOUNT_NONCE = 9
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::SUBMIT_BLOCK:
          set_submit_block(rhs.get_submit_block());
          break;

        case id::SUBMIT_TRANSACTION:
          set_submit_transaction(rhs.get_submit_transaction());
          break;

        case id::GET_HEAD_INFO:
          set_get_head_info(rhs.get_get_head_info());
          break;

        case id::GET_CHAIN_ID:
          set_get_chain_id(rhs.get_get_chain_id());
          break;

        case id::GET_FORK_HEADS:
          set_get_fork_heads(rhs.get_get_fork_heads());
          break;

        case id::READ_CONTRACT:
          set_read_contract(rhs.get_read_contract());
          break;

        case id::GET_ACCOUNT_NONCE:
          set_get_account_nonce(rhs.get_get_account_nonce());
          break;

        default:
          break;
      }

      return *this;
    }

    id get_which_response() const { return which_response_; }

    inline void clear_reserved()
    {
      if(id::RESERVED == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.reserved_.~reserved_rpc();
      }
    }
    inline void set_reserved(const reserved_rpc& value)
    {
      if(id::RESERVED != which_response_)
      {
        init_response(id::RESERVED);
      }
      response_.reserved_ = value;
    }
    inline void set_reserved(const reserved_rpc&& value)
    {
      if(id::RESERVED != which_response_)
      {
        init_response(id::RESERVED);
      }
      response_.reserved_ = value;
    }
    inline reserved_rpc& mutable_reserved()
    {
      if(id::RESERVED != which_response_)
      {
        init_response(id::RESERVED);
      }
      return response_.reserved_;
    }
    inline const reserved_rpc& get_reserved() const { return response_.reserved_; }
    inline const reserved_rpc& reserved() const { return response_.reserved_; }

    inline void clear_error()
    {
      if(id::ERROR == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.error_.~error_response<error_message_LENGTH, error_data_LENGTH>();
      }
    }
    inline void set_error(const error_response<error_message_LENGTH, error_data_LENGTH>& value)
    {
      if(id::ERROR != which_response_)
      {
        init_response(id::ERROR);
      }
      response_.error_ = value;
    }
    inline void set_error(const error_response<error_message_LENGTH, error_data_LENGTH>&& value)
    {
      if(id::ERROR != which_response_)
      {
        init_response(id::ERROR);
      }
      response_.error_ = value;
    }
    inline error_response<error_message_LENGTH, error_data_LENGTH>& mutable_error()
    {
      if(id::ERROR != which_response_)
      {
        init_response(id::ERROR);
      }
      return response_.error_;
    }
    inline const error_response<error_message_LENGTH, error_data_LENGTH>& get_error() const { return response_.error_; }
    inline const error_response<error_message_LENGTH, error_data_LENGTH>& error() const { return response_.error_; }

    inline void clear_submit_block()
    {
      if(id::SUBMIT_BLOCK == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.submit_block_.~submit_block_response();
      }
    }
    inline void set_submit_block(const submit_block_response& value)
    {
      if(id::SUBMIT_BLOCK != which_response_)
      {
        init_response(id::SUBMIT_BLOCK);
      }
      response_.submit_block_ = value;
    }
    inline void set_submit_block(const submit_block_response&& value)
    {
      if(id::SUBMIT_BLOCK != which_response_)
      {
        init_response(id::SUBMIT_BLOCK);
      }
      response_.submit_block_ = value;
    }
    inline submit_block_response& mutable_submit_block()
    {
      if(id::SUBMIT_BLOCK != which_response_)
      {
        init_response(id::SUBMIT_BLOCK);
      }
      return response_.submit_block_;
    }
    inline const submit_block_response& get_submit_block() const { return response_.submit_block_; }
    inline const submit_block_response& submit_block() const { return response_.submit_block_; }

    inline void clear_submit_transaction()
    {
      if(id::SUBMIT_TRANSACTION == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.submit_transaction_.~submit_transaction_response();
      }
    }
    inline void set_submit_transaction(const submit_transaction_response& value)
    {
      if(id::SUBMIT_TRANSACTION != which_response_)
      {
        init_response(id::SUBMIT_TRANSACTION);
      }
      response_.submit_transaction_ = value;
    }
    inline void set_submit_transaction(const submit_transaction_response&& value)
    {
      if(id::SUBMIT_TRANSACTION != which_response_)
      {
        init_response(id::SUBMIT_TRANSACTION);
      }
      response_.submit_transaction_ = value;
    }
    inline submit_transaction_response& mutable_submit_transaction()
    {
      if(id::SUBMIT_TRANSACTION != which_response_)
      {
        init_response(id::SUBMIT_TRANSACTION);
      }
      return response_.submit_transaction_;
    }
    inline const submit_transaction_response& get_submit_transaction() const { return response_.submit_transaction_; }
    inline const submit_transaction_response& submit_transaction() const { return response_.submit_transaction_; }

    inline void clear_get_head_info()
    {
      if(id::GET_HEAD_INFO == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_head_info_.~get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>();
      }
    }
    inline void set_get_head_info(const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& value)
    {
      if(id::GET_HEAD_INFO != which_response_)
      {
        init_response(id::GET_HEAD_INFO);
      }
      response_.get_head_info_ = value;
    }
    inline void set_get_head_info(const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>&& value)
    {
      if(id::GET_HEAD_INFO != which_response_)
      {
        init_response(id::GET_HEAD_INFO);
      }
      response_.get_head_info_ = value;
    }
    inline get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& mutable_get_head_info()
    {
      if(id::GET_HEAD_INFO != which_response_)
      {
        init_response(id::GET_HEAD_INFO);
      }
      return response_.get_head_info_;
    }
    inline const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& get_get_head_info() const { return response_.get_head_info_; }
    inline const get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>& get_head_info() const { return response_.get_head_info_; }

    inline void clear_get_chain_id()
    {
      if(id::GET_CHAIN_ID == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_chain_id_.~get_chain_id_response<get_chain_id_chain_id_LENGTH>();
      }
    }
    inline void set_get_chain_id(const get_chain_id_response<get_chain_id_chain_id_LENGTH>& value)
    {
      if(id::GET_CHAIN_ID != which_response_)
      {
        init_response(id::GET_CHAIN_ID);
      }
      response_.get_chain_id_ = value;
    }
    inline void set_get_chain_id(const get_chain_id_response<get_chain_id_chain_id_LENGTH>&& value)
    {
      if(id::GET_CHAIN_ID != which_response_)
      {
        init_response(id::GET_CHAIN_ID);
      }
      response_.get_chain_id_ = value;
    }
    inline get_chain_id_response<get_chain_id_chain_id_LENGTH>& mutable_get_chain_id()
    {
      if(id::GET_CHAIN_ID != which_response_)
      {
        init_response(id::GET_CHAIN_ID);
      }
      return response_.get_chain_id_;
    }
    inline const get_chain_id_response<get_chain_id_chain_id_LENGTH>& get_get_chain_id() const { return response_.get_chain_id_; }
    inline const get_chain_id_response<get_chain_id_chain_id_LENGTH>& get_chain_id() const { return response_.get_chain_id_; }

    inline void clear_get_fork_heads()
    {
      if(id::GET_FORK_HEADS == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_fork_heads_.~get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>();
      }
    }
    inline void set_get_fork_heads(const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& value)
    {
      if(id::GET_FORK_HEADS != which_response_)
      {
        init_response(id::GET_FORK_HEADS);
      }
      response_.get_fork_heads_ = value;
    }
    inline void set_get_fork_heads(const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>&& value)
    {
      if(id::GET_FORK_HEADS != which_response_)
      {
        init_response(id::GET_FORK_HEADS);
      }
      response_.get_fork_heads_ = value;
    }
    inline get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& mutable_get_fork_heads()
    {
      if(id::GET_FORK_HEADS != which_response_)
      {
        init_response(id::GET_FORK_HEADS);
      }
      return response_.get_fork_heads_;
    }
    inline const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& get_get_fork_heads() const { return response_.get_fork_heads_; }
    inline const get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>& get_fork_heads() const { return response_.get_fork_heads_; }

    inline void clear_read_contract()
    {
      if(id::READ_CONTRACT == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.read_contract_.~read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>();
      }
    }
    inline void set_read_contract(const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& value)
    {
      if(id::READ_CONTRACT != which_response_)
      {
        init_response(id::READ_CONTRACT);
      }
      response_.read_contract_ = value;
    }
    inline void set_read_contract(const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>&& value)
    {
      if(id::READ_CONTRACT != which_response_)
      {
        init_response(id::READ_CONTRACT);
      }
      response_.read_contract_ = value;
    }
    inline read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& mutable_read_contract()
    {
      if(id::READ_CONTRACT != which_response_)
      {
        init_response(id::READ_CONTRACT);
      }
      return response_.read_contract_;
    }
    inline const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& get_read_contract() const { return response_.read_contract_; }
    inline const read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>& read_contract() const { return response_.read_contract_; }

    inline void clear_get_account_nonce()
    {
      if(id::GET_ACCOUNT_NONCE == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_account_nonce_.~get_account_nonce_response();
      }
    }
    inline void set_get_account_nonce(const get_account_nonce_response& value)
    {
      if(id::GET_ACCOUNT_NONCE != which_response_)
      {
        init_response(id::GET_ACCOUNT_NONCE);
      }
      response_.get_account_nonce_ = value;
    }
    inline void set_get_account_nonce(const get_account_nonce_response&& value)
    {
      if(id::GET_ACCOUNT_NONCE != which_response_)
      {
        init_response(id::GET_ACCOUNT_NONCE);
      }
      response_.get_account_nonce_ = value;
    }
    inline get_account_nonce_response& mutable_get_account_nonce()
    {
      if(id::GET_ACCOUNT_NONCE != which_response_)
      {
        init_response(id::GET_ACCOUNT_NONCE);
      }
      return response_.get_account_nonce_;
    }
    inline const get_account_nonce_response& get_get_account_nonce() const { return response_.get_account_nonce_; }
    inline const get_account_nonce_response& get_account_nonce() const { return response_.get_account_nonce_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_response_)
      {
        case id::RESERVED:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.reserved_.serialize_with_id(static_cast<uint32_t>(id::RESERVED), buffer);
          }
          break;

        case id::ERROR:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.error_.serialize_with_id(static_cast<uint32_t>(id::ERROR), buffer);
          }
          break;

        case id::SUBMIT_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.submit_block_.serialize_with_id(static_cast<uint32_t>(id::SUBMIT_BLOCK), buffer);
          }
          break;

        case id::SUBMIT_TRANSACTION:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.submit_transaction_.serialize_with_id(static_cast<uint32_t>(id::SUBMIT_TRANSACTION), buffer);
          }
          break;

        case id::GET_HEAD_INFO:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_head_info_.serialize_with_id(static_cast<uint32_t>(id::GET_HEAD_INFO), buffer);
          }
          break;

        case id::GET_CHAIN_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_chain_id_.serialize_with_id(static_cast<uint32_t>(id::GET_CHAIN_ID), buffer);
          }
          break;

        case id::GET_FORK_HEADS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_fork_heads_.serialize_with_id(static_cast<uint32_t>(id::GET_FORK_HEADS), buffer);
          }
          break;

        case id::READ_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.read_contract_.serialize_with_id(static_cast<uint32_t>(id::READ_CONTRACT), buffer);
          }
          break;

        case id::GET_ACCOUNT_NONCE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_account_nonce_.serialize_with_id(static_cast<uint32_t>(id::GET_ACCOUNT_NONCE), buffer);
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
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::RESERVED:
            return_value = deserialize_response(id::RESERVED, response_.reserved_, buffer, wire_type);

            break;

          case id::ERROR:
            return_value = deserialize_response(id::ERROR, response_.error_, buffer, wire_type);

            break;

          case id::SUBMIT_BLOCK:
            return_value = deserialize_response(id::SUBMIT_BLOCK, response_.submit_block_, buffer, wire_type);

            break;

          case id::SUBMIT_TRANSACTION:
            return_value = deserialize_response(id::SUBMIT_TRANSACTION, response_.submit_transaction_, buffer, wire_type);

            break;

          case id::GET_HEAD_INFO:
            return_value = deserialize_response(id::GET_HEAD_INFO, response_.get_head_info_, buffer, wire_type);

            break;

          case id::GET_CHAIN_ID:
            return_value = deserialize_response(id::GET_CHAIN_ID, response_.get_chain_id_, buffer, wire_type);

            break;

          case id::GET_FORK_HEADS:
            return_value = deserialize_response(id::GET_FORK_HEADS, response_.get_fork_heads_, buffer, wire_type);

            break;

          case id::READ_CONTRACT:
            return_value = deserialize_response(id::READ_CONTRACT, response_.read_contract_, buffer, wire_type);

            break;

          case id::GET_ACCOUNT_NONCE:
            return_value = deserialize_response(id::GET_ACCOUNT_NONCE, response_.get_account_nonce_, buffer, wire_type);

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


      id which_response_ = id::NOT_SET;
      union response
      {
        response() {}
        ~response() {}
        reserved_rpc reserved_;
        error_response<error_message_LENGTH, error_data_LENGTH> error_;
        submit_block_response submit_block_;
        submit_transaction_response submit_transaction_;
        get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH> get_head_info_;
        get_chain_id_response<get_chain_id_chain_id_LENGTH> get_chain_id_;
        get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH> get_fork_heads_;
        read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH> read_contract_;
        get_account_nonce_response get_account_nonce_;
      };
      response response_;

      void init_response(const id field_id)
      {
        if(id::NOT_SET != which_response_)
        {
          // First delete the old object in the oneof.
          clear_response();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case id::RESERVED:
            new(&response_.reserved_) reserved_rpc;
            which_response_ = id::RESERVED;
            break;

          case id::ERROR:
            new(&response_.error_) error_response<error_message_LENGTH, error_data_LENGTH>;
            which_response_ = id::ERROR;
            break;

          case id::SUBMIT_BLOCK:
            new(&response_.submit_block_) submit_block_response;
            which_response_ = id::SUBMIT_BLOCK;
            break;

          case id::SUBMIT_TRANSACTION:
            new(&response_.submit_transaction_) submit_transaction_response;
            which_response_ = id::SUBMIT_TRANSACTION;
            break;

          case id::GET_HEAD_INFO:
            new(&response_.get_head_info_) get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>;
            which_response_ = id::GET_HEAD_INFO;
            break;

          case id::GET_CHAIN_ID:
            new(&response_.get_chain_id_) get_chain_id_response<get_chain_id_chain_id_LENGTH>;
            which_response_ = id::GET_CHAIN_ID;
            break;

          case id::GET_FORK_HEADS:
            new(&response_.get_fork_heads_) get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>;
            which_response_ = id::GET_FORK_HEADS;
            break;

          case id::READ_CONTRACT:
            new(&response_.read_contract_) read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>;
            which_response_ = id::READ_CONTRACT;
            break;

          case id::GET_ACCOUNT_NONCE:
            new(&response_.get_account_nonce_) get_account_nonce_response;
            which_response_ = id::GET_ACCOUNT_NONCE;
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
          case id::RESERVED:
            response_.reserved_.~reserved_rpc(); // NOSONAR Unions require this.
            break;
          case id::ERROR:
            response_.error_.~error_response<error_message_LENGTH, error_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::SUBMIT_BLOCK:
            response_.submit_block_.~submit_block_response(); // NOSONAR Unions require this.
            break;
          case id::SUBMIT_TRANSACTION:
            response_.submit_transaction_.~submit_transaction_response(); // NOSONAR Unions require this.
            break;
          case id::GET_HEAD_INFO:
            response_.get_head_info_.~get_head_info_response<get_head_info_head_topology_id_LENGTH, get_head_info_head_topology_previous_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_CHAIN_ID:
            response_.get_chain_id_.~get_chain_id_response<get_chain_id_chain_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_FORK_HEADS:
            response_.get_fork_heads_.~get_fork_heads_response<get_fork_heads_last_irreversible_block_id_LENGTH, get_fork_heads_last_irreversible_block_previous_LENGTH, get_fork_heads_fork_heads_REP_LENGTH, get_fork_heads_fork_heads_id_LENGTH, get_fork_heads_fork_heads_previous_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::READ_CONTRACT:
            response_.read_contract_.~read_contract_response<read_contract_result_LENGTH, read_contract_logs_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_ACCOUNT_NONCE:
            response_.get_account_nonce_.~get_account_nonce_response(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_response_ = id::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_response(const id field_id, ::EmbeddedProto::Field& field,
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