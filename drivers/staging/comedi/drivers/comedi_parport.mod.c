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
	{ 0xeca4bdb3, __VMLINUX_SYMBOL_STR(comedi_legacy_detach) },
	{ 0x13f2bb2d, __VMLINUX_SYMBOL_STR(comedi_driver_unregister) },
	{ 0x270a3ab1, __VMLINUX_SYMBOL_STR(comedi_driver_register) },
	{ 0x98f3ee9a, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x6fac9e4e, __VMLINUX_SYMBOL_STR(comedi_request_region) },
	{ 0xa1a53096, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0x558f5670, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x7839d10, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi";

