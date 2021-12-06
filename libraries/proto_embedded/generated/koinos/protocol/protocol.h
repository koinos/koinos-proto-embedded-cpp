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

template<uint32_t source_LENGTH, 
uint32_t name_LENGTH, 
uint32_t data_LENGTH, 
uint32_t impacted_REP_LENGTH, 
uint32_t impacted_LENGTH>
class event_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    event_data() = default;
    event_data(const event_data& rhs )
    {
      set_sequence(rhs.get_sequence());
      set_source(rhs.get_source());
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
    }

    event_data(const event_data&& rhs ) noexcept
    {
      set_sequence(rhs.get_sequence());
      set_source(rhs.get_source());
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
    }

    ~event_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      SEQUENCE = 1,
      SOURCE = 2,
      NAME = 3,
      DATA = 4,
      IMPACTED = 5
    };

    event_data& operator=(const event_data& rhs)
    {
      set_sequence(rhs.get_sequence());
      set_source(rhs.get_source());
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
      return *this;
    }

    event_data& operator=(const event_data&& rhs) noexcept
    {
      set_sequence(rhs.get_sequence());
      set_source(rhs.get_source());
      set_name(rhs.get_name());
      set_data(rhs.get_data());
      set_impacted(rhs.get_impacted());
      return *this;
    }

    inline void clear_sequence() { sequence_.clear(); }
    inline void set_sequence(const EmbeddedProto::uint32& value) { sequence_ = value; }
    inline void set_sequence(const EmbeddedProto::uint32&& value) { sequence_ = value; }
    inline EmbeddedProto::uint32& mutable_sequence() { return sequence_; }
    inline const EmbeddedProto::uint32& get_sequence() const { return sequence_; }
    inline EmbeddedProto::uint32::FIELD_TYPE sequence() const { return sequence_.get(); }

    inline void clear_source() { source_.clear(); }
    inline ::EmbeddedProto::FieldBytes<source_LENGTH>& mutable_source() { return source_; }
    inline void set_source(const ::EmbeddedProto::FieldBytes<source_LENGTH>& rhs) { source_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<source_LENGTH>& get_source() const { return source_; }
    inline const uint8_t* source() const { return source_.get_const(); }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }

    inline void clear_data() { data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<data_LENGTH>& mutable_data() { return data_; }
    inline void set_data(const ::EmbeddedProto::FieldBytes<data_LENGTH>& rhs) { data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<data_LENGTH>& get_data() const { return data_; }
    inline const uint8_t* data() const { return data_.get_const(); }

    inline const ::EmbeddedProto::FieldBytes<impacted_LENGTH>& impacted(uint32_t index) const { return impacted_[index]; }
    inline void clear_impacted() { impacted_.clear(); }
    inline void set_impacted(uint32_t index, const ::EmbeddedProto::FieldBytes<impacted_LENGTH>& value) { impacted_.set(index, value); }
    inline void set_impacted(uint32_t index, const ::EmbeddedProto::FieldBytes<impacted_LENGTH>&& value) { impacted_.set(index, value); }
    inline void set_impacted(const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& values) { impacted_ = values; }
    inline void add_impacted(const ::EmbeddedProto::FieldBytes<impacted_LENGTH>& value) { impacted_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& mutable_impacted() { return impacted_; }
    inline ::EmbeddedProto::FieldBytes<impacted_LENGTH>& mutable_impacted(uint32_t index) { return impacted_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& get_impacted() const { return impacted_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH>& impacted() const { return impacted_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != sequence_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = sequence_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SEQUENCE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = source_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SOURCE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = name_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NAME), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = data_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DATA), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = impacted_.serialize_with_id(static_cast<uint32_t>(FieldNumber::IMPACTED), buffer, false);
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
          case FieldNumber::SEQUENCE:
            return_value = sequence_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SOURCE:
            return_value = source_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::DATA:
            return_value = data_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::IMPACTED:
            return_value = impacted_.deserialize_check_type(buffer, wire_type);
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
      clear_sequence();
      clear_source();
      clear_name();
      clear_data();
      clear_impacted();

    }

    private:


      EmbeddedProto::uint32 sequence_ = 0U;
      ::EmbeddedProto::FieldBytes<source_LENGTH> source_;
      ::EmbeddedProto::FieldString<name_LENGTH> name_;
      ::EmbeddedProto::FieldBytes<data_LENGTH> data_;
      ::EmbeddedProto::RepeatedFieldFixedSize<::EmbeddedProto::FieldBytes<impacted_LENGTH>, impacted_REP_LENGTH> impacted_;

};

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
uint32_t bytecode_LENGTH, 
uint32_t abi_LENGTH>
class upload_contract_operation final: public ::EmbeddedProto::MessageInterface
{
  public:
    upload_contract_operation() = default;
    upload_contract_operation(const upload_contract_operation& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
      set_abi(rhs.get_abi());
    }

    upload_contract_operation(const upload_contract_operation&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
      set_abi(rhs.get_abi());
    }

    ~upload_contract_operation() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      BYTECODE = 2,
      ABI = 3
    };

    upload_contract_operation& operator=(const upload_contract_operation& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
      set_abi(rhs.get_abi());
      return *this;
    }

    upload_contract_operation& operator=(const upload_contract_operation&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_bytecode(rhs.get_bytecode());
      set_abi(rhs.get_abi());
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
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = bytecode_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BYTECODE), buffer, false);
      }

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
          case FieldNumber::CONTRACT_ID:
            return_value = contract_id_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BYTECODE:
            return_value = bytecode_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_contract_id();
      clear_bytecode();
      clear_abi();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      ::EmbeddedProto::FieldBytes<bytecode_LENGTH> bytecode_;
      ::EmbeddedProto::FieldString<abi_LENGTH> abi_;

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

