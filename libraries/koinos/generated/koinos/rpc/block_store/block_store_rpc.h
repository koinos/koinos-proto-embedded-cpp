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
#ifndef KOINOS_RPC_BLOCK_STORE_BLOCK_STORE_RPC_H
#define KOINOS_RPC_BLOCK_STORE_BLOCK_STORE_RPC_H

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
#include <koinos/block_store/block_store.h>
#include <koinos/common.h>
#include <koinos/protocol/protocol.h>
#include <koinos/rpc/rpc.h>

namespace koinos {
namespace rpc {
namespace block_store {

template<uint32_t block_id_REP_LENGTH, 
uint32_t block_id_LENGTH>
class get_blocks_by_id_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_blocks_by_id_request() = default;
    get_blocks_by_id_request(const get_blocks_by_id_request& rhs )
    {
      set_block_id(rhs.get_block_id());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
    }

    get_blocks_by_id_request(const get_blocks_by_id_request&& rhs ) noexcept
    {
      set_block_id(rhs.get_block_id());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
    }

    ~get_blocks_by_id_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      BLOCK_ID = 1,
      RETURN_BLOCK = 2,
      RETURN_RECEIPT = 3
    };

    get_blocks_by_id_request& operator=(const get_blocks_by_id_request& rhs)
    {
      set_block_id(rhs.get_block_id());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
      return *this;
    }

    get_blocks_by_id_request& operator=(const get_blocks_by_id_request&& rhs) noexcept
    {
      set_block_id(rhs.get_block_id());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
      return *this;
    }

