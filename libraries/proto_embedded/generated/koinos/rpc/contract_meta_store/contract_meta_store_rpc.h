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
#ifndef KOINOS_RPC_CONTRACT_META_STORE_CONTRACT_META_STORE_RPC_H
#define KOINOS_RPC_CONTRACT_META_STORE_CONTRACT_META_STORE_RPC_H

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
#include <koinos/contract_meta_store/contract_meta_store.h>

namespace koinos {
namespace rpc {
namespace contract_meta_store {

template<uint32_t contract_id_LENGTH>
class get_contract_meta_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_meta_request() = default;
    get_contract_meta_request(const get_contract_meta_request& rhs )
    {
      set_contract_id(rhs.get_contract_id());
    }

    get_contract_meta_request(const get_contract_meta_request&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
    }

    ~get_contract_meta_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1
    };

    get_contract_meta_request& operator=(const get_contract_meta_request& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      return *this;
    }

    get_contract_meta_request& operator=(const get_contract_meta_request&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      return *this;
    }

    inline void clear_contract_id() { contract_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& mutable_contract_id() { return contract_id_; }
    inline void set_contract_id(const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& rhs) { contract_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& get_contract_id() const { return contract_id_; }
    inline const uint8_t* contract_id() const { return contract_id_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
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

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;

};

template<uint32_t meta_abi_LENGTH>
class get_contract_meta_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_contract_meta_response() = default;
    get_contract_meta_response(const get_contract_meta_response& rhs )
    {
      set_meta(rhs.get_meta());
    }

    get_contract_meta_response(const get_contract_meta_response&& rhs ) noexcept
    {
      set_meta(rhs.get_meta());
    }

    ~get_contract_meta_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      META = 1
    };

    get_contract_meta_response& operator=(const get_contract_meta_response& rhs)
    {
      set_meta(rhs.get_meta());
      return *this;
    }

    get_contract_meta_response& operator=(const get_contract_meta_response&& rhs) noexcept
    {
      set_meta(rhs.get_meta());
      return *this;
    }

    inline void clear_meta() { meta_.clear(); }
    inline void set_meta(const contract_meta_store::contract_meta_item<meta_abi_LENGTH>& value) { meta_ = value; }
    inline void set_meta(const contract_meta_store::contract_meta_item<meta_abi_LENGTH>&& value) { meta_ = value; }
    inline contract_meta_store::contract_meta_item<meta_abi_LENGTH>& mutable_meta() { return meta_; }
    inline const contract_meta_store::contract_meta_item<meta_abi_LENGTH>& get_meta() const { return meta_; }
    inline const contract_meta_store::contract_meta_item<meta_abi_LENGTH>& meta() const { return meta_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = meta_.serialize_with_id(static_cast<uint32_t>(FieldNumber::META), buffer, false);
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
          case FieldNumber::META:
            return_value = meta_.deserialize_check_type(buffer, wire_type);
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
      clear_meta();

    }

    private:


      contract_meta_store::contract_meta_item<meta_abi_LENGTH> meta_;

};

template<uint32_t get_contract_meta_contract_id_LENGTH>
class contract_meta_store_request final: public ::EmbeddedProto::MessageInterface
{
  public:
    contract_meta_store_request() = default;
    contract_meta_store_request(const contract_meta_store_request& rhs )
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
          break;

        default:
          break;
      }

    }

    contract_meta_store_request(const contract_meta_store_request&& rhs ) noexcept
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
          break;

