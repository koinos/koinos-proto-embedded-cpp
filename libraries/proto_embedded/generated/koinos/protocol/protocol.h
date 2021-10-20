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
#ifndef KOINOS_PROTOCOL_PROTOCOL_H
#define KOINOS_PROTOCOL_PROTOCOL_H

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
namespace protocol {

template<uint32_t contract_id_LENGTH>
class contract_call_bundle final: public ::EmbeddedProto::MessageInterface
{
  public:
    contract_call_bundle() = default;
    contract_call_bundle(const contract_call_bundle& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
    }

    contract_call_bundle(const contract_call_bundle&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
    }

    ~contract_call_bundle() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      ENTRY_POINT = 2
    };

    contract_call_bundle& operator=(const contract_call_bundle& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      return *this;
    }

    contract_call_bundle& operator=(const contract_call_bundle&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
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

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      EmbeddedProto::uint32 entry_point_ = 0U;

};

template<uint32_t system_call_bundle_contract_id_LENGTH>
class system_call_target final: public ::EmbeddedProto::MessageInterface
{
  public:
    system_call_target() = default;
    system_call_target(const system_call_target& rhs )
    {
      if(rhs.get_which_target() != which_target_)
      {
        // First delete the old object in the oneof.
        clear_target();
      }

      switch(rhs.get_which_target())
      {
        case FieldNumber::THUNK_ID:
          set_thunk_id(rhs.get_thunk_id());
          break;

        case FieldNumber::SYSTEM_CALL_BUNDLE:
          set_system_call_bundle(rhs.get_system_call_bundle());
          break;

        default:
          break;
      }

    }

    system_call_target(const system_call_target&& rhs ) noexcept
    {
      if(rhs.get_which_target() != which_target_)
      {
        // First delete the old object in the oneof.
        clear_target();
      }

      switch(rhs.get_which_target())
      {
        case FieldNumber::THUNK_ID:
          set_thunk_id(rhs.get_thunk_id());
          break;

        case FieldNumber::SYSTEM_CALL_BUNDLE:
          set_system_call_bundle(rhs.get_system_call_bundle());
          break;

        default:
          break;
      }

    }

    ~system_call_target() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      THUNK_ID = 1,
      SYSTEM_CALL_BUNDLE = 2
    };

    system_call_target& operator=(const system_call_target& rhs)
    {
      if(rhs.get_which_target() != which_target_)
      {
        // First delete the old object in the oneof.
        clear_target();
      }

      switch(rhs.get_which_target())
      {
        case FieldNumber::THUNK_ID:
          set_thunk_id(rhs.get_thunk_id());
          break;

        case FieldNumber::SYSTEM_CALL_BUNDLE:
          set_system_call_bundle(rhs.get_system_call_bundle());
          break;

        default:
          break;
      }

      return *this;
    }

    system_call_target& operator=(const system_call_target&& rhs) noexcept
    {
      if(rhs.get_which_target() != which_target_)
      {
        // First delete the old object in the oneof.
        clear_target();
      }

      switch(rhs.get_which_target())
      {
        case FieldNumber::THUNK_ID:
          set_thunk_id(rhs.get_thunk_id());
          break;

        case FieldNumber::SYSTEM_CALL_BUNDLE:
          set_system_call_bundle(rhs.get_system_call_bundle());
          break;

        default:
          break;
      }

      return *this;
    }

    FieldNumber get_which_target() const { return which_target_; }

    inline void clear_thunk_id()
    {
      if(FieldNumber::THUNK_ID == which_target_)
      {
        which_target_ = FieldNumber::NOT_SET;
        target_.thunk_id_.~uint32(); // NOSONAR Unions require this.
      }
    }
    inline void set_thunk_id(const EmbeddedProto::uint32::FIELD_TYPE& value)
    {
      if(FieldNumber::THUNK_ID != which_target_)
      {
        init_target(FieldNumber::THUNK_ID);
      }
      target_.thunk_id_.set(value);
    }
    inline void set_thunk_id(const EmbeddedProto::uint32::FIELD_TYPE&& value)
    {
      if(FieldNumber::THUNK_ID != which_target_)
      {
        init_target(FieldNumber::THUNK_ID);
      }
      target_.thunk_id_.set(value);
    }
    inline void set_thunk_id(const EmbeddedProto::uint32& value)
    {
      if(FieldNumber::THUNK_ID != which_target_)
      {
        init_target(FieldNumber::THUNK_ID);
      }
      target_.thunk_id_ = value;
    }
    inline void set_thunk_id(const EmbeddedProto::uint32&& value)
    {
      if(FieldNumber::THUNK_ID != which_target_)
      {
        init_target(FieldNumber::THUNK_ID);
      }
      target_.thunk_id_ = value;
    }
    inline const EmbeddedProto::uint32& get_thunk_id() const { return target_.thunk_id_; }
    inline EmbeddedProto::uint32::FIELD_TYPE thunk_id() const { return target_.thunk_id_.get(); }

