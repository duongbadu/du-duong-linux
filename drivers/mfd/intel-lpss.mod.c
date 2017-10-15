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
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x70ef8180, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0xec4805ba, __VMLINUX_SYMBOL_STR(clk_register_fractional_divider) },
	{ 0x6e59fda7, __VMLINUX_SYMBOL_STR(dev_pm_qos_hide_latency_tolerance) },
	{ 0x10bcb21e, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x63150e06, __VMLINUX_SYMBOL_STR(clk_get_parent) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xbf0f3452, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x7b22dc4b, __VMLINUX_SYMBOL_STR(clk_register_fixed_rate) },
	{ 0xddca3e27, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0xaa897c72, __VMLINUX_SYMBOL_STR(device_for_each_child_reverse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x981e093, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x7757b51a, __VMLINUX_SYMBOL_STR(clk_unregister) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa6eb3037, __VMLINUX_SYMBOL_STR(clkdev_drop) },
	{ 0xc121058a, __VMLINUX_SYMBOL_STR(clkdev_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3bef6c4a, __VMLINUX_SYMBOL_STR(dev_pm_qos_expose_latency_tolerance) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd2e88de5, __VMLINUX_SYMBOL_STR(clk_register_gate) },
	{ 0xc569d8ce, __VMLINUX_SYMBOL_STR(__clk_get_name) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

