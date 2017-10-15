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
	{ 0x108a5acb, __VMLINUX_SYMBOL_STR(mmc_gpio_get_ro) },
	{ 0x25f39632, __VMLINUX_SYMBOL_STR(pm_runtime_force_resume) },
	{ 0x810849e9, __VMLINUX_SYMBOL_STR(pm_runtime_force_suspend) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc76aa730, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xa08f28e8, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc6d935da, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xd56e758f, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xe404e69e, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x74610e25, __VMLINUX_SYMBOL_STR(mmc_regulator_get_supply) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8c40a5e1, __VMLINUX_SYMBOL_STR(mmc_of_parse) },
	{ 0xe5e4123a, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x117efb9, __VMLINUX_SYMBOL_STR(mmc_send_tuning) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd3a393b, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x899dc08a, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x72d0240f, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x6c4463a9, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

