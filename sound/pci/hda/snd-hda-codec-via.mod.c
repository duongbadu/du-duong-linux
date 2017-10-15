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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6fe69cad, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x5d5bfd05, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x5bed491b, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x26608c60, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x468b2be8, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x6e467234, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x1ef34caa, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x9919ac9c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6d4d3b77, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0xccba9944, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x34cfba1d, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x4926e514, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x53f3afc4, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0x12c57aee, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x8ae267a2, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x5974d2a2, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0xc57ce049, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0xaade3c48, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x3bede413, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x9c81fc43, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xd01bcee3, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xaa6cf8e9, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x74c9429c, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x55bc880f, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0x465a67d7, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc1ef82d, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x66d47687, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xeb59d6a3, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb48a132b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x832adf75, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6fe526c6, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x315a22e7, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xbdd4b7f8, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x71a69ba5, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x64e65978, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_read_raw) },
	{ 0xf24a3013, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xa1c46150, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x28f4841e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x62d983f9, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xa9869106, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0x796fb31f, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");
