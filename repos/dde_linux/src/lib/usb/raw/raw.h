#ifndef _RAW_H_
#define _RAW_H_

struct usb_device;
struct usb_driver;

extern struct usb_device_driver raw_driver;
extern struct usb_driver        raw_intf_driver;

void raw_register_device(struct usb_device *udev);
void raw_unregister_device(struct usb_device *udev);


#endif /* _RAW_H_ */
