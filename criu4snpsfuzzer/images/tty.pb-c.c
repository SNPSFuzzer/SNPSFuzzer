/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: tty.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "tty.pb-c.h"
void   winsize_entry__init
                     (WinsizeEntry         *message)
{
  static WinsizeEntry init_value = WINSIZE_ENTRY__INIT;
  *message = init_value;
}
size_t winsize_entry__get_packed_size
                     (const WinsizeEntry *message)
{
  assert(message->base.descriptor == &winsize_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t winsize_entry__pack
                     (const WinsizeEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &winsize_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t winsize_entry__pack_to_buffer
                     (const WinsizeEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &winsize_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
WinsizeEntry *
       winsize_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (WinsizeEntry *)
     protobuf_c_message_unpack (&winsize_entry__descriptor,
                                allocator, len, data);
}
void   winsize_entry__free_unpacked
                     (WinsizeEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &winsize_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   termios_entry__init
                     (TermiosEntry         *message)
{
  static TermiosEntry init_value = TERMIOS_ENTRY__INIT;
  *message = init_value;
}
size_t termios_entry__get_packed_size
                     (const TermiosEntry *message)
{
  assert(message->base.descriptor == &termios_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t termios_entry__pack
                     (const TermiosEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &termios_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t termios_entry__pack_to_buffer
                     (const TermiosEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &termios_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TermiosEntry *
       termios_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TermiosEntry *)
     protobuf_c_message_unpack (&termios_entry__descriptor,
                                allocator, len, data);
}
void   termios_entry__free_unpacked
                     (TermiosEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &termios_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   tty_pty_entry__init
                     (TtyPtyEntry         *message)
{
  static TtyPtyEntry init_value = TTY_PTY_ENTRY__INIT;
  *message = init_value;
}
size_t tty_pty_entry__get_packed_size
                     (const TtyPtyEntry *message)
{
  assert(message->base.descriptor == &tty_pty_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tty_pty_entry__pack
                     (const TtyPtyEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tty_pty_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tty_pty_entry__pack_to_buffer
                     (const TtyPtyEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tty_pty_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TtyPtyEntry *
       tty_pty_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TtyPtyEntry *)
     protobuf_c_message_unpack (&tty_pty_entry__descriptor,
                                allocator, len, data);
}
void   tty_pty_entry__free_unpacked
                     (TtyPtyEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &tty_pty_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   tty_data_entry__init
                     (TtyDataEntry         *message)
{
  static TtyDataEntry init_value = TTY_DATA_ENTRY__INIT;
  *message = init_value;
}
size_t tty_data_entry__get_packed_size
                     (const TtyDataEntry *message)
{
  assert(message->base.descriptor == &tty_data_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tty_data_entry__pack
                     (const TtyDataEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tty_data_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tty_data_entry__pack_to_buffer
                     (const TtyDataEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tty_data_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TtyDataEntry *
       tty_data_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TtyDataEntry *)
     protobuf_c_message_unpack (&tty_data_entry__descriptor,
                                allocator, len, data);
}
void   tty_data_entry__free_unpacked
                     (TtyDataEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &tty_data_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   tty_info_entry__init
                     (TtyInfoEntry         *message)
{
  static TtyInfoEntry init_value = TTY_INFO_ENTRY__INIT;
  *message = init_value;
}
size_t tty_info_entry__get_packed_size
                     (const TtyInfoEntry *message)
{
  assert(message->base.descriptor == &tty_info_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tty_info_entry__pack
                     (const TtyInfoEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tty_info_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tty_info_entry__pack_to_buffer
                     (const TtyInfoEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tty_info_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TtyInfoEntry *
       tty_info_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TtyInfoEntry *)
     protobuf_c_message_unpack (&tty_info_entry__descriptor,
                                allocator, len, data);
}
void   tty_info_entry__free_unpacked
                     (TtyInfoEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &tty_info_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   tty_file_entry__init
                     (TtyFileEntry         *message)
{
  static TtyFileEntry init_value = TTY_FILE_ENTRY__INIT;
  *message = init_value;
}
size_t tty_file_entry__get_packed_size
                     (const TtyFileEntry *message)
{
  assert(message->base.descriptor == &tty_file_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tty_file_entry__pack
                     (const TtyFileEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tty_file_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tty_file_entry__pack_to_buffer
                     (const TtyFileEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tty_file_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TtyFileEntry *
       tty_file_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TtyFileEntry *)
     protobuf_c_message_unpack (&tty_file_entry__descriptor,
                                allocator, len, data);
}
void   tty_file_entry__free_unpacked
                     (TtyFileEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &tty_file_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor winsize_entry__field_descriptors[4] =
{
  {
    "ws_row",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(WinsizeEntry, ws_row),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ws_col",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(WinsizeEntry, ws_col),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ws_xpixel",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(WinsizeEntry, ws_xpixel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ws_ypixel",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(WinsizeEntry, ws_ypixel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned winsize_entry__field_indices_by_name[] = {
  1,   /* field[1] = ws_col */
  0,   /* field[0] = ws_row */
  2,   /* field[2] = ws_xpixel */
  3,   /* field[3] = ws_ypixel */
};
static const ProtobufCIntRange winsize_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor winsize_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "winsize_entry",
  "WinsizeEntry",
  "WinsizeEntry",
  "",
  sizeof(WinsizeEntry),
  4,
  winsize_entry__field_descriptors,
  winsize_entry__field_indices_by_name,
  1,  winsize_entry__number_ranges,
  (ProtobufCMessageInit) winsize_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor termios_entry__field_descriptors[8] =
{
  {
    "c_iflag",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_iflag),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_oflag",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_oflag),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_cflag",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_cflag),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_lflag",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_lflag),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_line",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_line),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_ispeed",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_ispeed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_ospeed",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TermiosEntry, c_ospeed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "c_cc",
    8,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TermiosEntry, n_c_cc),
    offsetof(TermiosEntry, c_cc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned termios_entry__field_indices_by_name[] = {
  7,   /* field[7] = c_cc */
  2,   /* field[2] = c_cflag */
  0,   /* field[0] = c_iflag */
  5,   /* field[5] = c_ispeed */
  3,   /* field[3] = c_lflag */
  4,   /* field[4] = c_line */
  1,   /* field[1] = c_oflag */
  6,   /* field[6] = c_ospeed */
};
static const ProtobufCIntRange termios_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor termios_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "termios_entry",
  "TermiosEntry",
  "TermiosEntry",
  "",
  sizeof(TermiosEntry),
  8,
  termios_entry__field_descriptors,
  termios_entry__field_indices_by_name,
  1,  termios_entry__number_ranges,
  (ProtobufCMessageInit) termios_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor tty_pty_entry__field_descriptors[1] =
{
  {
    "index",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyPtyEntry, index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tty_pty_entry__field_indices_by_name[] = {
  0,   /* field[0] = index */
};
static const ProtobufCIntRange tty_pty_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor tty_pty_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tty_pty_entry",
  "TtyPtyEntry",
  "TtyPtyEntry",
  "",
  sizeof(TtyPtyEntry),
  1,
  tty_pty_entry__field_descriptors,
  tty_pty_entry__field_indices_by_name,
  1,  tty_pty_entry__number_ranges,
  (ProtobufCMessageInit) tty_pty_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor tty_data_entry__field_descriptors[2] =
{
  {
    "tty_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyDataEntry, tty_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(TtyDataEntry, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tty_data_entry__field_indices_by_name[] = {
  1,   /* field[1] = data */
  0,   /* field[0] = tty_id */
};
static const ProtobufCIntRange tty_data_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor tty_data_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tty_data_entry",
  "TtyDataEntry",
  "TtyDataEntry",
  "",
  sizeof(TtyDataEntry),
  2,
  tty_data_entry__field_descriptors,
  tty_data_entry__field_indices_by_name,
  1,  tty_data_entry__number_ranges,
  (ProtobufCMessageInit) tty_data_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor tty_info_entry__field_descriptors[15] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, type),
    &tty_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "locked",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, locked),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "exclusive",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, exclusive),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "packet_mode",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, packet_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sid",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, sid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pgrp",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, pgrp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rdev",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, rdev),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "termios",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, termios),
    &termios_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "termios_locked",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, termios_locked),
    &termios_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "winsize",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, winsize),
    &winsize_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pty",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TtyInfoEntry, pty),
    &tty_pty_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dev",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TtyInfoEntry, has_dev),
    offsetof(TtyInfoEntry, dev),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uid",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TtyInfoEntry, has_uid),
    offsetof(TtyInfoEntry, uid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gid",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TtyInfoEntry, has_gid),
    offsetof(TtyInfoEntry, gid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tty_info_entry__field_indices_by_name[] = {
  12,   /* field[12] = dev */
  3,   /* field[3] = exclusive */
  14,   /* field[14] = gid */
  0,   /* field[0] = id */
  2,   /* field[2] = locked */
  4,   /* field[4] = packet_mode */
  6,   /* field[6] = pgrp */
  11,   /* field[11] = pty */
  7,   /* field[7] = rdev */
  5,   /* field[5] = sid */
  8,   /* field[8] = termios */
  9,   /* field[9] = termios_locked */
  1,   /* field[1] = type */
  13,   /* field[13] = uid */
  10,   /* field[10] = winsize */
};
static const ProtobufCIntRange tty_info_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 15 }
};
const ProtobufCMessageDescriptor tty_info_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tty_info_entry",
  "TtyInfoEntry",
  "TtyInfoEntry",
  "",
  sizeof(TtyInfoEntry),
  15,
  tty_info_entry__field_descriptors,
  tty_info_entry__field_indices_by_name,
  1,  tty_info_entry__number_ranges,
  (ProtobufCMessageInit) tty_info_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor tty_file_entry__field_descriptors[5] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyFileEntry, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tty_info_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyFileEntry, tty_info_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TtyFileEntry, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fown",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TtyFileEntry, fown),
    &fown_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "regf_id",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TtyFileEntry, has_regf_id),
    offsetof(TtyFileEntry, regf_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tty_file_entry__field_indices_by_name[] = {
  2,   /* field[2] = flags */
  3,   /* field[3] = fown */
  0,   /* field[0] = id */
  4,   /* field[4] = regf_id */
  1,   /* field[1] = tty_info_id */
};
static const ProtobufCIntRange tty_file_entry__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 6, 4 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor tty_file_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tty_file_entry",
  "TtyFileEntry",
  "TtyFileEntry",
  "",
  sizeof(TtyFileEntry),
  5,
  tty_file_entry__field_descriptors,
  tty_file_entry__field_indices_by_name,
  2,  tty_file_entry__number_ranges,
  (ProtobufCMessageInit) tty_file_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue tty_type__enum_values_by_number[7] =
{
  { "UNKNOWN", "TTY_TYPE__UNKNOWN", 0 },
  { "PTY", "TTY_TYPE__PTY", 1 },
  { "CONSOLE", "TTY_TYPE__CONSOLE", 2 },
  { "VT", "TTY_TYPE__VT", 3 },
  { "CTTY", "TTY_TYPE__CTTY", 4 },
  { "EXT_TTY", "TTY_TYPE__EXT_TTY", 5 },
  { "SERIAL", "TTY_TYPE__SERIAL", 6 },
};
static const ProtobufCIntRange tty_type__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex tty_type__enum_values_by_name[7] =
{
  { "CONSOLE", 2 },
  { "CTTY", 4 },
  { "EXT_TTY", 5 },
  { "PTY", 1 },
  { "SERIAL", 6 },
  { "UNKNOWN", 0 },
  { "VT", 3 },
};
const ProtobufCEnumDescriptor tty_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "TtyType",
  "TtyType",
  "TtyType",
  "",
  7,
  tty_type__enum_values_by_number,
  7,
  tty_type__enum_values_by_name,
  1,
  tty_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