template<uint32_t contract_id_LENGTH>
class set_system_contract_operation final: public ::EmbeddedProto::MessageInterface
{
  public:
    set_system_contract_operation() = default;
    set_system_contract_operation(const set_system_contract_operation& rhs )
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
    }

    set_system_contract_operation(const set_system_contract_operation&& rhs ) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
    }

    ~set_system_contract_operation() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CONTRACT_ID = 1,
      SYSTEM_CONTRACT = 2
    };

    set_system_contract_operation& operator=(const set_system_contract_operation& rhs)
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
      return *this;
    }

    set_system_contract_operation& operator=(const set_system_contract_operation&& rhs) noexcept
    {
      set_contract_id(rhs.get_contract_id());
      set_system_contract(rhs.get_system_contract());
      return *this;
    }

    inline void clear_contract_id() { contract_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& mutable_contract_id() { return contract_id_; }
    inline void set_contract_id(const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& rhs) { contract_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<contract_id_LENGTH>& get_contract_id() const { return contract_id_; }
    inline const uint8_t* contract_id() const { return contract_id_.get_const(); }

    inline void clear_system_contract() { system_contract_.clear(); }
    inline void set_system_contract(const EmbeddedProto::boolean& value) { system_contract_ = value; }
    inline void set_system_contract(const EmbeddedProto::boolean&& value) { system_contract_ = value; }
    inline EmbeddedProto::boolean& mutable_system_contract() { return system_contract_; }
    inline const EmbeddedProto::boolean& get_system_contract() const { return system_contract_; }
    inline EmbeddedProto::boolean::FIELD_TYPE system_contract() const { return system_contract_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = contract_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CONTRACT_ID), buffer, false);
      }

      if((false != system_contract_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = system_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SYSTEM_CONTRACT), buffer, false);
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

          case FieldNumber::SYSTEM_CONTRACT:
            return_value = system_contract_.deserialize_check_type(buffer, wire_type);
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
      clear_system_contract();

    }

    private:


      ::EmbeddedProto::FieldBytes<contract_id_LENGTH> contract_id_;
      EmbeddedProto::boolean system_contract_ = false;

};

