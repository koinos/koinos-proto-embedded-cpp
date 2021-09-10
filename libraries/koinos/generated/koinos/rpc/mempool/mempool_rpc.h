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

// Include external proto definitions
#include <koinos/protocol/protocol.h>
#include <koinos/rpc/rpc.h>

namespace koinos {
namespace rpc {
namespace mempool {

template<uint32_t payer_LENGTH>
class check_pending_account_resources_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_pending_account_resources_request() = default;
    check_pending_account_resources_request(const check_pending_account_resources_request& rhs )
    {
      set_payer(rhs.get_payer());
      set_max_payer_resources(rhs.get_max_payer_resources());
      set_trx_resource_limit(rhs.get_trx_resource_limit());
    }

    check_pending_account_resources_request(const check_pending_account_resources_request&& rhs ) noexcept
    {
      set_payer(rhs.get_payer());
      set_max_payer_resources(rhs.get_max_payer_resources());
      set_trx_resource_limit(rhs.get_trx_resource_limit());
    }

    ~check_pending_account_resources_request() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      PAYER = 1,
      MAX_PAYER_RESOURCES = 2,
      TRX_RESOURCE_LIMIT = 3
    };

    check_pending_account_resources_request& operator=(const check_pending_account_resources_request& rhs)
    {
      set_payer(rhs.get_payer());
      set_max_payer_resources(rhs.get_max_payer_resources());
      set_trx_resource_limit(rhs.get_trx_resource_limit());
      return *this;
    }

    check_pending_account_resources_request& operator=(const check_pending_account_resources_request&& rhs) noexcept
    {
      set_payer(rhs.get_payer());
      set_max_payer_resources(rhs.get_max_payer_resources());
      set_trx_resource_limit(rhs.get_trx_resource_limit());
      return *this;
    }

