/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ipc-sem.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ipc-sem.pb-c.h"
void   ipc_sem_entry__init
                     (IpcSemEntry         *message)
{
  static IpcSemEntry init_value = IPC_SEM_ENTRY__INIT;
  *message = init_value;
}
size_t ipc_sem_entry__get_packed_size
                     (const IpcSemEntry *message)
{
  assert(message->base.descriptor == &ipc_sem_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ipc_sem_entry__pack
                     (const IpcSemEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ipc_sem_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ipc_sem_entry__pack_to_buffer
                     (const IpcSemEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ipc_sem_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
IpcSemEntry *
       ipc_sem_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (IpcSemEntry *)
     protobuf_c_message_unpack (&ipc_sem_entry__descriptor,
                                allocator, len, data);
}
void   ipc_sem_entry__free_unpacked
                     (IpcSemEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &ipc_sem_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ipc_sem_entry__field_descriptors[2] =
{
  {
    "desc",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(IpcSemEntry, desc),
    &ipc_desc_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nsems",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(IpcSemEntry, nsems),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ipc_sem_entry__field_indices_by_name[] = {
  0,   /* field[0] = desc */
  1,   /* field[1] = nsems */
};
static const ProtobufCIntRange ipc_sem_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ipc_sem_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ipc_sem_entry",
  "IpcSemEntry",
  "IpcSemEntry",
  "",
  sizeof(IpcSemEntry),
  2,
  ipc_sem_entry__field_descriptors,
  ipc_sem_entry__field_indices_by_name,
  1,  ipc_sem_entry__number_ranges,
  (ProtobufCMessageInit) ipc_sem_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
