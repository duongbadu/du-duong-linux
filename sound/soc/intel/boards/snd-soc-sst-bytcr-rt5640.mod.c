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
	{ 0x985775bf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xde286121, __VMLINUX_SYMBOL_STR(snd_soc_add_card_controls) },
	{ 0x1000dbb3, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x155bf38d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0xcf32474b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0xaecc7075, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x14b65189, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb3cacf64, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xe41aaa1a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_ignore_suspend) },
	{ 0x23e2bc03, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xd9e9fb67, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x255feb8e, __VMLINUX_SYMBOL_STR(rt5640_sel_asrc_clk_src) },
	{ 0x70e29d78, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_fmt) },
	{ 0x5962dfb0, __VMLINUX_SYMBOL_STR(rt5640_dmic_enable) },
	{ 0x50060c55, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xc24cfa9, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa150755f, __VMLINUX_SYMBOL_STR(sst_acpi_find_name_from_hid) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-rt5640,snd-pcm,snd-soc-sst-match";

