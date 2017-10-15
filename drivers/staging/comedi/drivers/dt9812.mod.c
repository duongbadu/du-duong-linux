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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x88a50a96, __VMLINUX_SYMBOL_STR(comedi_usb_auto_unconfig) },
	{ 0x6d90dfe1, __VMLINUX_SYMBOL_STR(comedi_usb_driver_unregister) },
	{ 0xd8428514, __VMLINUX_SYMBOL_STR(comedi_usb_driver_register) },
	{ 0x7839d10, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x5d5cd9b, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xbdbe75c6, __VMLINUX_SYMBOL_STR(range_unipolar2_5) },
	{ 0xbb52fc7f, __VMLINUX_SYMBOL_STR(range_bipolar10) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbc15c4a7, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8233dec1, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef8cf622, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xa28e165c, __VMLINUX_SYMBOL_STR(comedi_to_usb_dev) },
	{ 0x21155e76, __VMLINUX_SYMBOL_STR(comedi_to_usb_interface) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9d26945d, __VMLINUX_SYMBOL_STR(comedi_readback_insn_read) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdd135b0d, __VMLINUX_SYMBOL_STR(comedi_usb_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_usb,comedi,usbcore";

MODULE_ALIAS("usb:v0867p9812d*dc*dsc*dp*ic*isc*ip*in*");
