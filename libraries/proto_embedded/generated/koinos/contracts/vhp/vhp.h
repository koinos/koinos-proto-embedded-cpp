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
#ifndef KOINOS_CONTRACTS_VHP_VHP_H
#define KOINOS_CONTRACTS_VHP_VHP_H

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
namespace vhp {

template<uint32_t owner_LENGTH>
class effective_balance_of_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    effective_balance_of_arguments() = default;
    effective_balance_of_arguments(const effective_balance_of_arguments& rhs )
    {
      set_owner(rhs.get_owner());
    }

    effective_balance_of_arguments(const effective_balance_of_arguments&& rhs ) noexcept
    {
      set_owner(rhs.get_owner());
    }

    ~effective_balance_of_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      OWNER = 1
    };

    effective_balance_of_arguments& operator=(const effective_balance_of_arguments& rhs)
    {
      set_owner(rhs.get_owner());
      return *this;
    }

    effective_balance_of_arguments& operator=(const effective_balance_of_arguments&& rhs) noexcept
    {
      set_owner(rhs.get_owner());
      return *this;
    }

    inline void clear_owner() { owner_.clear(); }
    inline ::EmbeddedProto::FieldBytes<owner_LENGTH>& mutable_owner() { return owner_; }
    inline void set_owner(const ::EmbeddedProto::FieldBytes<owner_LENGTH>& rhs) { owner_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<owner_LENGTH>& get_owner() const { return owner_; }
    inline const uint8_t* owner() const { return owner_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = owner_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OWNER), buffer, false);
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
          case FieldNumber::OWNER:
            return_value = owner_.deserialize_check_type(buffer, wire_type);
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
      clear_owner();

    }

    private:


      ::EmbeddedProto::FieldBytes<owner_LENGTH> owner_;

};

class effective_balance_of_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    effective_balance_of_result() = default;
    effective_balance_of_result(const effective_balance_of_result& rhs )
    {
      set_value(rhs.get_value());
    }

    effective_balance_of_result(const effective_balance_of_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~effective_balance_of_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    effective_balance_of_result& operator=(const effective_balance_of_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    effective_balance_of_result& operator=(const effective_balance_of_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::uint64& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::uint64&& value) { value_ = value; }
    inline EmbeddedProto::uint64& mutable_value() { return value_; }
    inline const EmbeddedProto::uint64& get_value() const { return value_; }
    inline EmbeddedProto::uint64::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::uint64 value_ = 0U;

};

class balance_entry final: public ::EmbeddedProto::MessageInterface
{
  public:
    balance_entry() = default;
    balance_entry(const balance_entry& rhs )
    {
      set_block_height(rhs.get_block_height());
      set_balance(rhs.get_balance());
    }

    balance_entry(const balance_entry&& rhs ) noexcept
    {
      set_block_height(rhs.get_block_height());
      set_balance(rhs.get_balance());
    }

    ~balance_entry() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BLOCK_HEIGHT = 1,
      BALANCE = 2
    };

    balance_entry& operator=(const balance_entry& rhs)
    {
      set_block_height(rhs.get_block_height());
      set_balance(rhs.get_balance());
      return *this;
    }

    balance_entry& operator=(const balance_entry&& rhs) noexcept
    {
      set_block_height(rhs.get_block_height());
      set_balance(rhs.get_balance());
      return *this;
    }

    inline void clear_block_height() { block_height_.clear(); }
    inline void set_block_height(const EmbeddedProto::uint64& value) { block_height_ = value; }
    inline void set_block_height(const EmbeddedProto::uint64&& value) { block_height_ = value; }
    inline EmbeddedProto::uint64& mutable_block_height() { return block_height_; }
    inline const EmbeddedProto::uint64& get_block_height() const { return block_height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE block_height() const { return block_height_.get(); }

    inline void clear_balance() { balance_.clear(); }
    inline void set_balance(const EmbeddedProto::uint64& value) { balance_ = value; }
    inline void set_balance(const EmbeddedProto::uint64&& value) { balance_ = value; }
    inline EmbeddedProto::uint64& mutable_balance() { return balance_; }
    inline const EmbeddedProto::uint64& get_balance() const { return balance_; }
    inline EmbeddedProto::uint64::FIELD_TYPE balance() const { return balance_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != block_height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = block_height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BLOCK_HEIGHT), buffer, false);
      }

      if((0U != balance_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = balance_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BALANCE), buffer, false);
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
          case FieldNumber::BLOCK_HEIGHT:
            return_value = block_height_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BALANCE:
            return_value = balance_.deserialize_check_type(buffer, wire_type);
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
      clear_block_height();
      clear_balance();

    }

    private:


      EmbeddedProto::uint64 block_height_ = 0U;
      EmbeddedProto::uint64 balance_ = 0U;

};

