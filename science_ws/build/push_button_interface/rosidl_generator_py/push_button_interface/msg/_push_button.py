# generated from rosidl_generator_py/resource/_idl.py.em
# with input from push_button_interface:msg/PushButton.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PushButton(type):
    """Metaclass of message 'PushButton'."""

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
            module = import_type_support('push_button_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'push_button_interface.msg.PushButton')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__push_button
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__push_button
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__push_button
            cls._TYPE_SUPPORT = module.type_support_msg__msg__push_button
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__push_button

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PushButton(metaclass=Metaclass_PushButton):
    """Message class 'PushButton'."""

    __slots__ = [
        '_collect_sample',
        '_platform',
        '_microscope',
        '_flashlight',
        '_uv_cam',
    ]

    _fields_and_field_types = {
        'collect_sample': 'boolean',
        'platform': 'boolean',
        'microscope': 'boolean',
        'flashlight': 'boolean',
        'uv_cam': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.collect_sample = kwargs.get('collect_sample', bool())
        self.platform = kwargs.get('platform', bool())
        self.microscope = kwargs.get('microscope', bool())
        self.flashlight = kwargs.get('flashlight', bool())
        self.uv_cam = kwargs.get('uv_cam', bool())

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
        if self.collect_sample != other.collect_sample:
            return False
        if self.platform != other.platform:
            return False
        if self.microscope != other.microscope:
            return False
        if self.flashlight != other.flashlight:
            return False
        if self.uv_cam != other.uv_cam:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def collect_sample(self):
        """Message field 'collect_sample'."""
        return self._collect_sample

    @collect_sample.setter
    def collect_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'collect_sample' field must be of type 'bool'"
        self._collect_sample = value

    @property
    def platform(self):
        """Message field 'platform'."""
        return self._platform

    @platform.setter
    def platform(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'platform' field must be of type 'bool'"
        self._platform = value

    @property
    def microscope(self):
        """Message field 'microscope'."""
        return self._microscope

    @microscope.setter
    def microscope(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'microscope' field must be of type 'bool'"
        self._microscope = value

    @property
    def flashlight(self):
        """Message field 'flashlight'."""
        return self._flashlight

    @flashlight.setter
    def flashlight(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flashlight' field must be of type 'bool'"
        self._flashlight = value

    @property
    def uv_cam(self):
        """Message field 'uv_cam'."""
        return self._uv_cam

    @uv_cam.setter
    def uv_cam(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'uv_cam' field must be of type 'bool'"
        self._uv_cam = value
