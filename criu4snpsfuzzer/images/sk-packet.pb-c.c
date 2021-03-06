/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sk-packet.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "sk-packet.pb-c.h"
void   scm_entry__init
                     (ScmEntry         *message)
{
  static ScmEntry init_value = SCM_ENTRY__INIT;
  *message = init_value;
}
size_t scm_entry__get_packed_size
                     (const ScmEntry *message)
{
  assert(message->base.descriptor == &scm_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t scm_entry__pack
                     (const ScmEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &scm_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t scm_entry__pack_to_buffer
                     (const ScmEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &scm_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ScmEntry *
       scm_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ScmEntry *)
     protobuf_c_message_unpack (&scm_entry__descriptor,
                                allocator, len, data);
}
void   scm_entry__free_unpacked
                     (ScmEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &scm_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   sk_packet_entry__init
                     (SkPacketEntry         *message)
{
  static SkPacketEntry init_value = SK_PACKET_ENTRY__INIT;
  *message = init_value;
}
size_t sk_packet_entry__get_packed_size
                     (const SkPacketEntry *message)
{
  assert(message->base.descriptor == &sk_packet_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sk_packet_entry__pack
                     (const SkPacketEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &sk_packet_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sk_packet_entry__pack_to_buffer
                     (const SkPacketEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &sk_packet_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SkPacketEntry *
       sk_packet_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SkPacketEntry *)
     protobuf_c_message_unpack (&sk_packet_entry__descriptor,
                                allocator, len, data);
}
void   sk_packet_entry__free_unpacked
                     (SkPacketEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &sk_packet_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor scm_entry__field_descriptors[2] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(ScmEntry, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rights",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ScmEntry, n_rights),
    offsetof(ScmEntry, rights),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned scm_entry__field_indices_by_name[] = {
  1,   /* field[1] = rights */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange scm_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor scm_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "scm_entry",
  "ScmEntry",
  "ScmEntry",
  "",
  sizeof(ScmEntry),
  2,
  scm_entry__field_descriptors,
  scm_entry__field_indices_by_name,
  1,  scm_entry__number_ranges,
  (ProtobufCMessageInit) scm_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor sk_packet_entry__field_descriptors[3] =
{
  {
    "id_for",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(SkPacketEntry, id_for),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "length",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(SkPacketEntry, length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "scm",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(SkPacketEntry, n_scm),
    offsetof(SkPacketEntry, scm),
    &scm_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sk_packet_entry__field_indices_by_name[] = {
  0,   /* field[0] = id_for */
  1,   /* field[1] = length */
  2,   /* field[2] = scm */
};
static const ProtobufCIntRange sk_packet_entry__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 4, 2 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor sk_packet_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "sk_packet_entry",
  "SkPacketEntry",
  "SkPacketEntry",
  "",
  sizeof(SkPacketEntry),
  3,
  sk_packet_entry__field_descriptors,
  sk_packet_entry__field_indices_by_name,
  2,  sk_packet_entry__number_ranges,
  (ProtobufCMessageInit) sk_packet_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
