/* This is a generated header file providing the common items to everything related to the Analog SDK */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

enum class WootingAnalog_DeviceEventType {
  /// Device has been connected
  WootingAnalog_DeviceEventType_Connected = 1,
  /// Device has been disconnected
  WootingAnalog_DeviceEventType_Disconnected,
};

enum class WootingAnalog_DeviceType {
  /// Device is of type Keyboard
  WootingAnalog_DeviceType_Keyboard = 1,
  /// Device is of type Keypad
  WootingAnalog_DeviceType_Keypad,
  /// Device
  WootingAnalog_DeviceType_Other,
};

enum class WootingAnalog_KeycodeType {
  /// USB HID Keycodes https://www.usb.org/document-library/hid-usage-tables-112 pg53
  WootingAnalog_KeycodeType_HID,
  /// Scan code set 1
  WootingAnalog_KeycodeType_ScanCode1,
  /// Windows Virtual Keys
  WootingAnalog_KeycodeType_VirtualKey,
  /// Windows Virtual Keys which are translated to the current keyboard locale
  WootingAnalog_KeycodeType_VirtualKeyTranslate,
};

enum class WootingAnalogResult {
  WootingAnalogResult_Ok = 1,
  /// Item hasn't been initialized
  WootingAnalogResult_UnInitialized = -2000,
  /// No Devices are connected
  WootingAnalogResult_NoDevices,
  /// Device has been disconnected
  WootingAnalogResult_DeviceDisconnected,
  /// Generic Failure
  WootingAnalogResult_Failure,
  /// A given parameter was invalid
  WootingAnalogResult_InvalidArgument,
  /// No Plugins were found
  WootingAnalogResult_NoPlugins,
  /// The specified function was not found in the library
  WootingAnalogResult_FunctionNotFound,
  /// No Keycode mapping to HID was found for the given Keycode
  WootingAnalogResult_NoMapping,
  /// Indicates that it isn't available on this platform
  WootingAnalogResult_NotAvailable,
};

using WootingAnalog_DeviceID = uint64_t;

/// The core `DeviceInfo` struct which contains all the interesting information
/// for a particular device
struct WootingAnalog_DeviceInfo {
  /// Device Vendor ID `vid`
  uint16_t vendor_id;
  /// Device Product ID `pid`
  uint16_t product_id;
  /// Device Manufacturer name
  const char *manufacturer_name;
  /// Device name
  const char *device_name;
  /// Unique device ID, which should be generated using `generate_device_id`
  WootingAnalog_DeviceID device_id;
  /// Hardware type of the Device
  WootingAnalog_DeviceType device_type;
};
