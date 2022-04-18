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
#ifndef KOINOS_CONTRACTS_GOVERNANCE_GOVERNANCE_H
#define KOINOS_CONTRACTS_GOVERNANCE_GOVERNANCE_H

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
#include <koinos/protocol/protocol.h>

namespace koinos {
namespace contracts {
namespace governance {

enum class proposal_status : uint32_t
{
  pending = 0,
  active = 1,
  approved = 2,
  expired = 3,
  applied = 4
};

template<uint32_t proposal_id_LENGTH, 
uint32_t proposal_header_chain_id_LENGTH, 
uint32_t proposal_header_nonce_LENGTH, 
uint32_t proposal_header_operation_merkle_root_LENGTH, 
uint32_t proposal_header_payer_LENGTH, 
uint32_t proposal_header_payee_LENGTH, 
uint32_t proposal_operations_REP_LENGTH, 
uint32_t proposal_operations_upload_contract_contract_id_LENGTH, 
uint32_t proposal_operations_upload_contract_bytecode_LENGTH, 
uint32_t proposal_operations_upload_contract_abi_LENGTH, 
uint32_t proposal_operations_call_contract_contract_id_LENGTH, 
uint32_t proposal_operations_call_contract_args_LENGTH, 
uint32_t proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t proposal_operations_set_system_contract_contract_id_LENGTH, 
uint32_t proposal_signatures_REP_LENGTH, 
uint32_t proposal_signatures_LENGTH>
class proposal_record final: public ::EmbeddedProto::MessageInterface
{
  public:
    proposal_record() = default;
    proposal_record(const proposal_record& rhs )
    {
      set_proposal(rhs.get_proposal());
      set_vote_start_height(rhs.get_vote_start_height());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
      set_shall_authorize(rhs.get_shall_authorize());
      set_updates_governance(rhs.get_updates_governance());
      set_status(rhs.get_status());
    }

    proposal_record(const proposal_record&& rhs ) noexcept
    {
      set_proposal(rhs.get_proposal());
      set_vote_start_height(rhs.get_vote_start_height());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
      set_shall_authorize(rhs.get_shall_authorize());
      set_updates_governance(rhs.get_updates_governance());
      set_status(rhs.get_status());
    }

    ~proposal_record() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PROPOSAL = 1,
      VOTE_START_HEIGHT = 2,
      VOTE_TALLY = 3,
      VOTE_THRESHOLD = 4,
      SHALL_AUTHORIZE = 5,
      UPDATES_GOVERNANCE = 6,
      STATUS = 7
    };

    proposal_record& operator=(const proposal_record& rhs)
    {
      set_proposal(rhs.get_proposal());
      set_vote_start_height(rhs.get_vote_start_height());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
      set_shall_authorize(rhs.get_shall_authorize());
      set_updates_governance(rhs.get_updates_governance());
      set_status(rhs.get_status());
      return *this;
    }

    proposal_record& operator=(const proposal_record&& rhs) noexcept
    {
      set_proposal(rhs.get_proposal());
      set_vote_start_height(rhs.get_vote_start_height());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
      set_shall_authorize(rhs.get_shall_authorize());
      set_updates_governance(rhs.get_updates_governance());
      set_status(rhs.get_status());
      return *this;
    }

    inline void clear_proposal() { proposal_.clear(); }
    inline void set_proposal(const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& value) { proposal_ = value; }
    inline void set_proposal(const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>&& value) { proposal_ = value; }
    inline protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& mutable_proposal() { return proposal_; }
    inline const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& get_proposal() const { return proposal_; }
    inline const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& proposal() const { return proposal_; }

    inline void clear_vote_start_height() { vote_start_height_.clear(); }
    inline void set_vote_start_height(const EmbeddedProto::uint64& value) { vote_start_height_ = value; }
    inline void set_vote_start_height(const EmbeddedProto::uint64&& value) { vote_start_height_ = value; }
    inline EmbeddedProto::uint64& mutable_vote_start_height() { return vote_start_height_; }
    inline const EmbeddedProto::uint64& get_vote_start_height() const { return vote_start_height_; }
    inline EmbeddedProto::uint64::FIELD_TYPE vote_start_height() const { return vote_start_height_.get(); }

    inline void clear_vote_tally() { vote_tally_.clear(); }
    inline void set_vote_tally(const EmbeddedProto::uint64& value) { vote_tally_ = value; }
    inline void set_vote_tally(const EmbeddedProto::uint64&& value) { vote_tally_ = value; }
    inline EmbeddedProto::uint64& mutable_vote_tally() { return vote_tally_; }
    inline const EmbeddedProto::uint64& get_vote_tally() const { return vote_tally_; }
    inline EmbeddedProto::uint64::FIELD_TYPE vote_tally() const { return vote_tally_.get(); }

