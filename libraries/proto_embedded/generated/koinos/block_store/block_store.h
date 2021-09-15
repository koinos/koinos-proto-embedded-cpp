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
#ifndef KOINOS_BLOCK_STORE_BLOCK_STORE_H
#define KOINOS_BLOCK_STORE_BLOCK_STORE_H

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
namespace block_store {

template<uint32_t block_id_LENGTH, 
uint32_t block_id_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_active_LENGTH, 
uint32_t block_passive_LENGTH, 
uint32_t block_signature_data_LENGTH, 
uint32_t block_transactions_REP_LENGTH, 
uint32_t block_transactions_id_LENGTH, 
uint32_t block_transactions_active_LENGTH, 
uint32_t block_transactions_passive_LENGTH, 
uint32_t block_transactions_signature_data_LENGTH>
class block_item final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_item() = default;
    block_item(const block_item& rhs )
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
    }

    block_item(const block_item&& rhs ) noexcept
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
    }

    ~block_item() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK_ID = 1,
      BLOCK_HEIGHT = 2,
      BLOCK = 3,
      RECEIPT = 4
    };

    block_item& operator=(const block_item& rhs)
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    block_item& operator=(const block_item&& rhs) noexcept
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      return *this;
    }

    inline void clear_block_id() { block_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<block_id_LENGTH>& mutable_block_id() { return block_id_; }
    inline void set_block_id(const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& rhs) { block_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& get_block_id() const { return block_id_; }
    inline const uint8_t* block_id() const { return block_id_.get_const(); }

    inline void clear_block_height() { block_height_.clear(); }
    inline void set_block_height(const EmbeddedProto::uint64& value) { block_height_ = value; }
    inline void set_block_height(const EmbeddedProto::uint64&& value) { block_height_ = value; }
    inline EmbeddedProto::uint64& mutable_block_height() { return block_height_; }
    inline const EmbeddedProto::uint64& get_block_height() const { return block_height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_height() const { return block_height_.get(); }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& block() const { return block_; }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::block_receipt& value) { receipt_ = value; }
    inline void set_receipt(const protocol::block_receipt&& value) { receipt_ = value; }
    inline protocol::block_receipt& mutable_receipt() { return receipt_; }
    inline const protocol::block_receipt& get_receipt() const { return receipt_; }
    inline const protocol::block_receipt& receipt() const { return receipt_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_ID), buffer, false);
      }

      if((0U != block_height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_HEIGHT), buffer, false);
      }

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
          case FieldNumber::BLOCK_ID:
            return_value = block_id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BLOCK_HEIGHT:
            return_value = block_height_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_block_id();
      clear_block_height();
      clear_block();
      clear_receipt();

    }

    private:


      ::EmbeddedProto::FieldBytes<block_id_LENGTH> block_id_;
      EmbeddedProto::uint64 block_height_ = 0U;
      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH> block_;
      protocol::block_receipt receipt_;

};

