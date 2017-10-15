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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x668556fd, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xdc75b6d5, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x5d5bfd05, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x5bed491b, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0x118f2f0c, __VMLINUX_SYMBOL_STR(snd_hda_get_default_vref) },
	{ 0x26608c60, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x6e467234, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x73047e09, __VMLINUX_SYMBOL_STR(snd_hda_sync_vmaster_hook) },
	{ 0xe60ec3a8, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0x5dfe20a5, __VMLINUX_SYMBOL_STR(__snd_hda_add_vmaster) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x9919ac9c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xc447e5e9, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x34cfba1d, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x4926e514, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe118de5d, __VMLINUX_SYMBOL_STR(snd_pcm_2_1_chmaps) },
	{ 0x12c57aee, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x25c406f3, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x2b5a8c9f, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_caps) },
	{ 0x8ae267a2, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xd84f17e6, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xae5aa98f, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb4de4b2e, __VMLINUX_SYMBOL_STR(snd_hda_attach_beep_device) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb737ab97, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0xc57ce049, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x396dcdcd, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_list) },
	{ 0xb90d4f17, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0x5696f4be, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0xac85ed6a, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x33cfe5ab, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0xd6e1efa7, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_switch_get) },
	{ 0x26febe33, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0x609629a2, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init) },
	{ 0x3bede413, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x9c81fc43, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xbe252978, __VMLINUX_SYMBOL_STR(snd_hda_get_int_hint) },
	{ 0x188d8d32, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x2352b788, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0xa356902, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xe5434576, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x55bc880f, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0xb32d58a5, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x8103d3b9, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_index) },
	{ 0x3845f9ff, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xe4ba8ce0, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc1ef82d, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x6a679ae1, __VMLINUX_SYMBOL_STR(snd_hda_correct_pin_ctl) },
	{ 0xf75df3e8, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0x3c229a2e, __VMLINUX_SYMBOL_STR(snd_hda_get_pin_label) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57143f8e, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc5baf3c3, __VMLINUX_SYMBOL_STR(snd_ctl_sync_vmaster) },
	{ 0x49437318, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0x1343f902, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcb409df3, __VMLINUX_SYMBOL_STR(snd_hda_add_vmaster_hook) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9119559b, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x832adf75, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x6fe526c6, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x315a22e7, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xbdd4b7f8, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0xa07136c6, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1587500, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_switch_put) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf24a3013, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x86ed866a, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xb7d84efb, __VMLINUX_SYMBOL_STR(hda_get_autocfg_input_label) },
	{ 0xa1c46150, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x372c45a2, __VMLINUX_SYMBOL_STR(snd_hda_set_vmaster_tlv) },
	{ 0xf20416db, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init_stereo) },
	{ 0x62d983f9, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xa9869106, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2c0b3744, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
	{ 0x6fb5ab9b, __VMLINUX_SYMBOL_STR(snd_hda_apply_verbs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v00000201r*a01*");
