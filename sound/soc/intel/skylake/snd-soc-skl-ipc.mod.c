#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4a045773, __VMLINUX_SYMBOL_STR(sst_shim32_write) },
	{ 0x8e3dbd39, __VMLINUX_SYMBOL_STR(sst_dsp_shim_write) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb12ccc1d, __VMLINUX_SYMBOL_STR(sst_memcpy_toio_32) },
	{ 0xd78aa6f1, __VMLINUX_SYMBOL_STR(sst_dsp_inbox_read) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9fb8a804, __VMLINUX_SYMBOL_STR(sst_dsp_outbox_write) },
	{ 0x973f59aa, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits) },
	{ 0xc7303bff, __VMLINUX_SYMBOL_STR(sst_ipc_tx_msg_reply_complete) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1a10e569, __VMLINUX_SYMBOL_STR(sst_dsp_mailbox_init) },
	{ 0x1b5e8b82, __VMLINUX_SYMBOL_STR(sst_shim32_read) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbcedb628, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe4b34b18, __VMLINUX_SYMBOL_STR(sst_ipc_init) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb47d68d5, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits_forced) },
	{ 0x3bb0ea7a, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits_unlocked) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd95bf88b, __VMLINUX_SYMBOL_STR(sst_ipc_fini) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x312b3b2e, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read_unlocked) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdae2516e, __VMLINUX_SYMBOL_STR(kthread_queue_work) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5a24e380, __VMLINUX_SYMBOL_STR(sst_memcpy_fromio_32) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7679ada6, __VMLINUX_SYMBOL_STR(sst_dsp_shim_write_unlocked) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x31e30703, __VMLINUX_SYMBOL_STR(sst_ipc_tx_message_wait) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc48d311, __VMLINUX_SYMBOL_STR(sst_dsp_register_poll) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-sst-dsp,snd-soc-sst-ipc";