    inline const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& block_id(uint32_t index) const { return block_id_[index]; }
    inline void clear_block_id() { block_id_.clear(); }
    inline void set_block_id(uint32_t index, const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& value) { block_id_.set(index, value); }
    inline void set_block_id(uint32_t index, const ::EmbeddedProto::FieldBytes<block_id_LENGTH>&& value) { block_id_.set(index, value); }
    inline void set_block_id(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<block_id_LENGTH>, block_id_REP_LENGTH>& values) { block_id_ = values; }
    inline void add_block_id(const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& value) { block_id_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<block_id_LENGTH>, block_id_REP_LENGTH>& mutable_block_id() { return block_id_; }
    inline ::EmbeddedProto::FieldBytes<block_id_LENGTH>& mutable_block_id(uint32_t index) { return block_id_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<block_id_LENGTH>, block_id_REP_LENGTH>& get_block_id() const { return block_id_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<block_id_LENGTH>, block_id_REP_LENGTH>& block_id() const { return block_id_; }

    inline void clear_return_block() { return_block_.clear(); }
    inline void set_return_block(const EmbeddedProto::boolean& value) { return_block_ = value; }
    inline void set_return_block(const EmbeddedProto::boolean&& value) { return_block_ = value; }
    inline EmbeddedProto::boolean& mutable_return_block() { return return_block_; }
    inline const EmbeddedProto::boolean& get_return_block() const { return return_block_; }
    inline EmbeddedProto::boolean::FIELD_TYPE return_block() const { return return_block_.get(); }

    inline void clear_return_receipt() { return_receipt_.clear(); }
    inline void set_return_receipt(const EmbeddedProto::boolean& value) { return_receipt_ = value; }
    inline void set_return_receipt(const EmbeddedProto::boolean&& value) { return_receipt_ = value; }
    inline EmbeddedProto::boolean& mutable_return_receipt() { return return_receipt_; }
    inline const EmbeddedProto::boolean& get_return_receipt() const { return return_receipt_; }
    inline EmbeddedProto::boolean::FIELD_TYPE return_receipt() const { return return_receipt_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_id_.serialize_with_id(static_cast<uint32_t>(id::BLOCK_ID), buffer);
      }

      if((false != return_block_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = return_block_.serialize_with_id(static_cast<uint32_t>(id::RETURN_BLOCK), buffer);
      }

      if((false != return_receipt_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = return_receipt_.serialize_with_id(static_cast<uint32_t>(id::RETURN_RECEIPT), buffer);
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
          case id::BLOCK_ID:
            return_value = block_id_.deserialize_check_type(buffer, wire_type);
            break;

          case id::RETURN_BLOCK:
            return_value = return_block_.deserialize_check_type(buffer, wire_type);
            break;

          case id::RETURN_RECEIPT:
            return_value = return_receipt_.deserialize_check_type(buffer, wire_type);
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
      clear_block_id();
      clear_return_block();
      clear_return_receipt();

    }

    private:

      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<block_id_LENGTH>, block_id_REP_LENGTH> block_id_;
      EmbeddedProto::boolean return_block_ = false;
      EmbeddedProto::boolean return_receipt_ = false;

};

template<uint32_t block_items_REP_LENGTH, 
uint32_t block_items_block_id_LENGTH, 
uint32_t block_items_block_id_LENGTH, 
uint32_t block_items_block_header_previous_LENGTH, 
uint32_t block_items_block_active_LENGTH, 
uint32_t block_items_block_passive_LENGTH, 
uint32_t block_items_block_signature_data_LENGTH, 
uint32_t block_items_block_transactions_REP_LENGTH, 
uint32_t block_items_block_transactions_id_LENGTH, 
uint32_t block_items_block_transactions_active_LENGTH, 
uint32_t block_items_block_transactions_passive_LENGTH, 
uint32_t block_items_block_transactions_signature_data_LENGTH>
class get_blocks_by_id_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_blocks_by_id_response() = default;
    get_blocks_by_id_response(const get_blocks_by_id_response& rhs )
    {
      set_block_items(rhs.get_block_items());
    }

    get_blocks_by_id_response(const get_blocks_by_id_response&& rhs ) noexcept
    {
      set_block_items(rhs.get_block_items());
    }

    ~get_blocks_by_id_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      BLOCK_ITEMS = 1
    };

    get_blocks_by_id_response& operator=(const get_blocks_by_id_response& rhs)
    {
      set_block_items(rhs.get_block_items());
      return *this;
    }

    get_blocks_by_id_response& operator=(const get_blocks_by_id_response&& rhs) noexcept
    {
      set_block_items(rhs.get_block_items());
      return *this;
    }

    inline const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& block_items(uint32_t index) const { return block_items_[index]; }
    inline void clear_block_items() { block_items_.clear(); }
    inline void set_block_items(uint32_t index, const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& value) { block_items_.set(index, value); }
    inline void set_block_items(uint32_t index, const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>&& value) { block_items_.set(index, value); }
    inline void set_block_items(const ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& values) { block_items_ = values; }
    inline void add_block_items(const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& value) { block_items_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& mutable_block_items() { return block_items_; }
    inline block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& mutable_block_items(uint32_t index) { return block_items_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& get_block_items() const { return block_items_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& block_items() const { return block_items_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_items_.serialize_with_id(static_cast<uint32_t>(id::BLOCK_ITEMS), buffer);
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
          case id::BLOCK_ITEMS:
            return_value = block_items_.deserialize_check_type(buffer, wire_type);
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
      clear_block_items();

    }

    private:

      ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH> block_items_;

};

template<uint32_t head_block_id_LENGTH>
class get_blocks_by_height_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_blocks_by_height_request() = default;
    get_blocks_by_height_request(const get_blocks_by_height_request& rhs )
    {
      set_head_block_id(rhs.get_head_block_id());
      set_ancestor_start_height(rhs.get_ancestor_start_height());
      set_num_blocks(rhs.get_num_blocks());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
    }

    get_blocks_by_height_request(const get_blocks_by_height_request&& rhs ) noexcept
    {
      set_head_block_id(rhs.get_head_block_id());
      set_ancestor_start_height(rhs.get_ancestor_start_height());
      set_num_blocks(rhs.get_num_blocks());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
    }

    ~get_blocks_by_height_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      HEAD_BLOCK_ID = 1,
      ANCESTOR_START_HEIGHT = 2,
      NUM_BLOCKS = 3,
      RETURN_BLOCK = 4,
      RETURN_RECEIPT = 5
    };

    get_blocks_by_height_request& operator=(const get_blocks_by_height_request& rhs)
    {
      set_head_block_id(rhs.get_head_block_id());
      set_ancestor_start_height(rhs.get_ancestor_start_height());
      set_num_blocks(rhs.get_num_blocks());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
      return *this;
    }

    get_blocks_by_height_request& operator=(const get_blocks_by_height_request&& rhs) noexcept
    {
      set_head_block_id(rhs.get_head_block_id());
      set_ancestor_start_height(rhs.get_ancestor_start_height());
      set_num_blocks(rhs.get_num_blocks());
      set_return_block(rhs.get_return_block());
      set_return_receipt(rhs.get_return_receipt());
      return *this;
    }

    inline void clear_head_block_id() { head_block_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<head_block_id_LENGTH>& mutable_head_block_id() { return head_block_id_; }
    inline void set_head_block_id(const ::EmbeddedProto::FieldBytes<head_block_id_LENGTH>& rhs) { head_block_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<head_block_id_LENGTH>& get_head_block_id() const { return head_block_id_; }
    inline const uint8_t* head_block_id() const { return head_block_id_.get_const(); }

    inline void clear_ancestor_start_height() { ancestor_start_height_.clear(); }
    inline void set_ancestor_start_height(const EmbeddedProto::uint64& value) { ancestor_start_height_ = value; }
    inline void set_ancestor_start_height(const EmbeddedProto::uint64&& value) { ancestor_start_height_ = value; }
    inline EmbeddedProto::uint64& mutable_ancestor_start_height() { return ancestor_start_height_; }
    inline const EmbeddedProto::uint64& get_ancestor_start_height() const { return ancestor_start_height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE ancestor_start_height() const { return ancestor_start_height_.get(); }

    inline void clear_num_blocks() { num_blocks_.clear(); }
    inline void set_num_blocks(const EmbeddedProto::uint32& value) { num_blocks_ = value; }
    inline void set_num_blocks(const EmbeddedProto::uint32&& value) { num_blocks_ = value; }
    inline EmbeddedProto::uint32& mutable_num_blocks() { return num_blocks_; }
    inline const EmbeddedProto::uint32& get_num_blocks() const { return num_blocks_; }
    inline EmbeddedProto::uint32::FIELD_TYPE num_blocks() const { return num_blocks_.get(); }

    inline void clear_return_block() { return_block_.clear(); }
    inline void set_return_block(const EmbeddedProto::boolean& value) { return_block_ = value; }
    inline void set_return_block(const EmbeddedProto::boolean&& value) { return_block_ = value; }
    inline EmbeddedProto::boolean& mutable_return_block() { return return_block_; }
    inline const EmbeddedProto::boolean& get_return_block() const { return return_block_; }
    inline EmbeddedProto::boolean::FIELD_TYPE return_block() const { return return_block_.get(); }

    inline void clear_return_receipt() { return_receipt_.clear(); }
    inline void set_return_receipt(const EmbeddedProto::boolean& value) { return_receipt_ = value; }
    inline void set_return_receipt(const EmbeddedProto::boolean&& value) { return_receipt_ = value; }
    inline EmbeddedProto::boolean& mutable_return_receipt() { return return_receipt_; }
    inline const EmbeddedProto::boolean& get_return_receipt() const { return return_receipt_; }
    inline EmbeddedProto::boolean::FIELD_TYPE return_receipt() const { return return_receipt_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = head_block_id_.serialize_with_id(static_cast<uint32_t>(id::HEAD_BLOCK_ID), buffer);
      }

      if((0U != ancestor_start_height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = ancestor_start_height_.serialize_with_id(static_cast<uint32_t>(id::ANCESTOR_START_HEIGHT), buffer);
      }

      if((0U != num_blocks_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = num_blocks_.serialize_with_id(static_cast<uint32_t>(id::NUM_BLOCKS), buffer);
      }

      if((false != return_block_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = return_block_.serialize_with_id(static_cast<uint32_t>(id::RETURN_BLOCK), buffer);
      }

      if((false != return_receipt_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = return_receipt_.serialize_with_id(static_cast<uint32_t>(id::RETURN_RECEIPT), buffer);
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
          case id::HEAD_BLOCK_ID:
            return_value = head_block_id_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ANCESTOR_START_HEIGHT:
            return_value = ancestor_start_height_.deserialize_check_type(buffer, wire_type);
            break;

          case id::NUM_BLOCKS:
            return_value = num_blocks_.deserialize_check_type(buffer, wire_type);
            break;

          case id::RETURN_BLOCK:
            return_value = return_block_.deserialize_check_type(buffer, wire_type);
            break;

          case id::RETURN_RECEIPT:
            return_value = return_receipt_.deserialize_check_type(buffer, wire_type);
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
      clear_head_block_id();
      clear_ancestor_start_height();
      clear_num_blocks();
      clear_return_block();
      clear_return_receipt();

    }

    private:

      ::EmbeddedProto::FieldBytes<head_block_id_LENGTH> head_block_id_;
      EmbeddedProto::uint64 ancestor_start_height_ = 0U;
      EmbeddedProto::uint32 num_blocks_ = 0U;
      EmbeddedProto::boolean return_block_ = false;
      EmbeddedProto::boolean return_receipt_ = false;

};

template<uint32_t block_items_REP_LENGTH, 
uint32_t block_items_block_id_LENGTH, 
uint32_t block_items_block_id_LENGTH, 
uint32_t block_items_block_header_previous_LENGTH, 
uint32_t block_items_block_active_LENGTH, 
uint32_t block_items_block_passive_LENGTH, 
uint32_t block_items_block_signature_data_LENGTH, 
uint32_t block_items_block_transactions_REP_LENGTH, 
uint32_t block_items_block_transactions_id_LENGTH, 
uint32_t block_items_block_transactions_active_LENGTH, 
uint32_t block_items_block_transactions_passive_LENGTH, 
uint32_t block_items_block_transactions_signature_data_LENGTH>
class get_blocks_by_height_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_blocks_by_height_response() = default;
    get_blocks_by_height_response(const get_blocks_by_height_response& rhs )
    {
      set_block_items(rhs.get_block_items());
    }

    get_blocks_by_height_response(const get_blocks_by_height_response&& rhs ) noexcept
    {
      set_block_items(rhs.get_block_items());
    }

    ~get_blocks_by_height_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      BLOCK_ITEMS = 1
    };

    get_blocks_by_height_response& operator=(const get_blocks_by_height_response& rhs)
    {
      set_block_items(rhs.get_block_items());
      return *this;
    }

    get_blocks_by_height_response& operator=(const get_blocks_by_height_response&& rhs) noexcept
    {
      set_block_items(rhs.get_block_items());
      return *this;
    }

    inline const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& block_items(uint32_t index) const { return block_items_[index]; }
    inline void clear_block_items() { block_items_.clear(); }
    inline void set_block_items(uint32_t index, const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& value) { block_items_.set(index, value); }
    inline void set_block_items(uint32_t index, const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>&& value) { block_items_.set(index, value); }
    inline void set_block_items(const ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& values) { block_items_ = values; }
    inline void add_block_items(const block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& value) { block_items_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& mutable_block_items() { return block_items_; }
    inline block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>& mutable_block_items(uint32_t index) { return block_items_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& get_block_items() const { return block_items_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH>& block_items() const { return block_items_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_items_.serialize_with_id(static_cast<uint32_t>(id::BLOCK_ITEMS), buffer);
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
          case id::BLOCK_ITEMS:
            return_value = block_items_.deserialize_check_type(buffer, wire_type);
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
      clear_block_items();

    }

    private:

      ::EmbeddedProto::RepeatedFieldFixedSize<block_store::block_item<block_items_block_id_LENGTH, block_items_block_id_LENGTH, block_items_block_header_previous_LENGTH, block_items_block_active_LENGTH, block_items_block_passive_LENGTH, block_items_block_signature_data_LENGTH, block_items_block_transactions_REP_LENGTH, block_items_block_transactions_id_LENGTH, block_items_block_transactions_active_LENGTH, block_items_block_transactions_passive_LENGTH, block_items_block_transactions_signature_data_LENGTH>, block_items_REP_LENGTH> block_items_;

};

template<uint32_t block_to_add_id_LENGTH, 
uint32_t block_to_add_header_previous_LENGTH, 
uint32_t block_to_add_active_LENGTH, 
uint32_t block_to_add_passive_LENGTH, 
uint32_t block_to_add_signature_data_LENGTH, 
uint32_t block_to_add_transactions_REP_LENGTH, 
uint32_t block_to_add_transactions_id_LENGTH, 
uint32_t block_to_add_transactions_active_LENGTH, 
uint32_t block_to_add_transactions_passive_LENGTH, 
uint32_t block_to_add_transactions_signature_data_LENGTH>
class add_block_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    add_block_request() = default;
    add_block_request(const add_block_request& rhs )
    {
      set_block_to_add(rhs.get_block_to_add());
    }

    add_block_request(const add_block_request&& rhs ) noexcept
    {
      set_block_to_add(rhs.get_block_to_add());
    }

    ~add_block_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      BLOCK_TO_ADD = 1
    };

    add_block_request& operator=(const add_block_request& rhs)
    {
      set_block_to_add(rhs.get_block_to_add());
      return *this;
    }

    add_block_request& operator=(const add_block_request&& rhs) noexcept
    {
      set_block_to_add(rhs.get_block_to_add());
      return *this;
    }

    inline void clear_block_to_add() { block_to_add_.clear(); }
    inline void set_block_to_add(const protocol::block<block_to_add_id_LENGTH, block_to_add_header_previous_LENGTH, block_to_add_active_LENGTH, block_to_add_passive_LENGTH, block_to_add_signature_data_LENGTH, block_to_add_transactions_REP_LENGTH, block_to_add_transactions_id_LENGTH, block_to_add_transactions_active_LENGTH, block_to_add_transactions_passive_LENGTH, block_to_add_transactions_signature_data_LENGTH>& value) { block_to_add_ = value; }
    inline void set_block_to_add(const protocol::block<block_to_add_id_LENGTH, block_to_add_header_previous_LENGTH, block_to_add_active_LENGTH, block_to_add_passive_LENGTH, block_to_add_signature_data_LENGTH, block_to_add_transactions_REP_LENGTH, block_to_add_transactions_id_LENGTH, block_to_add_transactions_active_LENGTH, block_to_add_transactions_passive_LENGTH, block_to_add_transactions_signature_data_LENGTH>&& value) { block_to_add_ = value; }
    inline protocol::block<block_to_add_id_LENGTH, block_to_add_header_previous_LENGTH, block_to_add_active_LENGTH, block_to_add_passive_LENGTH, block_to_add_signature_data_LENGTH, block_to_add_transactions_REP_LENGTH, block_to_add_transactions_id_LENGTH, block_to_add_transactions_active_LENGTH, block_to_add_transactions_passive_LENGTH, block_to_add_transactions_signature_data_LENGTH>& mutable_block_to_add() { return block_to_add_; }
    inline const protocol::block<block_to_add_id_LENGTH, block_to_add_header_previous_LENGTH, block_to_add_active_LENGTH, block_to_add_passive_LENGTH, block_to_add_signature_data_LENGTH, block_to_add_transactions_REP_LENGTH, block_to_add_transactions_id_LENGTH, block_to_add_transactions_active_LENGTH, block_to_add_transactions_passive_LENGTH, block_to_add_transactions_signature_data_LENGTH>& get_block_to_add() const { return block_to_add_; }
    inline const protocol::block<block_to_add_id_LENGTH, block_to_add_header_previous_LENGTH, block_to_add_active_LENGTH, block_to_add_passive_LENGTH, block_to_add_signature_data_LENGTH, block_to_add_transactions_REP_LENGTH, block_to_add_transactions_id_LENGTH, block_to_add_transactions_active_LENGTH, block_to_add_transactions_passive_LENGTH, block_to_add_transactions_signature_data_LENGTH>& block_to_add() const { return block_to_add_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_to_add_.serialize_with_id(static_cast<uint32_t>(id::BLOCK_TO_ADD), buffer);
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
          case id::BLOCK_TO_ADD:
            return_value = block_to_add_.deserialize_check_type(buffer, wire_type);
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
      clear_block_to_add();

    }

    private:

      protocol::block<block_to_add_id_LENGTH, block_to_add_header_previous_LENGTH, block_to_add_active_LENGTH, block_to_add_passive_LENGTH, block_to_add_signature_data_LENGTH, block_to_add_transactions_REP_LENGTH, block_to_add_transactions_id_LENGTH, block_to_add_transactions_active_LENGTH, block_to_add_transactions_passive_LENGTH, block_to_add_transactions_signature_data_LENGTH> block_to_add_;

};

class add_block_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    add_block_response() = default;
    add_block_response(const add_block_response& rhs )
    {
    }

    add_block_response(const add_block_response&& rhs ) noexcept
    {
    }

    ~add_block_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
    };

    add_block_response& operator=(const add_block_response& rhs)
    {
      return *this;
    }

    add_block_response& operator=(const add_block_response&& rhs) noexcept
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

class get_highest_block_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_highest_block_request() = default;
    get_highest_block_request(const get_highest_block_request& rhs )
    {
    }

    get_highest_block_request(const get_highest_block_request&& rhs ) noexcept
    {
    }

    ~get_highest_block_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
    };

    get_highest_block_request& operator=(const get_highest_block_request& rhs)
    {
      return *this;
    }

    get_highest_block_request& operator=(const get_highest_block_request&& rhs) noexcept
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

template<uint32_t topology_id_LENGTH, 
uint32_t topology_previous_LENGTH>
class get_highest_block_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_highest_block_response() = default;
    get_highest_block_response(const get_highest_block_response& rhs )
    {
      set_topology(rhs.get_topology());
    }

    get_highest_block_response(const get_highest_block_response&& rhs ) noexcept
    {
      set_topology(rhs.get_topology());
    }

    ~get_highest_block_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      TOPOLOGY = 1
    };

    get_highest_block_response& operator=(const get_highest_block_response& rhs)
    {
      set_topology(rhs.get_topology());
      return *this;
    }

    get_highest_block_response& operator=(const get_highest_block_response&& rhs) noexcept
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
        return_value = topology_.serialize_with_id(static_cast<uint32_t>(id::TOPOLOGY), buffer);
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
          case id::TOPOLOGY:
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

template<uint32_t get_blocks_by_id_block_id_REP_LENGTH, 
uint32_t get_blocks_by_id_block_id_LENGTH, 
uint32_t get_blocks_by_height_head_block_id_LENGTH, 
uint32_t add_block_block_to_add_id_LENGTH, 
uint32_t add_block_block_to_add_header_previous_LENGTH, 
uint32_t add_block_block_to_add_active_LENGTH, 
uint32_t add_block_block_to_add_passive_LENGTH, 
uint32_t add_block_block_to_add_signature_data_LENGTH, 
uint32_t add_block_block_to_add_transactions_REP_LENGTH, 
uint32_t add_block_block_to_add_transactions_id_LENGTH, 
uint32_t add_block_block_to_add_transactions_active_LENGTH, 
uint32_t add_block_block_to_add_transactions_passive_LENGTH, 
uint32_t add_block_block_to_add_transactions_signature_data_LENGTH>
class block_store_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_store_request() = default;
    block_store_request(const block_store_request& rhs )
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
          break;

        default:
          break;
      }

    }

    block_store_request(const block_store_request&& rhs ) noexcept
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
          break;

        default:
          break;
      }

    }

    ~block_store_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      GET_BLOCKS_BY_ID = 2,
      GET_BLOCKS_BY_HEIGHT = 3,
      ADD_BLOCK = 4,
      GET_HIGHEST_BLOCK = 5
    };

    block_store_request& operator=(const block_store_request& rhs)
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
          break;

        default:
          break;
      }

