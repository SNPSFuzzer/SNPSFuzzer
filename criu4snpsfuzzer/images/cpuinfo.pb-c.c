/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: cpuinfo.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "cpuinfo.pb-c.h"
void   cpuinfo_x86_entry__init
                     (CpuinfoX86Entry         *message)
{
  static CpuinfoX86Entry init_value = CPUINFO_X86_ENTRY__INIT;
  *message = init_value;
}
size_t cpuinfo_x86_entry__get_packed_size
                     (const CpuinfoX86Entry *message)
{
  assert(message->base.descriptor == &cpuinfo_x86_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cpuinfo_x86_entry__pack
                     (const CpuinfoX86Entry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cpuinfo_x86_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cpuinfo_x86_entry__pack_to_buffer
                     (const CpuinfoX86Entry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cpuinfo_x86_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CpuinfoX86Entry *
       cpuinfo_x86_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CpuinfoX86Entry *)
     protobuf_c_message_unpack (&cpuinfo_x86_entry__descriptor,
                                allocator, len, data);
}
void   cpuinfo_x86_entry__free_unpacked
                     (CpuinfoX86Entry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cpuinfo_x86_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cpuinfo_ppc64_entry__init
                     (CpuinfoPpc64Entry         *message)
{
  static CpuinfoPpc64Entry init_value = CPUINFO_PPC64_ENTRY__INIT;
  *message = init_value;
}
size_t cpuinfo_ppc64_entry__get_packed_size
                     (const CpuinfoPpc64Entry *message)
{
  assert(message->base.descriptor == &cpuinfo_ppc64_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cpuinfo_ppc64_entry__pack
                     (const CpuinfoPpc64Entry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cpuinfo_ppc64_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cpuinfo_ppc64_entry__pack_to_buffer
                     (const CpuinfoPpc64Entry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cpuinfo_ppc64_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CpuinfoPpc64Entry *
       cpuinfo_ppc64_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CpuinfoPpc64Entry *)
     protobuf_c_message_unpack (&cpuinfo_ppc64_entry__descriptor,
                                allocator, len, data);
}
void   cpuinfo_ppc64_entry__free_unpacked
                     (CpuinfoPpc64Entry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cpuinfo_ppc64_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cpuinfo_s390_entry__init
                     (CpuinfoS390Entry         *message)
{
  static CpuinfoS390Entry init_value = CPUINFO_S390_ENTRY__INIT;
  *message = init_value;
}
size_t cpuinfo_s390_entry__get_packed_size
                     (const CpuinfoS390Entry *message)
{
  assert(message->base.descriptor == &cpuinfo_s390_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cpuinfo_s390_entry__pack
                     (const CpuinfoS390Entry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cpuinfo_s390_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cpuinfo_s390_entry__pack_to_buffer
                     (const CpuinfoS390Entry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cpuinfo_s390_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CpuinfoS390Entry *
       cpuinfo_s390_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CpuinfoS390Entry *)
     protobuf_c_message_unpack (&cpuinfo_s390_entry__descriptor,
                                allocator, len, data);
}
void   cpuinfo_s390_entry__free_unpacked
                     (CpuinfoS390Entry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cpuinfo_s390_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cpuinfo_entry__init
                     (CpuinfoEntry         *message)
{
  static CpuinfoEntry init_value = CPUINFO_ENTRY__INIT;
  *message = init_value;
}
size_t cpuinfo_entry__get_packed_size
                     (const CpuinfoEntry *message)
{
  assert(message->base.descriptor == &cpuinfo_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cpuinfo_entry__pack
                     (const CpuinfoEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cpuinfo_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cpuinfo_entry__pack_to_buffer
                     (const CpuinfoEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cpuinfo_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CpuinfoEntry *
       cpuinfo_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CpuinfoEntry *)
     protobuf_c_message_unpack (&cpuinfo_entry__descriptor,
                                allocator, len, data);
}
void   cpuinfo_entry__free_unpacked
                     (CpuinfoEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cpuinfo_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue cpuinfo_x86_entry__vendor__enum_values_by_number[3] =
{
  { "UNKNOWN", "CPUINFO_X86_ENTRY__VENDOR__UNKNOWN", 0 },
  { "INTEL", "CPUINFO_X86_ENTRY__VENDOR__INTEL", 1 },
  { "AMD", "CPUINFO_X86_ENTRY__VENDOR__AMD", 2 },
};
static const ProtobufCIntRange cpuinfo_x86_entry__vendor__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex cpuinfo_x86_entry__vendor__enum_values_by_name[3] =
{
  { "AMD", 2 },
  { "INTEL", 1 },
  { "UNKNOWN", 0 },
};
const ProtobufCEnumDescriptor cpuinfo_x86_entry__vendor__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "cpuinfo_x86_entry.vendor",
  "vendor",
  "CpuinfoX86Entry__Vendor",
  "",
  3,
  cpuinfo_x86_entry__vendor__enum_values_by_number,
  3,
  cpuinfo_x86_entry__vendor__enum_values_by_name,
  1,
  cpuinfo_x86_entry__vendor__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor cpuinfo_x86_entry__field_descriptors[10] =
{
  {
    "vendor_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(CpuinfoX86Entry, vendor_id),
    &cpuinfo_x86_entry__vendor__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cpu_family",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CpuinfoX86Entry, cpu_family),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "model",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CpuinfoX86Entry, model),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "stepping",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CpuinfoX86Entry, stepping),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "capability_ver",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CpuinfoX86Entry, capability_ver),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "capability",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CpuinfoX86Entry, n_capability),
    offsetof(CpuinfoX86Entry, capability),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "model_id",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(CpuinfoX86Entry, model_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "xfeatures_mask",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(CpuinfoX86Entry, has_xfeatures_mask),
    offsetof(CpuinfoX86Entry, xfeatures_mask),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "xsave_size",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CpuinfoX86Entry, has_xsave_size),
    offsetof(CpuinfoX86Entry, xsave_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "xsave_size_max",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(CpuinfoX86Entry, has_xsave_size_max),
    offsetof(CpuinfoX86Entry, xsave_size_max),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cpuinfo_x86_entry__field_indices_by_name[] = {
  5,   /* field[5] = capability */
  4,   /* field[4] = capability_ver */
  1,   /* field[1] = cpu_family */
  2,   /* field[2] = model */
  6,   /* field[6] = model_id */
  3,   /* field[3] = stepping */
  0,   /* field[0] = vendor_id */
  7,   /* field[7] = xfeatures_mask */
  8,   /* field[8] = xsave_size */
  9,   /* field[9] = xsave_size_max */
};
static const ProtobufCIntRange cpuinfo_x86_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor cpuinfo_x86_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cpuinfo_x86_entry",
  "CpuinfoX86Entry",
  "CpuinfoX86Entry",
  "",
  sizeof(CpuinfoX86Entry),
  10,
  cpuinfo_x86_entry__field_descriptors,
  cpuinfo_x86_entry__field_indices_by_name,
  1,  cpuinfo_x86_entry__number_ranges,
  (ProtobufCMessageInit) cpuinfo_x86_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue cpuinfo_ppc64_entry__endianness__enum_values_by_number[2] =
{
  { "BIGENDIAN", "CPUINFO_PPC64_ENTRY__ENDIANNESS__BIGENDIAN", 0 },
  { "LITTLEENDIAN", "CPUINFO_PPC64_ENTRY__ENDIANNESS__LITTLEENDIAN", 1 },
};
static const ProtobufCIntRange cpuinfo_ppc64_entry__endianness__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex cpuinfo_ppc64_entry__endianness__enum_values_by_name[2] =
{
  { "BIGENDIAN", 0 },
  { "LITTLEENDIAN", 1 },
};
const ProtobufCEnumDescriptor cpuinfo_ppc64_entry__endianness__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "cpuinfo_ppc64_entry.endianness",
  "endianness",
  "CpuinfoPpc64Entry__Endianness",
  "",
  2,
  cpuinfo_ppc64_entry__endianness__enum_values_by_number,
  2,
  cpuinfo_ppc64_entry__endianness__enum_values_by_name,
  1,
  cpuinfo_ppc64_entry__endianness__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor cpuinfo_ppc64_entry__field_descriptors[2] =
{
  {
    "endian",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(CpuinfoPpc64Entry, endian),
    &cpuinfo_ppc64_entry__endianness__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hwcap",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(CpuinfoPpc64Entry, n_hwcap),
    offsetof(CpuinfoPpc64Entry, hwcap),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cpuinfo_ppc64_entry__field_indices_by_name[] = {
  0,   /* field[0] = endian */
  1,   /* field[1] = hwcap */
};
static const ProtobufCIntRange cpuinfo_ppc64_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cpuinfo_ppc64_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cpuinfo_ppc64_entry",
  "CpuinfoPpc64Entry",
  "CpuinfoPpc64Entry",
  "",
  sizeof(CpuinfoPpc64Entry),
  2,
  cpuinfo_ppc64_entry__field_descriptors,
  cpuinfo_ppc64_entry__field_indices_by_name,
  1,  cpuinfo_ppc64_entry__number_ranges,
  (ProtobufCMessageInit) cpuinfo_ppc64_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cpuinfo_s390_entry__field_descriptors[1] =
{
  {
    "hwcap",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(CpuinfoS390Entry, n_hwcap),
    offsetof(CpuinfoS390Entry, hwcap),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cpuinfo_s390_entry__field_indices_by_name[] = {
  0,   /* field[0] = hwcap */
};
static const ProtobufCIntRange cpuinfo_s390_entry__number_ranges[1 + 1] =
{
  { 2, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor cpuinfo_s390_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cpuinfo_s390_entry",
  "CpuinfoS390Entry",
  "CpuinfoS390Entry",
  "",
  sizeof(CpuinfoS390Entry),
  1,
  cpuinfo_s390_entry__field_descriptors,
  cpuinfo_s390_entry__field_indices_by_name,
  1,  cpuinfo_s390_entry__number_ranges,
  (ProtobufCMessageInit) cpuinfo_s390_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cpuinfo_entry__field_descriptors[3] =
{
  {
    "x86_entry",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(CpuinfoEntry, n_x86_entry),
    offsetof(CpuinfoEntry, x86_entry),
    &cpuinfo_x86_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ppc64_entry",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(CpuinfoEntry, n_ppc64_entry),
    offsetof(CpuinfoEntry, ppc64_entry),
    &cpuinfo_ppc64_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "s390_entry",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(CpuinfoEntry, n_s390_entry),
    offsetof(CpuinfoEntry, s390_entry),
    &cpuinfo_s390_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cpuinfo_entry__field_indices_by_name[] = {
  1,   /* field[1] = ppc64_entry */
  2,   /* field[2] = s390_entry */
  0,   /* field[0] = x86_entry */
};
static const ProtobufCIntRange cpuinfo_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor cpuinfo_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cpuinfo_entry",
  "CpuinfoEntry",
  "CpuinfoEntry",
  "",
  sizeof(CpuinfoEntry),
  3,
  cpuinfo_entry__field_descriptors,
  cpuinfo_entry__field_indices_by_name,
  1,  cpuinfo_entry__number_ranges,
  (ProtobufCMessageInit) cpuinfo_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
