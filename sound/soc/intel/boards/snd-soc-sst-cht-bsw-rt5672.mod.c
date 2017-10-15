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
	{ 0x985775bf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x155bf38d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x1e155665, __VMLINUX_SYMBOL_STR(rt5670_jack_resume) },
	{ 0xcf32474b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0xaecc7075, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x62018f82, __VMLINUX_SYMBOL_STR(rt5670_sel_asrc_clk_src) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe3c2fab8, __VMLINUX_SYMBOL_STR(rt5670_jack_suspend) },
	{ 0x23e2bc03, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd9e9fb67, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x993b5333, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x50060c55, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xc24cfa9, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x68f93817, __VMLINUX_SYMBOL_STR(rt5670_set_jack_detect) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-rt5670,snd-pcm";

