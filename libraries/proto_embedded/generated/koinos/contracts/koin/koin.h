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
#ifndef KOINOS_CONTRACTS_KOIN_KOIN_H
#define KOINOS_CONTRACTS_KOIN_KOIN_H

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

namespace koinos {
namespace contracts {
namespace koin {

class mana_balance_object final: public ::EmbeddedProto::MessageInterface
{
  public:
    mana_balance_object() = default;
    mana_balance_object(const mana_balance_object& rhs )
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
    }

    mana_balance_object(const mana_balance_object&& rhs ) noexcept
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
    }

    ~mana_balance_object() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BALANCE = 1,
      MANA = 2,
      LAST_MANA_UPDATE = 3
    };

    mana_balance_object& operator=(const mana_balance_object& rhs)
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
      return *this;
    }

    mana_balance_object& operator=(const mana_balance_object&& rhs) noexcept
    {
      set_balance(rhs.get_balance());
      set_mana(rhs.get_mana());
      set_last_mana_update(rhs.get_last_mana_update());
      return *this;
    }

    inline void clear_balance() { balance_.clear(); }
    inline void set_balance(const EmbeddedProto::uint64& value) { balance_ = value; }
    inline void set_balance(const EmbeddedProto::uint64&& value) { balance_ = value; }
    inline EmbeddedProto::uint64& mutable_balance() { return balance_; }
    inline const EmbeddedProto::uint64& get_balance() const { return balance_; }
    inline EmbeddedProto::uint64::FIELD_TYPE balance() const { return balance_.get(); }

    inline void clear_mana() { mana_.clear(); }
    inline void set_mana(const EmbeddedProto::uint64& value) { mana_ = value; }
    inline void set_mana(const EmbeddedProto::uint64&& value) { mana_ = value; }
    inline EmbeddedProto::uint64& mutable_mana() { return mana_; }
    inline const EmbeddedProto::uint64& get_mana() const { return mana_; }
    inline EmbeddedProto::uint64::FIELD_TYPE mana() const { return mana_.get(); }

    inline void clear_last_mana_update() { last_mana_update_.clear(); }
    inline void set_last_mana_update(const EmbeddedProto::uint64& value) { last_mana_update_ = value; }
    inline void set_last_mana_update(const EmbeddedProto::uint64&& value) { last_mana_update_ = value; }
    inline EmbeddedProto::uint64& mutable_last_mana_update() { return last_mana_update_; }
    inline const EmbeddedProto::uint64& get_last_mana_update() const { return last_mana_update_; }
    inline EmbeddedProto::uint64::FIELD_TYPE last_mana_update() const { return last_mana_update_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != balance_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = balance_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BALANCE), buffer, false);
      }

      if((0U != mana_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = mana_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MANA), buffer, false);
      }

      if((0U != last_mana_update_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = last_mana_update_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LAST_MANA_UPDATE), buffer, false);
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
          case FieldNumber::BALANCE:
            return_value = balance_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MANA:
            return_value = mana_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LAST_MANA_UPDATE:
            return_value = last_mana_update_.deserialize_check_type(buffer, wire_type);
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
      clear_balance();
      clear_mana();
      clear_last_mana_update();

    }

    private:


      EmbeddedProto::uint64 balance_ = 0U;
      EmbeddedProto::uint64 mana_ = 0U;
      EmbeddedProto::uint64 last_mana_update_ = 0U;

};

} // End of namespace koin
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_KOIN_KOIN_H