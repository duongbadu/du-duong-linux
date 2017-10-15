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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x710072f4, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xd5376e0c, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x5dad1d1f, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xf17fb40e, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7e947d0d, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xf0c3736a, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

