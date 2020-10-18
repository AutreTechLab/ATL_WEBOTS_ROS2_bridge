# generated from rosidl_generator_py/resource/_idl.py.em
# with input from webots_interfaces:srv/WebotsThymio2MotorSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WebotsThymio2MotorSrv_Request(type):
    """Metaclass of message 'WebotsThymio2MotorSrv_Request'."""

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
            module = import_type_support('webots_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'webots_interfaces.srv.WebotsThymio2MotorSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__webots_thymio2_motor_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__webots_thymio2_motor_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__webots_thymio2_motor_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__webots_thymio2_motor_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__webots_thymio2_motor_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebotsThymio2MotorSrv_Request(metaclass=Metaclass_WebotsThymio2MotorSrv_Request):
    """Message class 'WebotsThymio2MotorSrv_Request'."""

    __slots__ = [
        '_motor_left_target',
        '_motor_right_target',
    ]

    _fields_and_field_types = {
        'motor_left_target': 'int64',
        'motor_right_target': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_left_target = kwargs.get('motor_left_target', int())
        self.motor_right_target = kwargs.get('motor_right_target', int())

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
        if self.motor_left_target != other.motor_left_target:
            return False
        if self.motor_right_target != other.motor_right_target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motor_left_target(self):
        """Message field 'motor_left_target'."""
        return self._motor_left_target

    @motor_left_target.setter
    def motor_left_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_left_target' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'motor_left_target' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._motor_left_target = value

    @property
    def motor_right_target(self):
        """Message field 'motor_right_target'."""
        return self._motor_right_target

    @motor_right_target.setter
    def motor_right_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_right_target' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'motor_right_target' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._motor_right_target = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_WebotsThymio2MotorSrv_Response(type):
    """Metaclass of message 'WebotsThymio2MotorSrv_Response'."""

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
            module = import_type_support('webots_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'webots_interfaces.srv.WebotsThymio2MotorSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__webots_thymio2_motor_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__webots_thymio2_motor_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__webots_thymio2_motor_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__webots_thymio2_motor_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__webots_thymio2_motor_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WebotsThymio2MotorSrv_Response(metaclass=Metaclass_WebotsThymio2MotorSrv_Response):
    """Message class 'WebotsThymio2MotorSrv_Response'."""

    __slots__ = [
        '_log_message',
    ]

    _fields_and_field_types = {
        'log_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.log_message = kwargs.get('log_message', str())

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
        if self.log_message != other.log_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def log_message(self):
        """Message field 'log_message'."""
        return self._log_message

    @log_message.setter
    def log_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'log_message' field must be of type 'str'"
        self._log_message = value


class Metaclass_WebotsThymio2MotorSrv(type):
    """Metaclass of service 'WebotsThymio2MotorSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('webots_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'webots_interfaces.srv.WebotsThymio2MotorSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__webots_thymio2_motor_srv

            from webots_interfaces.srv import _webots_thymio2_motor_srv
            if _webots_thymio2_motor_srv.Metaclass_WebotsThymio2MotorSrv_Request._TYPE_SUPPORT is None:
                _webots_thymio2_motor_srv.Metaclass_WebotsThymio2MotorSrv_Request.__import_type_support__()
            if _webots_thymio2_motor_srv.Metaclass_WebotsThymio2MotorSrv_Response._TYPE_SUPPORT is None:
                _webots_thymio2_motor_srv.Metaclass_WebotsThymio2MotorSrv_Response.__import_type_support__()


class WebotsThymio2MotorSrv(metaclass=Metaclass_WebotsThymio2MotorSrv):
    from webots_interfaces.srv._webots_thymio2_motor_srv import WebotsThymio2MotorSrv_Request as Request
    from webots_interfaces.srv._webots_thymio2_motor_srv import WebotsThymio2MotorSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
