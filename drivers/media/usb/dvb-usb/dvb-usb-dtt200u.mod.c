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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x15d15d1c, __VMLINUX_SYMBOL_STR(dvb_usb_generic_write) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5c0e8564, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x7d2c96a0, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8241b551, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa5cb613, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe31ca57a, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbee92c48, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc8a01bf1, __VMLINUX_SYMBOL_STR(rc_repeat) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,usbcore,rc-core";

MODULE_ALIAS("usb:v14AAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0222d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18F3p0220d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5039CD9ECB210C28766EA04");
