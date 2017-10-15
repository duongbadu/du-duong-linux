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
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8233dec1, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x98f3ee9a, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x21155e76, __VMLINUX_SYMBOL_STR(comedi_to_usb_interface) },
	{ 0x7839d10, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xef8cf622, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa28e165c, __VMLINUX_SYMBOL_STR(comedi_to_usb_dev) },
	{ 0xdd135b0d, __VMLINUX_SYMBOL_STR(comedi_usb_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_usb,comedi,usbcore";

MODULE_ALIAS("usb:v3923p718Ad*dc*dsc*dp*ic*isc*ip*in*");
