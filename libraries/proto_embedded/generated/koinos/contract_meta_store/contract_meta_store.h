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
#ifndef KOINOS_CONTRACT_META_STORE_CONTRACT_META_STORE_H
#define KOINOS_CONTRACT_META_STORE_CONTRACT_META_STORE_H

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
namespace contract_meta_store {

template<uint32_t abi_LENGTH>
class contract_meta_item final: public ::EmbeddedProto::MessageInterface
{
  public:
    contract_meta_item() = default;
    contract_meta_item(const contract_meta_item& rhs )
    {
      set_abi(rhs.get_abi());
    }

    contract_meta_item(const contract_meta_item&& rhs ) noexcept
    {
      set_abi(rhs.get_abi());
    }

    ~contract_meta_item() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ABI = 1
    };

    contract_meta_item& operator=(const contract_meta_item& rhs)
    {
      set_abi(rhs.get_abi());
      return *this;
    }

    contract_meta_item& operator=(const contract_meta_item&& rhs) noexcept
    {
      set_abi(rhs.get_abi());
      return *this;
    }

    inline void clear_abi() { abi_.clear(); }
    inline ::EmbeddedProto::FieldString<abi_LENGTH>& mutable_abi() { return abi_; }
    inline void set_abi(const ::EmbeddedProto::FieldString<abi_LENGTH>& rhs) { abi_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<abi_LENGTH>& get_abi() const { return abi_; }
    inline const char* abi() const { return abi_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = abi_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ABI), buffer, false);
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
          case FieldNumber::ABI:
            return_value = abi_.deserialize_check_type(buffer, wire_type);
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
      clear_abi();

    }

    private:


      ::EmbeddedProto::FieldString<abi_LENGTH> abi_;

};

} // End of namespace contract_meta_store
} // End of namespace koinos
#endif // KOINOS_CONTRACT_META_STORE_CONTRACT_META_STORE_H