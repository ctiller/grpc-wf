/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/migrate.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_ANNOTATIONS_MIGRATE_PROTO_UPB_H_
#define UDPA_ANNOTATIONS_MIGRATE_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_annotations_MigrateAnnotation;
struct udpa_annotations_FieldMigrateAnnotation;
struct udpa_annotations_FileMigrateAnnotation;
typedef struct udpa_annotations_MigrateAnnotation udpa_annotations_MigrateAnnotation;
typedef struct udpa_annotations_FieldMigrateAnnotation udpa_annotations_FieldMigrateAnnotation;
typedef struct udpa_annotations_FileMigrateAnnotation udpa_annotations_FileMigrateAnnotation;
extern const upb_msglayout udpa_annotations_MigrateAnnotation_msginit;
extern const upb_msglayout udpa_annotations_FieldMigrateAnnotation_msginit;
extern const upb_msglayout udpa_annotations_FileMigrateAnnotation_msginit;


/* udpa.annotations.MigrateAnnotation */

UPB_INLINE udpa_annotations_MigrateAnnotation *udpa_annotations_MigrateAnnotation_new(upb_arena *arena) {
  return (udpa_annotations_MigrateAnnotation *)_upb_msg_new(&udpa_annotations_MigrateAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_MigrateAnnotation *udpa_annotations_MigrateAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_annotations_MigrateAnnotation *ret = udpa_annotations_MigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &udpa_annotations_MigrateAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE udpa_annotations_MigrateAnnotation *udpa_annotations_MigrateAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  udpa_annotations_MigrateAnnotation *ret = udpa_annotations_MigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &udpa_annotations_MigrateAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *udpa_annotations_MigrateAnnotation_serialize(const udpa_annotations_MigrateAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_annotations_MigrateAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview udpa_annotations_MigrateAnnotation_rename(const udpa_annotations_MigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void udpa_annotations_MigrateAnnotation_set_rename(udpa_annotations_MigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

/* udpa.annotations.FieldMigrateAnnotation */

UPB_INLINE udpa_annotations_FieldMigrateAnnotation *udpa_annotations_FieldMigrateAnnotation_new(upb_arena *arena) {
  return (udpa_annotations_FieldMigrateAnnotation *)_upb_msg_new(&udpa_annotations_FieldMigrateAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_FieldMigrateAnnotation *udpa_annotations_FieldMigrateAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_annotations_FieldMigrateAnnotation *ret = udpa_annotations_FieldMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &udpa_annotations_FieldMigrateAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE udpa_annotations_FieldMigrateAnnotation *udpa_annotations_FieldMigrateAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  udpa_annotations_FieldMigrateAnnotation *ret = udpa_annotations_FieldMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &udpa_annotations_FieldMigrateAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *udpa_annotations_FieldMigrateAnnotation_serialize(const udpa_annotations_FieldMigrateAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_annotations_FieldMigrateAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview udpa_annotations_FieldMigrateAnnotation_rename(const udpa_annotations_FieldMigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview udpa_annotations_FieldMigrateAnnotation_oneof_promotion(const udpa_annotations_FieldMigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }

UPB_INLINE void udpa_annotations_FieldMigrateAnnotation_set_rename(udpa_annotations_FieldMigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void udpa_annotations_FieldMigrateAnnotation_set_oneof_promotion(udpa_annotations_FieldMigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}

/* udpa.annotations.FileMigrateAnnotation */

UPB_INLINE udpa_annotations_FileMigrateAnnotation *udpa_annotations_FileMigrateAnnotation_new(upb_arena *arena) {
  return (udpa_annotations_FileMigrateAnnotation *)_upb_msg_new(&udpa_annotations_FileMigrateAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_FileMigrateAnnotation *udpa_annotations_FileMigrateAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_annotations_FileMigrateAnnotation *ret = udpa_annotations_FileMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &udpa_annotations_FileMigrateAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE udpa_annotations_FileMigrateAnnotation *udpa_annotations_FileMigrateAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  udpa_annotations_FileMigrateAnnotation *ret = udpa_annotations_FileMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &udpa_annotations_FileMigrateAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *udpa_annotations_FileMigrateAnnotation_serialize(const udpa_annotations_FileMigrateAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_annotations_FileMigrateAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview udpa_annotations_FileMigrateAnnotation_move_to_package(const udpa_annotations_FileMigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void udpa_annotations_FileMigrateAnnotation_set_move_to_package(udpa_annotations_FileMigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_ANNOTATIONS_MIGRATE_PROTO_UPB_H_ */
