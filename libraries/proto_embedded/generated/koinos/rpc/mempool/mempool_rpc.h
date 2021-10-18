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
#ifndef KOINOS_RPC_MEMPOOL_MEMPOOL_RPC_H
#define KOINOS_RPC_MEMPOOL_MEMPOOL_RPC_H

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
#include <koinos/rpc/rpc.h>

namespace koinos {
namespace rpc {
namespace mempool {

template<uint32_t transaction_id_LENGTH, 
uint32_t transaction_active_LENGTH, 
uint32_t transaction_passive_LENGTH, 
uint32_t transaction_signature_data_LENGTH>
class pending_transaction final: public ::EmbeddedProto::MessageInterface
{
  public:
    pending_transaction() = default;
    pending_transaction(const pending_transaction& rhs )
    {
      set_transaction(rhs.get_transaction());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
    }

    pending_transaction(const pending_transaction&& rhs ) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
    }

    ~pending_transaction() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION = 1,
      DISK_STORAGE_USED = 2,
      NETWORK_BANDWIDTH_USED = 3,
      COMPUTE_BANDWIDTH_USED = 4
    };

    pending_transaction& operator=(const pending_transaction& rhs)
    {
      set_transaction(rhs.get_transaction());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      return *this;
    }

    pending_transaction& operator=(const pending_transaction&& rhs) noexcept
    {
      set_transaction(rhs.get_transaction());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      return *this;
    }

    inline void clear_transaction() { transaction_.clear(); }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& value) { transaction_ = value; }
    inline void set_transaction(const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>&& value) { transaction_ = value; }
    inline protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& mutable_transaction() { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& get_transaction() const { return transaction_; }
    inline const protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH>& transaction() const { return transaction_; }

    inline void clear_disk_storage_used() { disk_storage_used_.clear(); }
    inline void set_disk_storage_used(const EmbeddedProto::uint64& value) { disk_storage_used_ = value; }
    inline void set_disk_storage_used(const EmbeddedProto::uint64&& value) { disk_storage_used_ = value; }
    inline EmbeddedProto::uint64& mutable_disk_storage_used() { return disk_storage_used_; }
    inline const EmbeddedProto::uint64& get_disk_storage_used() const { return disk_storage_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE disk_storage_used() const { return disk_storage_used_.get(); }

    inline void clear_network_bandwidth_used() { network_bandwidth_used_.clear(); }
    inline void set_network_bandwidth_used(const EmbeddedProto::uint64& value) { network_bandwidth_used_ = value; }
    inline void set_network_bandwidth_used(const EmbeddedProto::uint64&& value) { network_bandwidth_used_ = value; }
    inline EmbeddedProto::uint64& mutable_network_bandwidth_used() { return network_bandwidth_used_; }
    inline const EmbeddedProto::uint64& get_network_bandwidth_used() const { return network_bandwidth_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE network_bandwidth_used() const { return network_bandwidth_used_.get(); }

    inline void clear_compute_bandwidth_used() { compute_bandwidth_used_.clear(); }
    inline void set_compute_bandwidth_used(const EmbeddedProto::uint64& value) { compute_bandwidth_used_ = value; }
    inline void set_compute_bandwidth_used(const EmbeddedProto::uint64&& value) { compute_bandwidth_used_ = value; }
    inline EmbeddedProto::uint64& mutable_compute_bandwidth_used() { return compute_bandwidth_used_; }
    inline const EmbeddedProto::uint64& get_compute_bandwidth_used() const { return compute_bandwidth_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE compute_bandwidth_used() const { return compute_bandwidth_used_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION), buffer, false);
      }

      if((0U != disk_storage_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = disk_storage_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DISK_STORAGE_USED), buffer, false);
      }

      if((0U != network_bandwidth_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = network_bandwidth_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NETWORK_BANDWIDTH_USED), buffer, false);
      }

      if((0U != compute_bandwidth_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = compute_bandwidth_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::COMPUTE_BANDWIDTH_USED), buffer, false);
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