    inline void clear_system_call_bundle()
    {
      if(FieldNumber::SYSTEM_CALL_BUNDLE == which_target_)
      {
        which_target_ = FieldNumber::NOT_SET;
        target_.system_call_bundle_.~contract_call_bundle<system_call_bundle_contract_id_LENGTH>();
      }
    }
    inline void set_system_call_bundle(const contract_call_bundle<system_call_bundle_contract_id_LENGTH>& value)
    {
      if(FieldNumber::SYSTEM_CALL_BUNDLE != which_target_)
      {
        init_target(FieldNumber::SYSTEM_CALL_BUNDLE);
      }
      target_.system_call_bundle_ = value;
    }
    inline void set_system_call_bundle(const contract_call_bundle<system_call_bundle_contract_id_LENGTH>&& value)
    {
      if(FieldNumber::SYSTEM_CALL_BUNDLE != which_target_)
      {
        init_target(FieldNumber::SYSTEM_CALL_BUNDLE);
      }
      target_.system_call_bundle_ = value;
    }
    inline contract_call_bundle<system_call_bundle_contract_id_LENGTH>& mutable_system_call_bundle()
    {
      if(FieldNumber::SYSTEM_CALL_BUNDLE != which_target_)
      {
        init_target(FieldNumber::SYSTEM_CALL_BUNDLE);
      }
      return target_.system_call_bundle_;
    }
    inline const contract_call_bundle<system_call_bundle_contract_id_LENGTH>& get_system_call_bundle() const { return target_.system_call_bundle_; }
    inline const contract_call_bundle<system_call_bundle_contract_id_LENGTH>& system_call_bundle() const { return target_.system_call_bundle_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_target_)
      {
        case FieldNumber::THUNK_ID:
          if((0U != target_.thunk_id_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = target_.thunk_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::THUNK_ID), buffer, false);
          }
          break;