    inline void clear_vote_threshold() { vote_threshold_.clear(); }
    inline void set_vote_threshold(const EmbeddedProto::uint64& value) { vote_threshold_ = value; }
    inline void set_vote_threshold(const EmbeddedProto::uint64&& value) { vote_threshold_ = value; }
    inline EmbeddedProto::uint64& mutable_vote_threshold() { return vote_threshold_; }
    inline const EmbeddedProto::uint64& get_vote_threshold() const { return vote_threshold_; }
    inline EmbeddedProto::uint64::FIELD_TYPE vote_threshold() const { return vote_threshold_.get(); }

    inline void clear_shall_authorize() { shall_authorize_.clear(); }
    inline void set_shall_authorize(const EmbeddedProto::boolean& value) { shall_authorize_ = value; }
    inline void set_shall_authorize(const EmbeddedProto::boolean&& value) { shall_authorize_ = value; }
    inline EmbeddedProto::boolean& mutable_shall_authorize() { return shall_authorize_; }
    inline const EmbeddedProto::boolean& get_shall_authorize() const { return shall_authorize_; }
    inline EmbeddedProto::boolean::FIELD_TYPE shall_authorize() const { return shall_authorize_.get(); }

    inline void clear_updates_governance() { updates_governance_.clear(); }
    inline void set_updates_governance(const EmbeddedProto::boolean& value) { updates_governance_ = value; }
    inline void set_updates_governance(const EmbeddedProto::boolean&& value) { updates_governance_ = value; }
    inline EmbeddedProto::boolean& mutable_updates_governance() { return updates_governance_; }
    inline const EmbeddedProto::boolean& get_updates_governance() const { return updates_governance_; }
    inline EmbeddedProto::boolean::FIELD_TYPE updates_governance() const { return updates_governance_.get(); }

    inline void clear_status() { status_ = static_cast<proposal_status>(0); }
    inline void set_status(const proposal_status& value) { status_ = value; }
    inline void set_status(const proposal_status&& value) { status_ = value; }
    inline const proposal_status& get_status() const { return status_; }
    inline proposal_status status() const { return status_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = proposal_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PROPOSAL), buffer, false);
      }

      if((0U != vote_start_height_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vote_start_height_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VOTE_START_HEIGHT), buffer, false);
      }

      if((0U != vote_tally_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vote_tally_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VOTE_TALLY), buffer, false);
      }

      if((0U != vote_threshold_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vote_threshold_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VOTE_THRESHOLD), buffer, false);
      }

      if((false != shall_authorize_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = shall_authorize_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SHALL_AUTHORIZE), buffer, false);
      }

      if((false != updates_governance_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = updates_governance_.serialize_with_id(static_cast<uint32_t>(FieldNumber::UPDATES_GOVERNANCE), buffer, false);
      }

      if((static_cast<proposal_status>(0) != status_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(status_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::STATUS), buffer, false);
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
          case FieldNumber::PROPOSAL:
            return_value = proposal_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VOTE_START_HEIGHT:
            return_value = vote_start_height_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VOTE_TALLY:
            return_value = vote_tally_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VOTE_THRESHOLD:
            return_value = vote_threshold_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SHALL_AUTHORIZE:
            return_value = shall_authorize_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::UPDATES_GOVERNANCE:
            return_value = updates_governance_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::STATUS:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_status(static_cast<proposal_status>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
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
      clear_proposal();
      clear_vote_start_height();
      clear_vote_tally();
      clear_vote_threshold();
      clear_shall_authorize();
      clear_updates_governance();
      clear_status();

    }

    private:


      protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH> proposal_;
      EmbeddedProto::uint64 vote_start_height_ = 0U;
      EmbeddedProto::uint64 vote_tally_ = 0U;
      EmbeddedProto::uint64 vote_threshold_ = 0U;
      EmbeddedProto::boolean shall_authorize_ = false;
      EmbeddedProto::boolean updates_governance_ = false;
      proposal_status status_ = static_cast<proposal_status>(0);

};

template<uint32_t proposal_id_LENGTH, 
uint32_t proposal_header_chain_id_LENGTH, 
uint32_t proposal_header_nonce_LENGTH, 
uint32_t proposal_header_operation_merkle_root_LENGTH, 
uint32_t proposal_header_payer_LENGTH, 
uint32_t proposal_header_payee_LENGTH, 
uint32_t proposal_operations_REP_LENGTH, 
uint32_t proposal_operations_upload_contract_contract_id_LENGTH, 
uint32_t proposal_operations_upload_contract_bytecode_LENGTH, 
uint32_t proposal_operations_upload_contract_abi_LENGTH, 
uint32_t proposal_operations_call_contract_contract_id_LENGTH, 
uint32_t proposal_operations_call_contract_args_LENGTH, 
uint32_t proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t proposal_operations_set_system_contract_contract_id_LENGTH, 
uint32_t proposal_signatures_REP_LENGTH, 
uint32_t proposal_signatures_LENGTH>
class submit_proposal_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_proposal_arguments() = default;
    submit_proposal_arguments(const submit_proposal_arguments& rhs )
    {
      set_proposal(rhs.get_proposal());
      set_fee(rhs.get_fee());
    }

    submit_proposal_arguments(const submit_proposal_arguments&& rhs ) noexcept
    {
      set_proposal(rhs.get_proposal());
      set_fee(rhs.get_fee());
    }

    ~submit_proposal_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PROPOSAL = 1,
      FEE = 2
    };

    submit_proposal_arguments& operator=(const submit_proposal_arguments& rhs)
    {
      set_proposal(rhs.get_proposal());
      set_fee(rhs.get_fee());
      return *this;
    }

    submit_proposal_arguments& operator=(const submit_proposal_arguments&& rhs) noexcept
    {
      set_proposal(rhs.get_proposal());
      set_fee(rhs.get_fee());
      return *this;
    }

    inline void clear_proposal() { proposal_.clear(); }
    inline void set_proposal(const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& value) { proposal_ = value; }
    inline void set_proposal(const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>&& value) { proposal_ = value; }
    inline protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& mutable_proposal() { return proposal_; }
    inline const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& get_proposal() const { return proposal_; }
    inline const protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH>& proposal() const { return proposal_; }

    inline void clear_fee() { fee_.clear(); }
    inline void set_fee(const EmbeddedProto::uint64& value) { fee_ = value; }
    inline void set_fee(const EmbeddedProto::uint64&& value) { fee_ = value; }
    inline EmbeddedProto::uint64& mutable_fee() { return fee_; }
    inline const EmbeddedProto::uint64& get_fee() const { return fee_; }
    inline EmbeddedProto::uint64::FIELD_TYPE fee() const { return fee_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = proposal_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PROPOSAL), buffer, false);
      }

      if((0U != fee_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = fee_.serialize_with_id(static_cast<uint32_t>(FieldNumber::FEE), buffer, false);
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
          case FieldNumber::PROPOSAL:
            return_value = proposal_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::FEE:
            return_value = fee_.deserialize_check_type(buffer, wire_type);
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
      clear_proposal();
      clear_fee();

    }

    private:


      protocol::transaction<proposal_id_LENGTH, proposal_header_chain_id_LENGTH, proposal_header_nonce_LENGTH, proposal_header_operation_merkle_root_LENGTH, proposal_header_payer_LENGTH, proposal_header_payee_LENGTH, proposal_operations_REP_LENGTH, proposal_operations_upload_contract_contract_id_LENGTH, proposal_operations_upload_contract_bytecode_LENGTH, proposal_operations_upload_contract_abi_LENGTH, proposal_operations_call_contract_contract_id_LENGTH, proposal_operations_call_contract_args_LENGTH, proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_operations_set_system_contract_contract_id_LENGTH, proposal_signatures_REP_LENGTH, proposal_signatures_LENGTH> proposal_;
      EmbeddedProto::uint64 fee_ = 0U;

};

