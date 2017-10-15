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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6fe69cad, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x5d5bfd05, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x468b2be8, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x9919ac9c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x6d4d3b77, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x4926e514, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x8ae267a2, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xaade3c48, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x3bede413, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x9c81fc43, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xed07ec70, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x6fe526c6, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x315a22e7, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x71a69ba5, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xf24a3013, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x28f4841e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec";

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");
