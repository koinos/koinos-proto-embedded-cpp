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
#ifndef KOINOS_CHAIN_AUTHORITY_H
#define KOINOS_CHAIN_AUTHORITY_H

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
namespace chain {

enum class authorization_type : int32_t
{
  contract_call = 0,
  transaction_application = 1,
  contract_upload = 2
};

template<uint32_t contract_id_LENGTH, 
uint32_t caller_LENGTH, 
uint32_t data_LENGTH>
class call_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    call_data() = default;
    call_data(const call_data& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_caller(rhs.get_caller());
      set_data(rhs.get_data());
    }

    call_data(const call_data&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_caller(rhs.get_caller());
      set_data(rhs.get_data());
    }

    ~call_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      ENTRY_POINT = 2,
      CALLER = 3,
      DATA = 4
    };

    call_data& operator=(const call_data& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_caller(rhs.get_caller());
      set_data(rhs.get_data());
      return *this;
    }

    call_data& operator=(const call_data&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_caller(rhs.get_caller());
      set_data(rhs.get_data());
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

    inline void clear_caller() { caller_.clear(); }
    inline ::EmbeddedProto::FieldBytes<caller_LENGTH>& mutable_caller() { return caller_; }
    inline void set_caller(const ::EmbeddedProto::FieldBytes<caller_LENGTH>& rhs) { caller_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<caller_LENGTH>& get_caller() const { return caller_; }
    inline const uint8_t* caller() const { return caller_.get_const(); }

    inline void clear_data() { data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<data_LENGTH>& mutable_data() { return data_; }
    inline void set_data(const ::EmbeddedProto::FieldBytes<data_LENGTH>& rhs) { data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<data_LENGTH>& get_data() const { return data_; }
    inline const uint8_t* data() const { return data_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
      }

      if((0U != entry_point_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = entry_point_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ENTRY_POINT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = caller_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALLER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DATA), buffer, false);
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

          case FieldNumber::ENTRY_POINT:
            return_value = entry_point_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CALLER:
            return_value = caller_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DATA:
            return_value = data_.deserialize_check_type(buffer, wire_type);
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
      clear_caller();
      clear_data();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      EmbeddedProto::uint32 entry_point_ = 0U;
      ::EmbeddedProto::FieldBytes<caller_LENGTH> caller_;
      ::EmbeddedProto::FieldBytes<data_LENGTH> data_;

};

template<uint32_t call_contract_id_LENGTH, 
uint32_t call_caller_LENGTH, 
uint32_t call_data_LENGTH>
class authorize_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    authorize_arguments() = default;
    authorize_arguments(const authorize_arguments& rhs )
    {
      set_type(rhs.get_type());
      set_call(rhs.get_call());
    }

    authorize_arguments(const authorize_arguments&& rhs ) noexcept
    {
      set_type(rhs.get_type());
      set_call(rhs.get_call());
    }

    ~authorize_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TYPE = 1,
      CALL = 2
    };

    authorize_arguments& operator=(const authorize_arguments& rhs)
    {
      set_type(rhs.get_type());
      set_call(rhs.get_call());
      return *this;
    }

    authorize_arguments& operator=(const authorize_arguments&& rhs) noexcept
    {
      set_type(rhs.get_type());
      set_call(rhs.get_call());
      return *this;
    }

    inline void clear_type() { type_ = static_cast<authorization_type>(0); }
    inline void set_type(const authorization_type& value) { type_ = value; }
    inline void set_type(const authorization_type&& value) { type_ = value; }
    inline const authorization_type& get_type() const { return type_; }
    inline authorization_type type() const { return type_; }

    inline bool has_call() const
    {
      return 0 != (presence::mask(presence::fields::CALL) & presence_[presence::index(presence::fields::CALL)]);
    }
    inline void clear_call()
    {
      presence_[presence::index(presence::fields::CALL)] &= ~(presence::mask(presence::fields::CALL));
      call_.clear();
    }
    inline void set_call(const call_data<call_contract_id_LENGTH, call_caller_LENGTH, call_data_LENGTH>& value)
    {
      presence_[presence::index(presence::fields::CALL)] |= presence::mask(presence::fields::CALL);
      call_ = value;
    }
    inline void set_call(const call_data<call_contract_id_LENGTH, call_caller_LENGTH, call_data_LENGTH>&& value)
    {
      presence_[presence::index(presence::fields::CALL)] |= presence::mask(presence::fields::CALL);
      call_ = value;
    }
    inline call_data<call_contract_id_LENGTH, call_caller_LENGTH, call_data_LENGTH>& mutable_call()
    {
      presence_[presence::index(presence::fields::CALL)] |= presence::mask(presence::fields::CALL);
      return call_;
    }
    inline const call_data<call_contract_id_LENGTH, call_caller_LENGTH, call_data_LENGTH>& get_call() const { return call_; }
    inline const call_data<call_contract_id_LENGTH, call_caller_LENGTH, call_data_LENGTH>& call() const { return call_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((static_cast<authorization_type>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::TYPE), buffer, false);
      }

      if(has_call() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = call_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALL), buffer, true);
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
          case FieldNumber::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<authorization_type>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;

          case FieldNumber::CALL:
            presence_[presence::index(presence::fields::CALL)] |= presence::mask(presence::fields::CALL);
            return_value = call_.deserialize_check_type(buffer, wire_type);
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
      clear_type();
      clear_call();

    }

    private:

      // Define constants for tracking the presence of fields.
      // Use a struct to scope the variables from user fields as namespaces are not allowed within classes.
      struct presence
      {
        // An enumeration with all the fields for which presence has to be tracked.
        enum class fields : uint32_t
        {
          CALL
        };

        // The number of fields for which presence has to be tracked.
        static constexpr uint32_t N_FIELDS = 1;

        // Which type are we using to track presence.
        using TYPE = uint32_t;

        // How many bits are there in the presence type.
        static constexpr uint32_t N_BITS = std::numeric_limits<TYPE>::digits;

        // How many variables of TYPE do we need to bit mask all presence fields.
        static constexpr uint32_t SIZE = (N_FIELDS / N_BITS) + ((N_FIELDS % N_BITS) > 0 ? 1 : 0);

        // Obtain the index of a given field in the presence array.
        static constexpr uint32_t index(const fields& field) { return static_cast<uint32_t>(field) / N_BITS; }

        // Obtain the bit mask for the given field assuming we are at the correct index in the presence array.
        static constexpr TYPE mask(const fields& field)
        {
          return static_cast<uint32_t>(0x01) << (static_cast<uint32_t>(field) % N_BITS);
        }
      };

      // Create an array in which the presence flags are stored.
      typename presence::TYPE presence_[presence::SIZE] = {0};

      authorization_type type_ = static_cast<authorization_type>(0);
      call_data<call_contract_id_LENGTH, call_caller_LENGTH, call_data_LENGTH> call_;

};

class authorize_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    authorize_result() = default;
    authorize_result(const authorize_result& rhs )
    {
      set_value(rhs.get_value());
    }

    authorize_result(const authorize_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~authorize_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    authorize_result& operator=(const authorize_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    authorize_result& operator=(const authorize_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const EmbeddedProto::boolean& value) { value_ = value; }
    inline void set_value(const EmbeddedProto::boolean&& value) { value_ = value; }
    inline EmbeddedProto::boolean& mutable_value() { return value_; }
    inline const EmbeddedProto::boolean& get_value() const { return value_; }
    inline EmbeddedProto::boolean::FIELD_TYPE value() const { return value_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != value_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
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


      EmbeddedProto::boolean value_ = false;

};

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_AUTHORITY_H