      return *this;
    }

    block_store_request& operator=(const block_store_request&& rhs) noexcept
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
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

    inline void clear_get_blocks_by_id()
    {
      if(id::GET_BLOCKS_BY_ID == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_blocks_by_id_.~get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>();
      }
    }
    inline void set_get_blocks_by_id(const get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>& value)
    {
      if(id::GET_BLOCKS_BY_ID != which_request_)
      {
        init_request(id::GET_BLOCKS_BY_ID);
      }
      request_.get_blocks_by_id_ = value;
    }
    inline void set_get_blocks_by_id(const get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>&& value)
    {
      if(id::GET_BLOCKS_BY_ID != which_request_)
      {
        init_request(id::GET_BLOCKS_BY_ID);
      }
      request_.get_blocks_by_id_ = value;
    }
    inline get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>& mutable_get_blocks_by_id()
    {
      if(id::GET_BLOCKS_BY_ID != which_request_)
      {
        init_request(id::GET_BLOCKS_BY_ID);
      }
      return request_.get_blocks_by_id_;
    }
    inline const get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>& get_get_blocks_by_id() const { return request_.get_blocks_by_id_; }
    inline const get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>& get_blocks_by_id() const { return request_.get_blocks_by_id_; }

    inline void clear_get_blocks_by_height()
    {
      if(id::GET_BLOCKS_BY_HEIGHT == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_blocks_by_height_.~get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>();
      }
    }
    inline void set_get_blocks_by_height(const get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>& value)
    {
      if(id::GET_BLOCKS_BY_HEIGHT != which_request_)
      {
        init_request(id::GET_BLOCKS_BY_HEIGHT);
      }
      request_.get_blocks_by_height_ = value;
    }
    inline void set_get_blocks_by_height(const get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>&& value)
    {
      if(id::GET_BLOCKS_BY_HEIGHT != which_request_)
      {
        init_request(id::GET_BLOCKS_BY_HEIGHT);
      }
      request_.get_blocks_by_height_ = value;
    }
    inline get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>& mutable_get_blocks_by_height()
    {
      if(id::GET_BLOCKS_BY_HEIGHT != which_request_)
      {
        init_request(id::GET_BLOCKS_BY_HEIGHT);
      }
      return request_.get_blocks_by_height_;
    }
    inline const get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>& get_get_blocks_by_height() const { return request_.get_blocks_by_height_; }
    inline const get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>& get_blocks_by_height() const { return request_.get_blocks_by_height_; }

