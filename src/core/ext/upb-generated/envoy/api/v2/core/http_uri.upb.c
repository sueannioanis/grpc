/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/http_uri.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/core/http_uri.upb.h"
#include "google/protobuf/duration.upb.h"
#include "gogoproto/gogo.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_core_HttpUri_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_HttpUri__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 9, 1},
  {3, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_core_HttpUri_msginit = {
  &envoy_api_v2_core_HttpUri_submsgs[0],
  &envoy_api_v2_core_HttpUri__fields[0],
  UPB_SIZE(24, 48), 3, false,
};

#include "upb/port_undef.inc"
