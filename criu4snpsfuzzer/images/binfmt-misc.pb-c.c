/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: binfmt-misc.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "binfmt-misc.pb-c.h"
void   binfmt_misc_entry__init
                     (BinfmtMiscEntry         *message)
{
  static BinfmtMiscEntry init_value = BINFMT_MISC_ENTRY__INIT;
  *message = init_value;
}
size_t binfmt_misc_entry__get_packed_size
                     (const BinfmtMiscEntry *message)
{
  assert(message->base.descriptor == &binfmt_misc_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t binfmt_misc_entry__pack
                     (const BinfmtMiscEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &binfmt_misc_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t binfmt_misc_entry__pack_to_buffer
                     (const BinfmtMiscEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &binfmt_misc_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BinfmtMiscEntry *
       binfmt_misc_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BinfmtMiscEntry *)
     protobuf_c_message_unpack (&binfmt_misc_entry__descriptor,
                                allocator, len, data);
}
void   binfmt_misc_entry__free_unpacked
                     (BinfmtMiscEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &binfmt_misc_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor binfmt_misc_entry__field_descriptors[8] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "enabled",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, enabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "interpreter",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, interpreter),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "extension",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, extension),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "magic",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, magic),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mask",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(BinfmtMiscEntry, mask),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "offset",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(BinfmtMiscEntry, has_offset),
    offsetof(BinfmtMiscEntry, offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned binfmt_misc_entry__field_indices_by_name[] = {
  1,   /* field[1] = enabled */
  4,   /* field[4] = extension */
  3,   /* field[3] = flags */
  2,   /* field[2] = interpreter */
  5,   /* field[5] = magic */
  6,   /* field[6] = mask */
  0,   /* field[0] = name */
  7,   /* field[7] = offset */
};
static const ProtobufCIntRange binfmt_misc_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor binfmt_misc_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "binfmt_misc_entry",
  "BinfmtMiscEntry",
  "BinfmtMiscEntry",
  "",
  sizeof(BinfmtMiscEntry),
  8,
  binfmt_misc_entry__field_descriptors,
  binfmt_misc_entry__field_indices_by_name,
  1,  binfmt_misc_entry__number_ranges,
  (ProtobufCMessageInit) binfmt_misc_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
