# generated from rosidl_generator_py/resource/_idl.py.em
# with input from homework1_petr:srv/StartStop.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StartStop_Request(type):
    """Metaclass of message 'StartStop_Request'."""

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
                'homework1_petr.srv.StartStop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_stop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_stop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_stop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_stop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_stop__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartStop_Request(metaclass=Metaclass_StartStop_Request):
    """Message class 'StartStop_Request'."""

    __slots__ = [
        '_f',
    ]

    _fields_and_field_types = {
        'f': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.f = kwargs.get('f', int())

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
        if self.f != other.f:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def f(self):
        """Message field 'f'."""
        return self._f

    @f.setter
    def f(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'f' field must be an integer in [-2147483648, 2147483647]"
        self._f = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_StartStop_Response(type):
    """Metaclass of message 'StartStop_Response'."""

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
                'homework1_petr.srv.StartStop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__start_stop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__start_stop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__start_stop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__start_stop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__start_stop__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StartStop_Response(metaclass=Metaclass_StartStop_Response):
    """Message class 'StartStop_Response'."""

    __slots__ = [
        '_n',
    ]

    _fields_and_field_types = {
        'n': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n = kwargs.get('n', int())

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
        if self.n != other.n:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n' field must be an integer in [-2147483648, 2147483647]"
        self._n = value


class Metaclass_StartStop(type):
    """Metaclass of service 'StartStop'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('homework1_petr')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'homework1_petr.srv.StartStop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__start_stop

            from homework1_petr.srv import _start_stop
            if _start_stop.Metaclass_StartStop_Request._TYPE_SUPPORT is None:
                _start_stop.Metaclass_StartStop_Request.__import_type_support__()
            if _start_stop.Metaclass_StartStop_Response._TYPE_SUPPORT is None:
                _start_stop.Metaclass_StartStop_Response.__import_type_support__()


class StartStop(metaclass=Metaclass_StartStop):
    from homework1_petr.srv._start_stop import StartStop_Request as Request
    from homework1_petr.srv._start_stop import StartStop_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
