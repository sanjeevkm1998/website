# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vrep_common/VrepInfo.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class VrepInfo(genpy.Message):
  _md5sum = "66334ab2212d3c89226a89b7a37b2f95"
  _type = "vrep_common/VrepInfo"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """std_msgs/Header headerInfo
std_msgs/Int32 simulatorState
std_msgs/Float32 simulationTime
std_msgs/Float32 timeStep

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: std_msgs/Int32
int32 data
================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['headerInfo','simulatorState','simulationTime','timeStep']
  _slot_types = ['std_msgs/Header','std_msgs/Int32','std_msgs/Float32','std_msgs/Float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       headerInfo,simulatorState,simulationTime,timeStep

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VrepInfo, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.headerInfo is None:
        self.headerInfo = std_msgs.msg.Header()
      if self.simulatorState is None:
        self.simulatorState = std_msgs.msg.Int32()
      if self.simulationTime is None:
        self.simulationTime = std_msgs.msg.Float32()
      if self.timeStep is None:
        self.timeStep = std_msgs.msg.Float32()
    else:
      self.headerInfo = std_msgs.msg.Header()
      self.simulatorState = std_msgs.msg.Int32()
      self.simulationTime = std_msgs.msg.Float32()
      self.timeStep = std_msgs.msg.Float32()

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
      buff.write(_get_struct_3I().pack(_x.headerInfo.seq, _x.headerInfo.stamp.secs, _x.headerInfo.stamp.nsecs))
      _x = self.headerInfo.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_i2f().pack(_x.simulatorState.data, _x.simulationTime.data, _x.timeStep.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.headerInfo is None:
        self.headerInfo = std_msgs.msg.Header()
      if self.simulatorState is None:
        self.simulatorState = std_msgs.msg.Int32()
      if self.simulationTime is None:
        self.simulationTime = std_msgs.msg.Float32()
      if self.timeStep is None:
        self.timeStep = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.headerInfo.seq, _x.headerInfo.stamp.secs, _x.headerInfo.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.headerInfo.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.headerInfo.frame_id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.simulatorState.data, _x.simulationTime.data, _x.timeStep.data,) = _get_struct_i2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.headerInfo.seq, _x.headerInfo.stamp.secs, _x.headerInfo.stamp.nsecs))
      _x = self.headerInfo.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_i2f().pack(_x.simulatorState.data, _x.simulationTime.data, _x.timeStep.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.headerInfo is None:
        self.headerInfo = std_msgs.msg.Header()
      if self.simulatorState is None:
        self.simulatorState = std_msgs.msg.Int32()
      if self.simulationTime is None:
        self.simulationTime = std_msgs.msg.Float32()
      if self.timeStep is None:
        self.timeStep = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.headerInfo.seq, _x.headerInfo.stamp.secs, _x.headerInfo.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.headerInfo.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.headerInfo.frame_id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.simulatorState.data, _x.simulationTime.data, _x.timeStep.data,) = _get_struct_i2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_i2f = None
def _get_struct_i2f():
    global _struct_i2f
    if _struct_i2f is None:
        _struct_i2f = struct.Struct("<i2f")
    return _struct_i2f
