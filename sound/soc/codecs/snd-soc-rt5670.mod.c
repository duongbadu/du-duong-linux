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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x3481de53, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x80432458, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x38dbd20c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb86e4a30, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x70617a04, __VMLINUX_SYMBOL_STR(rl6231_get_clk_info) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd9badf02, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x3cf4c3a7, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xba988334, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xd67805d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x7b3b4071, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x14b65189, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xbad2d871, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8d7fa148, __VMLINUX_SYMBOL_STR(rl6231_get_pre_div) },
	{ 0xb3cacf64, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x8c27f9ea, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xe2cd795e, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb41e9611, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7617ab1c, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x4eb869d6, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdba4502f, __VMLINUX_SYMBOL_STR(rl6231_calc_dmic_clk) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe9da4aff, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0xfc9a1f6a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xe099bb2e, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xe35bef36, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x20edc18, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x50610828, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x7f68b24d, __VMLINUX_SYMBOL_STR(rl6231_pll_calc) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x36fcf2f5, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x1606f5f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xebbc8f27, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xa1c46150, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x86837599, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x97289abf, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x4c6ac70a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-rl6231";

MODULE_ALIAS("i2c:rt5670");
MODULE_ALIAS("i2c:rt5671");
MODULE_ALIAS("i2c:rt5672");
MODULE_ALIAS("acpi*:10EC5670:*");
MODULE_ALIAS("acpi*:10EC5672:*");
MODULE_ALIAS("acpi*:10EC5640:*");