          case FieldNumber::DISK_STORAGE_USED:
            return_value = disk_storage_used_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NETWORK_BANDWIDTH_USED:
            return_value = network_bandwidth_used_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::COMPUTE_BANDWIDTH_USED:
            return_value = compute_bandwidth_used_.deserialize_check_type(buffer, wire_type);
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
      clear_disk_storage_used();
      clear_network_bandwidth_used();
      clear_compute_bandwidth_used();

    }

    private:


      protocol::transaction<transaction_id_LENGTH, transaction_active_LENGTH, transaction_passive_LENGTH, transaction_signature_data_LENGTH> transaction_;
      EmbeddedProto::uint64 disk_storage_used_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_used_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_used_ = 0U;

};

template<uint32_t payer_LENGTH>
class check_pending_account_resources_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_pending_account_resources_request() = default;
    check_pending_account_resources_request(const check_pending_account_resources_request& rhs )
    {
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
    }

    check_pending_account_resources_request(const check_pending_account_resources_request&& rhs ) noexcept
    {
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
    }

    ~check_pending_account_resources_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PAYER = 1,
      MAX_PAYER_RC = 2,
      RC_LIMIT = 3
    };

    check_pending_account_resources_request& operator=(const check_pending_account_resources_request& rhs)
    {
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      return *this;
    }

    check_pending_account_resources_request& operator=(const check_pending_account_resources_request&& rhs) noexcept
    {
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      return *this;
    }

    inline void clear_payer() { payer_.clear(); }
    inline ::EmbeddedProto::FieldBytes<payer_LENGTH>& mutable_payer() { return payer_; }
    inline void set_payer(const ::EmbeddedProto::FieldBytes<payer_LENGTH>& rhs) { payer_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<payer_LENGTH>& get_payer() const { return payer_; }
    inline const uint8_t* payer() const { return payer_.get_const(); }

    inline void clear_max_payer_rc() { max_payer_rc_.clear(); }
    inline void set_max_payer_rc(const EmbeddedProto::uint64& value) { max_payer_rc_ = value; }
    inline void set_max_payer_rc(const EmbeddedProto::uint64&& value) { max_payer_rc_ = value; }
    inline EmbeddedProto::uint64& mutable_max_payer_rc() { return max_payer_rc_; }
    inline const EmbeddedProto::uint64& get_max_payer_rc() const { return max_payer_rc_; }
    inline EmbeddedProto::uint64::FIELD_TYPE max_payer_rc() const { return max_payer_rc_.get(); }

    inline void clear_rc_limit() { rc_limit_.clear(); }
    inline void set_rc_limit(const EmbeddedProto::uint64& value) { rc_limit_ = value; }
    inline void set_rc_limit(const EmbeddedProto::uint64&& value) { rc_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_rc_limit() { return rc_limit_; }
    inline const EmbeddedProto::uint64& get_rc_limit() const { return rc_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc_limit() const { return rc_limit_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = payer_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PAYER), buffer, false);
      }

      if((0U != max_payer_rc_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = max_payer_rc_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAX_PAYER_RC), buffer, false);
      }

      if((0U != rc_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC_LIMIT), buffer, false);
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
          case FieldNumber::PAYER:
            return_value = payer_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MAX_PAYER_RC:
            return_value = max_payer_rc_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RC_LIMIT:
            return_value = rc_limit_.deserialize_check_type(buffer, wire_type);
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
      clear_payer();
      clear_max_payer_rc();
      clear_rc_limit();

    }

    private:


      ::EmbeddedProto::FieldBytes<payer_LENGTH> payer_;
      EmbeddedProto::uint64 max_payer_rc_ = 0U;
      EmbeddedProto::uint64 rc_limit_ = 0U;

};

class check_pending_account_resources_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_pending_account_resources_response() = default;
    check_pending_account_resources_response(const check_pending_account_resources_response& rhs )
    {
      set_success(rhs.get_success());
    }

    check_pending_account_resources_response(const check_pending_account_resources_response&& rhs ) noexcept
    {
      set_success(rhs.get_success());
    }

    ~check_pending_account_resources_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SUCCESS = 1
    };

    check_pending_account_resources_response& operator=(const check_pending_account_resources_response& rhs)
    {
      set_success(rhs.get_success());
      return *this;
    }

    check_pending_account_resources_response& operator=(const check_pending_account_resources_response&& rhs) noexcept
    {
      set_success(rhs.get_success());
      return *this;
    }

    inline void clear_success() { success_.clear(); }
    inline void set_success(const EmbeddedProto::boolean& value) { success_ = value; }
    inline void set_success(const EmbeddedProto::boolean&& value) { success_ = value; }
    inline EmbeddedProto::boolean& mutable_success() { return success_; }
    inline const EmbeddedProto::boolean& get_success() const { return success_; }
    inline EmbeddedProto::boolean::FIELD_TYPE success() const { return success_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != success_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = success_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SUCCESS), buffer, false);
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
          case FieldNumber::SUCCESS:
            return_value = success_.deserialize_check_type(buffer, wire_type);
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
      clear_success();

    }

    private:


      EmbeddedProto::boolean success_ = false;

};

