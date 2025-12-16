# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_ros_interfaces:msg/Forcepositionmove.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'control_mode'
# Member 'desired_force'
# Member 'limit_vel'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Forcepositionmove(type):
    """Metaclass of message 'Forcepositionmove'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rm_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_ros_interfaces.msg.Forcepositionmove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__forcepositionmove
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__forcepositionmove
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__forcepositionmove
            cls._TYPE_SUPPORT = module.type_support_msg__msg__forcepositionmove
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__forcepositionmove

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Forcepositionmove(metaclass=Metaclass_Forcepositionmove):
    """Message class 'Forcepositionmove'."""

    __slots__ = [
        '_pose',
        '_joint',
        '_flag',
        '_sensor',
        '_mode',
        '_control_mode',
        '_follow',
        '_desired_force',
        '_limit_vel',
        '_trajectory_mode',
        '_radio',
    ]

    _fields_and_field_types = {
        'pose': 'geometry_msgs/Pose',
        'joint': 'sequence<float>',
        'flag': 'uint8',
        'sensor': 'uint8',
        'mode': 'uint8',
        'control_mode': 'uint8[6]',
        'follow': 'boolean',
        'desired_force': 'float[6]',
        'limit_vel': 'float[6]',
        'trajectory_mode': 'uint8',
        'radio': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.joint = array.array('f', kwargs.get('joint', []))
        self.flag = kwargs.get('flag', int())
        self.sensor = kwargs.get('sensor', int())
        self.mode = kwargs.get('mode', int())
        if 'control_mode' not in kwargs:
            self.control_mode = numpy.zeros(6, dtype=numpy.uint8)
        else:
            self.control_mode = kwargs.get('control_mode')
        self.follow = kwargs.get('follow', bool())
        if 'desired_force' not in kwargs:
            self.desired_force = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.desired_force = kwargs.get('desired_force')
        if 'limit_vel' not in kwargs:
            self.limit_vel = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.limit_vel = kwargs.get('limit_vel')
        self.trajectory_mode = kwargs.get('trajectory_mode', int())
        self.radio = kwargs.get('radio', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pose != other.pose:
            return False
        if self.joint != other.joint:
            return False
        if self.flag != other.flag:
            return False
        if self.sensor != other.sensor:
            return False
        if self.mode != other.mode:
            return False
        if any(self.control_mode != other.control_mode):
            return False
        if self.follow != other.follow:
            return False
        if any(self.desired_force != other.desired_force):
            return False
        if any(self.limit_vel != other.limit_vel):
            return False
        if self.trajectory_mode != other.trajectory_mode:
            return False
        if self.radio != other.radio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def joint(self):
        """Message field 'joint'."""
        return self._joint

    @joint.setter
    def joint(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint' array.array() must have the type code of 'f'"
            self._joint = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'joint' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint = array.array('f', value)

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flag' field must be an unsigned integer in [0, 255]"
        self._flag = value

    @builtins.property
    def sensor(self):
        """Message field 'sensor'."""
        return self._sensor

    @sensor.setter
    def sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor' field must be an unsigned integer in [0, 255]"
        self._sensor = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'control_mode' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 6, \
                "The 'control_mode' numpy.ndarray() must have a size of 6"
            self._control_mode = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'control_mode' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._control_mode = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def follow(self):
        """Message field 'follow'."""
        return self._follow

    @follow.setter
    def follow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'follow' field must be of type 'bool'"
        self._follow = value

    @builtins.property
    def desired_force(self):
        """Message field 'desired_force'."""
        return self._desired_force

    @desired_force.setter
    def desired_force(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'desired_force' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'desired_force' numpy.ndarray() must have a size of 6"
            self._desired_force = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'desired_force' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._desired_force = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def limit_vel(self):
        """Message field 'limit_vel'."""
        return self._limit_vel

    @limit_vel.setter
    def limit_vel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'limit_vel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'limit_vel' numpy.ndarray() must have a size of 6"
            self._limit_vel = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'limit_vel' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._limit_vel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def trajectory_mode(self):
        """Message field 'trajectory_mode'."""
        return self._trajectory_mode

    @trajectory_mode.setter
    def trajectory_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trajectory_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trajectory_mode' field must be an unsigned integer in [0, 255]"
        self._trajectory_mode = value

    @builtins.property
    def radio(self):
        """Message field 'radio'."""
        return self._radio

    @radio.setter
    def radio(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radio' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'radio' field must be an unsigned integer in [0, 65535]"
        self._radio = value
