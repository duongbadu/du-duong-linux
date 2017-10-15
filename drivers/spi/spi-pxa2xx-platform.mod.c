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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd868e2a7, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa08f28e8, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xf0e0d135, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xd06ad6b6, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdf8c695a, __VMLINUX_SYMBOL_STR(__ndelay) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x48a6032a, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xf265451b, __VMLINUX_SYMBOL_STR(spi_master_suspend) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf1e357e7, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x842c6439, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0xacfd9d04, __VMLINUX_SYMBOL_STR(devm_spi_register_master) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc2b5bfea, __VMLINUX_SYMBOL_STR(spi_master_resume) },
	{ 0x26c398e6, __VMLINUX_SYMBOL_STR(devm_gpiod_get_index) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x84c97b71, __VMLINUX_SYMBOL_STR(spi_get_next_queued_message) },
	{ 0xbc8025fb, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc5092373, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xec853f1d, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xba497f13, __VMLINUX_SYMBOL_STR(loops_per_jiffy) },
	{ 0x2f7fe70f, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x5fd71960, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xc6d935da, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4a14b678, __VMLINUX_SYMBOL_STR(gpiod_count) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x25800911, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x175efdd4, __VMLINUX_SYMBOL_STR(spi_finalize_current_message) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");