class get_pending_transactions_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_pending_transactions_request() = default;
    get_pending_transactions_request(const get_pending_transactions_request& rhs )
    {
      set_limit(rhs.get_limit());
    }

    get_pending_transactions_request(const get_pending_transactions_request&& rhs ) noexcept
    {
      set_limit(rhs.get_limit());
    }

    ~get_pending_transactions_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      LIMIT = 1
    };

    get_pending_transactions_request& operator=(const get_pending_transactions_request& rhs)
    {
      set_limit(rhs.get_limit());
      return *this;
    }

    get_pending_transactions_request& operator=(const get_pending_transactions_request&& rhs) noexcept
    {
      set_limit(rhs.get_limit());
      return *this;
    }

    inline void clear_limit() { limit_.clear(); }
    inline void set_limit(const EmbeddedProto::uint64& value) { limit_ = value; }
    inline void set_limit(const EmbeddedProto::uint64&& value) { limit_ = value; }
    inline EmbeddedProto::uint64& mutable_limit() { return limit_; }
    inline const EmbeddedProto::uint64& get_limit() const { return limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE limit() const { return limit_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LIMIT), buffer, false);
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
          case FieldNumber::LIMIT:
            return_value = limit_.deserialize_check_type(buffer, wire_type);
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
      clear_limit();

    }

    private:


      EmbeddedProto::uint64 limit_ = 0U;

};

template<uint32_t pending_transactions_REP_LENGTH, 
uint32_t pending_transactions_transaction_id_LENGTH, 
uint32_t pending_transactions_transaction_active_LENGTH, 
uint32_t pending_transactions_transaction_passive_LENGTH, 
uint32_t pending_transactions_transaction_signature_data_LENGTH>
class get_pending_transactions_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_pending_transactions_response() = default;
    get_pending_transactions_response(const get_pending_transactions_response& rhs )
    {
      set_pending_transactions(rhs.get_pending_transactions());
    }

    get_pending_transactions_response(const get_pending_transactions_response&& rhs ) noexcept
    {
      set_pending_transactions(rhs.get_pending_transactions());
    }

    ~get_pending_transactions_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PENDING_TRANSACTIONS = 1
    };

    get_pending_transactions_response& operator=(const get_pending_transactions_response& rhs)
    {
      set_pending_transactions(rhs.get_pending_transactions());
      return *this;
    }

    get_pending_transactions_response& operator=(const get_pending_transactions_response&& rhs) noexcept
    {
      set_pending_transactions(rhs.get_pending_transactions());
      return *this;
    }

    inline const pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>& pending_transactions(uint32_t index) const { return pending_transactions_[index]; }
    inline void clear_pending_transactions() { pending_transactions_.clear(); }
    inline void set_pending_transactions(uint32_t index, const pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>& value) { pending_transactions_.set(index, value); }
    inline void set_pending_transactions(uint32_t index, const pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>&& value) { pending_transactions_.set(index, value); }
    inline void set_pending_transactions(const ::EmbeddedProto::RepeatedFieldFixedSize<pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>, pending_transactions_REP_LENGTH>& values) { pending_transactions_ = values; }
    inline void add_pending_transactions(const pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>& value) { pending_transactions_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>, pending_transactions_REP_LENGTH>& mutable_pending_transactions() { return pending_transactions_; }
    inline pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>& mutable_pending_transactions(uint32_t index) { return pending_transactions_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>, pending_transactions_REP_LENGTH>& get_pending_transactions() const { return pending_transactions_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>, pending_transactions_REP_LENGTH>& pending_transactions() const { return pending_transactions_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = pending_transactions_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PENDING_TRANSACTIONS), buffer, false);
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
          case FieldNumber::PENDING_TRANSACTIONS:
            return_value = pending_transactions_.deserialize_check_type(buffer, wire_type);
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
      clear_pending_transactions();

    }

    private:


      ::EmbeddedProto::RepeatedFieldFixedSize<pending_transaction<pending_transactions_transaction_id_LENGTH, pending_transactions_transaction_active_LENGTH, pending_transactions_transaction_passive_LENGTH, pending_transactions_transaction_signature_data_LENGTH>, pending_transactions_REP_LENGTH> pending_transactions_;

};

