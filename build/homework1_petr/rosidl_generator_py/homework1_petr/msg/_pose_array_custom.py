# generated from rosidl_generator_py/resource/_idl.py.em
# with input from homework1_petr:msg/PoseArrayCustom.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseArrayCustom(type):
    """Metaclass of message 'PoseArrayCustom'."""

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
            module = import_type_support('homework1_petr')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'homework1_petr.msg.PoseArrayCustom')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_array_custom
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_array_custom
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_array_custom
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_array_custom
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_array_custom

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


class PoseArrayCustom(metaclass=Metaclass_PoseArrayCustom):
    """Message class 'PoseArrayCustom'."""

    __slots__ = [
        '_t1',
        '_t2',
        '_t3',
        '_t4',
    ]

    _fields_and_field_types = {
        't1': 'geometry_msgs/Pose',
        't2': 'geometry_msgs/Pose',
        't3': 'geometry_msgs/Pose',
        't4': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.t1 = kwargs.get('t1', Pose())
        from geometry_msgs.msg import Pose
        self.t2 = kwargs.get('t2', Pose())
        from geometry_msgs.msg import Pose
        self.t3 = kwargs.get('t3', Pose())
        from geometry_msgs.msg import Pose
        self.t4 = kwargs.get('t4', Pose())

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
        if self.t1 != other.t1:
            return False
        if self.t2 != other.t2:
            return False
        if self.t3 != other.t3:
            return False
        if self.t4 != other.t4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def t1(self):
        """Message field 't1'."""
        return self._t1

    @t1.setter
    def t1(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 't1' field must be a sub message of type 'Pose'"
        self._t1 = value

    @builtins.property
    def t2(self):
        """Message field 't2'."""
        return self._t2

    @t2.setter
    def t2(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 't2' field must be a sub message of type 'Pose'"
        self._t2 = value

    @builtins.property
    def t3(self):
        """Message field 't3'."""
        return self._t3

    @t3.setter
    def t3(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 't3' field must be a sub message of type 'Pose'"
        self._t3 = value

    @builtins.property
    def t4(self):
        """Message field 't4'."""
        return self._t4

    @t4.setter
    def t4(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 't4' field must be a sub message of type 'Pose'"
        self._t4 = value