    inline void clear_payer() { payer_.clear(); }
    inline ::EmbeddedProto::FieldBytes<payer_LENGTH>& mutable_payer() { return payer_; }
    inline void set_payer(const ::EmbeddedProto::FieldBytes<payer_LENGTH>& rhs) { payer_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<payer_LENGTH>& get_payer() const { return payer_; }
    inline const uint8_t* payer() const { return payer_.get_const(); }

    inline void clear_max_payer_resources() { max_payer_resources_.clear(); }
    inline void set_max_payer_resources(const EmbeddedProto::uint64& value) { max_payer_resources_ = value; }
    inline void set_max_payer_resources(const EmbeddedProto::uint64&& value) { max_payer_resources_ = value; }
    inline EmbeddedProto::uint64& mutable_max_payer_resources() { return max_payer_resources_; }
    inline const EmbeddedProto::uint64& get_max_payer_resources() const { return max_payer_resources_; }
    inline EmbeddedProto::uint64::FIELD_TYPE max_payer_resources() const { return max_payer_resources_.get(); }

    inline void clear_trx_resource_limit() { trx_resource_limit_.clear(); }
    inline void set_trx_resource_limit(const EmbeddedProto::uint64& value) { trx_resource_limit_ = value; }
    inline void set_trx_resource_limit(const EmbeddedProto::uint64&& value) { trx_resource_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_trx_resource_limit() { return trx_resource_limit_; }
    inline const EmbeddedProto::uint64& get_trx_resource_limit() const { return trx_resource_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE trx_resource_limit() const { return trx_resource_limit_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = payer_.serialize_with_id(static_cast<uint32_t>(id::PAYER), buffer);
      }

      if((0U != max_payer_resources_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = max_payer_resources_.serialize_with_id(static_cast<uint32_t>(id::MAX_PAYER_RESOURCES), buffer);
      }

      if((0U != trx_resource_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = trx_resource_limit_.serialize_with_id(static_cast<uint32_t>(id::TRX_RESOURCE_LIMIT), buffer);
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
          case id::PAYER:
            return_value = payer_.deserialize_check_type(buffer, wire_type);
            break;

          case id::MAX_PAYER_RESOURCES:
            return_value = max_payer_resources_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TRX_RESOURCE_LIMIT:
            return_value = trx_resource_limit_.deserialize_check_type(buffer, wire_type);
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
      clear_max_payer_resources();
      clear_trx_resource_limit();

    }

    private:

      ::EmbeddedProto::FieldBytes<payer_LENGTH> payer_;
      EmbeddedProto::uint64 max_payer_resources_ = 0U;
      EmbeddedProto::uint64 trx_resource_limit_ = 0U;

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

    enum class id : uint32_t
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
        return_value = success_.serialize_with_id(static_cast<uint32_t>(id::SUCCESS), buffer);
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
          case id::SUCCESS:
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

    enum class id : uint32_t
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
        return_value = limit_.serialize_with_id(static_cast<uint32_t>(id::LIMIT), buffer);
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
          case id::LIMIT:
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

template<uint32_t transactions_REP_LENGTH, 
uint32_t transactions_id_LENGTH, 
uint32_t transactions_active_LENGTH, 
uint32_t transactions_passive_LENGTH, 
uint32_t transactions_signature_data_LENGTH>
class get_pending_transactions_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_pending_transactions_response() = default;
    get_pending_transactions_response(const get_pending_transactions_response& rhs )
    {
      set_transactions(rhs.get_transactions());
    }

    get_pending_transactions_response(const get_pending_transactions_response&& rhs ) noexcept
    {
      set_transactions(rhs.get_transactions());
    }

    ~get_pending_transactions_response() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      TRANSACTIONS = 1
    };

    get_pending_transactions_response& operator=(const get_pending_transactions_response& rhs)
    {
      set_transactions(rhs.get_transactions());
      return *this;
    }

    get_pending_transactions_response& operator=(const get_pending_transactions_response&& rhs) noexcept
    {
      set_transactions(rhs.get_transactions());
      return *this;
    }

    inline const protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& transactions(uint32_t index) const { return transactions_[index]; }
    inline void clear_transactions() { transactions_.clear(); }
    inline void set_transactions(uint32_t index, const protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& value) { transactions_.set(index, value); }
    inline void set_transactions(uint32_t index, const protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>&& value) { transactions_.set(index, value); }
    inline void set_transactions(const ::EmbeddedProto::RepeatedFieldFixedSize<protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& values) { transactions_ = values; }
    inline void add_transactions(const protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& value) { transactions_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& mutable_transactions() { return transactions_; }
    inline protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& mutable_transactions(uint32_t index) { return transactions_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& get_transactions() const { return transactions_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& transactions() const { return transactions_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transactions_.serialize_with_id(static_cast<uint32_t>(id::TRANSACTIONS), buffer);
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
          case id::TRANSACTIONS:
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

      ::EmbeddedProto::RepeatedFieldFixedSize<protocol::transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH> transactions_;

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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

    }

    ~mempool_request() override = default;

    enum class id : uint32_t
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
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

    inline void clear_check_pending_account_resources()
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.check_pending_account_resources_.~check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>();
      }
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& value)
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES != which_request_)
      {
        init_request(id::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      request_.check_pending_account_resources_ = value;
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>&& value)
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES != which_request_)
      {
        init_request(id::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      request_.check_pending_account_resources_ = value;
    }
    inline check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& mutable_check_pending_account_resources()
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES != which_request_)
      {
        init_request(id::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      return request_.check_pending_account_resources_;
    }
    inline const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& get_check_pending_account_resources() const { return request_.check_pending_account_resources_; }
    inline const check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>& check_pending_account_resources() const { return request_.check_pending_account_resources_; }

    inline void clear_get_pending_transactions()
    {
      if(id::GET_PENDING_TRANSACTIONS == which_request_)
      {
        which_request_ = id::NOT_SET;
        request_.get_pending_transactions_.~get_pending_transactions_request();
      }
    }
    inline void set_get_pending_transactions(const get_pending_transactions_request& value)
    {
      if(id::GET_PENDING_TRANSACTIONS != which_request_)
      {
        init_request(id::GET_PENDING_TRANSACTIONS);
      }
      request_.get_pending_transactions_ = value;
    }
    inline void set_get_pending_transactions(const get_pending_transactions_request&& value)
    {
      if(id::GET_PENDING_TRANSACTIONS != which_request_)
      {
        init_request(id::GET_PENDING_TRANSACTIONS);
      }
      request_.get_pending_transactions_ = value;
    }
    inline get_pending_transactions_request& mutable_get_pending_transactions()
    {
      if(id::GET_PENDING_TRANSACTIONS != which_request_)
      {
        init_request(id::GET_PENDING_TRANSACTIONS);
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
        case id::RESERVED:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.reserved_.serialize_with_id(static_cast<uint32_t>(id::RESERVED), buffer);
          }
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.check_pending_account_resources_.serialize_with_id(static_cast<uint32_t>(id::CHECK_PENDING_ACCOUNT_RESOURCES), buffer);
          }
          break;

        case id::GET_PENDING_TRANSACTIONS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_pending_transactions_.serialize_with_id(static_cast<uint32_t>(id::GET_PENDING_TRANSACTIONS), buffer);
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

          case id::CHECK_PENDING_ACCOUNT_RESOURCES:
            return_value = deserialize_request(id::CHECK_PENDING_ACCOUNT_RESOURCES, request_.check_pending_account_resources_, buffer, wire_type);

            break;

          case id::GET_PENDING_TRANSACTIONS:
            return_value = deserialize_request(id::GET_PENDING_TRANSACTIONS, request_.get_pending_transactions_, buffer, wire_type);

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
        check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH> check_pending_account_resources_;
        get_pending_transactions_request get_pending_transactions_;
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

          case id::CHECK_PENDING_ACCOUNT_RESOURCES:
            new(&request_.check_pending_account_resources_) check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>;
            which_request_ = id::CHECK_PENDING_ACCOUNT_RESOURCES;
            break;

          case id::GET_PENDING_TRANSACTIONS:
            new(&request_.get_pending_transactions_) get_pending_transactions_request;
            which_request_ = id::GET_PENDING_TRANSACTIONS;
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
          case id::CHECK_PENDING_ACCOUNT_RESOURCES:
            request_.check_pending_account_resources_.~check_pending_account_resources_request<check_pending_account_resources_payer_LENGTH>(); // NOSONAR Unions require this.
            break;
          case id::GET_PENDING_TRANSACTIONS:
            request_.get_pending_transactions_.~get_pending_transactions_request(); // NOSONAR Unions require this.
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
uint32_t get_pending_transactions_transactions_REP_LENGTH, 
uint32_t get_pending_transactions_transactions_id_LENGTH, 
uint32_t get_pending_transactions_transactions_active_LENGTH, 
uint32_t get_pending_transactions_transactions_passive_LENGTH, 
uint32_t get_pending_transactions_transactions_signature_data_LENGTH>
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
          break;

        default:
          break;
      }

    }

    ~mempool_response() override = default;

    enum class id : uint32_t
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
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
        case id::RESERVED:
          set_reserved(rhs.get_reserved());
          break;

        case id::ERROR:
          set_error(rhs.get_error());
          break;

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          set_check_pending_account_resources(rhs.get_check_pending_account_resources());
          break;

        case id::GET_PENDING_TRANSACTIONS:
          set_get_pending_transactions(rhs.get_get_pending_transactions());
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

    inline void clear_check_pending_account_resources()
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.check_pending_account_resources_.~check_pending_account_resources_response();
      }
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_response& value)
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES != which_response_)
      {
        init_response(id::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      response_.check_pending_account_resources_ = value;
    }
    inline void set_check_pending_account_resources(const check_pending_account_resources_response&& value)
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES != which_response_)
      {
        init_response(id::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      response_.check_pending_account_resources_ = value;
    }
    inline check_pending_account_resources_response& mutable_check_pending_account_resources()
    {
      if(id::CHECK_PENDING_ACCOUNT_RESOURCES != which_response_)
      {
        init_response(id::CHECK_PENDING_ACCOUNT_RESOURCES);
      }
      return response_.check_pending_account_resources_;
    }
    inline const check_pending_account_resources_response& get_check_pending_account_resources() const { return response_.check_pending_account_resources_; }
    inline const check_pending_account_resources_response& check_pending_account_resources() const { return response_.check_pending_account_resources_; }

    inline void clear_get_pending_transactions()
    {
      if(id::GET_PENDING_TRANSACTIONS == which_response_)
      {
        which_response_ = id::NOT_SET;
        response_.get_pending_transactions_.~get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>();
      }
    }
    inline void set_get_pending_transactions(const get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>& value)
    {
      if(id::GET_PENDING_TRANSACTIONS != which_response_)
      {
        init_response(id::GET_PENDING_TRANSACTIONS);
      }
      response_.get_pending_transactions_ = value;
    }
    inline void set_get_pending_transactions(const get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>&& value)
    {
      if(id::GET_PENDING_TRANSACTIONS != which_response_)
      {
        init_response(id::GET_PENDING_TRANSACTIONS);
      }
      response_.get_pending_transactions_ = value;
    }
    inline get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>& mutable_get_pending_transactions()
    {
      if(id::GET_PENDING_TRANSACTIONS != which_response_)
      {
        init_response(id::GET_PENDING_TRANSACTIONS);
      }
      return response_.get_pending_transactions_;
    }
    inline const get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>& get_get_pending_transactions() const { return response_.get_pending_transactions_; }
    inline const get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>& get_pending_transactions() const { return response_.get_pending_transactions_; }


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

        case id::CHECK_PENDING_ACCOUNT_RESOURCES:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.check_pending_account_resources_.serialize_with_id(static_cast<uint32_t>(id::CHECK_PENDING_ACCOUNT_RESOURCES), buffer);
          }
          break;

