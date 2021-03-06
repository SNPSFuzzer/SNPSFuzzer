# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: netdev.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import macvlan_pb2
import opts_pb2
import tun_pb2
import sysctl_pb2
import sit_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='netdev.proto',
  package='',
  serialized_pb=_b('\n\x0cnetdev.proto\x1a\rmacvlan.proto\x1a\nopts.proto\x1a\ttun.proto\x1a\x0csysctl.proto\x1a\tsit.proto\"\xdd\x02\n\x10net_device_entry\x12\x16\n\x04type\x18\x01 \x02(\x0e\x32\x08.nd_type\x12\x0f\n\x07ifindex\x18\x02 \x02(\r\x12\x0b\n\x03mtu\x18\x03 \x02(\r\x12\x14\n\x05\x66lags\x18\x04 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x0c\n\x04name\x18\x05 \x02(\t\x12\x1c\n\x03tun\x18\x06 \x01(\x0b\x32\x0f.tun_link_entry\x12\x0f\n\x07\x61\x64\x64ress\x18\x07 \x01(\x0c\x12\x0c\n\x04\x63onf\x18\x08 \x03(\x05\x12\x1c\n\x05\x63onf4\x18\t \x03(\x0b\x32\r.sysctl_entry\x12\x1c\n\x05\x63onf6\x18\n \x03(\x0b\x32\r.sysctl_entry\x12$\n\x07macvlan\x18\x0b \x01(\x0b\x32\x13.macvlan_link_entry\x12\x14\n\x0cpeer_ifindex\x18\x0c \x01(\r\x12\x11\n\tpeer_nsid\x18\r \x01(\r\x12\x0e\n\x06master\x18\x0e \x01(\r\x12\x17\n\x03sit\x18\x0f \x01(\x0b\x32\n.sit_entry\"7\n\x08netns_id\x12\x14\n\x0ctarget_ns_id\x18\x01 \x02(\r\x12\x15\n\rnetnsid_value\x18\x02 \x02(\x05\"\xe4\x01\n\x0bnetns_entry\x12\x10\n\x08\x64\x65\x66_conf\x18\x01 \x03(\x05\x12\x10\n\x08\x61ll_conf\x18\x02 \x03(\x05\x12 \n\tdef_conf4\x18\x03 \x03(\x0b\x32\r.sysctl_entry\x12 \n\tall_conf4\x18\x04 \x03(\x0b\x32\r.sysctl_entry\x12 \n\tdef_conf6\x18\x05 \x03(\x0b\x32\r.sysctl_entry\x12 \n\tall_conf6\x18\x06 \x03(\x0b\x32\r.sysctl_entry\x12\x18\n\x05nsids\x18\x07 \x03(\x0b\x32\t.netns_id\x12\x0f\n\x07\x65xt_key\x18\x08 \x01(\t*d\n\x07nd_type\x12\x0c\n\x08LOOPBACK\x10\x01\x12\x08\n\x04VETH\x10\x02\x12\x07\n\x03TUN\x10\x03\x12\x0b\n\x07\x45XTLINK\x10\x04\x12\t\n\x05VENET\x10\x05\x12\n\n\x06\x42RIDGE\x10\x06\x12\x0b\n\x07MACVLAN\x10\x07\x12\x07\n\x03SIT\x10\x08')
  ,
  dependencies=[macvlan_pb2.DESCRIPTOR,opts_pb2.DESCRIPTOR,tun_pb2.DESCRIPTOR,sysctl_pb2.DESCRIPTOR,sit_pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

_ND_TYPE = _descriptor.EnumDescriptor(
  name='nd_type',
  full_name='nd_type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='LOOPBACK', index=0, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='VETH', index=1, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TUN', index=2, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTLINK', index=3, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='VENET', index=4, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BRIDGE', index=5, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MACVLAN', index=6, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SIT', index=7, number=8,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=719,
  serialized_end=819,
)
_sym_db.RegisterEnumDescriptor(_ND_TYPE)

nd_type = enum_type_wrapper.EnumTypeWrapper(_ND_TYPE)
LOOPBACK = 1
VETH = 2
TUN = 3
EXTLINK = 4
VENET = 5
BRIDGE = 6
MACVLAN = 7
SIT = 8



_NET_DEVICE_ENTRY = _descriptor.Descriptor(
  name='net_device_entry',
  full_name='net_device_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='net_device_entry.type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ifindex', full_name='net_device_entry.ifindex', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mtu', full_name='net_device_entry.mtu', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flags', full_name='net_device_entry.flags', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='name', full_name='net_device_entry.name', index=4,
      number=5, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tun', full_name='net_device_entry.tun', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='address', full_name='net_device_entry.address', index=6,
      number=7, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='conf', full_name='net_device_entry.conf', index=7,
      number=8, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='conf4', full_name='net_device_entry.conf4', index=8,
      number=9, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='conf6', full_name='net_device_entry.conf6', index=9,
      number=10, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='macvlan', full_name='net_device_entry.macvlan', index=10,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='peer_ifindex', full_name='net_device_entry.peer_ifindex', index=11,
      number=12, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='peer_nsid', full_name='net_device_entry.peer_nsid', index=12,
      number=13, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='master', full_name='net_device_entry.master', index=13,
      number=14, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sit', full_name='net_device_entry.sit', index=14,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=80,
  serialized_end=429,
)


_NETNS_ID = _descriptor.Descriptor(
  name='netns_id',
  full_name='netns_id',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='target_ns_id', full_name='netns_id.target_ns_id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='netnsid_value', full_name='netns_id.netnsid_value', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=431,
  serialized_end=486,
)


_NETNS_ENTRY = _descriptor.Descriptor(
  name='netns_entry',
  full_name='netns_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='def_conf', full_name='netns_entry.def_conf', index=0,
      number=1, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='all_conf', full_name='netns_entry.all_conf', index=1,
      number=2, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='def_conf4', full_name='netns_entry.def_conf4', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='all_conf4', full_name='netns_entry.all_conf4', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='def_conf6', full_name='netns_entry.def_conf6', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='all_conf6', full_name='netns_entry.all_conf6', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='nsids', full_name='netns_entry.nsids', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ext_key', full_name='netns_entry.ext_key', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=489,
  serialized_end=717,
)

_NET_DEVICE_ENTRY.fields_by_name['type'].enum_type = _ND_TYPE
_NET_DEVICE_ENTRY.fields_by_name['tun'].message_type = tun_pb2._TUN_LINK_ENTRY
_NET_DEVICE_ENTRY.fields_by_name['conf4'].message_type = sysctl_pb2._SYSCTL_ENTRY
_NET_DEVICE_ENTRY.fields_by_name['conf6'].message_type = sysctl_pb2._SYSCTL_ENTRY
_NET_DEVICE_ENTRY.fields_by_name['macvlan'].message_type = macvlan_pb2._MACVLAN_LINK_ENTRY
_NET_DEVICE_ENTRY.fields_by_name['sit'].message_type = sit_pb2._SIT_ENTRY
_NETNS_ENTRY.fields_by_name['def_conf4'].message_type = sysctl_pb2._SYSCTL_ENTRY
_NETNS_ENTRY.fields_by_name['all_conf4'].message_type = sysctl_pb2._SYSCTL_ENTRY
_NETNS_ENTRY.fields_by_name['def_conf6'].message_type = sysctl_pb2._SYSCTL_ENTRY
_NETNS_ENTRY.fields_by_name['all_conf6'].message_type = sysctl_pb2._SYSCTL_ENTRY
_NETNS_ENTRY.fields_by_name['nsids'].message_type = _NETNS_ID
DESCRIPTOR.message_types_by_name['net_device_entry'] = _NET_DEVICE_ENTRY
DESCRIPTOR.message_types_by_name['netns_id'] = _NETNS_ID
DESCRIPTOR.message_types_by_name['netns_entry'] = _NETNS_ENTRY
DESCRIPTOR.enum_types_by_name['nd_type'] = _ND_TYPE

net_device_entry = _reflection.GeneratedProtocolMessageType('net_device_entry', (_message.Message,), dict(
  DESCRIPTOR = _NET_DEVICE_ENTRY,
  __module__ = 'netdev_pb2'
  # @@protoc_insertion_point(class_scope:net_device_entry)
  ))
_sym_db.RegisterMessage(net_device_entry)

netns_id = _reflection.GeneratedProtocolMessageType('netns_id', (_message.Message,), dict(
  DESCRIPTOR = _NETNS_ID,
  __module__ = 'netdev_pb2'
  # @@protoc_insertion_point(class_scope:netns_id)
  ))
_sym_db.RegisterMessage(netns_id)

netns_entry = _reflection.GeneratedProtocolMessageType('netns_entry', (_message.Message,), dict(
  DESCRIPTOR = _NETNS_ENTRY,
  __module__ = 'netdev_pb2'
  # @@protoc_insertion_point(class_scope:netns_entry)
  ))
_sym_db.RegisterMessage(netns_entry)


_NET_DEVICE_ENTRY.fields_by_name['flags'].has_options = True
_NET_DEVICE_ENTRY.fields_by_name['flags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
# @@protoc_insertion_point(module_scope)
