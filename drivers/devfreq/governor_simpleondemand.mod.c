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
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x160992ab, __VMLINUX_SYMBOL_STR(devfreq_remove_governor) },
	{ 0xd63c37eb, __VMLINUX_SYMBOL_STR(devfreq_add_governor) },
	{ 0xca1092d5, __VMLINUX_SYMBOL_STR(devfreq_monitor_suspend) },
	{ 0x405cd3b7, __VMLINUX_SYMBOL_STR(devfreq_monitor_stop) },
	{ 0x41b3bad7, __VMLINUX_SYMBOL_STR(devfreq_monitor_start) },
	{ 0xd4f32dcf, __VMLINUX_SYMBOL_STR(devfreq_monitor_resume) },
	{ 0x330b12be, __VMLINUX_SYMBOL_STR(devfreq_interval_update) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

