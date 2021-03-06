/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/gcp/handshaker.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "src/proto/grpc/gcp/handshaker.upb.h"
#include "src/proto/grpc/gcp/transport_security_common.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_field grpc_gcp_Endpoint__fields[3] = {
  {1, UPB_SIZE(8, 8), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(4, 4), 0, 0, 5, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(0, 0), 0, 0, 14, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_Endpoint_msginit = {
  NULL,
  &grpc_gcp_Endpoint__fields[0],
  UPB_SIZE(16, 32), 3, false, 3, 255,
};

static const upb_msglayout *const grpc_gcp_Identity_submsgs[1] = {
  &grpc_gcp_Identity_AttributesEntry_msginit,
};

static const upb_msglayout_field grpc_gcp_Identity__fields[3] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_MAP},
};

const upb_msglayout grpc_gcp_Identity_msginit = {
  &grpc_gcp_Identity_submsgs[0],
  &grpc_gcp_Identity__fields[0],
  UPB_SIZE(16, 32), 3, false, 3, 255,
};

static const upb_msglayout_field grpc_gcp_Identity_AttributesEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_Identity_AttributesEntry_msginit = {
  NULL,
  &grpc_gcp_Identity_AttributesEntry__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout *const grpc_gcp_StartClientHandshakeReq_submsgs[3] = {
  &grpc_gcp_Endpoint_msginit,
  &grpc_gcp_Identity_msginit,
  &grpc_gcp_RpcProtocolVersions_msginit,
};

static const upb_msglayout_field grpc_gcp_StartClientHandshakeReq__fields[10] = {
  {1, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(36, 64), 0, 0, 9, _UPB_MODE_ARRAY},
  {3, UPB_SIZE(40, 72), 0, 0, 9, _UPB_MODE_ARRAY},
  {4, UPB_SIZE(44, 80), 0, 1, 11, _UPB_MODE_ARRAY},
  {5, UPB_SIZE(20, 32), 1, 1, 11, _UPB_MODE_SCALAR},
  {6, UPB_SIZE(24, 40), 2, 0, 11, _UPB_MODE_SCALAR},
  {7, UPB_SIZE(28, 48), 3, 0, 11, _UPB_MODE_SCALAR},
  {8, UPB_SIZE(12, 16), 0, 0, 9, _UPB_MODE_SCALAR},
  {9, UPB_SIZE(32, 56), 4, 2, 11, _UPB_MODE_SCALAR},
  {10, UPB_SIZE(8, 8), 0, 0, 13, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_StartClientHandshakeReq_msginit = {
  &grpc_gcp_StartClientHandshakeReq_submsgs[0],
  &grpc_gcp_StartClientHandshakeReq__fields[0],
  UPB_SIZE(48, 96), 10, false, 10, 255,
};

static const upb_msglayout *const grpc_gcp_ServerHandshakeParameters_submsgs[1] = {
  &grpc_gcp_Identity_msginit,
};

static const upb_msglayout_field grpc_gcp_ServerHandshakeParameters__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_ARRAY},
  {2, UPB_SIZE(4, 8), 0, 0, 11, _UPB_MODE_ARRAY},
};

const upb_msglayout grpc_gcp_ServerHandshakeParameters_msginit = {
  &grpc_gcp_ServerHandshakeParameters_submsgs[0],
  &grpc_gcp_ServerHandshakeParameters__fields[0],
  UPB_SIZE(8, 16), 2, false, 2, 255,
};

static const upb_msglayout *const grpc_gcp_StartServerHandshakeReq_submsgs[3] = {
  &grpc_gcp_Endpoint_msginit,
  &grpc_gcp_RpcProtocolVersions_msginit,
  &grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_msginit,
};

static const upb_msglayout_field grpc_gcp_StartServerHandshakeReq__fields[7] = {
  {1, UPB_SIZE(28, 48), 0, 0, 9, _UPB_MODE_ARRAY},
  {2, UPB_SIZE(32, 56), 0, 2, 11, _UPB_MODE_MAP},
  {3, UPB_SIZE(8, 8), 0, 0, 12, _UPB_MODE_SCALAR},
  {4, UPB_SIZE(16, 24), 1, 0, 11, _UPB_MODE_SCALAR},
  {5, UPB_SIZE(20, 32), 2, 0, 11, _UPB_MODE_SCALAR},
  {6, UPB_SIZE(24, 40), 3, 1, 11, _UPB_MODE_SCALAR},
  {7, UPB_SIZE(4, 4), 0, 0, 13, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_StartServerHandshakeReq_msginit = {
  &grpc_gcp_StartServerHandshakeReq_submsgs[0],
  &grpc_gcp_StartServerHandshakeReq__fields[0],
  UPB_SIZE(40, 64), 7, false, 7, 255,
};

static const upb_msglayout *const grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_submsgs[1] = {
  &grpc_gcp_ServerHandshakeParameters_msginit,
};

static const upb_msglayout_field grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 5, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_msginit = {
  &grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_submsgs[0],
  &grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout_field grpc_gcp_NextHandshakeMessageReq__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 12, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_NextHandshakeMessageReq_msginit = {
  NULL,
  &grpc_gcp_NextHandshakeMessageReq__fields[0],
  UPB_SIZE(8, 16), 1, false, 1, 255,
};

static const upb_msglayout *const grpc_gcp_HandshakerReq_submsgs[3] = {
  &grpc_gcp_NextHandshakeMessageReq_msginit,
  &grpc_gcp_StartClientHandshakeReq_msginit,
  &grpc_gcp_StartServerHandshakeReq_msginit,
};

static const upb_msglayout_field grpc_gcp_HandshakerReq__fields[3] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_HandshakerReq_msginit = {
  &grpc_gcp_HandshakerReq_submsgs[0],
  &grpc_gcp_HandshakerReq__fields[0],
  UPB_SIZE(8, 16), 3, false, 3, 255,
};

static const upb_msglayout *const grpc_gcp_HandshakerResult_submsgs[2] = {
  &grpc_gcp_Identity_msginit,
  &grpc_gcp_RpcProtocolVersions_msginit,
};

static const upb_msglayout_field grpc_gcp_HandshakerResult__fields[8] = {
  {1, UPB_SIZE(12, 16), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(20, 32), 0, 0, 9, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(28, 48), 0, 0, 12, _UPB_MODE_SCALAR},
  {4, UPB_SIZE(36, 64), 1, 0, 11, _UPB_MODE_SCALAR},
  {5, UPB_SIZE(40, 72), 2, 0, 11, _UPB_MODE_SCALAR},
  {6, UPB_SIZE(8, 8), 0, 0, 8, _UPB_MODE_SCALAR},
  {7, UPB_SIZE(44, 80), 3, 1, 11, _UPB_MODE_SCALAR},
  {8, UPB_SIZE(4, 4), 0, 0, 13, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_HandshakerResult_msginit = {
  &grpc_gcp_HandshakerResult_submsgs[0],
  &grpc_gcp_HandshakerResult__fields[0],
  UPB_SIZE(48, 96), 8, false, 8, 255,
};

static const upb_msglayout_field grpc_gcp_HandshakerStatus__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 13, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_HandshakerStatus_msginit = {
  NULL,
  &grpc_gcp_HandshakerStatus__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout *const grpc_gcp_HandshakerResp_submsgs[2] = {
  &grpc_gcp_HandshakerResult_msginit,
  &grpc_gcp_HandshakerStatus_msginit,
};

static const upb_msglayout_field grpc_gcp_HandshakerResp__fields[4] = {
  {1, UPB_SIZE(8, 8), 0, 0, 12, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(4, 4), 0, 0, 13, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(16, 24), 1, 0, 11, _UPB_MODE_SCALAR},
  {4, UPB_SIZE(20, 32), 2, 1, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout grpc_gcp_HandshakerResp_msginit = {
  &grpc_gcp_HandshakerResp_submsgs[0],
  &grpc_gcp_HandshakerResp__fields[0],
  UPB_SIZE(24, 48), 4, false, 4, 255,
};

#include "upb/port_undef.inc"

