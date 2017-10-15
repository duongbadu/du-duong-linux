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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1550f8fd, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0x3481de53, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb86e4a30, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3cf4c3a7, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xba988334, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xd67805d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x7b3b4071, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2d77b788, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_bias_level) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe2cd795e, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb41e9611, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xf65edd2a, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7617ab1c, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x4eb869d6, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe9da4aff, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xfc9a1f6a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xe099bb2e, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xe35bef36, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x20edc18, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xeb577fc9, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xdbd1bdf8, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x69738c24, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info_ext) },
	{ 0x1606f5f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xebbc8f27, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x6388591c, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0xa1c46150, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x86837599, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x718e0c31, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x4c6ac70a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("acpi*:10508825:*");
MODULE_ALIAS("i2c:nau8825");