    inline void clear_add_block()
    {
      if(id::ADD_BLOCK == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.add_block_.~add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>();
      }
    }
    inline void set_add_block(const add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>& value)
    {
      if(id::ADD_BLOCK != which_request_)
      {
        init_request(id::ADD_BLOCK);
      }
      request_.add_block_ = value;
    }
    inline void set_add_block(const add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>&& value)
    {
      if(id::ADD_BLOCK != which_request_)
      {
        init_request(id::ADD_BLOCK);
      }
      request_.add_block_ = value;
    }
    inline add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>& mutable_add_block()
    {
      if(id::ADD_BLOCK != which_request_)
      {
        init_request(id::ADD_BLOCK);
      }
      return request_.add_block_;
    }
    inline const add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>& get_add_block() const { return request_.add_block_; }
    inline const add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>& add_block() const { return request_.add_block_; }

    inline void clear_get_highest_block()
    {
      if(id::GET_HIGHEST_BLOCK == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_highest_block_.~get_highest_block_request();
      }
    }
    inline void set_get_highest_block(const get_highest_block_request& value)
    {
      if(id::GET_HIGHEST_BLOCK != which_request_)
      {
        init_request(id::GET_HIGHEST_BLOCK);
      }
      request_.get_highest_block_ = value;
    }
    inline void set_get_highest_block(const get_highest_block_request&& value)
    {
      if(id::GET_HIGHEST_BLOCK != which_request_)
      {
        init_request(id::GET_HIGHEST_BLOCK);
      }
      request_.get_highest_block_ = value;
    }
    inline get_highest_block_request& mutable_get_highest_block()
    {
      if(id::GET_HIGHEST_BLOCK != which_request_)
      {
        init_request(id::GET_HIGHEST_BLOCK);
      }
      return request_.get_highest_block_;
    }
    inline const get_highest_block_request& get_get_highest_block() const { return request_.get_highest_block_; }
    inline const get_highest_block_request& get_highest_block() const { return request_.get_highest_block_; }


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