template<uint32_t block_id_LENGTH, 
uint32_t block_id_LENGTH, 
uint32_t block_header_previous_LENGTH, 
uint32_t block_active_LENGTH, 
uint32_t block_passive_LENGTH, 
uint32_t block_signature_data_LENGTH, 
uint32_t block_transactions_REP_LENGTH, 
uint32_t block_transactions_id_LENGTH, 
uint32_t block_transactions_active_LENGTH, 
uint32_t block_transactions_passive_LENGTH, 
uint32_t block_transactions_signature_data_LENGTH, 
uint32_t previous_block_ids_REP_LENGTH, 
uint32_t previous_block_ids_LENGTH>
class block_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_record() = default;
    block_record(const block_record& rhs )
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      set_previous_block_ids(rhs.get_previous_block_ids());
    }

    block_record(const block_record&& rhs ) noexcept
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      set_previous_block_ids(rhs.get_previous_block_ids());
    }

    ~block_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK_ID = 1,
      BLOCK_HEIGHT = 2,
      BLOCK = 3,
      RECEIPT = 4,
      PREVIOUS_BLOCK_IDS = 5
    };

    block_record& operator=(const block_record& rhs)
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      set_previous_block_ids(rhs.get_previous_block_ids());
      return *this;
    }

    block_record& operator=(const block_record&& rhs) noexcept
    {
      set_block_id(rhs.get_block_id());
      set_block_height(rhs.get_block_height());
      set_block(rhs.get_block());
      set_receipt(rhs.get_receipt());
      set_previous_block_ids(rhs.get_previous_block_ids());
      return *this;
    }

    inline void clear_block_id() { block_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<block_id_LENGTH>& mutable_block_id() { return block_id_; }
    inline void set_block_id(const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& rhs) { block_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<block_id_LENGTH>& get_block_id() const { return block_id_; }
    inline const uint8_t* block_id() const { return block_id_.get_const(); }

    inline void clear_block_height() { block_height_.clear(); }
    inline void set_block_height(const EmbeddedProto::uint64& value) { block_height_ = value; }
    inline void set_block_height(const EmbeddedProto::uint64&& value) { block_height_ = value; }
    inline EmbeddedProto::uint64& mutable_block_height() { return block_height_; }
    inline const EmbeddedProto::uint64& get_block_height() const { return block_height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_height() const { return block_height_.get(); }

    inline void clear_block() { block_.clear(); }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& value) { block_ = value; }
    inline void set_block(const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>&& value) { block_ = value; }
    inline protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& mutable_block() { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& get_block() const { return block_; }
    inline const protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH>& block() const { return block_; }

    inline void clear_receipt() { receipt_.clear(); }
    inline void set_receipt(const protocol::block_receipt& value) { receipt_ = value; }
    inline void set_receipt(const protocol::block_receipt&& value) { receipt_ = value; }
    inline protocol::block_receipt& mutable_receipt() { return receipt_; }
    inline const protocol::block_receipt& get_receipt() const { return receipt_; }
    inline const protocol::block_receipt& receipt() const { return receipt_; }

    inline const ::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>& previous_block_ids(uint32_t index) const { return previous_block_ids_[index]; }
    inline void clear_previous_block_ids() { previous_block_ids_.clear(); }
    inline void set_previous_block_ids(uint32_t index, const ::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>& value) { previous_block_ids_.set(index, value); }
    inline void set_previous_block_ids(uint32_t index, const ::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>&& value) { previous_block_ids_.set(index, value); }
    inline void set_previous_block_ids(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>, previous_block_ids_REP_LENGTH>& values) { previous_block_ids_ = values; }
    inline void add_previous_block_ids(const ::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>& value) { previous_block_ids_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>, previous_block_ids_REP_LENGTH>& mutable_previous_block_ids() { return previous_block_ids_; }
    inline ::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>& mutable_previous_block_ids(uint32_t index) { return previous_block_ids_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>, previous_block_ids_REP_LENGTH>& get_previous_block_ids() const { return previous_block_ids_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>, previous_block_ids_REP_LENGTH>& previous_block_ids() const { return previous_block_ids_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_ID), buffer, false);
      }

      if((0U != block_height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_HEIGHT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = block_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = receipt_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RECEIPT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = previous_block_ids_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PREVIOUS_BLOCK_IDS), buffer, false);
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
          case FieldNumber::BLOCK_ID:
            return_value = block_id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BLOCK_HEIGHT:
            return_value = block_height_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BLOCK:
            return_value = block_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RECEIPT:
            return_value = receipt_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PREVIOUS_BLOCK_IDS:
            return_value = previous_block_ids_.deserialize_check_type(buffer, wire_type);
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
      clear_block_height();
      clear_block();
      clear_receipt();
      clear_previous_block_ids();

    }

    private:


      ::EmbeddedProto::FieldBytes<block_id_LENGTH> block_id_;
      EmbeddedProto::uint64 block_height_ = 0U;
      protocol::block<block_id_LENGTH, block_header_previous_LENGTH, block_active_LENGTH, block_passive_LENGTH, block_signature_data_LENGTH, block_transactions_REP_LENGTH, block_transactions_id_LENGTH, block_transactions_active_LENGTH, block_transactions_passive_LENGTH, block_transactions_signature_data_LENGTH> block_;
      protocol::block_receipt receipt_;
      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<previous_block_ids_LENGTH>, previous_block_ids_REP_LENGTH> previous_block_ids_;

};

} // End of namespace block_store
} // End of namespace koinos
#endif // KOINOS_BLOCK_STORE_BLOCK_STORE_H