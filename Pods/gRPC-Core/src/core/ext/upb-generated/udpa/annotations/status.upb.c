/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "udpa/annotations/status.upb.h"
#include "google/protobuf/descriptor.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_field udpa_annotations_StatusAnnotation__fields[2] = {
  {1, UPB_SIZE(4, 4), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout udpa_annotations_StatusAnnotation_msginit = {
  NULL,
  &udpa_annotations_StatusAnnotation__fields[0],
  UPB_SIZE(8, 8), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout *messages_layout[1] = {
  &udpa_annotations_StatusAnnotation_msginit,
};

extern const upb_msglayout google_protobuf_FileOptions_msginit;
extern const upb_msglayout udpa_annotations_StatusAnnotation_msginit;
const upb_msglayout_ext udpa_annotations_file_status_ext = {
  {222707719, 0, 0, 0, 11, _UPB_MODE_SCALAR | _UPB_MODE_IS_EXTENSION | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  &google_protobuf_FileOptions_msginit,
  {.submsg = &udpa_annotations_StatusAnnotation_msginit},

};

static const upb_msglayout_ext *extensions_layout[1] = {
  &udpa_annotations_file_status_ext,
};

const upb_msglayout_file udpa_annotations_status_proto_upb_file_layout = {
  messages_layout,
  extensions_layout,
  1,
  1,
};

#include "upb/port_undef.inc"
