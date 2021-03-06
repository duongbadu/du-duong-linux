#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xb9572f1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa11d7096, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x66cac49f, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xf721c45b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x68656b9e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xc495fc55, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x6be94d28, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0xb7354081, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x158b68b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xdb7ab568, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9909196e, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,usbcore,v4l2-common";

MODULE_ALIAS("usb:v10C4p8244d*dc*dsc*dp*ic03isc00ip00in*");
