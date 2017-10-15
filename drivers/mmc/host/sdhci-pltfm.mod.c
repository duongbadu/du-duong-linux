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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x9fde36fd, __VMLINUX_SYMBOL_STR(sdhci_remove_host) },
	{ 0xb3434b01, __VMLINUX_SYMBOL_STR(sdhci_alloc_host) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x999326a5, __VMLINUX_SYMBOL_STR(sdhci_resume_host) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x12de9874, __VMLINUX_SYMBOL_STR(sdhci_add_host) },
	{ 0xee5bd80c, __VMLINUX_SYMBOL_STR(sdhci_free_host) },
	{ 0x125f2fb3, __VMLINUX_SYMBOL_STR(sdhci_set_clock) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe56071, __VMLINUX_SYMBOL_STR(sdhci_suspend_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2bfeca85, __VMLINUX_SYMBOL_STR(sdhci_reset) },
	{ 0xca39f27d, __VMLINUX_SYMBOL_STR(sdhci_set_uhs_signaling) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x12167ac6, __VMLINUX_SYMBOL_STR(sdhci_set_bus_width) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci";

