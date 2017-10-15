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
	{ 0x70d6d378, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_pointer) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x99cf685d, __VMLINUX_SYMBOL_STR(fw_iso_resources_update) },
	{ 0xc2d59bbb, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf7d6af8, __VMLINUX_SYMBOL_STR(fw_csr_string) },
	{ 0x1367da4d, __VMLINUX_SYMBOL_STR(snd_fw_async_midi_port_destroy) },
	{ 0x319768de, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0xe3bde5bb, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xda372f73, __VMLINUX_SYMBOL_STR(fw_iso_resources_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd4946e2f, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x893212db, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x6c1fb541, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xca8b3e9e, __VMLINUX_SYMBOL_STR(amdtp_stream_get_max_payload) },
	{ 0xf9b8d5f8, __VMLINUX_SYMBOL_STR(amdtp_stream_update) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe0ab8897, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xe1649996, __VMLINUX_SYMBOL_STR(snd_fw_async_midi_port_init) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xc3e9ed92, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xdfddd378, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0xd0a3d34c, __VMLINUX_SYMBOL_STR(amdtp_stream_destroy) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x843ab2c5, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0xa4f8299d, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0xae3545e0, __VMLINUX_SYMBOL_STR(amdtp_stream_start) },
	{ 0xe05a21af, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x2a7fda79, __VMLINUX_SYMBOL_STR(fw_iso_resources_destroy) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xec80e522, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2426939c, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1e6ed552, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_prepare) },
	{ 0x6e15dba4, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x12dd745c, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0x47544a01, __VMLINUX_SYMBOL_STR(fw_iso_resources_allocate) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x842ea738, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x5e7b5cdb, __VMLINUX_SYMBOL_STR(amdtp_stream_stop) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0xa66e9ddc, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xbfceb62, __VMLINUX_SYMBOL_STR(amdtp_stream_set_parameters) },
	{ 0x2e2b4b7f, __VMLINUX_SYMBOL_STR(amdtp_stream_init) },
	{ 0xd3165ad3, __VMLINUX_SYMBOL_STR(snd_fw_schedule_registration) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xeefe1446, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x41375413, __VMLINUX_SYMBOL_STR(amdtp_stream_add_pcm_hw_constraints) },
	{ 0x53ca18e8, __VMLINUX_SYMBOL_STR(amdtp_rate_table) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6ad0b4cb, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x81080a08, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x6e192c91, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x4e804ab, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x6d83535e, __VMLINUX_SYMBOL_STR(fw_iso_resources_free) },
	{ 0x7adca254, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x809f85a3, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf0149b0a, __VMLINUX_SYMBOL_STR(fw_send_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-firewire-lib,firewire-core,snd-pcm,snd,snd-rawmidi,snd-hwdep";

MODULE_ALIAS("ieee1394:ven0000A07Emo00000002sp*ver*");
