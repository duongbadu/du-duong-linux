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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8384062a, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x1db17847, __VMLINUX_SYMBOL_STR(serial8250_do_pm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfdb9b629, __VMLINUX_SYMBOL_STR(ioread32be) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf1e357e7, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x94ed0594, __VMLINUX_SYMBOL_STR(serial8250_register_8250_port) },
	{ 0xfe113740, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xb2210d64, __VMLINUX_SYMBOL_STR(reset_control_deassert) },
	{ 0xb9a05cd0, __VMLINUX_SYMBOL_STR(__devm_reset_control_get) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xf65edd2a, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x718e0c31, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x981e093, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x4940e0b4, __VMLINUX_SYMBOL_STR(serial8250_do_set_termios) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xcdbd9164, __VMLINUX_SYMBOL_STR(serial8250_handle_irq) },
	{ 0x6acb973d, __VMLINUX_SYMBOL_STR(iowrite32be) },
	{ 0xc6b82a24, __VMLINUX_SYMBOL_STR(serial8250_clear_and_reinit_fifos) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x6c4b6684, __VMLINUX_SYMBOL_STR(reset_control_assert) },
	{ 0xcefcd99a, __VMLINUX_SYMBOL_STR(serial8250_unregister_port) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xcc248d26, __VMLINUX_SYMBOL_STR(serial8250_suspend_port) },
	{ 0xc7208c3a, __VMLINUX_SYMBOL_STR(serial8250_resume_port) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT33C4:*");
MODULE_ALIAS("acpi*:INT33C5:*");
MODULE_ALIAS("acpi*:INT3434:*");
MODULE_ALIAS("acpi*:INT3435:*");
MODULE_ALIAS("acpi*:80860F0A:*");
MODULE_ALIAS("acpi*:8086228A:*");
MODULE_ALIAS("acpi*:APMC0D08:*");
MODULE_ALIAS("acpi*:AMD0020:*");
MODULE_ALIAS("acpi*:AMDI0020:*");
MODULE_ALIAS("acpi*:HISI0031:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uart");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uartC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uart");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uartC*");
