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
#ifndef KOINOS_PROTOCOL_SYSTEM_CALL_IDS_H
#define KOINOS_PROTOCOL_SYSTEM_CALL_IDS_H

#include <cstdint>
// Include external proto definitions

namespace koinos {
namespace protocol {

enum class system_call_id : uint32_t
{
  reserved_id = 0,
  prints = 1,
  apply_block = 3,
  apply_transaction = 4,
  apply_upload_contract_operation = 5,
  apply_call_contract_operation = 6,
  apply_set_system_call_operation = 7,
  put_object = 8,
  get_object = 9,
  get_next_object = 10,
  get_prev_object = 11,
  call_contract = 12,
  get_entry_point = 13,
  get_contract_arguments_size = 14,
  get_contract_arguments = 15,
  set_contract_result = 16,
  exit_contract = 17,
  get_head_info = 18,
  hash = 19,
  recover_public_key = 20,
  process_block_signature = 21,
  verify_merkle_root = 22,
  get_transaction_payer = 23,
  get_transaction_rc_limit = 25,
  get_last_irreversible_block = 26,
  get_caller = 27,
  require_authority = 28,
  get_transaction_signature = 29,
  get_contract_id = 30,
  get_account_nonce = 31,
  get_account_rc = 32,
  consume_account_rc = 33,
  get_resource_limits = 34,
  consume_block_resources = 35,
  event = 36
};

} // End of namespace protocol
} // End of namespace koinos
#endif // KOINOS_PROTOCOL_SYSTEM_CALL_IDS_H