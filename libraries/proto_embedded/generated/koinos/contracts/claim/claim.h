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
#ifndef KOINOS_CONTRACTS_CLAIM_CLAIM_H
#define KOINOS_CONTRACTS_CLAIM_CLAIM_H

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

namespace koinos {
namespace contracts {
namespace claim {

class claim_info final: public ::EmbeddedProto::MessageInterface
{
  public:
    claim_info() = default;
    claim_info(const claim_info& rhs )
    {
      set_total_eth_accounts(rhs.get_total_eth_accounts());
      set_eth_accounts_claimed(rhs.get_eth_accounts_claimed());
      set_total_koin(rhs.get_total_koin());
      set_koin_claimed(rhs.get_koin_claimed());
    }

    claim_info(const claim_info&& rhs ) noexcept
    {
      set_total_eth_accounts(rhs.get_total_eth_accounts());
      set_eth_accounts_claimed(rhs.get_eth_accounts_claimed());
      set_total_koin(rhs.get_total_koin());
      set_koin_claimed(rhs.get_koin_claimed());
    }

    ~claim_info() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TOTAL_ETH_ACCOUNTS = 1,
      ETH_ACCOUNTS_CLAIMED = 2,
      TOTAL_KOIN = 3,
      KOIN_CLAIMED = 4
    };

    claim_info& operator=(const claim_info& rhs)
    {
      set_total_eth_accounts(rhs.get_total_eth_accounts());
      set_eth_accounts_claimed(rhs.get_eth_accounts_claimed());
      set_total_koin(rhs.get_total_koin());
      set_koin_claimed(rhs.get_koin_claimed());
      return *this;
    }

    claim_info& operator=(const claim_info&& rhs) noexcept
    {
      set_total_eth_accounts(rhs.get_total_eth_accounts());
      set_eth_accounts_claimed(rhs.get_eth_accounts_claimed());
      set_total_koin(rhs.get_total_koin());
      set_koin_claimed(rhs.get_koin_claimed());
      return *this;
    }

    inline void clear_total_eth_accounts() { total_eth_accounts_.clear(); }
    inline void set_total_eth_accounts(const EmbeddedProto::uint32& value) { total_eth_accounts_ = value; }
    inline void set_total_eth_accounts(const EmbeddedProto::uint32&& value) { total_eth_accounts_ = value; }
    inline EmbeddedProto::uint32& mutable_total_eth_accounts() { return total_eth_accounts_; }
    inline const EmbeddedProto::uint32& get_total_eth_accounts() const { return total_eth_accounts_; }
    inline EmbeddedProto::uint32::FIELD_TYPE total_eth_accounts() const { return total_eth_accounts_.get(); }

    inline void clear_eth_accounts_claimed() { eth_accounts_claimed_.clear(); }
    inline void set_eth_accounts_claimed(const EmbeddedProto::uint32& value) { eth_accounts_claimed_ = value; }
    inline void set_eth_accounts_claimed(const EmbeddedProto::uint32&& value) { eth_accounts_claimed_ = value; }
    inline EmbeddedProto::uint32& mutable_eth_accounts_claimed() { return eth_accounts_claimed_; }
    inline const EmbeddedProto::uint32& get_eth_accounts_claimed() const { return eth_accounts_claimed_; }
    inline EmbeddedProto::uint32::FIELD_TYPE eth_accounts_claimed() const { return eth_accounts_claimed_.get(); }

    inline void clear_total_koin() { total_koin_.clear(); }
    inline void set_total_koin(const EmbeddedProto::uint64& value) { total_koin_ = value; }
    inline void set_total_koin(const EmbeddedProto::uint64&& value) { total_koin_ = value; }
    inline EmbeddedProto::uint64& mutable_total_koin() { return total_koin_; }
    inline const EmbeddedProto::uint64& get_total_koin() const { return total_koin_; }
    inline EmbeddedProto::uint64::FIELD_TYPE total_koin() const { return total_koin_.get(); }

    inline void clear_koin_claimed() { koin_claimed_.clear(); }
    inline void set_koin_claimed(const EmbeddedProto::uint64& value) { koin_claimed_ = value; }
    inline void set_koin_claimed(const EmbeddedProto::uint64&& value) { koin_claimed_ = value; }
    inline EmbeddedProto::uint64& mutable_koin_claimed() { return koin_claimed_; }
    inline const EmbeddedProto::uint64& get_koin_claimed() const { return koin_claimed_; }
    inline EmbeddedProto::uint64::FIELD_TYPE koin_claimed() const { return koin_claimed_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != total_eth_accounts_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = total_eth_accounts_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TOTAL_ETH_ACCOUNTS), buffer, false);
      }

