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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x19ce2683, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x367c4822, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8241b551, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xd3d7db10, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_rw_locked) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd16a8ea5, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xda28e51e, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0xa5cb613, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x44f1c37, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0x932b241f, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x892c4ff, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef8cf622, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xd26885a0, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x7c6dca02, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
	{ 0xc10e355d, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x93dcf9be, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,usbcore,rc-core,dvb-core";

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");
