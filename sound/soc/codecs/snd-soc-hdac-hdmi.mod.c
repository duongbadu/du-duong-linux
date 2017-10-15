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
	{ 0x55fae4ca, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_widget) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x5bed491b, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x3481de53, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x75f6fbd8, __VMLINUX_SYMBOL_STR(snd_hdac_ext_bus_get_link) },
	{ 0x8384062a, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x12723916, __VMLINUX_SYMBOL_STR(snd_hdac_ext_bus_link_put) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x20b1b7aa, __VMLINUX_SYMBOL_STR(snd_hdac_get_sub_nodes) },
	{ 0xd9badf02, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x36f19279, __VMLINUX_SYMBOL_STR(snd_hda_ext_driver_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1ce50934, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_eld) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd1ce0815, __VMLINUX_SYMBOL_STR(snd_hdac_check_power_state) },
	{ 0x7b3b4071, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x14b65189, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe7cfb6c0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_mask64) },
	{ 0xdf4902ca, __VMLINUX_SYMBOL_STR(snd_hda_ext_driver_register) },
	{ 0x15ab3929, __VMLINUX_SYMBOL_STR(snd_hdac_display_power) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x877b5700, __VMLINUX_SYMBOL_STR(snd_hdac_setup_channel_mapping) },
	{ 0x3bd544c2, __VMLINUX_SYMBOL_STR(snd_hdac_get_active_channels) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xba45025c, __VMLINUX_SYMBOL_STR(snd_hdac_ext_bus_link_get) },
	{ 0x628a5db0, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x7f4fe68c, __VMLINUX_SYMBOL_STR(snd_hdac_register_chmap_ops) },
	{ 0xdd9a804a, __VMLINUX_SYMBOL_STR(snd_hdac_calc_stream_format) },
	{ 0xddca3e27, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x7fe25ece, __VMLINUX_SYMBOL_STR(snd_hdac_i915_register_notifier) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc1ef82d, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xbbf2d848, __VMLINUX_SYMBOL_STR(devm_kstrdup) },
	{ 0xcab5bd75, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_widgets) },
	{ 0xa63322c6, __VMLINUX_SYMBOL_STR(hdmi_audio_infoframe_pack) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe9da4aff, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc20f9b58, __VMLINUX_SYMBOL_STR(snd_hdac_query_supported_pcm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x832adf75, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xf5c2d34d, __VMLINUX_SYMBOL_STR(hdmi_audio_infoframe_init) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x40bdfb7a, __VMLINUX_SYMBOL_STR(snd_hdac_channel_allocation) },
	{ 0xf87a6fc, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf32bfa8e, __VMLINUX_SYMBOL_STR(snd_hdac_add_chmap_ctls) },
	{ 0x1606f5f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xce85932d, __VMLINUX_SYMBOL_STR(snd_hdac_get_connections) },
	{ 0x4c6ac70a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm,snd";

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