class submit_proposal_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    submit_proposal_result() = default;
    submit_proposal_result(const submit_proposal_result& rhs )
    {
      set_value(rhs.get_value());
    }

    submit_proposal_result(const submit_proposal_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~submit_proposal_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    submit_proposal_result& operator=(const submit_proposal_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    submit_proposal_result& operator=(const submit_proposal_result&& rhs) noexcept
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

template<uint32_t proposal_id_LENGTH>
class get_proposal_by_id_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_proposal_by_id_arguments() = default;
    get_proposal_by_id_arguments(const get_proposal_by_id_arguments& rhs )
    {
      set_proposal_id(rhs.get_proposal_id());
    }

    get_proposal_by_id_arguments(const get_proposal_by_id_arguments&& rhs ) noexcept
    {
      set_proposal_id(rhs.get_proposal_id());
    }

    ~get_proposal_by_id_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PROPOSAL_ID = 1
    };

    get_proposal_by_id_arguments& operator=(const get_proposal_by_id_arguments& rhs)
    {
      set_proposal_id(rhs.get_proposal_id());
      return *this;
    }

    get_proposal_by_id_arguments& operator=(const get_proposal_by_id_arguments&& rhs) noexcept
    {
      set_proposal_id(rhs.get_proposal_id());
      return *this;
    }

    inline void clear_proposal_id() { proposal_id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<proposal_id_LENGTH>& mutable_proposal_id() { return proposal_id_; }
    inline void set_proposal_id(const ::EmbeddedProto::FieldBytes<proposal_id_LENGTH>& rhs) { proposal_id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<proposal_id_LENGTH>& get_proposal_id() const { return proposal_id_; }
    inline const uint8_t* proposal_id() const { return proposal_id_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = proposal_id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PROPOSAL_ID), buffer, false);
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
          case FieldNumber::PROPOSAL_ID:
            return_value = proposal_id_.deserialize_check_type(buffer, wire_type);
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
      clear_proposal_id();

    }

    private:


      ::EmbeddedProto::FieldBytes<proposal_id_LENGTH> proposal_id_;

};

