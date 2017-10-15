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
	{ 0x16e91e21, __VMLINUX_SYMBOL_STR(fw_csr_iterator_next) },
	{ 0x99cf685d, __VMLINUX_SYMBOL_STR(fw_iso_resources_update) },
	{ 0xc2d59bbb, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x8f79a0d6, __VMLINUX_SYMBOL_STR(iso_packets_buffer_init) },
	{ 0xbdb6d803, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xda372f73, __VMLINUX_SYMBOL_STR(fw_iso_resources_init) },
	{ 0xf0836a6e, __VMLINUX_SYMBOL_STR(snd_pcm_stop_xrun) },
	{ 0xd4946e2f, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa78b399e, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x45c0d2b8, __VMLINUX_SYMBOL_STR(fw_iso_context_start) },
	{ 0xbc65ccbd, __VMLINUX_SYMBOL_STR(fw_iso_context_queue_flush) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xc3e9ed92, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xdfddd378, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x4fda19d9, __VMLINUX_SYMBOL_STR(iso_packets_buffer_destroy) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe05a21af, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xaa6cf8e9, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x2a7fda79, __VMLINUX_SYMBOL_STR(fw_iso_resources_destroy) },
	{ 0xa717d79c, __VMLINUX_SYMBOL_STR(fw_iso_context_queue) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2426939c, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeb59d6a3, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x47544a01, __VMLINUX_SYMBOL_STR(fw_iso_resources_allocate) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x9bd9fb1, __VMLINUX_SYMBOL_STR(fw_iso_context_stop) },
	{ 0x11b4c437, __VMLINUX_SYMBOL_STR(fw_iso_context_create) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xeefe1446, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6ad0b4cb, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x81080a08, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0xccc241a8, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x6e192c91, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x6d83535e, __VMLINUX_SYMBOL_STR(fw_iso_resources_free) },
	{ 0xb5e1d9a2, __VMLINUX_SYMBOL_STR(fw_iso_context_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-firewire-lib,snd-pcm,snd";

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");