        case FieldNumber::SYSTEM_CALL_BUNDLE:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = target_.system_call_bundle_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SYSTEM_CALL_BUNDLE), buffer, false);
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
          case FieldNumber::THUNK_ID:
            return_value = deserialize_target(FieldNumber::THUNK_ID, target_.thunk_id_, buffer, wire_type);
            break;

          case FieldNumber::SYSTEM_CALL_BUNDLE:
            return_value = deserialize_target(FieldNumber::SYSTEM_CALL_BUNDLE, target_.system_call_bundle_, buffer, wire_type);

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
      clear_target();

    }

    private:



      FieldNumber which_target_ = FieldNumber::NOT_SET;
      union target
      {
        target() {}
        ~target() {}
        EmbeddedProto::uint32 thunk_id_;
        contract_call_bundle<system_call_bundle_contract_id_LENGTH> system_call_bundle_;
      };
      target target_;

      void init_target(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_target_)
        {
          // First delete the old object in the oneof.
          clear_target();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::THUNK_ID:
            new(&target_.thunk_id_) EmbeddedProto::uint32;
            which_target_ = FieldNumber::THUNK_ID;
            break;

          case FieldNumber::SYSTEM_CALL_BUNDLE:
            new(&target_.system_call_bundle_) contract_call_bundle<system_call_bundle_contract_id_LENGTH>;
            which_target_ = FieldNumber::SYSTEM_CALL_BUNDLE;
            break;

          default:
            break;
         }

         which_target_ = field_id;
      }

      void clear_target()
      {
        switch(which_target_)
        {
          case FieldNumber::THUNK_ID:
            target_.thunk_id_.~uint32(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SYSTEM_CALL_BUNDLE:
            target_.system_call_bundle_.~contract_call_bundle<system_call_bundle_contract_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_target_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_target(const FieldNumber field_id, ::EmbeddedProto::Field& field,
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        if(field_id != which_target_)
        {
          init_target(field_id);
        }
        ::EmbeddedProto::Error return_value = field.deserialize_check_type(buffer, wire_type);
        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_target();
        }
        return return_value;
      }

};

template<uint32_t contract_id_LENGTH, 
uint32_t bytecode_LENGTH>
class upload_contract_operation final: public ::EmbeddedProto::MessageInterface
{
  public:
    upload_contract_operation() = default;
    upload_contract_operation(const upload_contract_operation& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
    }

    upload_contract_operation(const upload_contract_operation&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
    }

    ~upload_contract_operation() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      BYTECODE = 2
    };

    upload_contract_operation& operator=(const upload_contract_operation& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
      return *this;
    }

    upload_contract_operation& operator=(const upload_contract_operation&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
      return *this;
    }

    inline void clear_contract_id() { contract_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& mutable_contract_id() { return contract_id_; }
    inline void set_contract_id(const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& rhs) { contract_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& get_contract_id() const { return contract_id_; }
    inline const uint8_t* contract_id() const { return contract_id_.get_const(); }

    inline void clear_bytecode() { bytecode_.clear(); }
    inline ::EmbeddedProto::FieldBytes<bytecode_LENGTH>& mutable_bytecode() { return bytecode_; }
    inline void set_bytecode(const ::EmbeddedProto::FieldBytes<bytecode_LENGTH>& rhs) { bytecode_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<bytecode_LENGTH>& get_bytecode() const { return bytecode_; }
    inline const uint8_t* bytecode() const { return bytecode_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = bytecode_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BYTECODE), buffer, false);
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

          case FieldNumber::BYTECODE:
            return_value = bytecode_.deserialize_check_type(buffer, wire_type);
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
      clear_bytecode();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      ::EmbeddedProto::FieldBytes<bytecode_LENGTH> bytecode_;

};

template<uint32_t contract_id_LENGTH, 
uint32_t args_LENGTH>
class call_contract_operation final: public ::EmbeddedProto::MessageInterface
{
  public:
    call_contract_operation() = default;
    call_contract_operation(const call_contract_operation& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    call_contract_operation(const call_contract_operation&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
    }

    ~call_contract_operation() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      ENTRY_POINT = 2,
      ARGS = 3
    };

    call_contract_operation& operator=(const call_contract_operation& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
      return *this;
    }

    call_contract_operation& operator=(const call_contract_operation&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_entry_point(rhs.get_entry_point());
      set_args(rhs.get_args());
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

    inline void clear_args() { args_.clear(); }
    inline ::EmbeddedProto::FieldBytes<args_LENGTH>& mutable_args() { return args_; }
    inline void set_args(const ::EmbeddedProto::FieldBytes<args_LENGTH>& rhs) { args_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<args_LENGTH>& get_args() const { return args_; }
    inline const uint8_t* args() const { return args_.get_const(); }


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
        return_value = args_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ARGS), buffer, false);
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

          case FieldNumber::ARGS:
            return_value = args_.deserialize_check_type(buffer, wire_type);
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
      clear_args();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      EmbeddedProto::uint32 entry_point_ = 0U;
      ::EmbeddedProto::FieldBytes<args_LENGTH> args_;

};

template<uint32_t target_system_call_bundle_contract_id_LENGTH>
class set_system_call_operation final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_system_call_operation() = default;
    set_system_call_operation(const set_system_call_operation& rhs )
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
    }

    set_system_call_operation(const set_system_call_operation&& rhs ) noexcept
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
    }

    ~set_system_call_operation() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CALL_ID = 1,
      TARGET = 2
    };

    set_system_call_operation& operator=(const set_system_call_operation& rhs)
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
      return *this;
    }

    set_system_call_operation& operator=(const set_system_call_operation&& rhs) noexcept
    {
      set_call_id(rhs.get_call_id());
      set_target(rhs.get_target());
      return *this;
    }

    inline void clear_call_id() { call_id_.clear(); }
    inline void set_call_id(const EmbeddedProto::uint32& value) { call_id_ = value; }
    inline void set_call_id(const EmbeddedProto::uint32&& value) { call_id_ = value; }
    inline EmbeddedProto::uint32& mutable_call_id() { return call_id_; }
    inline const EmbeddedProto::uint32& get_call_id() const { return call_id_; }
    inline EmbeddedProto::uint32::FIELD_TYPE call_id() const { return call_id_.get(); }

    inline void clear_target() { target_.clear(); }
    inline void set_target(const system_call_target<target_system_call_bundle_contract_id_LENGTH>& value) { target_ = value; }
    inline void set_target(const system_call_target<target_system_call_bundle_contract_id_LENGTH>&& value) { target_ = value; }
    inline system_call_target<target_system_call_bundle_contract_id_LENGTH>& mutable_target() { return target_; }
    inline const system_call_target<target_system_call_bundle_contract_id_LENGTH>& get_target() const { return target_; }
    inline const system_call_target<target_system_call_bundle_contract_id_LENGTH>& target() const { return target_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != call_id_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = call_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALL_ID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = target_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TARGET), buffer, false);
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
          case FieldNumber::CALL_ID:
            return_value = call_id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TARGET:
            return_value = target_.deserialize_check_type(buffer, wire_type);
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
      clear_call_id();
      clear_target();

    }

    private:


      EmbeddedProto::uint32 call_id_ = 0U;
      system_call_target<target_system_call_bundle_contract_id_LENGTH> target_;

};

template<uint32_t upload_contract_contract_id_LENGTH, 
uint32_t upload_contract_bytecode_LENGTH, 
uint32_t call_contract_contract_id_LENGTH, 
uint32_t call_contract_args_LENGTH, 
uint32_t set_system_call_target_system_call_bundle_contract_id_LENGTH>
class operation final: public ::EmbeddedProto::MessageInterface
{
  public:
    operation() = default;
    operation(const operation& rhs )
    {
      if(rhs.get_which_op() != which_op_)
      {
        // First delete the old object in the oneof.
        clear_op();
      }

      switch(rhs.get_which_op())
      {
        case FieldNumber::UPLOAD_CONTRACT:
          set_upload_contract(rhs.get_upload_contract());
          break;

        case FieldNumber::CALL_CONTRACT:
          set_call_contract(rhs.get_call_contract());
          break;

        case FieldNumber::SET_SYSTEM_CALL:
          set_set_system_call(rhs.get_set_system_call());
          break;

        default:
          break;
      }

    }