template<uint32_t upload_contract_contract_id_LENGTH, 
uint32_t upload_contract_bytecode_LENGTH, 
uint32_t upload_contract_abi_LENGTH, 
uint32_t call_contract_contract_id_LENGTH, 
uint32_t call_contract_args_LENGTH, 
uint32_t set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t set_system_contract_contract_id_LENGTH>
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

        case FieldNumber::SET_SYSTEM_CONTRACT:
          set_set_system_contract(rhs.get_set_system_contract());
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

        case FieldNumber::SET_SYSTEM_CONTRACT:
          set_set_system_contract(rhs.get_set_system_contract());
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
      SET_SYSTEM_CALL = 3,
      SET_SYSTEM_CONTRACT = 4
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

        case FieldNumber::SET_SYSTEM_CONTRACT:
          set_set_system_contract(rhs.get_set_system_contract());
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

        case FieldNumber::SET_SYSTEM_CONTRACT:
          set_set_system_contract(rhs.get_set_system_contract());
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
        op_.upload_contract_.~upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>();
      }
    }
    inline void set_upload_contract(const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>& value)
    {
      if(FieldNumber::UPLOAD_CONTRACT != which_op_)
      {
        init_op(FieldNumber::UPLOAD_CONTRACT);
      }
      op_.upload_contract_ = value;
    }
    inline void set_upload_contract(const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>&& value)
    {
      if(FieldNumber::UPLOAD_CONTRACT != which_op_)
      {
        init_op(FieldNumber::UPLOAD_CONTRACT);
      }
      op_.upload_contract_ = value;
    }
    inline upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>& mutable_upload_contract()
    {
      if(FieldNumber::UPLOAD_CONTRACT != which_op_)
      {
        init_op(FieldNumber::UPLOAD_CONTRACT);
      }
      return op_.upload_contract_;
    }
    inline const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>& get_upload_contract() const { return op_.upload_contract_; }
    inline const upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>& upload_contract() const { return op_.upload_contract_; }

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

    inline void clear_set_system_contract()
    {
      if(FieldNumber::SET_SYSTEM_CONTRACT == which_op_)
      {
        which_op_ = FieldNumber::NOT_SET;
        op_.set_system_contract_.~set_system_contract_operation<set_system_contract_contract_id_LENGTH>();
      }
    }
    inline void set_set_system_contract(const set_system_contract_operation<set_system_contract_contract_id_LENGTH>& value)
    {
      if(FieldNumber::SET_SYSTEM_CONTRACT != which_op_)
      {
        init_op(FieldNumber::SET_SYSTEM_CONTRACT);
      }
      op_.set_system_contract_ = value;
    }
    inline void set_set_system_contract(const set_system_contract_operation<set_system_contract_contract_id_LENGTH>&& value)
    {
      if(FieldNumber::SET_SYSTEM_CONTRACT != which_op_)
      {
        init_op(FieldNumber::SET_SYSTEM_CONTRACT);
      }
      op_.set_system_contract_ = value;
    }
    inline set_system_contract_operation<set_system_contract_contract_id_LENGTH>& mutable_set_system_contract()
    {
      if(FieldNumber::SET_SYSTEM_CONTRACT != which_op_)
      {
        init_op(FieldNumber::SET_SYSTEM_CONTRACT);
      }
      return op_.set_system_contract_;
    }
    inline const set_system_contract_operation<set_system_contract_contract_id_LENGTH>& get_set_system_contract() const { return op_.set_system_contract_; }
    inline const set_system_contract_operation<set_system_contract_contract_id_LENGTH>& set_system_contract() const { return op_.set_system_contract_; }


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

        case FieldNumber::SET_SYSTEM_CONTRACT:
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            return_value = op_.set_system_contract_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SET_SYSTEM_CONTRACT), buffer, false);
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

          case FieldNumber::SET_SYSTEM_CONTRACT:
            return_value = deserialize_op(FieldNumber::SET_SYSTEM_CONTRACT, op_.set_system_contract_, buffer, wire_type);

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
        upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH> upload_contract_;
        call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH> call_contract_;
        set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH> set_system_call_;
        set_system_contract_operation<set_system_contract_contract_id_LENGTH> set_system_contract_;
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
            new(&op_.upload_contract_) upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>;
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

          case FieldNumber::SET_SYSTEM_CONTRACT:
            new(&op_.set_system_contract_) set_system_contract_operation<set_system_contract_contract_id_LENGTH>;
            which_op_ = FieldNumber::SET_SYSTEM_CONTRACT;
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
            op_.upload_contract_.~upload_contract_operation<upload_contract_contract_id_LENGTH, upload_contract_bytecode_LENGTH, upload_contract_abi_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::CALL_CONTRACT:
            op_.call_contract_.~call_contract_operation<call_contract_contract_id_LENGTH, call_contract_args_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SET_SYSTEM_CALL:
            op_.set_system_call_.~set_system_call_operation<set_system_call_target_system_call_bundle_contract_id_LENGTH>(); // NOSONAR Unions require this.
            break;
          case FieldNumber::SET_SYSTEM_CONTRACT:
            op_.set_system_contract_.~set_system_contract_operation<set_system_contract_contract_id_LENGTH>(); // NOSONAR Unions require this.
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
uint32_t operations_upload_contract_abi_LENGTH, 
uint32_t operations_call_contract_contract_id_LENGTH, 
uint32_t operations_call_contract_args_LENGTH, 
uint32_t operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t operations_set_system_contract_contract_id_LENGTH>
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

    inline const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>& operations(uint32_t index) const { return operations_[index]; }
    inline void clear_operations() { operations_.clear(); }
    inline void set_operations(uint32_t index, const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>& value) { operations_.set(index, value); }
    inline void set_operations(uint32_t index, const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>&& value) { operations_.set(index, value); }
    inline void set_operations(const ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>, operations_REP_LENGTH>& values) { operations_ = values; }
    inline void add_operations(const operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>& value) { operations_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>, operations_REP_LENGTH>& mutable_operations() { return operations_; }
    inline operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>& mutable_operations(uint32_t index) { return operations_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>, operations_REP_LENGTH>& get_operations() const { return operations_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>, operations_REP_LENGTH>& operations() const { return operations_; }


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
      ::EmbeddedProto::RepeatedFieldFixedSize<operation<operations_upload_contract_contract_id_LENGTH, operations_upload_contract_bytecode_LENGTH, operations_upload_contract_abi_LENGTH, operations_call_contract_contract_id_LENGTH, operations_call_contract_args_LENGTH, operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, operations_set_system_contract_contract_id_LENGTH>, operations_REP_LENGTH> operations_;

};

template<uint32_t id_LENGTH, 
uint32_t active_LENGTH, 
uint32_t signature_data_LENGTH>
class transaction final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction() = default;
    transaction(const transaction& rhs )
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
    }

    transaction(const transaction&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
    }

    ~transaction() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      ACTIVE = 2,
      SIGNATURE_DATA = 4
    };

    transaction& operator=(const transaction& rhs)
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
      return *this;
    }

    transaction& operator=(const transaction&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_active(rhs.get_active());
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
      clear_signature_data();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      ::EmbeddedProto::FieldBytes<active_LENGTH> active_;
      ::EmbeddedProto::FieldBytes<signature_data_LENGTH> signature_data_;

};

