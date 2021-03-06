/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: pagemap.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "pagemap.pb-c.h"
void   pagemap_head__init
                     (PagemapHead         *message)
{
  static PagemapHead init_value = PAGEMAP_HEAD__INIT;
  *message = init_value;
}
size_t pagemap_head__get_packed_size
                     (const PagemapHead *message)
{
  assert(message->base.descriptor == &pagemap_head__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pagemap_head__pack
                     (const PagemapHead *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pagemap_head__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pagemap_head__pack_to_buffer
                     (const PagemapHead *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pagemap_head__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PagemapHead *
       pagemap_head__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PagemapHead *)
     protobuf_c_message_unpack (&pagemap_head__descriptor,
                                allocator, len, data);
}
void   pagemap_head__free_unpacked
                     (PagemapHead *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &pagemap_head__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pagemap_entry__init
                     (PagemapEntry         *message)
{
  static PagemapEntry init_value = PAGEMAP_ENTRY__INIT;
  *message = init_value;
}
size_t pagemap_entry__get_packed_size
                     (const PagemapEntry *message)
{
  assert(message->base.descriptor == &pagemap_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pagemap_entry__pack
                     (const PagemapEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pagemap_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pagemap_entry__pack_to_buffer
                     (const PagemapEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pagemap_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PagemapEntry *
       pagemap_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PagemapEntry *)
     protobuf_c_message_unpack (&pagemap_entry__descriptor,
                                allocator, len, data);
}
void   pagemap_entry__free_unpacked
                     (PagemapEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &pagemap_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor pagemap_head__field_descriptors[1] =
{
  {
    "pages_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(PagemapHead, pages_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pagemap_head__field_indices_by_name[] = {
  0,   /* field[0] = pages_id */
};
static const ProtobufCIntRange pagemap_head__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor pagemap_head__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "pagemap_head",
  "PagemapHead",
  "PagemapHead",
  "",
  sizeof(PagemapHead),
  1,
  pagemap_head__field_descriptors,
  pagemap_head__field_indices_by_name,
  1,  pagemap_head__number_ranges,
  (ProtobufCMessageInit) pagemap_head__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pagemap_entry__field_descriptors[4] =
{
  {
    "vaddr",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PagemapEntry, vaddr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nr_pages",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(PagemapEntry, nr_pages),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "in_parent",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(PagemapEntry, has_in_parent),
    offsetof(PagemapEntry, in_parent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(PagemapEntry, has_flags),
    offsetof(PagemapEntry, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pagemap_entry__field_indices_by_name[] = {
  3,   /* field[3] = flags */
  2,   /* field[2] = in_parent */
  1,   /* field[1] = nr_pages */
  0,   /* field[0] = vaddr */
};
static const ProtobufCIntRange pagemap_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor pagemap_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "pagemap_entry",
  "PagemapEntry",
  "PagemapEntry",
  "",
  sizeof(PagemapEntry),
  4,
  pagemap_entry__field_descriptors,
  pagemap_entry__field_indices_by_name,
  1,  pagemap_entry__number_ranges,
  (ProtobufCMessageInit) pagemap_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
