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
	{ 0x464089e9, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbd0c5147, __VMLINUX_SYMBOL_STR(nci_req_complete) },
	{ 0x38d2089a, __VMLINUX_SYMBOL_STR(nci_hci_set_param) },
	{ 0x51a94277, __VMLINUX_SYMBOL_STR(nci_hci_dev_session_init) },
	{ 0xaa691f11, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x300fe53d, __VMLINUX_SYMBOL_STR(nfc_vendor_cmd_reply) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x26fc609c, __VMLINUX_SYMBOL_STR(nci_hci_send_cmd) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7e0325dc, __VMLINUX_SYMBOL_STR(nfc_se_connectivity) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa6a32fe6, __VMLINUX_SYMBOL_STR(nci_hci_clear_all_pipes) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6db2e2fb, __VMLINUX_SYMBOL_STR(nci_hci_send_event) },
	{ 0x2741a02c, __VMLINUX_SYMBOL_STR(skb_dequeue_tail) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xca7b3033, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc133ed53, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0xc175666a, __VMLINUX_SYMBOL_STR(nci_nfcc_loopback) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e136a1e, __VMLINUX_SYMBOL_STR(nci_core_conn_create) },
	{ 0x67ba76f8, __VMLINUX_SYMBOL_STR(nci_prop_cmd) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf999006d, __VMLINUX_SYMBOL_STR(nci_hci_connect_gate) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x16b8234c, __VMLINUX_SYMBOL_STR(nfc_se_transaction) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x10e99158, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2a4876f2, __VMLINUX_SYMBOL_STR(nci_hci_get_param) },
	{ 0x26163790, __VMLINUX_SYMBOL_STR(nci_nfcee_mode_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d229e3a, __VMLINUX_SYMBOL_STR(nfc_remove_se) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb605a2ea, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x423b67eb, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x621c08f, __VMLINUX_SYMBOL_STR(__nfc_alloc_vendor_cmd_reply_skb) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xed090bc6, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0xb1cee70, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x88db56f0, __VMLINUX_SYMBOL_STR(nci_free_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci,nfc";