template<uint32_t id_LENGTH, 
uint32_t payer_LENGTH, 
uint32_t events_REP_LENGTH, 
uint32_t events_source_LENGTH, 
uint32_t events_name_LENGTH, 
uint32_t events_data_LENGTH, 
uint32_t events_impacted_REP_LENGTH, 
uint32_t events_impacted_LENGTH>
class transaction_receipt final: public ::EmbeddedProto::MessageInterface
{
  public:
    transaction_receipt() = default;
    transaction_receipt(const transaction_receipt& rhs )
    {
      set_id(rhs.get_id());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_rc_used(rhs.get_rc_used());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_reverted(rhs.get_reverted());
      set_events(rhs.get_events());
    }

    transaction_receipt(const transaction_receipt&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_rc_used(rhs.get_rc_used());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_reverted(rhs.get_reverted());
      set_events(rhs.get_events());
    }

    ~transaction_receipt() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      PAYER = 2,
      MAX_PAYER_RC = 3,
      RC_LIMIT = 4,
      RC_USED = 5,
      DISK_STORAGE_USED = 6,
      NETWORK_BANDWIDTH_USED = 7,
      COMPUTE_BANDWIDTH_USED = 8,
      REVERTED = 9,
      EVENTS = 10
    };

    transaction_receipt& operator=(const transaction_receipt& rhs)
    {
      set_id(rhs.get_id());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_rc_used(rhs.get_rc_used());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_reverted(rhs.get_reverted());
      set_events(rhs.get_events());
      return *this;
    }

    transaction_receipt& operator=(const transaction_receipt&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_payer(rhs.get_payer());
      set_max_payer_rc(rhs.get_max_payer_rc());
      set_rc_limit(rhs.get_rc_limit());
      set_rc_used(rhs.get_rc_used());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_reverted(rhs.get_reverted());
      set_events(rhs.get_events());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }

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

    inline void clear_rc_used() { rc_used_.clear(); }
    inline void set_rc_used(const EmbeddedProto::uint64& value) { rc_used_ = value; }
    inline void set_rc_used(const EmbeddedProto::uint64&& value) { rc_used_ = value; }
    inline EmbeddedProto::uint64& mutable_rc_used() { return rc_used_; }
    inline const EmbeddedProto::uint64& get_rc_used() const { return rc_used_; }
    inline EmbeddedProto::uint64::FIELD_TYPE rc_used() const { return rc_used_.get(); }

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

    inline void clear_reverted() { reverted_.clear(); }
    inline void set_reverted(const EmbeddedProto::boolean& value) { reverted_ = value; }
    inline void set_reverted(const EmbeddedProto::boolean&& value) { reverted_ = value; }
    inline EmbeddedProto::boolean& mutable_reverted() { return reverted_; }
    inline const EmbeddedProto::boolean& get_reverted() const { return reverted_; }
    inline EmbeddedProto::boolean::FIELD_TYPE reverted() const { return reverted_.get(); }

    inline const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& events(uint32_t index) const { return events_[index]; }
    inline void clear_events() { events_.clear(); }
    inline void set_events(uint32_t index, const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& value) { events_.set(index, value); }
    inline void set_events(uint32_t index, const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>&& value) { events_.set(index, value); }
    inline void set_events(const ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& values) { events_ = values; }
    inline void add_events(const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& value) { events_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& mutable_events() { return events_; }
    inline event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& mutable_events(uint32_t index) { return events_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& get_events() const { return events_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& events() const { return events_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
      }

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

      if((0U != rc_used_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rc_used_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RC_USED), buffer, false);
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

      if((false != reverted_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = reverted_.serialize_with_id(static_cast<uint32_t>(FieldNumber::REVERTED), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = events_.serialize_with_id(static_cast<uint32_t>(FieldNumber::EVENTS), buffer, false);
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

          case FieldNumber::PAYER:
            return_value = payer_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MAX_PAYER_RC:
            return_value = max_payer_rc_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RC_LIMIT:
            return_value = rc_limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::RC_USED:
            return_value = rc_used_.deserialize_check_type(buffer, wire_type);
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

          case FieldNumber::REVERTED:
            return_value = reverted_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::EVENTS:
            return_value = events_.deserialize_check_type(buffer, wire_type);
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
      clear_payer();
      clear_max_payer_rc();
      clear_rc_limit();
      clear_rc_used();
      clear_disk_storage_used();
      clear_network_bandwidth_used();
      clear_compute_bandwidth_used();
      clear_reverted();
      clear_events();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      ::EmbeddedProto::FieldBytes<payer_LENGTH> payer_;
      EmbeddedProto::uint64 max_payer_rc_ = 0U;
      EmbeddedProto::uint64 rc_limit_ = 0U;
      EmbeddedProto::uint64 rc_used_ = 0U;
      EmbeddedProto::uint64 disk_storage_used_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_used_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_used_ = 0U;
      EmbeddedProto::boolean reverted_ = false;
      ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH> events_;

};

template<uint32_t transaction_merkle_root_LENGTH, 
uint32_t signer_LENGTH>
class active_block_data final: public ::EmbeddedProto::MessageInterface
{
  public:
    active_block_data() = default;
    active_block_data(const active_block_data& rhs )
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_signer(rhs.get_signer());
    }

    active_block_data(const active_block_data&& rhs ) noexcept
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_signer(rhs.get_signer());
    }

    ~active_block_data() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TRANSACTION_MERKLE_ROOT = 1,
      SIGNER = 3
    };

    active_block_data& operator=(const active_block_data& rhs)
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_signer(rhs.get_signer());
      return *this;
    }

    active_block_data& operator=(const active_block_data&& rhs) noexcept
    {
      set_transaction_merkle_root(rhs.get_transaction_merkle_root());
      set_signer(rhs.get_signer());
      return *this;
    }

    inline void clear_transaction_merkle_root() { transaction_merkle_root_.clear(); }
    inline ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH>& mutable_transaction_merkle_root() { return transaction_merkle_root_; }
    inline void set_transaction_merkle_root(const ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH>& rhs) { transaction_merkle_root_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH>& get_transaction_merkle_root() const { return transaction_merkle_root_; }
    inline const uint8_t* transaction_merkle_root() const { return transaction_merkle_root_.get_const(); }

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
      clear_signer();

    }

    private:


      ::EmbeddedProto::FieldBytes<transaction_merkle_root_LENGTH> transaction_merkle_root_;
      ::EmbeddedProto::FieldBytes<signer_LENGTH> signer_;

};

template<uint32_t previous_LENGTH, 
uint32_t previous_state_merkle_root_LENGTH>
class block_header final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_header() = default;
    block_header(const block_header& rhs )
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
      set_previous_state_merkle_root(rhs.get_previous_state_merkle_root());
    }

    block_header(const block_header&& rhs ) noexcept
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
      set_previous_state_merkle_root(rhs.get_previous_state_merkle_root());
    }

    ~block_header() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PREVIOUS = 1,
      HEIGHT = 2,
      TIMESTAMP = 3,
      PREVIOUS_STATE_MERKLE_ROOT = 4
    };

    block_header& operator=(const block_header& rhs)
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
      set_previous_state_merkle_root(rhs.get_previous_state_merkle_root());
      return *this;
    }

    block_header& operator=(const block_header&& rhs) noexcept
    {
      set_previous(rhs.get_previous());
      set_height(rhs.get_height());
      set_timestamp(rhs.get_timestamp());
      set_previous_state_merkle_root(rhs.get_previous_state_merkle_root());
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

    inline void clear_previous_state_merkle_root() { previous_state_merkle_root_.clear(); }
    inline ::EmbeddedProto::FieldBytes<previous_state_merkle_root_LENGTH>& mutable_previous_state_merkle_root() { return previous_state_merkle_root_; }
    inline void set_previous_state_merkle_root(const ::EmbeddedProto::FieldBytes<previous_state_merkle_root_LENGTH>& rhs) { previous_state_merkle_root_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<previous_state_merkle_root_LENGTH>& get_previous_state_merkle_root() const { return previous_state_merkle_root_; }
    inline const uint8_t* previous_state_merkle_root() const { return previous_state_merkle_root_.get_const(); }


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

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = previous_state_merkle_root_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PREVIOUS_STATE_MERKLE_ROOT), buffer, false);
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

          case FieldNumber::PREVIOUS_STATE_MERKLE_ROOT:
            return_value = previous_state_merkle_root_.deserialize_check_type(buffer, wire_type);
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
      clear_previous_state_merkle_root();

    }

    private:


      ::EmbeddedProto::FieldBytes<previous_LENGTH> previous_;
      EmbeddedProto::uint64 height_ = 0U;
      EmbeddedProto::uint64 timestamp_ = 0U;
      ::EmbeddedProto::FieldBytes<previous_state_merkle_root_LENGTH> previous_state_merkle_root_;

};