template<uint32_t past_balances_REP_LENGTH>
class effective_balance_object final: public ::EmbeddedProto::MessageInterface
{
  public:
    effective_balance_object() = default;
    effective_balance_object(const effective_balance_object& rhs )
    {
      set_current_balance(rhs.get_current_balance());
      set_past_balances(rhs.get_past_balances());
    }

    effective_balance_object(const effective_balance_object&& rhs ) noexcept
    {
      set_current_balance(rhs.get_current_balance());
      set_past_balances(rhs.get_past_balances());
    }

    ~effective_balance_object() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CURRENT_BALANCE = 1,
      PAST_BALANCES = 2
    };

    effective_balance_object& operator=(const effective_balance_object& rhs)
    {
      set_current_balance(rhs.get_current_balance());
      set_past_balances(rhs.get_past_balances());
      return *this;
    }

    effective_balance_object& operator=(const effective_balance_object&& rhs) noexcept
    {
      set_current_balance(rhs.get_current_balance());
      set_past_balances(rhs.get_past_balances());
      return *this;
    }

    inline void clear_current_balance() { current_balance_.clear(); }
    inline void set_current_balance(const EmbeddedProto::uint64& value) { current_balance_ = value; }
    inline void set_current_balance(const EmbeddedProto::uint64&& value) { current_balance_ = value; }
    inline EmbeddedProto::uint64& mutable_current_balance() { return current_balance_; }
    inline const EmbeddedProto::uint64& get_current_balance() const { return current_balance_; }
    inline EmbeddedProto::uint64::FIELD_TYPE current_balance() const { return current_balance_.get(); }

    inline const balance_entry& past_balances(uint32_t index) const { return past_balances_[index]; }
    inline void clear_past_balances() { past_balances_.clear(); }
    inline void set_past_balances(uint32_t index, const balance_entry& value) { past_balances_.set(index, value); }
    inline void set_past_balances(uint32_t index, const balance_entry&& value) { past_balances_.set(index, value); }
    inline void set_past_balances(const ::EmbeddedProto::RepeatedFieldFixedSize<balance_entry, past_balances_REP_LENGTH>& values) { past_balances_ = values; }
    inline void add_past_balances(const balance_entry& value) { past_balances_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<balance_entry, past_balances_REP_LENGTH>& mutable_past_balances() { return past_balances_; }
    inline balance_entry& mutable_past_balances(uint32_t index) { return past_balances_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<balance_entry, past_balances_REP_LENGTH>& get_past_balances() const { return past_balances_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<balance_entry, past_balances_REP_LENGTH>& past_balances() const { return past_balances_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != current_balance_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = current_balance_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CURRENT_BALANCE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = past_balances_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PAST_BALANCES), buffer, false);
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
          case FieldNumber::CURRENT_BALANCE:
            return_value = current_balance_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PAST_BALANCES:
            return_value = past_balances_.deserialize_check_type(buffer, wire_type);
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
      clear_current_balance();
      clear_past_balances();

    }

    private:


      EmbeddedProto::uint64 current_balance_ = 0U;
      ::EmbeddedProto::RepeatedFieldFixedSize<balance_entry, past_balances_REP_LENGTH> past_balances_;

};

} // End of namespace vhp
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_VHP_VHP_H