    operation(const operation&& rhs ) noexcept
    {
      if(rhs.get_which_op() != which_op_)
      {
        // First delete the old object in the oneof.
        clear_op();
      }

      switch(rhs.get_which_op())
      {
        case FieldNumber::UPLOAD_CONTRACT:
          set_upload_contract(rhs.get_upload_contract());
          break;

        case FieldNumber::CALL_CONTRACT:
          set_call_contract(rhs.get_call_contract());
          break;

        case FieldNumber::SET_SYSTEM_CALL:
          set_set_system_call(rhs.get_set_system_call());
          break;

        default:
          break;
      }

    }

    ~operation() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      UPLOAD_CONTRACT = 1,
      CALL_CONTRACT = 2,
      SET_SYSTEM_CALL = 3
    };

    operation& operator=(const operation& rhs)
    {
      if(rhs.get_which_op() != which_op_)
      {
        // First delete the old object in the oneof.
        clear_op();
      }

      switch(rhs.get_which_op())
      {
        case FieldNumber::UPLOAD_CONTRACT:
          set_upload_contract(rhs.get_upload_contract());
          break;

        case FieldNumber::CALL_CONTRACT:
          set_call_contract(rhs.get_call_contract());
          break;

        case FieldNumber::SET_SYSTEM_CALL:
          set_set_system_call(rhs.get_set_system_call());
          break;

        default:
          break;
      }

      return *this;
    }

    operation& operator=(const operation&& rhs) noexcept
    {
      if(rhs.get_which_op() != which_op_)
      {
        // First delete the old object in the oneof.
        clear_op();
      }

      switch(rhs.get_which_op())
      {
        case FieldNumber::UPLOAD_CONTRACT:
          set_upload_contract(rhs.get_upload_contract());
          break;

        case FieldNumber::CALL_CONTRACT:
          set_call_contract(rhs.get_call_contract());
          break;

        case FieldNumber::SET_SYSTEM_CALL:
          set_set_system_call(rhs.get_set_system_call());
          break;

        default:
          break;
      }

      return *this;
    }

    FieldNumber get_which_op() const { return which_op_; }

    inline void clear_upload_contract()
    {
      if(FieldNumber::UPLOAD_CONTRACT == which_op_)
      {
        which_op_ = FieldNumber::NOT_SET;
        op_.upload_contract_.~upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>();
      }
    }
    inline void set_upload_contract(const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>& value)
    {
      if(FieldNumber::UPLOAD_CONTRACT != which_op_)
      {
        init_op(FieldNumber::UPLOAD_CONTRACT);
      }
      op_.upload_contract_ = value;
    }
    inline void set_upload_contract(const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>&& value)
    {
      if(FieldNumber::UPLOAD_CONTRACT != which_op_)
      {
        init_op(FieldNumber::UPLOAD_CONTRACT);
      }
      op_.upload_contract_ = value;
    }
    inline upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>& mutable_upload_contract()
    {
      if(FieldNumber::UPLOAD_CONTRACT != which_op_)
      {
        init_op(FieldNumber::UPLOAD_CONTRACT);
      }
      return op_.upload_contract_;
    }
    inline const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>& get_upload_contract() const { return op_.upload_contract_; }
    inline const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>& upload_contract() const { return op_.upload_contract_; }

    inline void clear_call_contract()
    {
      if(FieldNumber::CALL_CONTRACT == which_op_)
      {
        which_op_ = FieldNumber::NOT_SET;
        op_.call_contract_.~call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>();
      }
    }
    inline void set_call_contract(const call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>& value)
    {
      if(FieldNumber::CALL_CONTRACT != which_op_)
      {
        init_op(FieldNumber::CALL_CONTRACT);
      }
      op_.call_contract_ = value;
    }
    inline void set_call_contract(const call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>&& value)
    {
      if(FieldNumber::CALL_CONTRACT != which_op_)
      {
        init_op(FieldNumber::CALL_CONTRACT);
      }
      op_.call_contract_ = value;
    }
    inline call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>& mutable_call_contract()
    {
      if(FieldNumber::CALL_CONTRACT != which_op_)
      {
        init_op(FieldNumber::CALL_CONTRACT);
      }
      return op_.call_contract_;
    }
    inline const call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>& get_call_contract() const { return op_.call_contract_; }
    inline const call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>& call_contract() const { return op_.call_contract_; }

    inline void clear_set_system_call()
    {
      if(FieldNumber::SET_SYSTEM_CALL == which_op_)
      {
        which_op_ = FieldNumber::NOT_SET;
        op_.set_system_call_.~set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>();
      }
    }
    inline void set_set_system_call(const set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>& value)
    {
      if(FieldNumber::SET_SYSTEM_CALL != which_op_)
      {
        init_op(FieldNumber::SET_SYSTEM_CALL);
      }
      op_.set_system_call_ = value;
    }
    inline void set_set_system_call(const set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>&& value)
    {
      if(FieldNumber::SET_SYSTEM_CALL != which_op_)
      {
        init_op(FieldNumber::SET_SYSTEM_CALL);
      }
      op_.set_system_call_ = value;
    }
    inline set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>& mutable_set_system_call()
    {
      if(FieldNumber::SET_SYSTEM_CALL != which_op_)
      {
        init_op(FieldNumber::SET_SYSTEM_CALL);
      }
      return op_.set_system_call_;
    }
    inline const set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>& get_set_system_call() const { return op_.set_system_call_; }
    inline const set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>& set_system_call() const { return op_.set_system_call_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      switch(which_op_)
      {
        case FieldNumber::UPLOAD_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = op_.upload_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::UPLOAD_CONTRACT), buffer, false);
          }
          break;

        case FieldNumber::CALL_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = op_.call_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CALL_CONTRACT), buffer, false);
          }
          break;

        case FieldNumber::SET_SYSTEM_CALL:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = op_.set_system_call_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SET_SYSTEM_CALL), buffer, false);
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
          case FieldNumber::UPLOAD_CONTRACT:
            return_value = deserialize_op(FieldNumber::UPLOAD_CONTRACT, op_.upload_contract_, buffer, wire_type);

            break;

          case FieldNumber::CALL_CONTRACT:
            return_value = deserialize_op(FieldNumber::CALL_CONTRACT, op_.call_contract_, buffer, wire_type);

            break;

          case FieldNumber::SET_SYSTEM_CALL:
            return_value = deserialize_op(FieldNumber::SET_SYSTEM_CALL, op_.set_system_call_, buffer, wire_type);

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
      clear_op();

    }

    private:



      FieldNumber which_op_ = FieldNumber::NOT_SET;
      union op
      {
        op() {}
        ~op() {}
        upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH> upload_contract_;
        call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH> call_contract_;
        set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH> set_system_call_;
      };
      op op_;

      void init_op(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_op_)
        {
          // First delete the old object in the oneof.
          clear_op();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::UPLOAD_CONTRACT:
            new(&op_.upload_contract_) upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>;
            which_op_ = FieldNumber::UPLOAD_CONTRACT;
            break;

          case FieldNumber::CALL_CONTRACT:
            new(&op_.call_contract_) call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>;
            which_op_ = FieldNumber::CALL_CONTRACT;
            break;

          case FieldNumber::SET_SYSTEM_CALL:
            new(&op_.set_system_call_) set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>;
            which_op_ = FieldNumber::SET_SYSTEM_CALL;
            break;

          default:
            break;
         }

         which_op_ = field_id;
      }

      void clear_op()
      {
        switch(which_op_)
        {
          case FieldNumber::UPLOAD_CONTRACT:
            op_.upload_contract_.~upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::CALL_CONTRACT:
            op_.call_contract_.~call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SET_SYSTEM_CALL:
            op_.set_system_call_.~set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          default:
            break;
        }
        which_op_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_op(const FieldNumber field_id, ::EmbeddedProto::Field& field,
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        if(field_id != which_op_)
        {
          init_op(field_id);
        }
        ::EmbeddedProto::Error return_value = field.deserialize_check_type(buffer, wire_type);
        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_op();
        }
        return return_value;
      }

};

