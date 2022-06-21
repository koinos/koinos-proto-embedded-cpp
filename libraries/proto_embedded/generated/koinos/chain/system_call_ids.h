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
#ifndef KOINOS_CHAIN_SYSTEM_CALL_IDS_H
#define KOINOS_CHAIN_SYSTEM_CALL_IDS_H

#include <cstdint>
// Include external proto definitions

namespace koinos {
namespace chain {

enum class system_call_id : int32_t
{
  reserved_id = 0,
  get_head_info = 1,
  apply_block = 2,
  apply_transaction = 3,
  apply_upload_contract_operation = 4,
  apply_call_contract_operation = 5,
  apply_set_system_call_operation = 6,
  apply_set_system_contract_operation = 7,
  pre_block_callback = 8,
  post_block_callback = 9,
  pre_transaction_callback = 10,
  post_transaction_callback = 11,
  get_chain_id = 12,
  process_block_signature = 101,
  get_transaction = 102,
  get_transaction_field = 103,
  get_block = 104,
  get_block_field = 105,
  get_last_irreversible_block = 106,
  get_account_nonce = 107,
  verify_account_nonce = 108,
  set_account_nonce = 109,
  check_system_authority = 110,
  get_operation = 111,
  get_account_rc = 201,
  consume_account_rc = 202,
  get_resource_limits = 203,
  consume_block_resources = 204,
  put_object = 301,
  remove_object = 302,
  get_object = 303,
  get_next_object = 304,
  get_prev_object = 305,
  log = 401,
  event = 402,
  hash = 501,
  recover_public_key = 502,
  verify_merkle_root = 503,
  verify_signature = 504,
  verify_vrf_proof = 505,
  call = 601,
  exit = 602,
  get_arguments = 603,
  get_contract_id = 604,
  get_caller = 605,
  check_authority = 606
};

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_SYSTEM_CALL_IDS_H