# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: Erg.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='Erg.proto',
  package='EasyErgsocket',
  serialized_pb=_b('\n\tErg.proto\x12\rEasyErgsocket\"\x8e\x01\n\x03\x45rg\x12\x15\n\rdisplayedTime\x18\x01 \x01(\x01\x12\x17\n\x0f\x64isplayedMeters\x18\x02 \x01(\x01\x12\x0f\n\x07\x63\x61\x64\x65nce\x18\x03 \x01(\r\x12\x12\n\npaceInSecs\x18\x04 \x01(\r\x12\x10\n\x08\x63\x61lories\x18\x05 \x01(\r\x12\r\n\x05power\x18\x06 \x01(\r\x12\x11\n\theartrate\x18\x07 \x01(\r')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_ERG = _descriptor.Descriptor(
  name='Erg',
  full_name='EasyErgsocket.Erg',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='displayedTime', full_name='EasyErgsocket.Erg.displayedTime', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='displayedMeters', full_name='EasyErgsocket.Erg.displayedMeters', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cadence', full_name='EasyErgsocket.Erg.cadence', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='paceInSecs', full_name='EasyErgsocket.Erg.paceInSecs', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='calories', full_name='EasyErgsocket.Erg.calories', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='power', full_name='EasyErgsocket.Erg.power', index=5,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='heartrate', full_name='EasyErgsocket.Erg.heartrate', index=6,
      number=7, type=13, cpp_type=3, label=1,
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
  serialized_start=29,
  serialized_end=171,
)

DESCRIPTOR.message_types_by_name['Erg'] = _ERG

Erg = _reflection.GeneratedProtocolMessageType('Erg', (_message.Message,), dict(
  DESCRIPTOR = _ERG,
  __module__ = 'Erg_pb2'
  # @@protoc_insertion_point(class_scope:EasyErgsocket.Erg)
  ))
_sym_db.RegisterMessage(Erg)


# @@protoc_insertion_point(module_scope)