template<uint32_t check_pending_account_resources_payer_LENGTH>
class mempool_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    mempool_request() = default;
    mempool_request(const mempool_request& rhs )
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

    }

    mempool_request(const mempool_request&& rhs ) noexcept
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

    }

    ~mempool_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      CHECK_PENDING_ACCOUNT_RESOURCES = 2,
      GET_PENDING_TRANSACTIONS = 3
    };

    mempool_request& operator=(const mempool_request& rhs)
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

      return *this;
    }

    mempool_request& operator=(const mempool_request&& rhs) noexcept
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
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

    inline void clear_check_pending_account_resources()
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.check_pending_account_resources_.~check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>();
      }
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& value)
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES != which_request_)
      {
        init_request(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      request_.check_pending_account_resources_ = value;
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>&& value)
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES != which_request_)
      {
        init_request(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      request_.check_pending_account_resources_ = value;
    }
    inline check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& mutable_check_pending_account_resources()
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES != which_request_)
      {
        init_request(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      return request_.check_pending_account_resources_;
    }
    inline const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& get_check_pending_account_resources() const { return request_.check_pending_account_resources_; }
    inline const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& check_pending_account_resources() const { return request_.check_pending_account_resources_; }

    inline void clear_get_pending_transactions()
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_pending_transactions_.~get_pending_transactions_request();
      }
    }
    inline void set_get_pending_transactions(const get_pending_transactions_request& value)
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS != which_request_)
      {
        init_request(FieldNumber::GET_PENDING_TRANSACTIONS);
      }
      request_.get_pending_transactions_ = value;
    }
    inline void set_get_pending_transactions(const get_pending_transactions_request&& value)
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS != which_request_)
      {
        init_request(FieldNumber::GET_PENDING_TRANSACTIONS);
      }
      request_.get_pending_transactions_ = value;
    }
    inline get_pending_transactions_request& mutable_get_pending_transactions()
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS != which_request_)
      {
        init_request(FieldNumber::GET_PENDING_TRANSACTIONS);
      }
      return request_.get_pending_transactions_;
    }
    inline const get_pending_transactions_request& get_get_pending_transactions() const { return request_.get_pending_transactions_; }
    inline const get_pending_transactions_request& get_pending_transactions() const { return request_.get_pending_transactions_; }


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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.check_pending_account_resources_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES), buffer, false);
          }
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_pending_transactions_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_PENDING_TRANSACTIONS), buffer, false);
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

          case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
            return_value = deserialize_request(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES, request_.check_pending_account_resources_, buffer, wire_type);

            break;

          case FieldNumber::GET_PENDING_TRANSACTIONS:
            return_value = deserialize_request(FieldNumber::GET_PENDING_TRANSACTIONS, request_.get_pending_transactions_, buffer, wire_type);

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
        check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH> check_pending_account_resources_;
        get_pending_transactions_request get_pending_transactions_;
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

          case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
            new(&request_.check_pending_account_resources_) check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>;
            which_request_ = FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES;
            break;

          case FieldNumber::GET_PENDING_TRANSACTIONS:
            new(&request_.get_pending_transactions_) get_pending_transactions_request;
            which_request_ = FieldNumber::GET_PENDING_TRANSACTIONS;
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
          case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
            request_.check_pending_account_resources_.~check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_PENDING_TRANSACTIONS:
            request_.get_pending_transactions_.~get_pending_transactions_request(); // NOSONAR Unions require this.
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
uint32_t get_pending_transactions_pending_transactions_REP_LENGTH, 
uint32_t get_pending_transactions_pending_transactions_transaction_id_LENGTH, 
uint32_t get_pending_transactions_pending_transactions_transaction_active_LENGTH, 
uint32_t get_pending_transactions_pending_transactions_transaction_passive_LENGTH, 
uint32_t get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>
class mempool_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    mempool_response() = default;
    mempool_response(const mempool_response& rhs )
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

    }

    mempool_response(const mempool_response&& rhs ) noexcept
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

    }

    ~mempool_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      ERROR = 2,
      CHECK_PENDING_ACCOUNT_RESOURCES = 3,
      GET_PENDING_TRANSACTIONS = 4
    };

    mempool_response& operator=(const mempool_response& rhs)
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

      return *this;
    }

    mempool_response& operator=(const mempool_response&& rhs) noexcept
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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
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

    inline void clear_check_pending_account_resources()
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.check_pending_account_resources_.~check_pending_account_resources_response();
      }
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_response& value)
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES != which_response_)
      {
        init_response(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      response_.check_pending_account_resources_ = value;
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_response&& value)
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES != which_response_)
      {
        init_response(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      response_.check_pending_account_resources_ = value;
    }
    inline check_pending_account_resources_response& mutable_check_pending_account_resources()
    {
      if(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES != which_response_)
      {
        init_response(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      return response_.check_pending_account_resources_;
    }
    inline const check_pending_account_resources_response& get_check_pending_account_resources() const { return response_.check_pending_account_resources_; }
    inline const check_pending_account_resources_response& check_pending_account_resources() const { return response_.check_pending_account_resources_; }

    inline void clear_get_pending_transactions()
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_pending_transactions_.~get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>();
      }
    }
    inline void set_get_pending_transactions(const get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>& value)
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS != which_response_)
      {
        init_response(FieldNumber::GET_PENDING_TRANSACTIONS);
      }
      response_.get_pending_transactions_ = value;
    }
    inline void set_get_pending_transactions(const get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>&& value)
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS != which_response_)
      {
        init_response(FieldNumber::GET_PENDING_TRANSACTIONS);
      }
      response_.get_pending_transactions_ = value;
    }
    inline get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>& mutable_get_pending_transactions()
    {
      if(FieldNumber::GET_PENDING_TRANSACTIONS != which_response_)
      {
        init_response(FieldNumber::GET_PENDING_TRANSACTIONS);
      }
      return response_.get_pending_transactions_;
    }
    inline const get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>& get_get_pending_transactions() const { return response_.get_pending_transactions_; }
    inline const get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>& get_pending_transactions() const { return response_.get_pending_transactions_; }


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

        case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.check_pending_account_resources_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES), buffer, false);
          }
          break;

        case FieldNumber::GET_PENDING_TRANSACTIONS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_pending_transactions_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_PENDING_TRANSACTIONS), buffer, false);
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

          case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
            return_value = deserialize_response(FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES, response_.check_pending_account_resources_, buffer, wire_type);

            break;

          case FieldNumber::GET_PENDING_TRANSACTIONS:
            return_value = deserialize_response(FieldNumber::GET_PENDING_TRANSACTIONS, response_.get_pending_transactions_, buffer, wire_type);

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
        check_pending_account_resources_response check_pending_account_resources_;
        get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH> get_pending_transactions_;
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

          case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
            new(&response_.check_pending_account_resources_) check_pending_account_resources_response;
            which_response_ = FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES;
            break;

          case FieldNumber::GET_PENDING_TRANSACTIONS:
            new(&response_.get_pending_transactions_) get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>;
            which_response_ = FieldNumber::GET_PENDING_TRANSACTIONS;
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
          case FieldNumber::CHECK_PENDING_ACCOUNT_RESOURCES:
            response_.check_pending_account_resources_.~check_pending_account_resources_response(); // NOSONAR Unions require this.
            break;
          case FieldNumber::GET_PENDING_TRANSACTIONS:
            response_.get_pending_transactions_.~get_pending_transactions_response<get_pending_transactions_pending_transactions_REP_LENGTH, get_pending_transactions_pending_transactions_transaction_id_LENGTH, get_pending_transactions_pending_transactions_transaction_active_LENGTH, get_pending_transactions_pending_transactions_transaction_passive_LENGTH, get_pending_transactions_pending_transactions_transaction_signature_data_LENGTH>(); // NOSONAR Unions require this.
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

} // End of namespace mempool
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_MEMPOOL_MEMPOOL_RPC_H