template<uint32_t operations_REP_LENGTH, 
uint32_t operations_upload_contract_contract_id_LENGTH, 
uint32_t operations_upload_contract_bytecode_LENGTH, 
uint32_t operations_call_contract_contract_id_LENGTH, 
uint32_t operations_call_contract_args_LENGTH, 
uint32_t operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>
class active_transaction_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    active_transaction_data() = default;
    active_transaction_data(const active_transaction_data& rhs )
    {
      set_rc_limit(rhs.get_rc_limit());
      set_nonce(rhs.get_nonce());
      set_operations(rhs.get_operations());
    }

    active_transaction_data(const active_transaction_data&& rhs ) noexcept
    {
      set_rc_limit(rhs.get_rc_limit());
      set_nonce(rhs.get_nonce());
      set_operations(rhs.get_operations());
    }

    ~active_transaction_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RC_LIMIT = 1,
      NONCE = 2,
      OPERATIONS = 3
    };

    active_transaction_data& operator=(const active_transaction_data& rhs)
    {
      set_rc_limit(rhs.get_rc_limit());
      set_nonce(rhs.get_nonce());
      set_operations(rhs.get_operations());
      return *this;
    }

    active_transaction_data& operator=(const active_transaction_data&& rhs) noexcept
    {
      set_rc_limit(rhs.get_rc_limit());
      set_nonce(rhs.get_nonce());
      set_operations(rhs.get_operations());
      return *this;
    }

    inline void clear_rc_limit() { rc_limit_.clear(); }
    inline void set_rc_limit(const EmbeddedProto::uint64& value) { rc_limit_ = value; }
    inline void set_rc_limit(const EmbeddedProto::uint64&& value) { rc_limit_ = value; }
    inline EmbeddedProto::uint64& mutable_rc_limit() { return rc_limit_; }
    inline const EmbeddedProto::uint64& get_rc_limit() const { return rc_limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc_limit() const { return rc_limit_.get(); }

    inline void clear_nonce() { nonce_.clear(); }
    inline void set_nonce(const EmbeddedProto::uint64& value) { nonce_ = value; }
    inline void set_nonce(const EmbeddedProto::uint64&& value) { nonce_ = value; }
    inline EmbeddedProto::uint64& mutable_nonce() { return nonce_; }
    inline const EmbeddedProto::uint64& get_nonce() const { return nonce_; }
    inline EmbeddedProto::uint64::FIELD_TYPE nonce() const { return nonce_.get(); }

    inline const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>& operations(uint32_t index) const { return operations_[index]; }
    inline void clear_operations() { operations_.clear(); }
    inline void set_operations(uint32_t index, const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>& value) { operations_.set(index, value); }
    inline void set_operations(uint32_t index, const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>&& value) { operations_.set(index, value); }
    inline void set_operations(const ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>, operations_REP_LENGTH>& values) { operations_ = values; }
    inline void add_operations(const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>& value) { operations_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>, operations_REP_LENGTH>& mutable_operations() { return operations_; }
    inline operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>& mutable_operations(uint32_t index) { return operations_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>, operations_REP_LENGTH>& get_operations() const { return operations_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>, operations_REP_LENGTH>& operations() const { return operations_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != rc_limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC_LIMIT), buffer, false);
      }

      if((0U != nonce_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = nonce_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NONCE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = operations_.serialize_with_id(static_cast<uint32_t>(FieldNumber::OPERATIONS), buffer, false);
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
          case FieldNumber::RC_LIMIT:
            return_value = rc_limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NONCE:
            return_value = nonce_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::OPERATIONS:
            return_value = operations_.deserialize_check_type(buffer, wire_type);
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
      clear_rc_limit();
      clear_nonce();
      clear_operations();

    }

    private:


      EmbeddedProto::uint64 rc_limit_ = 0U;
      EmbeddedProto::uint64 nonce_ = 0U;
      ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH>, operations_REP_LENGTH> operations_;

};

class passive_transaction_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    passive_transaction_data() = default;
    passive_transaction_data(const passive_transaction_data& rhs )
    {
    }

    passive_transaction_data(const passive_transaction_data&& rhs ) noexcept
    {
    }

    ~passive_transaction_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    passive_transaction_data& operator=(const passive_transaction_data& rhs)
    {
      return *this;
    }

    passive_transaction_data& operator=(const passive_transaction_data&& rhs) noexcept
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

template<uint32_t id_LENGTH, 
uint32_t active_LENGTH, 
uint32_t passive_LENGTH, 
uint32_t signature_data_LENGTH>
class transaction final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction() = default;
    transaction(const transaction& rhs )
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
    }

    transaction(const transaction&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
    }

    ~transaction() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      ACTIVE = 2,
      PASSIVE = 3,
      SIGNATURE_DATA = 4
    };

    transaction& operator=(const transaction& rhs)
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
      return *this;
    }

    transaction& operator=(const transaction&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }

    inline void clear_active() { active_.clear(); }
    inline ::EmbeddedProto::FieldBytes<active_LENGTH>& mutable_active() { return active_; }
    inline void set_active(const ::EmbeddedProto::FieldBytes<active_LENGTH>& rhs) { active_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<active_LENGTH>& get_active() const { return active_; }
    inline const uint8_t* active() const { return active_.get_const(); }

    inline void clear_passive() { passive_.clear(); }
    inline ::EmbeddedProto::FieldBytes<passive_LENGTH>& mutable_passive() { return passive_; }
    inline void set_passive(const ::EmbeddedProto::FieldBytes<passive_LENGTH>& rhs) { passive_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<passive_LENGTH>& get_passive() const { return passive_; }
    inline const uint8_t* passive() const { return passive_.get_const(); }

    inline void clear_signature_data() { signature_data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& mutable_signature_data() { return signature_data_; }
    inline void set_signature_data(const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& rhs) { signature_data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& get_signature_data() const { return signature_data_; }
    inline const uint8_t* signature_data() const { return signature_data_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = active_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACTIVE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = passive_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PASSIVE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE_DATA), buffer, false);
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
          case FieldNumber::ID:
            return_value = id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ACTIVE:
            return_value = active_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PASSIVE:
            return_value = passive_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNATURE_DATA:
            return_value = signature_data_.deserialize_check_type(buffer, wire_type);
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
      clear_id();
      clear_active();
      clear_passive();
      clear_signature_data();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      ::EmbeddedProto::FieldBytes<active_LENGTH> active_;
      ::EmbeddedProto::FieldBytes<passive_LENGTH> passive_;
      ::EmbeddedProto::FieldBytes<signature_data_LENGTH> signature_data_;

};

template<uint32_t transaction_merkle_root_LENGTH, 
uint32_t passive_data_merkle_root_LENGTH, 
uint32_t signer_LENGTH>
class active_block_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    active_block_data() = default;
    active_block_data(const active_block_data& rhs )
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_passive_data_merkle_root(rhs.get_passive_data_merkle_root());
      set_signer(rhs.get_signer());
    }

    active_block_data(const active_block_data&& rhs ) noexcept
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_passive_data_merkle_root(rhs.get_passive_data_merkle_root());
      set_signer(rhs.get_signer());
    }

    ~active_block_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION_MERKLE_ROOT = 1,
      PASSIVE_DATA_MERKLE_ROOT = 2,
      SIGNER = 3
    };

    active_block_data& operator=(const active_block_data& rhs)
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_passive_data_merkle_root(rhs.get_passive_data_merkle_root());
      set_signer(rhs.get_signer());
      return *this;
    }

    active_block_data& operator=(const active_block_data&& rhs) noexcept
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_passive_data_merkle_root(rhs.get_passive_data_merkle_root());
      set_signer(rhs.get_signer());
      return *this;
    }

    inline void clear_transaction_merkle_root() { transaction_merkle_root_.clear(); }
    inline ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH>& mutable_transaction_merkle_root() { return transaction_merkle_root_; }
    inline void set_transaction_merkle_root(const ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH>& rhs) { transaction_merkle_root_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH>& get_transaction_merkle_root() const { return transaction_merkle_root_; }
    inline const uint8_t* transaction_merkle_root() const { return transaction_merkle_root_.get_const(); }

    inline void clear_passive_data_merkle_root() { passive_data_merkle_root_.clear(); }
    inline ::EmbeddedProto::FieldBytes<passive_data_merkle_root_LENGTH>& mutable_passive_data_merkle_root() { return passive_data_merkle_root_; }
    inline void set_passive_data_merkle_root(const ::EmbeddedProto::FieldBytes<passive_data_merkle_root_LENGTH>& rhs) { passive_data_merkle_root_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<passive_data_merkle_root_LENGTH>& get_passive_data_merkle_root() const { return passive_data_merkle_root_; }
    inline const uint8_t* passive_data_merkle_root() const { return passive_data_merkle_root_.get_const(); }

    inline void clear_signer() { signer_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signer_LENGTH>& mutable_signer() { return signer_; }
    inline void set_signer(const ::EmbeddedProto::FieldBytes<signer_LENGTH>& rhs) { signer_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signer_LENGTH>& get_signer() const { return signer_; }
    inline const uint8_t* signer() const { return signer_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_merkle_root_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION_MERKLE_ROOT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = passive_data_merkle_root_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PASSIVE_DATA_MERKLE_ROOT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signer_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNER), buffer, false);
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
          case FieldNumber::TRANSACTION_MERKLE_ROOT:
            return_value = transaction_merkle_root_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PASSIVE_DATA_MERKLE_ROOT:
            return_value = passive_data_merkle_root_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNER:
            return_value = signer_.deserialize_check_type(buffer, wire_type);
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
      clear_transaction_merkle_root();
      clear_passive_data_merkle_root();
      clear_signer();

    }

    private:


      ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH> transaction_merkle_root_;
      ::EmbeddedProto::FieldBytes<passive_data_merkle_root_LENGTH> passive_data_merkle_root_;
      ::EmbeddedProto::FieldBytes<signer_LENGTH> signer_;

};

class passive_block_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    passive_block_data() = default;
    passive_block_data(const passive_block_data& rhs )
    {
    }

    passive_block_data(const passive_block_data&& rhs ) noexcept
    {
    }

    ~passive_block_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    passive_block_data& operator=(const passive_block_data& rhs)
    {
      return *this;
    }

    passive_block_data& operator=(const passive_block_data&& rhs) noexcept
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

template<uint32_t previous_LENGTH>
class block_header final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_header() = default;
    block_header(const block_header& rhs )
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
    }

    block_header(const block_header&& rhs ) noexcept
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
    }

    ~block_header() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PREVIOUS = 1,
      HEIGHT = 2,
      TIMESTAMP = 3
    };

    block_header& operator=(const block_header& rhs)
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
      return *this;
    }

    block_header& operator=(const block_header&& rhs) noexcept
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
      return *this;
    }

    inline void clear_previous() { previous_.clear(); }
    inline ::EmbeddedProto::FieldBytes<previous_LENGTH>& mutable_previous() { return previous_; }
    inline void set_previous(const ::EmbeddedProto::FieldBytes<previous_LENGTH>& rhs) { previous_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<previous_LENGTH>& get_previous() const { return previous_; }
    inline const uint8_t* previous() const { return previous_.get_const(); }

    inline void clear_height() { height_.clear(); }
    inline void set_height(const EmbeddedProto::uint64& value) { height_ = value; }
    inline void set_height(const EmbeddedProto::uint64&& value) { height_ = value; }
    inline EmbeddedProto::uint64& mutable_height() { return height_; }
    inline const EmbeddedProto::uint64& get_height() const { return height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE height() const { return height_.get(); }

    inline void clear_timestamp() { timestamp_.clear(); }
    inline void set_timestamp(const EmbeddedProto::uint64& value) { timestamp_ = value; }
    inline void set_timestamp(const EmbeddedProto::uint64&& value) { timestamp_ = value; }
    inline EmbeddedProto::uint64& mutable_timestamp() { return timestamp_; }
    inline const EmbeddedProto::uint64& get_timestamp() const { return timestamp_; }
    inline EmbeddedProto::uint64::FIELD_TYPE timestamp() const { return timestamp_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = previous_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PREVIOUS), buffer, false);
      }

      if((0U != height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEIGHT), buffer, false);
      }

      if((0U != timestamp_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = timestamp_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TIMESTAMP), buffer, false);
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
          case FieldNumber::PREVIOUS:
            return_value = previous_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HEIGHT:
            return_value = height_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TIMESTAMP:
            return_value = timestamp_.deserialize_check_type(buffer, wire_type);
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
      clear_previous();
      clear_height();
      clear_timestamp();

    }

    private:


      ::EmbeddedProto::FieldBytes<previous_LENGTH> previous_;
      EmbeddedProto::uint64 height_ = 0U;
      EmbeddedProto::uint64 timestamp_ = 0U;

};