template<uint32_t id_LENGTH, 
uint32_t header_previous_LENGTH, 
uint32_t header_previous_state_merkle_root_LENGTH, 
uint32_t active_LENGTH, 
uint32_t signature_data_LENGTH, 
uint32_t transactions_REP_LENGTH, 
uint32_t transactions_id_LENGTH, 
uint32_t transactions_active_LENGTH, 
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
      set_signature_data(rhs.get_signature_data());
      set_transactions(rhs.get_transactions());
    }

    block(const block&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
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
      SIGNATURE_DATA = 5,
      TRANSACTIONS = 6
    };

    block& operator=(const block& rhs)
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
      set_signature_data(rhs.get_signature_data());
      set_transactions(rhs.get_transactions());
      return *this;
    }

    block& operator=(const block&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_header(rhs.get_header());
      set_active(rhs.get_active());
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
    inline void set_header(const block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH>& value) { header_ = value; }
    inline void set_header(const block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH>&& value) { header_ = value; }
    inline block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH>& mutable_header() { return header_; }
    inline const block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH>& get_header() const { return header_; }
    inline const block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH>& header() const { return header_; }

    inline void clear_active() { active_.clear(); }
    inline ::EmbeddedProto::FieldBytes<active_LENGTH>& mutable_active() { return active_; }
    inline void set_active(const ::EmbeddedProto::FieldBytes<active_LENGTH>& rhs) { active_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<active_LENGTH>& get_active() const { return active_; }
    inline const uint8_t* active() const { return active_.get_const(); }

    inline void clear_signature_data() { signature_data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& mutable_signature_data() { return signature_data_; }
    inline void set_signature_data(const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& rhs) { signature_data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<signature_data_LENGTH>& get_signature_data() const { return signature_data_; }
    inline const uint8_t* signature_data() const { return signature_data_.get_const(); }

    inline const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>& transactions(uint32_t index) const { return transactions_[index]; }
    inline void clear_transactions() { transactions_.clear(); }
    inline void set_transactions(uint32_t index, const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>& value) { transactions_.set(index, value); }
    inline void set_transactions(uint32_t index, const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>&& value) { transactions_.set(index, value); }
    inline void set_transactions(const ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& values) { transactions_ = values; }
    inline void add_transactions(const transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>& value) { transactions_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& mutable_transactions() { return transactions_; }
    inline transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>& mutable_transactions(uint32_t index) { return transactions_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& get_transactions() const { return transactions_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH>& transactions() const { return transactions_; }


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
      clear_signature_data();
      clear_transactions();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      block_header<header_previous_LENGTH, header_previous_state_merkle_root_LENGTH> header_;
      ::EmbeddedProto::FieldBytes<active_LENGTH> active_;
      ::EmbeddedProto::FieldBytes<signature_data_LENGTH> signature_data_;
      ::EmbeddedProto::RepeatedFieldFixedSize<transaction<transactions_id_LENGTH, transactions_active_LENGTH, transactions_signature_data_LENGTH>, transactions_REP_LENGTH> transactions_;

};

template<uint32_t id_LENGTH, 
uint32_t state_merkle_root_LENGTH, 
uint32_t events_REP_LENGTH, 
uint32_t events_source_LENGTH, 
uint32_t events_name_LENGTH, 
uint32_t events_data_LENGTH, 
uint32_t events_impacted_REP_LENGTH, 
uint32_t events_impacted_LENGTH, 
uint32_t transaction_receipts_REP_LENGTH, 
uint32_t transaction_receipts_id_LENGTH, 
uint32_t transaction_receipts_payer_LENGTH, 
uint32_t transaction_receipts_events_REP_LENGTH, 
uint32_t transaction_receipts_events_source_LENGTH, 
uint32_t transaction_receipts_events_name_LENGTH, 
uint32_t transaction_receipts_events_data_LENGTH, 
uint32_t transaction_receipts_events_impacted_REP_LENGTH, 
uint32_t transaction_receipts_events_impacted_LENGTH>
class block_receipt final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_receipt() = default;
    block_receipt(const block_receipt& rhs )
    {
      set_id(rhs.get_id());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_state_merkle_root(rhs.get_state_merkle_root());
      set_events(rhs.get_events());
      set_transaction_receipts(rhs.get_transaction_receipts());
    }

    block_receipt(const block_receipt&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_state_merkle_root(rhs.get_state_merkle_root());
      set_events(rhs.get_events());
      set_transaction_receipts(rhs.get_transaction_receipts());
    }

    ~block_receipt() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      HEIGHT = 2,
      DISK_STORAGE_USED = 3,
      NETWORK_BANDWIDTH_USED = 4,
      COMPUTE_BANDWIDTH_USED = 5,
      STATE_MERKLE_ROOT = 6,
      EVENTS = 7,
      TRANSACTION_RECEIPTS = 8
    };

    block_receipt& operator=(const block_receipt& rhs)
    {
      set_id(rhs.get_id());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_state_merkle_root(rhs.get_state_merkle_root());
      set_events(rhs.get_events());
      set_transaction_receipts(rhs.get_transaction_receipts());
      return *this;
    }

    block_receipt& operator=(const block_receipt&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_height(rhs.get_height());
      set_disk_storage_used(rhs.get_disk_storage_used());
      set_network_bandwidth_used(rhs.get_network_bandwidth_used());
      set_compute_bandwidth_used(rhs.get_compute_bandwidth_used());
      set_state_merkle_root(rhs.get_state_merkle_root());
      set_events(rhs.get_events());
      set_transaction_receipts(rhs.get_transaction_receipts());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }

    inline void clear_height() { height_.clear(); }
    inline void set_height(const EmbeddedProto::uint64& value) { height_ = value; }
    inline void set_height(const EmbeddedProto::uint64&& value) { height_ = value; }
    inline EmbeddedProto::uint64& mutable_height() { return height_; }
    inline const EmbeddedProto::uint64& get_height() const { return height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE height() const { return height_.get(); }

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

    inline void clear_state_merkle_root() { state_merkle_root_.clear(); }
    inline ::EmbeddedProto::FieldBytes<state_merkle_root_LENGTH>& mutable_state_merkle_root() { return state_merkle_root_; }
    inline void set_state_merkle_root(const ::EmbeddedProto::FieldBytes<state_merkle_root_LENGTH>& rhs) { state_merkle_root_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<state_merkle_root_LENGTH>& get_state_merkle_root() const { return state_merkle_root_; }
    inline const uint8_t* state_merkle_root() const { return state_merkle_root_.get_const(); }

    inline const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& events(uint32_t index) const { return events_[index]; }
    inline void clear_events() { events_.clear(); }
    inline void set_events(uint32_t index, const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& value) { events_.set(index, value); }
    inline void set_events(uint32_t index, const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>&& value) { events_.set(index, value); }
    inline void set_events(const ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& values) { events_ = values; }
    inline void add_events(const event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& value) { events_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& mutable_events() { return events_; }
    inline event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>& mutable_events(uint32_t index) { return events_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& get_events() const { return events_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH>& events() const { return events_; }

    inline const transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>& transaction_receipts(uint32_t index) const { return transaction_receipts_[index]; }
    inline void clear_transaction_receipts() { transaction_receipts_.clear(); }
    inline void set_transaction_receipts(uint32_t index, const transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>& value) { transaction_receipts_.set(index, value); }
    inline void set_transaction_receipts(uint32_t index, const transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>&& value) { transaction_receipts_.set(index, value); }
    inline void set_transaction_receipts(const ::EmbeddedProto::RepeatedFieldFixedSize<transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>, transaction_receipts_REP_LENGTH>& values) { transaction_receipts_ = values; }
    inline void add_transaction_receipts(const transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>& value) { transaction_receipts_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>, transaction_receipts_REP_LENGTH>& mutable_transaction_receipts() { return transaction_receipts_; }
    inline transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>& mutable_transaction_receipts(uint32_t index) { return transaction_receipts_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>, transaction_receipts_REP_LENGTH>& get_transaction_receipts() const { return transaction_receipts_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>, transaction_receipts_REP_LENGTH>& transaction_receipts() const { return transaction_receipts_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
      }

      if((0U != height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::HEIGHT), buffer, false);
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

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = state_merkle_root_.serialize_with_id(static_cast<uint32_t>(FieldNumber::STATE_MERKLE_ROOT), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = events_.serialize_with_id(static_cast<uint32_t>(FieldNumber::EVENTS), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = transaction_receipts_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TRANSACTION_RECEIPTS), buffer, false);
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

          case FieldNumber::HEIGHT:
            return_value = height_.deserialize_check_type(buffer, wire_type);
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

          case FieldNumber::STATE_MERKLE_ROOT:
            return_value = state_merkle_root_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::EVENTS:
            return_value = events_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TRANSACTION_RECEIPTS:
            return_value = transaction_receipts_.deserialize_check_type(buffer, wire_type);
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
      clear_height();
      clear_disk_storage_used();
      clear_network_bandwidth_used();
      clear_compute_bandwidth_used();
      clear_state_merkle_root();
      clear_events();
      clear_transaction_receipts();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      EmbeddedProto::uint64 height_ = 0U;
      EmbeddedProto::uint64 disk_storage_used_ = 0U;
      EmbeddedProto::uint64 network_bandwidth_used_ = 0U;
      EmbeddedProto::uint64 compute_bandwidth_used_ = 0U;
      ::EmbeddedProto::FieldBytes<state_merkle_root_LENGTH> state_merkle_root_;
      ::EmbeddedProto::RepeatedFieldFixedSize<event_data<events_source_LENGTH, events_name_LENGTH, events_data_LENGTH, events_impacted_REP_LENGTH, events_impacted_LENGTH>, events_REP_LENGTH> events_;
      ::EmbeddedProto::RepeatedFieldFixedSize<transaction_receipt<transaction_receipts_id_LENGTH, transaction_receipts_payer_LENGTH, transaction_receipts_events_REP_LENGTH, transaction_receipts_events_source_LENGTH, transaction_receipts_events_name_LENGTH, transaction_receipts_events_data_LENGTH, transaction_receipts_events_impacted_REP_LENGTH, transaction_receipts_events_impacted_LENGTH>, transaction_receipts_REP_LENGTH> transaction_receipts_;

};

} // End of namespace protocol
} // End of namespace koinos
#endif // KOINOS_PROTOCOL_PROTOCOL_H