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
	{ 0x3e6741b2, __VMLINUX_SYMBOL_STR(snd_hdac_power_up) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x77975483, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_prepare) },
	{ 0xdc75b6d5, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x5d5bfd05, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x5bed491b, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0xe60ec3a8, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0xe7f2d41f, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_trigger) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9229299e, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9919ac9c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xc447e5e9, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4926e514, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x12c57aee, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x25c406f3, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x8ae267a2, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xae5aa98f, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc57ce049, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0xc2c60979, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x26febe33, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0x3bede413, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x9c81fc43, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xd01bcee3, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xdd9a804a, __VMLINUX_SYMBOL_STR(snd_hdac_calc_stream_format) },
	{ 0x188d8d32, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x2352b788, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x74c9429c, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xe5434576, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x465a67d7, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3845f9ff, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xe4ba8ce0, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc1ef82d, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xeb59d6a3, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x54cff195, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57143f8e, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x49437318, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0x1343f902, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9119559b, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x832adf75, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xab797624, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x315a22e7, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xbdd4b7f8, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x2c064436, __VMLINUX_SYMBOL_STR(snd_hdac_power_down) },
	{ 0xa07136c6, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0xdb48415c, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_cleanup) },
	{ 0xf24a3013, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x64c2bd6, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x63381fbc, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0xa9869106, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2c0b3744, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v11020011r*a01*");
