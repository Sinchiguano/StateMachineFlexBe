# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from flexbe_msgs/BehaviorSelection.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import flexbe_msgs.msg

class BehaviorSelection(genpy.Message):
  _md5sum = "514f1b101295bdbd417ee6cc46e3823c"
  _type = "flexbe_msgs/BehaviorSelection"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 behavior_id
int32 behavior_checksum

uint8 autonomy_level
string[] arg_keys
string[] arg_values

string[] input_keys
string[] input_values

flexbe_msgs/BehaviorModification[] modifications
================================================================================
MSG: flexbe_msgs/BehaviorModification
int32 index_begin
int32 index_end
string new_content"""
  __slots__ = ['behavior_id','behavior_checksum','autonomy_level','arg_keys','arg_values','input_keys','input_values','modifications']
  _slot_types = ['int32','int32','uint8','string[]','string[]','string[]','string[]','flexbe_msgs/BehaviorModification[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       behavior_id,behavior_checksum,autonomy_level,arg_keys,arg_values,input_keys,input_values,modifications

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BehaviorSelection, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.behavior_id is None:
        self.behavior_id = 0
      if self.behavior_checksum is None:
        self.behavior_checksum = 0
      if self.autonomy_level is None:
        self.autonomy_level = 0
      if self.arg_keys is None:
        self.arg_keys = []
      if self.arg_values is None:
        self.arg_values = []
      if self.input_keys is None:
        self.input_keys = []
      if self.input_values is None:
        self.input_values = []
      if self.modifications is None:
        self.modifications = []
    else:
      self.behavior_id = 0
      self.behavior_checksum = 0
      self.autonomy_level = 0
      self.arg_keys = []
      self.arg_values = []
      self.input_keys = []
      self.input_values = []
      self.modifications = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2iB().pack(_x.behavior_id, _x.behavior_checksum, _x.autonomy_level))
      length = len(self.arg_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.arg_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.arg_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.arg_values:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.input_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.input_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.input_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.input_values:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.modifications)
      buff.write(_struct_I.pack(length))
      for val1 in self.modifications:
        _x = val1
        buff.write(_get_struct_2i().pack(_x.index_begin, _x.index_end))
        _x = val1.new_content
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.modifications is None:
        self.modifications = None
      end = 0
      _x = self
      start = end
      end += 9
      (_x.behavior_id, _x.behavior_checksum, _x.autonomy_level,) = _get_struct_2iB().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arg_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.arg_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arg_values = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.arg_values.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.input_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input_values = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.input_values.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.modifications = []
      for i in range(0, length):
        val1 = flexbe_msgs.msg.BehaviorModification()
        _x = val1
        start = end
        end += 8
        (_x.index_begin, _x.index_end,) = _get_struct_2i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.new_content = str[start:end].decode('utf-8')
        else:
          val1.new_content = str[start:end]
        self.modifications.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2iB().pack(_x.behavior_id, _x.behavior_checksum, _x.autonomy_level))
      length = len(self.arg_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.arg_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.arg_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.arg_values:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.input_keys)
      buff.write(_struct_I.pack(length))
      for val1 in self.input_keys:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.input_values)
      buff.write(_struct_I.pack(length))
      for val1 in self.input_values:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.modifications)
      buff.write(_struct_I.pack(length))
      for val1 in self.modifications:
        _x = val1
        buff.write(_get_struct_2i().pack(_x.index_begin, _x.index_end))
        _x = val1.new_content
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.modifications is None:
        self.modifications = None
      end = 0
      _x = self
      start = end
      end += 9
      (_x.behavior_id, _x.behavior_checksum, _x.autonomy_level,) = _get_struct_2iB().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arg_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.arg_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arg_values = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.arg_values.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input_keys = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.input_keys.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input_values = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.input_values.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.modifications = []
      for i in range(0, length):
        val1 = flexbe_msgs.msg.BehaviorModification()
        _x = val1
        start = end
        end += 8
        (_x.index_begin, _x.index_end,) = _get_struct_2i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.new_content = str[start:end].decode('utf-8')
        else:
          val1.new_content = str[start:end]
        self.modifications.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2iB = None
def _get_struct_2iB():
    global _struct_2iB
    if _struct_2iB is None:
        _struct_2iB = struct.Struct("<2iB")
    return _struct_2iB
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
