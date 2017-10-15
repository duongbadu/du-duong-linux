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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3481de53, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x38dbd20c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb86e4a30, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x74ce0a9e, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x36fb3b1e, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x70617a04, __VMLINUX_SYMBOL_STR(rl6231_get_clk_info) },
	{ 0xd9badf02, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3cf4c3a7, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xba988334, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xd67805d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x7b3b4071, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x14b65189, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xbad2d871, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb3cacf64, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x8c27f9ea, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe2cd795e, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb41e9611, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7617ab1c, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x4eb869d6, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe9da4aff, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfc9a1f6a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xe099bb2e, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xe35bef36, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x20edc18, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x7f68b24d, __VMLINUX_SYMBOL_STR(rl6231_pll_calc) },
	{ 0xdbd1bdf8, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x1606f5f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xebbc8f27, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xa1c46150, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x86837599, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x97289abf, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x4c6ac70a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-rl6231";

MODULE_ALIAS("acpi*:10EC5668:*");
MODULE_ALIAS("acpi*:10EC5663:*");
MODULE_ALIAS("i2c:rt5668");
MODULE_ALIAS("i2c:rt5663");
