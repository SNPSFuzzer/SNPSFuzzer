/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fown.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "fown.pb-c.h"
void   fown_entry__init
                     (FownEntry         *message)
{
  static FownEntry init_value = FOWN_ENTRY__INIT;
  *message = init_value;
}
size_t fown_entry__get_packed_size
                     (const FownEntry *message)
{
  assert(message->base.descriptor == &fown_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t fown_entry__pack
                     (const FownEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &fown_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t fown_entry__pack_to_buffer
                     (const FownEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &fown_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
FownEntry *
       fown_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (FownEntry *)
     protobuf_c_message_unpack (&fown_entry__descriptor,
                                allocator, len, data);
}
void   fown_entry__free_unpacked
                     (FownEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &fown_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor fown_entry__field_descriptors[5] =
{
  {
    "uid",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FownEntry, uid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "euid",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FownEntry, euid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signum",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FownEntry, signum),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pid_type",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FownEntry, pid_type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pid",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FownEntry, pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned fown_entry__field_indices_by_name[] = {
  1,   /* field[1] = euid */
  4,   /* field[4] = pid */
  3,   /* field[3] = pid_type */
  2,   /* field[2] = signum */
  0,   /* field[0] = uid */
};
static const ProtobufCIntRange fown_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor fown_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "fown_entry",
  "FownEntry",
  "FownEntry",
  "",
  sizeof(FownEntry),
  5,
  fown_entry__field_descriptors,
  fown_entry__field_indices_by_name,
  1,  fown_entry__number_ranges,
  (ProtobufCMessageInit) fown_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