        case id::GET_PENDING_TRANSACTIONS:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_pending_transactions_.serialize_with_id(static_cast<uint32_t>(id::GET_PENDING_TRANSACTIONS), buffer);
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

          case id::CHECK_PENDING_ACCOUNT_RESOURCES:
            return_value = deserialize_response(id::CHECK_PENDING_ACCOUNT_RESOURCES, response_.check_pending_account_resources_, buffer, wire_type);

            break;

          case id::GET_PENDING_TRANSACTIONS:
            return_value = deserialize_response(id::GET_PENDING_TRANSACTIONS, response_.get_pending_transactions_, buffer, wire_type);

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
        check_pending_account_resources_response check_pending_account_resources_;
        get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH> get_pending_transactions_;
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

          case id::CHECK_PENDING_ACCOUNT_RESOURCES:
            new(&response_.check_pending_account_resources_) check_pending_account_resources_response;
            which_response_ = id::CHECK_PENDING_ACCOUNT_RESOURCES;
            break;

          case id::GET_PENDING_TRANSACTIONS:
            new(&response_.get_pending_transactions_) get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>;
            which_response_ = id::GET_PENDING_TRANSACTIONS;
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
          case id::CHECK_PENDING_ACCOUNT_RESOURCES:
            response_.check_pending_account_resources_.~check_pending_account_resources_response(); // NOSONAR Unions require this.
            break;
          case id::GET_PENDING_TRANSACTIONS:
            response_.get_pending_transactions_.~get_pending_transactions_response<get_pending_transactions_transactions_REP_LENGTH, get_pending_transactions_transactions_id_LENGTH, get_pending_transactions_transactions_active_LENGTH, get_pending_transactions_transactions_passive_LENGTH, get_pending_transactions_transactions_signature_data_LENGTH>(); // NOSONAR Unions require this.
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

} // End of namespace mempool
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_MEMPOOL_MEMPOOL_RPC_H