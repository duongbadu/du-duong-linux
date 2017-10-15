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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x70d6d378, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_pointer) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc2d59bbb, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf7d6af8, __VMLINUX_SYMBOL_STR(fw_csr_string) },
	{ 0xebc72c31, __VMLINUX_SYMBOL_STR(avc_general_set_sig_fmt) },
	{ 0xe3bde5bb, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd4946e2f, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0xad56bf8b, __VMLINUX_SYMBOL_STR(amdtp_am824_set_midi_position) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x901d3c49, __VMLINUX_SYMBOL_STR(amdtp_am824_set_pcm_position) },
	{ 0xa513e4d2, __VMLINUX_SYMBOL_STR(fw_schedule_bus_reset) },
	{ 0x893212db, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x6c1fb541, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x43ef9936, __VMLINUX_SYMBOL_STR(cmp_connection_destroy) },
	{ 0xa39b3bd6, __VMLINUX_SYMBOL_STR(fcp_avc_transaction) },
	{ 0xb9638db4, __VMLINUX_SYMBOL_STR(snd_pcm_rate_to_rate_bit) },
	{ 0xabb385cc, __VMLINUX_SYMBOL_STR(avc_general_get_plug_info) },
	{ 0xca8b3e9e, __VMLINUX_SYMBOL_STR(amdtp_stream_get_max_payload) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3ebd244d, __VMLINUX_SYMBOL_STR(cmp_connection_establish) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x13e9eed7, __VMLINUX_SYMBOL_STR(avc_general_get_sig_fmt) },
	{ 0xe0ab8897, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbba6fa03, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xc3e9ed92, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xdfddd378, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0xd0a3d34c, __VMLINUX_SYMBOL_STR(amdtp_stream_destroy) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa4f8299d, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0xae3545e0, __VMLINUX_SYMBOL_STR(amdtp_stream_start) },
	{ 0x8285270b, __VMLINUX_SYMBOL_STR(amdtp_am824_set_pcm_format) },
	{ 0xe05a21af, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xec80e522, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2426939c, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xeb59d6a3, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x1e6ed552, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x12dd745c, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5e7b5cdb, __VMLINUX_SYMBOL_STR(amdtp_stream_stop) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa66e9ddc, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x99c06c2f, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_abort) },
	{ 0x73cc04d1, __VMLINUX_SYMBOL_STR(fcp_bus_reset) },
	{ 0x57f1ada4, __VMLINUX_SYMBOL_STR(cmp_connection_break) },
	{ 0x96ee6674, __VMLINUX_SYMBOL_STR(cmp_connection_init) },
	{ 0xd3165ad3, __VMLINUX_SYMBOL_STR(snd_fw_schedule_registration) },
	{ 0xba97d104, __VMLINUX_SYMBOL_STR(amdtp_am824_add_pcm_hw_constraints) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xeefe1446, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xe2f390d6, __VMLINUX_SYMBOL_STR(amdtp_am824_init) },
	{ 0xcd773f5d, __VMLINUX_SYMBOL_STR(amdtp_am824_midi_trigger) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6ad0b4cb, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x72f0f835, __VMLINUX_SYMBOL_STR(cmp_connection_check_used) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x81080a08, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0xccc241a8, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x6e192c91, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0xd13e6ef8, __VMLINUX_SYMBOL_STR(amdtp_am824_set_parameters) },
	{ 0x7adca254, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x6d18673b, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-firewire-lib,firewire-core,snd,snd-rawmidi,snd-pcm,snd-hwdep";

MODULE_ALIAS("ieee1394:ven000040ABmo00010049sp*ver*");
MODULE_ALIAS("ieee1394:ven000040ABmo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010000sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010066sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010001sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010049sp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo00010065sp*ver*");
MODULE_ALIAS("ieee1394:ven0000000Fmo00010067sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven0000022Emo00010067sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001204sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001604sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000006sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001616sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000610sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo00001EEEsp*ver*");
MODULE_ALIAS("ieee1394:ven00000F1Bmo00010064sp*ver*");
MODULE_ALIAS("ieee1394:ven00000002mo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven0000000Amo00030000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00050000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00060000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00070000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00000000sp*ver*");
MODULE_ALIAS("ieee1394:ven000019E5mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001A9Emo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001198mo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven00001198mo0000ADA8sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000003sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000004sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000007sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000005sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Bsp*ver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Csp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000003sp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000006sp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000000sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010058sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010046sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010060sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010062sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo0000000Asp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010081sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo000100A1sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010070sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010071sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010091sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A07Emo000000A9sp*ver*");