      if((0U != eth_accounts_claimed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = eth_accounts_claimed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ETH_ACCOUNTS_CLAIMED), buffer, false);
      }

      if((0U != total_koin_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = total_koin_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TOTAL_KOIN), buffer, false);
      }

      if((0U != koin_claimed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = koin_claimed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::KOIN_CLAIMED), buffer, false);
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
          case FieldNumber::TOTAL_ETH_ACCOUNTS:
            return_value = total_eth_accounts_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ETH_ACCOUNTS_CLAIMED:
            return_value = eth_accounts_claimed_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TOTAL_KOIN:
            return_value = total_koin_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::KOIN_CLAIMED:
            return_value = koin_claimed_.deserialize_check_type(buffer, wire_type);
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
      clear_total_eth_accounts();
      clear_eth_accounts_claimed();
      clear_total_koin();
      clear_koin_claimed();

    }

    private:


      EmbeddedProto::uint32 total_eth_accounts_ = 0U;
      EmbeddedProto::uint32 eth_accounts_claimed_ = 0U;
      EmbeddedProto::uint64 total_koin_ = 0U;
      EmbeddedProto::uint64 koin_claimed_ = 0U;

};

class claim_status final: public ::EmbeddedProto::MessageInterface
{
  public:
    claim_status() = default;
    claim_status(const claim_status& rhs )
    {
      set_token_amount(rhs.get_token_amount());
      set_claimed(rhs.get_claimed());
    }

    claim_status(const claim_status&& rhs ) noexcept
    {
      set_token_amount(rhs.get_token_amount());
      set_claimed(rhs.get_claimed());
    }

    ~claim_status() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TOKEN_AMOUNT = 1,
      CLAIMED = 2
    };

    claim_status& operator=(const claim_status& rhs)
    {
      set_token_amount(rhs.get_token_amount());
      set_claimed(rhs.get_claimed());
      return *this;
    }

    claim_status& operator=(const claim_status&& rhs) noexcept
    {
      set_token_amount(rhs.get_token_amount());
      set_claimed(rhs.get_claimed());
      return *this;
    }

    inline void clear_token_amount() { token_amount_.clear(); }
    inline void set_token_amount(const EmbeddedProto::uint64& value) { token_amount_ = value; }
    inline void set_token_amount(const EmbeddedProto::uint64&& value) { token_amount_ = value; }
    inline EmbeddedProto::uint64& mutable_token_amount() { return token_amount_; }
    inline const EmbeddedProto::uint64& get_token_amount() const { return token_amount_; }
    inline EmbeddedProto::uint64::FIELD_TYPE token_amount() const { return token_amount_.get(); }

    inline void clear_claimed() { claimed_.clear(); }
    inline void set_claimed(const EmbeddedProto::boolean& value) { claimed_ = value; }
    inline void set_claimed(const EmbeddedProto::boolean&& value) { claimed_ = value; }
    inline EmbeddedProto::boolean& mutable_claimed() { return claimed_; }
    inline const EmbeddedProto::boolean& get_claimed() const { return claimed_; }
    inline EmbeddedProto::boolean::FIELD_TYPE claimed() const { return claimed_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != token_amount_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = token_amount_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TOKEN_AMOUNT), buffer, false);
      }

      if((false != claimed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = claimed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CLAIMED), buffer, false);
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
          case FieldNumber::TOKEN_AMOUNT:
            return_value = token_amount_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CLAIMED:
            return_value = claimed_.deserialize_check_type(buffer, wire_type);
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
      clear_token_amount();
      clear_claimed();

    }

    private:


      EmbeddedProto::uint64 token_amount_ = 0U;
      EmbeddedProto::boolean claimed_ = false;

};

