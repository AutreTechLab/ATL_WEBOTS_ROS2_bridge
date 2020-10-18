// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_interfaces:srv/WebotsThymio2LEDSrv.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__STRUCT_HPP_
#define WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Request __declspec(deprecated)
#endif

namespace webots_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WebotsThymio2LEDSrv_Request_
{
  using Type = WebotsThymio2LEDSrv_Request_<ContainerAllocator>;

  explicit WebotsThymio2LEDSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WebotsThymio2LEDSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _leds_top_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _leds_top_type leds_top;
  using _leds_bottom_left_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _leds_bottom_left_type leds_bottom_left;
  using _leds_bottom_right_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _leds_bottom_right_type leds_bottom_right;

  // setters for named parameter idiom
  Type & set__leds_top(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->leds_top = _arg;
    return *this;
  }
  Type & set__leds_bottom_left(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->leds_bottom_left = _arg;
    return *this;
  }
  Type & set__leds_bottom_right(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->leds_bottom_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Request
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Request
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebotsThymio2LEDSrv_Request_ & other) const
  {
    if (this->leds_top != other.leds_top) {
      return false;
    }
    if (this->leds_bottom_left != other.leds_bottom_left) {
      return false;
    }
    if (this->leds_bottom_right != other.leds_bottom_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebotsThymio2LEDSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebotsThymio2LEDSrv_Request_

// alias to use template instance with default allocator
using WebotsThymio2LEDSrv_Request =
  webots_interfaces::srv::WebotsThymio2LEDSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_interfaces


#ifndef _WIN32
# define DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Response __declspec(deprecated)
#endif

namespace webots_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WebotsThymio2LEDSrv_Response_
{
  using Type = WebotsThymio2LEDSrv_Response_<ContainerAllocator>;

  explicit WebotsThymio2LEDSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->log_message = "";
    }
  }

  explicit WebotsThymio2LEDSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : log_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->log_message = "";
    }
  }

  // field types and members
  using _log_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _log_message_type log_message;

  // setters for named parameter idiom
  Type & set__log_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->log_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Response
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_interfaces__srv__WebotsThymio2LEDSrv_Response
    std::shared_ptr<webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebotsThymio2LEDSrv_Response_ & other) const
  {
    if (this->log_message != other.log_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebotsThymio2LEDSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebotsThymio2LEDSrv_Response_

// alias to use template instance with default allocator
using WebotsThymio2LEDSrv_Response =
  webots_interfaces::srv::WebotsThymio2LEDSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_interfaces

namespace webots_interfaces
{

namespace srv
{

struct WebotsThymio2LEDSrv
{
  using Request = webots_interfaces::srv::WebotsThymio2LEDSrv_Request;
  using Response = webots_interfaces::srv::WebotsThymio2LEDSrv_Response;
};

}  // namespace srv

}  // namespace webots_interfaces

#endif  // WEBOTS_INTERFACES__SRV__DETAIL__WEBOTS_THYMIO2_LED_SRV__STRUCT_HPP_