        case id::GET_BLOCKS_BY_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_blocks_by_id_.serialize_with_id(static_cast<uint32_t>(id::GET_BLOCKS_BY_ID), buffer);
          }
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_blocks_by_height_.serialize_with_id(static_cast<uint32_t>(id::GET_BLOCKS_BY_HEIGHT), buffer);
          }
          break;

        case id::ADD_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.add_block_.serialize_with_id(static_cast<uint32_t>(id::ADD_BLOCK), buffer);
          }
          break;

        case id::GET_HIGHEST_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_highest_block_.serialize_with_id(static_cast<uint32_t>(id::GET_HIGHEST_BLOCK), buffer);
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

          case id::GET_BLOCKS_BY_ID:
            return_value = deserialize_request(id::GET_BLOCKS_BY_ID, request_.get_blocks_by_id_, buffer, wire_type);

            break;

          case id::GET_BLOCKS_BY_HEIGHT:
            return_value = deserialize_request(id::GET_BLOCKS_BY_HEIGHT, request_.get_blocks_by_height_, buffer, wire_type);

            break;

          case id::ADD_BLOCK:
            return_value = deserialize_request(id::ADD_BLOCK, request_.add_block_, buffer, wire_type);

            break;

          case id::GET_HIGHEST_BLOCK:
            return_value = deserialize_request(id::GET_HIGHEST_BLOCK, request_.get_highest_block_, buffer, wire_type);

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
        get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH> get_blocks_by_id_;
        get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH> get_blocks_by_height_;
        add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH> add_block_;
        get_highest_block_request get_highest_block_;
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

          case id::GET_BLOCKS_BY_ID:
            new(&request_.get_blocks_by_id_) get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>;
            which_request_ = id::GET_BLOCKS_BY_ID;
            break;

          case id::GET_BLOCKS_BY_HEIGHT:
            new(&request_.get_blocks_by_height_) get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>;
            which_request_ = id::GET_BLOCKS_BY_HEIGHT;
            break;

          case id::ADD_BLOCK:
            new(&request_.add_block_) add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>;
            which_request_ = id::ADD_BLOCK;
            break;

          case id::GET_HIGHEST_BLOCK:
            new(&request_.get_highest_block_) get_highest_block_request;
            which_request_ = id::GET_HIGHEST_BLOCK;
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
          case id::GET_BLOCKS_BY_ID:
            request_.get_blocks_by_id_.~get_blocks_by_id_request<get_blocks_by_id_block_id_REP_LENGTH, get_blocks_by_id_block_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_BLOCKS_BY_HEIGHT:
            request_.get_blocks_by_height_.~get_blocks_by_height_request<get_blocks_by_height_head_block_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::ADD_BLOCK:
            request_.add_block_.~add_block_request<add_block_block_to_add_id_LENGTH, add_block_block_to_add_header_previous_LENGTH, add_block_block_to_add_active_LENGTH, add_block_block_to_add_passive_LENGTH, add_block_block_to_add_signature_data_LENGTH, add_block_block_to_add_transactions_REP_LENGTH, add_block_block_to_add_transactions_id_LENGTH, add_block_block_to_add_transactions_active_LENGTH, add_block_block_to_add_transactions_passive_LENGTH, add_block_block_to_add_transactions_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_HIGHEST_BLOCK:
            request_.get_highest_block_.~get_highest_block_request(); // NOSONAR Unions require this.
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
uint32_t get_blocks_by_id_block_items_REP_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_id_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_id_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_header_previous_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_active_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_passive_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_signature_data_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_transactions_REP_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_transactions_id_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_transactions_active_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_transactions_passive_LENGTH, 
uint32_t get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH, 
uint32_t get_blocks_by_height_block_items_REP_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_id_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_id_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_header_previous_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_active_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_passive_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_signature_data_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_transactions_REP_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_transactions_id_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_transactions_active_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_transactions_passive_LENGTH, 
uint32_t get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH, 
uint32_t get_highest_block_topology_id_LENGTH, 
uint32_t get_highest_block_topology_previous_LENGTH>
class block_store_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_store_response() = default;
    block_store_response(const block_store_response& rhs )
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
          break;

        default:
          break;
      }

    }

    block_store_response(const block_store_response&& rhs ) noexcept
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
          break;

        default:
          break;
      }

    }

    ~block_store_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      ERROR = 2,
      GET_BLOCKS_BY_ID = 3,
      GET_BLOCKS_BY_HEIGHT = 4,
      ADD_BLOCK = 5,
      GET_HIGHEST_BLOCK = 6
    };

    block_store_response& operator=(const block_store_response& rhs)
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
          break;

        default:
          break;
      }

      return *this;
    }

    block_store_response& operator=(const block_store_response&& rhs) noexcept
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

        case id::GET_BLOCKS_BY_ID:
          set_get_blocks_by_id(rhs.get_get_blocks_by_id());
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          set_get_blocks_by_height(rhs.get_get_blocks_by_height());
          break;

        case id::ADD_BLOCK:
          set_add_block(rhs.get_add_block());
          break;

        case id::GET_HIGHEST_BLOCK:
          set_get_highest_block(rhs.get_get_highest_block());
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

    inline void clear_get_blocks_by_id()
    {
      if(id::GET_BLOCKS_BY_ID == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_blocks_by_id_.~get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>();
      }
    }
    inline void set_get_blocks_by_id(const get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>& value)
    {
      if(id::GET_BLOCKS_BY_ID != which_response_)
      {
        init_response(id::GET_BLOCKS_BY_ID);
      }
      response_.get_blocks_by_id_ = value;
    }
    inline void set_get_blocks_by_id(const get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>&& value)
    {
      if(id::GET_BLOCKS_BY_ID != which_response_)
      {
        init_response(id::GET_BLOCKS_BY_ID);
      }
      response_.get_blocks_by_id_ = value;
    }
    inline get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>& mutable_get_blocks_by_id()
    {
      if(id::GET_BLOCKS_BY_ID != which_response_)
      {
        init_response(id::GET_BLOCKS_BY_ID);
      }
      return response_.get_blocks_by_id_;
    }
    inline const get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>& get_get_blocks_by_id() const { return response_.get_blocks_by_id_; }
    inline const get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>& get_blocks_by_id() const { return response_.get_blocks_by_id_; }

    inline void clear_get_blocks_by_height()
    {
      if(id::GET_BLOCKS_BY_HEIGHT == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_blocks_by_height_.~get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>();
      }
    }
    inline void set_get_blocks_by_height(const get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>& value)
    {
      if(id::GET_BLOCKS_BY_HEIGHT != which_response_)
      {
        init_response(id::GET_BLOCKS_BY_HEIGHT);
      }
      response_.get_blocks_by_height_ = value;
    }
    inline void set_get_blocks_by_height(const get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>&& value)
    {
      if(id::GET_BLOCKS_BY_HEIGHT != which_response_)
      {
        init_response(id::GET_BLOCKS_BY_HEIGHT);
      }
      response_.get_blocks_by_height_ = value;
    }
    inline get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>& mutable_get_blocks_by_height()
    {
      if(id::GET_BLOCKS_BY_HEIGHT != which_response_)
      {
        init_response(id::GET_BLOCKS_BY_HEIGHT);
      }
      return response_.get_blocks_by_height_;
    }
    inline const get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>& get_get_blocks_by_height() const { return response_.get_blocks_by_height_; }
    inline const get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>& get_blocks_by_height() const { return response_.get_blocks_by_height_; }

    inline void clear_add_block()
    {
      if(id::ADD_BLOCK == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.add_block_.~add_block_response();
      }
    }
    inline void set_add_block(const add_block_response& value)
    {
      if(id::ADD_BLOCK != which_response_)
      {
        init_response(id::ADD_BLOCK);
      }
      response_.add_block_ = value;
    }
    inline void set_add_block(const add_block_response&& value)
    {
      if(id::ADD_BLOCK != which_response_)
      {
        init_response(id::ADD_BLOCK);
      }
      response_.add_block_ = value;
    }
    inline add_block_response& mutable_add_block()
    {
      if(id::ADD_BLOCK != which_response_)
      {
        init_response(id::ADD_BLOCK);
      }
      return response_.add_block_;
    }
    inline const add_block_response& get_add_block() const { return response_.add_block_; }
    inline const add_block_response& add_block() const { return response_.add_block_; }

    inline void clear_get_highest_block()
    {
      if(id::GET_HIGHEST_BLOCK == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_highest_block_.~get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>();
      }
    }
    inline void set_get_highest_block(const get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>& value)
    {
      if(id::GET_HIGHEST_BLOCK != which_response_)
      {
        init_response(id::GET_HIGHEST_BLOCK);
      }
      response_.get_highest_block_ = value;
    }
    inline void set_get_highest_block(const get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>&& value)
    {
      if(id::GET_HIGHEST_BLOCK != which_response_)
      {
        init_response(id::GET_HIGHEST_BLOCK);
      }
      response_.get_highest_block_ = value;
    }
    inline get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>& mutable_get_highest_block()
    {
      if(id::GET_HIGHEST_BLOCK != which_response_)
      {
        init_response(id::GET_HIGHEST_BLOCK);
      }
      return response_.get_highest_block_;
    }
    inline const get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>& get_get_highest_block() const { return response_.get_highest_block_; }
    inline const get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>& get_highest_block() const { return response_.get_highest_block_; }


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

        case id::GET_BLOCKS_BY_ID:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_blocks_by_id_.serialize_with_id(static_cast<uint32_t>(id::GET_BLOCKS_BY_ID), buffer);
          }
          break;

        case id::GET_BLOCKS_BY_HEIGHT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_blocks_by_height_.serialize_with_id(static_cast<uint32_t>(id::GET_BLOCKS_BY_HEIGHT), buffer);
          }
          break;

        case id::ADD_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.add_block_.serialize_with_id(static_cast<uint32_t>(id::ADD_BLOCK), buffer);
          }
          break;

        case id::GET_HIGHEST_BLOCK:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_highest_block_.serialize_with_id(static_cast<uint32_t>(id::GET_HIGHEST_BLOCK), buffer);
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

          case id::GET_BLOCKS_BY_ID:
            return_value = deserialize_response(id::GET_BLOCKS_BY_ID, response_.get_blocks_by_id_, buffer, wire_type);

            break;

          case id::GET_BLOCKS_BY_HEIGHT:
            return_value = deserialize_response(id::GET_BLOCKS_BY_HEIGHT, response_.get_blocks_by_height_, buffer, wire_type);

            break;

          case id::ADD_BLOCK:
            return_value = deserialize_response(id::ADD_BLOCK, response_.add_block_, buffer, wire_type);

            break;

          case id::GET_HIGHEST_BLOCK:
            return_value = deserialize_response(id::GET_HIGHEST_BLOCK, response_.get_highest_block_, buffer, wire_type);

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
        get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH> get_blocks_by_id_;
        get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH> get_blocks_by_height_;
        add_block_response add_block_;
        get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH> get_highest_block_;
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

          case id::GET_BLOCKS_BY_ID:
            new(&response_.get_blocks_by_id_) get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>;
            which_response_ = id::GET_BLOCKS_BY_ID;
            break;

          case id::GET_BLOCKS_BY_HEIGHT:
            new(&response_.get_blocks_by_height_) get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>;
            which_response_ = id::GET_BLOCKS_BY_HEIGHT;
            break;

          case id::ADD_BLOCK:
            new(&response_.add_block_) add_block_response;
            which_response_ = id::ADD_BLOCK;
            break;

          case id::GET_HIGHEST_BLOCK:
            new(&response_.get_highest_block_) get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>;
            which_response_ = id::GET_HIGHEST_BLOCK;
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
          case id::GET_BLOCKS_BY_ID:
            response_.get_blocks_by_id_.~get_blocks_by_id_response<get_blocks_by_id_block_items_REP_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_id_LENGTH, get_blocks_by_id_block_items_block_header_previous_LENGTH, get_blocks_by_id_block_items_block_active_LENGTH, get_blocks_by_id_block_items_block_passive_LENGTH, get_blocks_by_id_block_items_block_signature_data_LENGTH, get_blocks_by_id_block_items_block_transactions_REP_LENGTH, get_blocks_by_id_block_items_block_transactions_id_LENGTH, get_blocks_by_id_block_items_block_transactions_active_LENGTH, get_blocks_by_id_block_items_block_transactions_passive_LENGTH, get_blocks_by_id_block_items_block_transactions_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_BLOCKS_BY_HEIGHT:
            response_.get_blocks_by_height_.~get_blocks_by_height_response<get_blocks_by_height_block_items_REP_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_id_LENGTH, get_blocks_by_height_block_items_block_header_previous_LENGTH, get_blocks_by_height_block_items_block_active_LENGTH, get_blocks_by_height_block_items_block_passive_LENGTH, get_blocks_by_height_block_items_block_signature_data_LENGTH, get_blocks_by_height_block_items_block_transactions_REP_LENGTH, get_blocks_by_height_block_items_block_transactions_id_LENGTH, get_blocks_by_height_block_items_block_transactions_active_LENGTH, get_blocks_by_height_block_items_block_transactions_passive_LENGTH, get_blocks_by_height_block_items_block_transactions_signature_data_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::ADD_BLOCK:
            response_.add_block_.~add_block_response(); // NOSONAR Unions require this.
            break;
          case id::GET_HIGHEST_BLOCK:
            response_.get_highest_block_.~get_highest_block_response<get_highest_block_topology_id_LENGTH, get_highest_block_topology_previous_LENGTH>(); // NOSONAR Unions require this.
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

} // End of namespace block_store
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_BLOCK_STORE_BLOCK_STORE_RPC_H