template<uint32_t eth_address_LENGTH, 
uint32_t koin_address_LENGTH, 
uint32_t signature_LENGTH>
class claim_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    claim_arguments() = default;
    claim_arguments(const claim_arguments& rhs )
    {
      set_eth_address(rhs.get_eth_address());
      set_koin_address(rhs.get_koin_address());
      set_signature(rhs.get_signature());
    }

    claim_arguments(const claim_arguments&& rhs ) noexcept
    {
      set_eth_address(rhs.get_eth_address());
      set_koin_address(rhs.get_koin_address());
      set_signature(rhs.get_signature());
    }

    ~claim_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ETH_ADDRESS = 1,
      KOIN_ADDRESS = 2,
      SIGNATURE = 3
    };

    claim_arguments& operator=(const claim_arguments& rhs)
    {
      set_eth_address(rhs.get_eth_address());
      set_koin_address(rhs.get_koin_address());
      set_signature(rhs.get_signature());
      return *this;
    }

    claim_arguments& operator=(const claim_arguments&& rhs) noexcept
    {
      set_eth_address(rhs.get_eth_address());
      set_koin_address(rhs.get_koin_address());
      set_signature(rhs.get_signature());
      return *this;
    }

    inline void clear_eth_address() { eth_address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<eth_address_LENGTH>& mutable_eth_address() { return eth_address_; }
    inline void set_eth_address(const ::EmbeddedProto::FieldBytes<eth_address_LENGTH>& rhs) { eth_address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<eth_address_LENGTH>& get_eth_address() const { return eth_address_; }
    inline const uint8_t* eth_address() const { return eth_address_.get_const(); }

    inline void clear_koin_address() { koin_address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<koin_address_LENGTH>& mutable_koin_address() { return koin_address_; }
    inline void set_koin_address(const ::EmbeddedProto::FieldBytes<koin_address_LENGTH>& rhs) { koin_address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<koin_address_LENGTH>& get_koin_address() const { return koin_address_; }
    inline const uint8_t* koin_address() const { return koin_address_.get_const(); }

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
        return_value = eth_address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ETH_ADDRESS), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = koin_address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::KOIN_ADDRESS), buffer, false);
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
          case FieldNumber::ETH_ADDRESS:
            return_value = eth_address_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::KOIN_ADDRESS:
            return_value = koin_address_.deserialize_check_type(buffer, wire_type);
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
      clear_eth_address();
      clear_koin_address();
      clear_signature();

    }

    private:


      ::EmbeddedProto::FieldBytes<eth_address_LENGTH> eth_address_;
      ::EmbeddedProto::FieldBytes<koin_address_LENGTH> koin_address_;
      ::EmbeddedProto::FieldBytes<signature_LENGTH> signature_;

};

class claim_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    claim_result() = default;
    claim_result(const claim_result& rhs )
    {
    }

    claim_result(const claim_result&& rhs ) noexcept
    {
    }

    ~claim_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    claim_result& operator=(const claim_result& rhs)
    {
      return *this;
    }

    claim_result& operator=(const claim_result&& rhs) noexcept
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

class get_info_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_info_arguments() = default;
    get_info_arguments(const get_info_arguments& rhs )
    {
    }

    get_info_arguments(const get_info_arguments&& rhs ) noexcept
    {
    }

    ~get_info_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    get_info_arguments& operator=(const get_info_arguments& rhs)
    {
      return *this;
    }

    get_info_arguments& operator=(const get_info_arguments&& rhs) noexcept
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

class get_info_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_info_result() = default;
    get_info_result(const get_info_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_info_result(const get_info_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_info_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_info_result& operator=(const get_info_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_info_result& operator=(const get_info_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const claim_info& value) { value_ = value; }
    inline void set_value(const claim_info&& value) { value_ = value; }
    inline claim_info& mutable_value() { return value_; }
    inline const claim_info& get_value() const { return value_; }
    inline const claim_info& value() const { return value_; }


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


      claim_info value_;

};

template<uint32_t eth_address_LENGTH>
class check_claim_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_claim_arguments() = default;
    check_claim_arguments(const check_claim_arguments& rhs )
    {
      set_eth_address(rhs.get_eth_address());
    }

    check_claim_arguments(const check_claim_arguments&& rhs ) noexcept
    {
      set_eth_address(rhs.get_eth_address());
    }

    ~check_claim_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ETH_ADDRESS = 1
    };

    check_claim_arguments& operator=(const check_claim_arguments& rhs)
    {
      set_eth_address(rhs.get_eth_address());
      return *this;
    }

    check_claim_arguments& operator=(const check_claim_arguments&& rhs) noexcept
    {
      set_eth_address(rhs.get_eth_address());
      return *this;
    }

    inline void clear_eth_address() { eth_address_.clear(); }
    inline ::EmbeddedProto::FieldBytes<eth_address_LENGTH>& mutable_eth_address() { return eth_address_; }
    inline void set_eth_address(const ::EmbeddedProto::FieldBytes<eth_address_LENGTH>& rhs) { eth_address_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<eth_address_LENGTH>& get_eth_address() const { return eth_address_; }
    inline const uint8_t* eth_address() const { return eth_address_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = eth_address_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ETH_ADDRESS), buffer, false);
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
          case FieldNumber::ETH_ADDRESS:
            return_value = eth_address_.deserialize_check_type(buffer, wire_type);
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
      clear_eth_address();

    }

    private:


      ::EmbeddedProto::FieldBytes<eth_address_LENGTH> eth_address_;

};

class check_claim_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    check_claim_result() = default;
    check_claim_result(const check_claim_result& rhs )
    {
      set_value(rhs.get_value());
    }

    check_claim_result(const check_claim_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~check_claim_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    check_claim_result& operator=(const check_claim_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    check_claim_result& operator=(const check_claim_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const claim_status& value) { value_ = value; }
    inline void set_value(const claim_status&& value) { value_ = value; }
    inline claim_status& mutable_value() { return value_; }
    inline const claim_status& get_value() const { return value_; }
    inline const claim_status& value() const { return value_; }


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


      claim_status value_;

};

} // End of namespace claim
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_CLAIM_CLAIM_H