        default:
          break;
      }

    }

    ~contract_meta_store_request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      GET_CONTRACT_META = 2
    };

    contract_meta_store_request& operator=(const contract_meta_store_request& rhs)
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
          break;

        default:
          break;
      }

      return *this;
    }

    contract_meta_store_request& operator=(const contract_meta_store_request&& rhs) noexcept
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
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

    inline void clear_get_contract_meta()
    {
      if(FieldNumber::GET_CONTRACT_META == which_request_)
      {
        which_request_ = FieldNumber::NOT_SET;
        request_.get_contract_meta_.~get_contract_meta_request<get_contract_meta_contract_id_LENGTH>();
      }
    }
    inline void set_get_contract_meta(const get_contract_meta_request<get_contract_meta_contract_id_LENGTH>& value)
    {
      if(FieldNumber::GET_CONTRACT_META != which_request_)
      {
        init_request(FieldNumber::GET_CONTRACT_META);
      }
      request_.get_contract_meta_ = value;
    }
    inline void set_get_contract_meta(const get_contract_meta_request<get_contract_meta_contract_id_LENGTH>&& value)
    {
      if(FieldNumber::GET_CONTRACT_META != which_request_)
      {
        init_request(FieldNumber::GET_CONTRACT_META);
      }
      request_.get_contract_meta_ = value;
    }
    inline get_contract_meta_request<get_contract_meta_contract_id_LENGTH>& mutable_get_contract_meta()
    {
      if(FieldNumber::GET_CONTRACT_META != which_request_)
      {
        init_request(FieldNumber::GET_CONTRACT_META);
      }
      return request_.get_contract_meta_;
    }
    inline const get_contract_meta_request<get_contract_meta_contract_id_LENGTH>& get_get_contract_meta() const { return request_.get_contract_meta_; }
    inline const get_contract_meta_request<get_contract_meta_contract_id_LENGTH>& get_contract_meta() const { return request_.get_contract_meta_; }


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

        case FieldNumber::GET_CONTRACT_META:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = request_.get_contract_meta_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_CONTRACT_META), buffer, false);
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

          case FieldNumber::GET_CONTRACT_META:
            return_value = deserialize_request(FieldNumber::GET_CONTRACT_META, request_.get_contract_meta_, buffer, wire_type);

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
        get_contract_meta_request<get_contract_meta_contract_id_LENGTH> get_contract_meta_;
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

          case FieldNumber::GET_CONTRACT_META:
            new(&request_.get_contract_meta_) get_contract_meta_request<get_contract_meta_contract_id_LENGTH>;
            which_request_ = FieldNumber::GET_CONTRACT_META;
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
          case FieldNumber::GET_CONTRACT_META:
            request_.get_contract_meta_.~get_contract_meta_request<get_contract_meta_contract_id_LENGTH>(); // NOSONAR Unions require this.
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
uint32_t get_contract_meta_meta_abi_LENGTH>
class contract_meta_store_response final: public ::EmbeddedProto::MessageInterface
{
  public:
    contract_meta_store_response() = default;
    contract_meta_store_response(const contract_meta_store_response& rhs )
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
          break;

        default:
          break;
      }

    }

    contract_meta_store_response(const contract_meta_store_response&& rhs ) noexcept
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
          break;

        default:
          break;
      }

    }

    ~contract_meta_store_response() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RESERVED = 1,
      ERROR = 2,
      GET_CONTRACT_META = 3
    };

    contract_meta_store_response& operator=(const contract_meta_store_response& rhs)
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
          break;

        default:
          break;
      }

      return *this;
    }

    contract_meta_store_response& operator=(const contract_meta_store_response&& rhs) noexcept
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

        case FieldNumber::GET_CONTRACT_META:
          set_get_contract_meta(rhs.get_get_contract_meta());
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

    inline void clear_get_contract_meta()
    {
      if(FieldNumber::GET_CONTRACT_META == which_response_)
      {
        which_response_ = FieldNumber::NOT_SET;
        response_.get_contract_meta_.~get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>();
      }
    }
    inline void set_get_contract_meta(const get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>& value)
    {
      if(FieldNumber::GET_CONTRACT_META != which_response_)
      {
        init_response(FieldNumber::GET_CONTRACT_META);
      }
      response_.get_contract_meta_ = value;
    }
    inline void set_get_contract_meta(const get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>&& value)
    {
      if(FieldNumber::GET_CONTRACT_META != which_response_)
      {
        init_response(FieldNumber::GET_CONTRACT_META);
      }
      response_.get_contract_meta_ = value;
    }
    inline get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>& mutable_get_contract_meta()
    {
      if(FieldNumber::GET_CONTRACT_META != which_response_)
      {
        init_response(FieldNumber::GET_CONTRACT_META);
      }
      return response_.get_contract_meta_;
    }
    inline const get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>& get_get_contract_meta() const { return response_.get_contract_meta_; }
    inline const get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>& get_contract_meta() const { return response_.get_contract_meta_; }


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

        case FieldNumber::GET_CONTRACT_META:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = response_.get_contract_meta_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GET_CONTRACT_META), buffer, false);
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

          case FieldNumber::GET_CONTRACT_META:
            return_value = deserialize_response(FieldNumber::GET_CONTRACT_META, response_.get_contract_meta_, buffer, wire_type);

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
        get_contract_meta_response<get_contract_meta_meta_abi_LENGTH> get_contract_meta_;
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

          case FieldNumber::GET_CONTRACT_META:
            new(&response_.get_contract_meta_) get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>;
            which_response_ = FieldNumber::GET_CONTRACT_META;
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
          case FieldNumber::GET_CONTRACT_META:
            response_.get_contract_meta_.~get_contract_meta_response<get_contract_meta_meta_abi_LENGTH>(); // NOSONAR Unions require this.
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

} // End of namespace contract_meta_store
} // End of namespace rpc
} // End of namespace koinos
#endif // KOINOS_RPC_CONTRACT_META_STORE_CONTRACT_META_STORE_RPC_H