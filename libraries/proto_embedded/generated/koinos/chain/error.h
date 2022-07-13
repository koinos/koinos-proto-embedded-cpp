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
#ifndef KOINOS_CHAIN_ERROR_H
#define KOINOS_CHAIN_ERROR_H

#include <cstdint>
// Include external proto definitions

namespace koinos {
namespace chain {

enum class error_code : int32_t
{
  success = 0,
  reversion = 1,
  internal_error = 100,
  system_authorization_failure = 101,
  invalid_contract = 102,
  insufficient_privileges = 103,
  insufficient_rc = 104,
  insufficient_return_buffer = 105,
  unknown_thunk = 106,
  unknown_operation = 107,
  read_only_context = 108,
  failure = -1,
  field_not_found = -100,
  unknown_hash_code = -101,
  unknown_dsa = -102,
  unknown_system_call = -103,
  operation_not_found = -104,
  authorization_failure = -200,
  invalid_nonce = -201,
  invalid_signature = -202,
  malformed_block = -203,
  malformed_transaction = -204,
  block_resource_failure = -205,
  unknown_backend = -1000,
  unexpected_state = -1001,
  missing_required_arguments = -1002,
  unknown_previous_block = -1003,
  unexpected_height = -1004,
  block_state_error = -1005,
  state_merkle_mismatch = -1006,
  unexpected_receipt = -1007,
  rpc_failure = -1008,
  pending_state_error = -1009,
  timestamp_out_of_bounds = -1010,
  indexer_failure = -1011,
  network_bandwidth_limit_exceeded = -1012,
  compute_bandwidth_limit_exceeded = -1013,
  disk_storage_limit_exceeded = -1014
};

} // End of namespace chain
} // End of namespace koinos
#endif // KOINOS_CHAIN_ERROR_H