template<uint32_t value_proposal_id_LENGTH, 
uint32_t value_proposal_header_chain_id_LENGTH, 
uint32_t value_proposal_header_nonce_LENGTH, 
uint32_t value_proposal_header_operation_merkle_root_LENGTH, 
uint32_t value_proposal_header_payer_LENGTH, 
uint32_t value_proposal_header_payee_LENGTH, 
uint32_t value_proposal_operations_REP_LENGTH, 
uint32_t value_proposal_operations_upload_contract_contract_id_LENGTH, 
uint32_t value_proposal_operations_upload_contract_bytecode_LENGTH, 
uint32_t value_proposal_operations_upload_contract_abi_LENGTH, 
uint32_t value_proposal_operations_call_contract_contract_id_LENGTH, 
uint32_t value_proposal_operations_call_contract_args_LENGTH, 
uint32_t value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t value_proposal_operations_set_system_contract_contract_id_LENGTH, 
uint32_t value_proposal_signatures_REP_LENGTH, 
uint32_t value_proposal_signatures_LENGTH>
class get_proposal_by_id_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_proposal_by_id_result() = default;
    get_proposal_by_id_result(const get_proposal_by_id_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_proposal_by_id_result(const get_proposal_by_id_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_proposal_by_id_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_proposal_by_id_result& operator=(const get_proposal_by_id_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_proposal_by_id_result& operator=(const get_proposal_by_id_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline void clear_value() { value_.clear(); }
    inline void set_value(const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value) { value_ = value; }
    inline void set_value(const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>&& value) { value_ = value; }
    inline proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& mutable_value() { return value_; }
    inline const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& get_value() const { return value_; }
    inline const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value() const { return value_; }


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


      proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH> value_;

};

template<uint32_t start_proposal_LENGTH>
class get_proposals_by_status_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_proposals_by_status_arguments() = default;
    get_proposals_by_status_arguments(const get_proposals_by_status_arguments& rhs )
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
      set_status(rhs.get_status());
    }

    get_proposals_by_status_arguments(const get_proposals_by_status_arguments&& rhs ) noexcept
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
      set_status(rhs.get_status());
    }

    ~get_proposals_by_status_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      START_PROPOSAL = 1,
      LIMIT = 2,
      STATUS = 3
    };

    get_proposals_by_status_arguments& operator=(const get_proposals_by_status_arguments& rhs)
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
      set_status(rhs.get_status());
      return *this;
    }

    get_proposals_by_status_arguments& operator=(const get_proposals_by_status_arguments&& rhs) noexcept
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
      set_status(rhs.get_status());
      return *this;
    }

    inline void clear_start_proposal() { start_proposal_.clear(); }
    inline ::EmbeddedProto::FieldBytes<start_proposal_LENGTH>& mutable_start_proposal() { return start_proposal_; }
    inline void set_start_proposal(const ::EmbeddedProto::FieldBytes<start_proposal_LENGTH>& rhs) { start_proposal_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<start_proposal_LENGTH>& get_start_proposal() const { return start_proposal_; }
    inline const uint8_t* start_proposal() const { return start_proposal_.get_const(); }

    inline void clear_limit() { limit_.clear(); }
    inline void set_limit(const EmbeddedProto::uint64& value) { limit_ = value; }
    inline void set_limit(const EmbeddedProto::uint64&& value) { limit_ = value; }
    inline EmbeddedProto::uint64& mutable_limit() { return limit_; }
    inline const EmbeddedProto::uint64& get_limit() const { return limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE limit() const { return limit_.get(); }

    inline void clear_status() { status_ = static_cast<proposal_status>(0); }
    inline void set_status(const proposal_status& value) { status_ = value; }
    inline void set_status(const proposal_status&& value) { status_ = value; }
    inline const proposal_status& get_status() const { return status_; }
    inline proposal_status status() const { return status_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = start_proposal_.serialize_with_id(static_cast<uint32_t>(FieldNumber::START_PROPOSAL), buffer, false);
      }

      if((0U != limit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = limit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LIMIT), buffer, false);
      }

      if((static_cast<proposal_status>(0) != status_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(status_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::STATUS), buffer, false);
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
          case FieldNumber::START_PROPOSAL:
            return_value = start_proposal_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LIMIT:
            return_value = limit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::STATUS:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_status(static_cast<proposal_status>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
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
      clear_start_proposal();
      clear_limit();
      clear_status();

    }

    private:


      ::EmbeddedProto::FieldBytes<start_proposal_LENGTH> start_proposal_;
      EmbeddedProto::uint64 limit_ = 0U;
      proposal_status status_ = static_cast<proposal_status>(0);

};

template<uint32_t value_REP_LENGTH, 
uint32_t value_proposal_id_LENGTH, 
uint32_t value_proposal_header_chain_id_LENGTH, 
uint32_t value_proposal_header_nonce_LENGTH, 
uint32_t value_proposal_header_operation_merkle_root_LENGTH, 
uint32_t value_proposal_header_payer_LENGTH, 
uint32_t value_proposal_header_payee_LENGTH, 
uint32_t value_proposal_operations_REP_LENGTH, 
uint32_t value_proposal_operations_upload_contract_contract_id_LENGTH, 
uint32_t value_proposal_operations_upload_contract_bytecode_LENGTH, 
uint32_t value_proposal_operations_upload_contract_abi_LENGTH, 
uint32_t value_proposal_operations_call_contract_contract_id_LENGTH, 
uint32_t value_proposal_operations_call_contract_args_LENGTH, 
uint32_t value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t value_proposal_operations_set_system_contract_contract_id_LENGTH, 
uint32_t value_proposal_signatures_REP_LENGTH, 
uint32_t value_proposal_signatures_LENGTH>
class get_proposals_by_status_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_proposals_by_status_result() = default;
    get_proposals_by_status_result(const get_proposals_by_status_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_proposals_by_status_result(const get_proposals_by_status_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_proposals_by_status_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_proposals_by_status_result& operator=(const get_proposals_by_status_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_proposals_by_status_result& operator=(const get_proposals_by_status_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value(uint32_t index) const { return value_[index]; }
    inline void clear_value() { value_.clear(); }
    inline void set_value(uint32_t index, const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value) { value_.set(index, value); }
    inline void set_value(uint32_t index, const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>&& value) { value_.set(index, value); }
    inline void set_value(const ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& values) { value_ = values; }
    inline void add_value(const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value) { value_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& mutable_value() { return value_; }
    inline proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& mutable_value(uint32_t index) { return value_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& get_value() const { return value_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& value() const { return value_; }


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


      ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH> value_;

};

template<uint32_t start_proposal_LENGTH>
class get_proposals_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_proposals_arguments() = default;
    get_proposals_arguments(const get_proposals_arguments& rhs )
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
    }

    get_proposals_arguments(const get_proposals_arguments&& rhs ) noexcept
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
    }

    ~get_proposals_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      START_PROPOSAL = 1,
      LIMIT = 2
    };

    get_proposals_arguments& operator=(const get_proposals_arguments& rhs)
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
      return *this;
    }

    get_proposals_arguments& operator=(const get_proposals_arguments&& rhs) noexcept
    {
      set_start_proposal(rhs.get_start_proposal());
      set_limit(rhs.get_limit());
      return *this;
    }

    inline void clear_start_proposal() { start_proposal_.clear(); }
    inline ::EmbeddedProto::FieldBytes<start_proposal_LENGTH>& mutable_start_proposal() { return start_proposal_; }
    inline void set_start_proposal(const ::EmbeddedProto::FieldBytes<start_proposal_LENGTH>& rhs) { start_proposal_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<start_proposal_LENGTH>& get_start_proposal() const { return start_proposal_; }
    inline const uint8_t* start_proposal() const { return start_proposal_.get_const(); }

    inline void clear_limit() { limit_.clear(); }
    inline void set_limit(const EmbeddedProto::uint64& value) { limit_ = value; }
    inline void set_limit(const EmbeddedProto::uint64&& value) { limit_ = value; }
    inline EmbeddedProto::uint64& mutable_limit() { return limit_; }
    inline const EmbeddedProto::uint64& get_limit() const { return limit_; }
    inline EmbeddedProto::uint64::FIELD_TYPE limit() const { return limit_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = start_proposal_.serialize_with_id(static_cast<uint32_t>(FieldNumber::START_PROPOSAL), buffer, false);
      }

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
          case FieldNumber::START_PROPOSAL:
            return_value = start_proposal_.deserialize_check_type(buffer, wire_type);
            break;

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
      clear_start_proposal();
      clear_limit();

    }

    private:


      ::EmbeddedProto::FieldBytes<start_proposal_LENGTH> start_proposal_;
      EmbeddedProto::uint64 limit_ = 0U;

};

template<uint32_t value_REP_LENGTH, 
uint32_t value_proposal_id_LENGTH, 
uint32_t value_proposal_header_chain_id_LENGTH, 
uint32_t value_proposal_header_nonce_LENGTH, 
uint32_t value_proposal_header_operation_merkle_root_LENGTH, 
uint32_t value_proposal_header_payer_LENGTH, 
uint32_t value_proposal_header_payee_LENGTH, 
uint32_t value_proposal_operations_REP_LENGTH, 
uint32_t value_proposal_operations_upload_contract_contract_id_LENGTH, 
uint32_t value_proposal_operations_upload_contract_bytecode_LENGTH, 
uint32_t value_proposal_operations_upload_contract_abi_LENGTH, 
uint32_t value_proposal_operations_call_contract_contract_id_LENGTH, 
uint32_t value_proposal_operations_call_contract_args_LENGTH, 
uint32_t value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t value_proposal_operations_set_system_contract_contract_id_LENGTH, 
uint32_t value_proposal_signatures_REP_LENGTH, 
uint32_t value_proposal_signatures_LENGTH>
class get_proposals_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    get_proposals_result() = default;
    get_proposals_result(const get_proposals_result& rhs )
    {
      set_value(rhs.get_value());
    }

    get_proposals_result(const get_proposals_result&& rhs ) noexcept
    {
      set_value(rhs.get_value());
    }

    ~get_proposals_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALUE = 1
    };

    get_proposals_result& operator=(const get_proposals_result& rhs)
    {
      set_value(rhs.get_value());
      return *this;
    }

    get_proposals_result& operator=(const get_proposals_result&& rhs) noexcept
    {
      set_value(rhs.get_value());
      return *this;
    }

    inline const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value(uint32_t index) const { return value_[index]; }
    inline void clear_value() { value_.clear(); }
    inline void set_value(uint32_t index, const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value) { value_.set(index, value); }
    inline void set_value(uint32_t index, const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>&& value) { value_.set(index, value); }
    inline void set_value(const ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& values) { value_ = values; }
    inline void add_value(const proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& value) { value_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& mutable_value() { return value_; }
    inline proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>& mutable_value(uint32_t index) { return value_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& get_value() const { return value_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH>& value() const { return value_; }


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


      ::EmbeddedProto::RepeatedFieldFixedSize<proposal_record<value_proposal_id_LENGTH, value_proposal_header_chain_id_LENGTH, value_proposal_header_nonce_LENGTH, value_proposal_header_operation_merkle_root_LENGTH, value_proposal_header_payer_LENGTH, value_proposal_header_payee_LENGTH, value_proposal_operations_REP_LENGTH, value_proposal_operations_upload_contract_contract_id_LENGTH, value_proposal_operations_upload_contract_bytecode_LENGTH, value_proposal_operations_upload_contract_abi_LENGTH, value_proposal_operations_call_contract_contract_id_LENGTH, value_proposal_operations_call_contract_args_LENGTH, value_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, value_proposal_operations_set_system_contract_contract_id_LENGTH, value_proposal_signatures_REP_LENGTH, value_proposal_signatures_LENGTH>, value_REP_LENGTH> value_;

};

template<uint32_t proposal_proposal_id_LENGTH, 
uint32_t proposal_proposal_header_chain_id_LENGTH, 
uint32_t proposal_proposal_header_nonce_LENGTH, 
uint32_t proposal_proposal_header_operation_merkle_root_LENGTH, 
uint32_t proposal_proposal_header_payer_LENGTH, 
uint32_t proposal_proposal_header_payee_LENGTH, 
uint32_t proposal_proposal_operations_REP_LENGTH, 
uint32_t proposal_proposal_operations_upload_contract_contract_id_LENGTH, 
uint32_t proposal_proposal_operations_upload_contract_bytecode_LENGTH, 
uint32_t proposal_proposal_operations_upload_contract_abi_LENGTH, 
uint32_t proposal_proposal_operations_call_contract_contract_id_LENGTH, 
uint32_t proposal_proposal_operations_call_contract_args_LENGTH, 
uint32_t proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, 
uint32_t proposal_proposal_operations_set_system_contract_contract_id_LENGTH, 
uint32_t proposal_proposal_signatures_REP_LENGTH, 
uint32_t proposal_proposal_signatures_LENGTH>
class proposal_submission_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    proposal_submission_event() = default;
    proposal_submission_event(const proposal_submission_event& rhs )
    {
      set_proposal(rhs.get_proposal());
    }

    proposal_submission_event(const proposal_submission_event&& rhs ) noexcept
    {
      set_proposal(rhs.get_proposal());
    }

    ~proposal_submission_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PROPOSAL = 1
    };

    proposal_submission_event& operator=(const proposal_submission_event& rhs)
    {
      set_proposal(rhs.get_proposal());
      return *this;
    }

    proposal_submission_event& operator=(const proposal_submission_event&& rhs) noexcept
    {
      set_proposal(rhs.get_proposal());
      return *this;
    }

    inline void clear_proposal() { proposal_.clear(); }
    inline void set_proposal(const proposal_record<proposal_proposal_id_LENGTH, proposal_proposal_header_chain_id_LENGTH, proposal_proposal_header_nonce_LENGTH, proposal_proposal_header_operation_merkle_root_LENGTH, proposal_proposal_header_payer_LENGTH, proposal_proposal_header_payee_LENGTH, proposal_proposal_operations_REP_LENGTH, proposal_proposal_operations_upload_contract_contract_id_LENGTH, proposal_proposal_operations_upload_contract_bytecode_LENGTH, proposal_proposal_operations_upload_contract_abi_LENGTH, proposal_proposal_operations_call_contract_contract_id_LENGTH, proposal_proposal_operations_call_contract_args_LENGTH, proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_proposal_operations_set_system_contract_contract_id_LENGTH, proposal_proposal_signatures_REP_LENGTH, proposal_proposal_signatures_LENGTH>& value) { proposal_ = value; }
    inline void set_proposal(const proposal_record<proposal_proposal_id_LENGTH, proposal_proposal_header_chain_id_LENGTH, proposal_proposal_header_nonce_LENGTH, proposal_proposal_header_operation_merkle_root_LENGTH, proposal_proposal_header_payer_LENGTH, proposal_proposal_header_payee_LENGTH, proposal_proposal_operations_REP_LENGTH, proposal_proposal_operations_upload_contract_contract_id_LENGTH, proposal_proposal_operations_upload_contract_bytecode_LENGTH, proposal_proposal_operations_upload_contract_abi_LENGTH, proposal_proposal_operations_call_contract_contract_id_LENGTH, proposal_proposal_operations_call_contract_args_LENGTH, proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_proposal_operations_set_system_contract_contract_id_LENGTH, proposal_proposal_signatures_REP_LENGTH, proposal_proposal_signatures_LENGTH>&& value) { proposal_ = value; }
    inline proposal_record<proposal_proposal_id_LENGTH, proposal_proposal_header_chain_id_LENGTH, proposal_proposal_header_nonce_LENGTH, proposal_proposal_header_operation_merkle_root_LENGTH, proposal_proposal_header_payer_LENGTH, proposal_proposal_header_payee_LENGTH, proposal_proposal_operations_REP_LENGTH, proposal_proposal_operations_upload_contract_contract_id_LENGTH, proposal_proposal_operations_upload_contract_bytecode_LENGTH, proposal_proposal_operations_upload_contract_abi_LENGTH, proposal_proposal_operations_call_contract_contract_id_LENGTH, proposal_proposal_operations_call_contract_args_LENGTH, proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_proposal_operations_set_system_contract_contract_id_LENGTH, proposal_proposal_signatures_REP_LENGTH, proposal_proposal_signatures_LENGTH>& mutable_proposal() { return proposal_; }
    inline const proposal_record<proposal_proposal_id_LENGTH, proposal_proposal_header_chain_id_LENGTH, proposal_proposal_header_nonce_LENGTH, proposal_proposal_header_operation_merkle_root_LENGTH, proposal_proposal_header_payer_LENGTH, proposal_proposal_header_payee_LENGTH, proposal_proposal_operations_REP_LENGTH, proposal_proposal_operations_upload_contract_contract_id_LENGTH, proposal_proposal_operations_upload_contract_bytecode_LENGTH, proposal_proposal_operations_upload_contract_abi_LENGTH, proposal_proposal_operations_call_contract_contract_id_LENGTH, proposal_proposal_operations_call_contract_args_LENGTH, proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_proposal_operations_set_system_contract_contract_id_LENGTH, proposal_proposal_signatures_REP_LENGTH, proposal_proposal_signatures_LENGTH>& get_proposal() const { return proposal_; }
    inline const proposal_record<proposal_proposal_id_LENGTH, proposal_proposal_header_chain_id_LENGTH, proposal_proposal_header_nonce_LENGTH, proposal_proposal_header_operation_merkle_root_LENGTH, proposal_proposal_header_payer_LENGTH, proposal_proposal_header_payee_LENGTH, proposal_proposal_operations_REP_LENGTH, proposal_proposal_operations_upload_contract_contract_id_LENGTH, proposal_proposal_operations_upload_contract_bytecode_LENGTH, proposal_proposal_operations_upload_contract_abi_LENGTH, proposal_proposal_operations_call_contract_contract_id_LENGTH, proposal_proposal_operations_call_contract_args_LENGTH, proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_proposal_operations_set_system_contract_contract_id_LENGTH, proposal_proposal_signatures_REP_LENGTH, proposal_proposal_signatures_LENGTH>& proposal() const { return proposal_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = proposal_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PROPOSAL), buffer, false);
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
          case FieldNumber::PROPOSAL:
            return_value = proposal_.deserialize_check_type(buffer, wire_type);
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
      clear_proposal();

    }

    private:


      proposal_record<proposal_proposal_id_LENGTH, proposal_proposal_header_chain_id_LENGTH, proposal_proposal_header_nonce_LENGTH, proposal_proposal_header_operation_merkle_root_LENGTH, proposal_proposal_header_payer_LENGTH, proposal_proposal_header_payee_LENGTH, proposal_proposal_operations_REP_LENGTH, proposal_proposal_operations_upload_contract_contract_id_LENGTH, proposal_proposal_operations_upload_contract_bytecode_LENGTH, proposal_proposal_operations_upload_contract_abi_LENGTH, proposal_proposal_operations_call_contract_contract_id_LENGTH, proposal_proposal_operations_call_contract_args_LENGTH, proposal_proposal_operations_set_system_call_target_system_call_bundle_contract_id_LENGTH, proposal_proposal_operations_set_system_contract_contract_id_LENGTH, proposal_proposal_signatures_REP_LENGTH, proposal_proposal_signatures_LENGTH> proposal_;

};

