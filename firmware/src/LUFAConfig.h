#ifndef _LUFA_CONFIG_H_
#define _LUFA_CONFIG_H_

/* --------- USB Core Options --------- */

/* We are only a USB Device. */
#define USB_DEVICE_ONLY

/* Disable USB Host and OTG features entirely. */
#define USB_HOST_ONLY
#undef USB_HOST_ONLY

#define USB_CAN_BE_DEVICE
#undef USB_CAN_BE_HOST
#undef USB_CAN_BE_OTG

/* --------- Descriptors & Speed --------- */

/* Full-speed device (only option on AVR). */
#define FIXED_CONTROL_ENDPOINT_SIZE 8
#define FIXED_NUM_CONFIGURATIONS 1

/* LUFA will not store descriptors in RAM unless you enable this.
   Leave it OFF to store them in PROGMEM (recommended). */
// #define USE_RAM_DESCRIPTORS

/* --------- HID Class Options --------- */

/* Enable HID device support. */
#define HID_DEVICE_ENABLED

/* We don't need Boot protocol support → Raw HID only */
#define HID_BOOT_PROTOCOL
#undef HID_BOOT_PROTOCOL

/* LUFA's HID system requires a millisecond tick */
#define HID_USAGE_PAGE_VENDOR     0xFF00
#define HID_USAGE_VENDOR          0x01

/* --------- Misc Device Options --------- */

/* Disable everything not needed for HID */
#define NO_INTERNAL_SERIAL
#define NO_DEVICE_SELF_POWER
#define NO_DEVICE_REMOTE_WAKEUP

/* Make LUFA use your F_USB and F_CPU from compiler flags */
#define USB_DEVICE_OPT_FULLSPEED

#endif
