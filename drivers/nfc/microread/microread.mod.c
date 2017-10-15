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
	{ 0xbfedc629, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x9ada4ee5, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xb765132f, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0x20137881, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x330843d6, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x6dd365d0, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7e3aa356, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x9fc194e1, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x371539d7, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x8beb481, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0xea5c6a76, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x94582ae2, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9e821c8e, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43028a27, __VMLINUX_SYMBOL_STR(nfc_hci_result_to_errno) },
	{ 0xaec80842, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x1a703ba1, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xce5d3d73, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0x724c3348, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb535121f, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";