template<uint32_t id_LENGTH>
class proposal_status_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    proposal_status_event() = default;
    proposal_status_event(const proposal_status_event& rhs )
    {
      set_id(rhs.get_id());
      set_status(rhs.get_status());
    }

    proposal_status_event(const proposal_status_event&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_status(rhs.get_status());
    }

    ~proposal_status_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      STATUS = 2
    };

    proposal_status_event& operator=(const proposal_status_event& rhs)
    {
      set_id(rhs.get_id());
      set_status(rhs.get_status());
      return *this;
    }

    proposal_status_event& operator=(const proposal_status_event&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_status(rhs.get_status());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }

    inline void clear_status() { status_ = static_cast<proposal_status>(0); }
    inline void set_status(const proposal_status& value) { status_ = value; }
    inline void set_status(const proposal_status&& value) { status_ = value; }
    inline const proposal_status& get_status() const { return status_; }
    inline proposal_status status() const { return status_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
      }

      if((static_cast<proposal_status>(0) != status_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(status_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(FieldNumber::STATUS), buffer, false);
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

          case FieldNumber::STATUS:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_status(static_cast<proposal_status>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
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
      clear_status();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      proposal_status status_ = static_cast<proposal_status>(0);

};

template<uint32_t id_LENGTH>
class proposal_vote_event final: public ::EmbeddedProto::MessageInterface
{
  public:
    proposal_vote_event() = default;
    proposal_vote_event(const proposal_vote_event& rhs )
    {
      set_id(rhs.get_id());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
    }

    proposal_vote_event(const proposal_vote_event&& rhs ) noexcept
    {
      set_id(rhs.get_id());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
    }

    ~proposal_vote_event() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ID = 1,
      VOTE_TALLY = 2,
      VOTE_THRESHOLD = 3
    };

    proposal_vote_event& operator=(const proposal_vote_event& rhs)
    {
      set_id(rhs.get_id());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
      return *this;
    }

    proposal_vote_event& operator=(const proposal_vote_event&& rhs) noexcept
    {
      set_id(rhs.get_id());
      set_vote_tally(rhs.get_vote_tally());
      set_vote_threshold(rhs.get_vote_threshold());
      return *this;
    }

    inline void clear_id() { id_.clear(); }
    inline ::EmbeddedProto::FieldBytes<id_LENGTH>& mutable_id() { return id_; }
    inline void set_id(const ::EmbeddedProto::FieldBytes<id_LENGTH>& rhs) { id_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<id_LENGTH>& get_id() const { return id_; }
    inline const uint8_t* id() const { return id_.get_const(); }

    inline void clear_vote_tally() { vote_tally_.clear(); }
    inline void set_vote_tally(const EmbeddedProto::uint64& value) { vote_tally_ = value; }
    inline void set_vote_tally(const EmbeddedProto::uint64&& value) { vote_tally_ = value; }
    inline EmbeddedProto::uint64& mutable_vote_tally() { return vote_tally_; }
    inline const EmbeddedProto::uint64& get_vote_tally() const { return vote_tally_; }
    inline EmbeddedProto::uint64::FIELD_TYPE vote_tally() const { return vote_tally_.get(); }

    inline void clear_vote_threshold() { vote_threshold_.clear(); }
    inline void set_vote_threshold(const EmbeddedProto::uint64& value) { vote_threshold_ = value; }
    inline void set_vote_threshold(const EmbeddedProto::uint64&& value) { vote_threshold_ = value; }
    inline EmbeddedProto::uint64& mutable_vote_threshold() { return vote_threshold_; }
    inline const EmbeddedProto::uint64& get_vote_threshold() const { return vote_threshold_; }
    inline EmbeddedProto::uint64::FIELD_TYPE vote_threshold() const { return vote_threshold_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = id_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ID), buffer, false);
      }

      if((0U != vote_tally_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vote_tally_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VOTE_TALLY), buffer, false);
      }

      if((0U != vote_threshold_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vote_threshold_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VOTE_THRESHOLD), buffer, false);
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

          case FieldNumber::VOTE_TALLY:
            return_value = vote_tally_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::VOTE_THRESHOLD:
            return_value = vote_threshold_.deserialize_check_type(buffer, wire_type);
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
      clear_vote_tally();
      clear_vote_threshold();

    }

    private:


      ::EmbeddedProto::FieldBytes<id_LENGTH> id_;
      EmbeddedProto::uint64 vote_tally_ = 0U;
      EmbeddedProto::uint64 vote_threshold_ = 0U;

};

class block_callback_arguments final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_callback_arguments() = default;
    block_callback_arguments(const block_callback_arguments& rhs )
    {
    }

    block_callback_arguments(const block_callback_arguments&& rhs ) noexcept
    {
    }

    ~block_callback_arguments() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    block_callback_arguments& operator=(const block_callback_arguments& rhs)
    {
      return *this;
    }

    block_callback_arguments& operator=(const block_callback_arguments&& rhs) noexcept
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

class block_callback_result final: public ::EmbeddedProto::MessageInterface
{
  public:
    block_callback_result() = default;
    block_callback_result(const block_callback_result& rhs )
    {
    }

    block_callback_result(const block_callback_result&& rhs ) noexcept
    {
    }

    ~block_callback_result() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
    };

    block_callback_result& operator=(const block_callback_result& rhs)
    {
      return *this;
    }

    block_callback_result& operator=(const block_callback_result&& rhs) noexcept
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

} // End of namespace governance
} // End of namespace contracts
} // End of namespace koinos
#endif // KOINOS_CONTRACTS_GOVERNANCE_GOVERNANCE_H