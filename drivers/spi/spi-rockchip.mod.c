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
	{ 0xacfd9d04, __VMLINUX_SYMBOL_STR(devm_spi_register_master) },
	{ 0x4dcf8cd1, __VMLINUX_SYMBOL_STR(dma_get_slave_caps) },
	{ 0x4a3872ca, __VMLINUX_SYMBOL_STR(dma_request_chan) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xbc8025fb, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd130d658, __VMLINUX_SYMBOL_STR(spi_finalize_current_transfer) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2f7fe70f, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf265451b, __VMLINUX_SYMBOL_STR(spi_master_suspend) },
	{ 0xc2b5bfea, __VMLINUX_SYMBOL_STR(spi_master_resume) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crockchip,rk3036-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3188-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-spiC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-spi");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-spiC*");