template<uint32_t id_LENGTH, 
uint32_t header_previous_LENGTH, 
uint32_t active_LENGTH, 
uint32_t passive_LENGTH, 
uint32_t signature_data_LENGTH, 
uint32_t transactions_REP_LENGTH, 
uint32_t transactions_id_LENGTH, 
uint32_t transactions_active_LENGTH, 
uint32_t transactions_passive_LENGTH, 
uint32_t transactions_signature_data_LENGTH>
class block final: public ::EmbeddedProto::MessageInterface
{
  public:
    block() = default;
    block(const block& rhs )
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
      set_transactions(rhs.get_transactions());
    }

    block(const block&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
      set_transactions(rhs.get_transactions());
    }

    ~block() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      HEADER = 2,
      ACTIVE = 3,
      PASSIVE = 4,
      SIGNATURE_DATA = 5,
      TRANSACTIONS = 6
    };

    block& operator=(const block& rhs)
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
      set_transactions(rhs.get_transactions());
      return *this;
    }

    block& operator=(const block&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
      set_passive(rhs.get_passive());
      set_signature_data(rhs.get_signature_data());
      set_transactions(rhs.get_transactions());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }

    inline void clear_header() { header_.clear(); }
    inline void set_header(const block_header<header_previous_LENGTH>& value) { header_ = value; }
    inline void set_header(const block_header<header_previous_LENGTH>&& value) { header_ = value; }
    inline block_header<header_previous_LENGTH>& mutable_header() { return header_; }
    inline const block_header<header_previous_LENGTH>& get_header() const { return header_; }
    inline const block_header<header_previous_LENGTH>& header() const { return header_; }

    inline void clear_active() { active_.clear(); }
    inline ::EmbeddedProto::FieldBytes<active_LENGTH>& mutable_active() { return active_; }
    inline void set_active(const ::EmbeddedProto::FieldBytes<active_LENGTH>& rhs) { active_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<active_LENGTH>& get_active() const { return active_; }
    inline const uint8_t* active() const { return active_.get_const(); }

    inline void clear_passive() { passive_.clear(); }
    inline ::EmbeddedProto::FieldBytes<passive_LENGTH>& mutable_passive() { return passive_; }
    inline void set_passive(const ::EmbeddedProto::FieldBytes<passive_LENGTH>& rhs) { passive_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<passive_LENGTH>& get_passive() const { return passive_; }
    inline const uint8_t* passive() const { return passive_.get_const(); }

    inline void clear_signature_data() { signature_data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& mutable_signature_data() { return signature_data_; }
    inline void set_signature_data(const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& rhs) { signature_data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& get_signature_data() const { return signature_data_; }
    inline const uint8_t* signature_data() const { return signature_data_.get_const(); }

    inline const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& transactions(uint32_t index) const { return transactions_[index]; }
    inline void clear_transactions() { transactions_.clear(); }
    inline void set_transactions(uint32_t index, const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& value) { transactions_.set(index, value); }
    inline void set_transactions(uint32_t index, const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>&& value) { transactions_.set(index, value); }
    inline void set_transactions(const ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& values) { transactions_ = values; }
    inline void add_transactions(const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& value) { transactions_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& mutable_transactions() { return transactions_; }
    inline transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>& mutable_transactions(uint32_t index) { return transactions_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& get_transactions() const { return transactions_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& transactions() const { return transactions_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = header_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEADER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = active_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACTIVE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = passive_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PASSIVE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = signature_data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SIGNATURE_DATA), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transactions_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTIONS), buffer, false);
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
          case FieldNumber::ID:
            return_value = id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::HEADER:
            return_value = header_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ACTIVE:
            return_value = active_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PASSIVE:
            return_value = passive_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SIGNATURE_DATA:
            return_value = signature_data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TRANSACTIONS:
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
      clear_id();
      clear_header();
      clear_active();
      clear_passive();
      clear_signature_data();
      clear_transactions();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      block_header<header_previous_LENGTH> header_;
      ::EmbeddedProto::FieldBytes<active_LENGTH> active_;
      ::EmbeddedProto::FieldBytes<passive_LENGTH> passive_;
      ::EmbeddedProto::FieldBytes<signature_data_LENGTH> signature_data_;
      ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_passive_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH> transactions_;

};

class block_receipt final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_receipt() = default;
    block_receipt(const block_receipt& rhs )
    {
    }

    block_receipt(const block_receipt&& rhs ) noexcept
    {
    }

    ~block_receipt() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    block_receipt& operator=(const block_receipt& rhs)
    {
      return *this;
    }

    block_receipt& operator=(const block_receipt&& rhs) noexcept
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

} // End of namespace protocol
} // End of namespace koinos
#endif // KOINOS_PROTOCOL_PROTOCOL_H