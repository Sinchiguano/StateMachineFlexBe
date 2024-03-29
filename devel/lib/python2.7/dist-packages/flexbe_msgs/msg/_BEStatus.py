# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from flexbe_msgs/BEStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class BEStatus(genpy.Message):
  _md5sum = "467355de4ad406f864268f41621cb885"
  _type = "flexbe_msgs/BEStatus"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Behavior Status
uint8 STARTED = 0
uint8 FINISHED = 1
uint8 FAILED = 2

uint8 LOCKED = 4
uint8 WAITING = 5
uint8 SWITCHING = 6

# General problems
uint8 WARNING = 10
uint8 ERROR = 11

# Engine Status
uint8 READY = 20

time stamp
int32 behavior_id
uint8 code

string[] args
"""
  # Pseudo-constants
  STARTED = 0
  FINISHED = 1
  FAILED = 2
  LOCKED = 4
  WAITING = 5
  SWITCHING = 6
  WARNING = 10
  ERROR = 11
  READY = 20

  __slots__ = ['stamp','behavior_id','code','args']
  _slot_types = ['time','int32','uint8','string[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       stamp,behavior_id,code,args

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BEStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.stamp is None:
        self.stamp = genpy.Time()
      if self.behavior_id is None:
        self.behavior_id = 0
      if self.code is None:
        self.code = 0
      if self.args is None:
        self.args = []
    else:
      self.stamp = genpy.Time()
      self.behavior_id = 0
      self.code = 0
      self.args = []

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
      buff.write(_get_struct_2IiB().pack(_x.stamp.secs, _x.stamp.nsecs, _x.behavior_id, _x.code))
      length = len(self.args)
      buff.write(_struct_I.pack(length))
      for val1 in self.args:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.stamp.secs, _x.stamp.nsecs, _x.behavior_id, _x.code,) = _get_struct_2IiB().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.args = []
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
        self.args.append(val1)
      self.stamp.canon()
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
      buff.write(_get_struct_2IiB().pack(_x.stamp.secs, _x.stamp.nsecs, _x.behavior_id, _x.code))
      length = len(self.args)
      buff.write(_struct_I.pack(length))
      for val1 in self.args:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.stamp is None:
        self.stamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.stamp.secs, _x.stamp.nsecs, _x.behavior_id, _x.code,) = _get_struct_2IiB().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.args = []
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
        self.args.append(val1)
      self.stamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2IiB = None
def _get_struct_2IiB():
    global _struct_2IiB
    if _struct_2IiB is None:
        _struct_2IiB = struct.Struct("<2IiB")
    return _struct_2IiB
