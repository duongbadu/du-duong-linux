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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbd0c5147, __VMLINUX_SYMBOL_STR(nci_req_complete) },
	{ 0x94076016, __VMLINUX_SYMBOL_STR(nci_core_conn_close) },
	{ 0xaa691f11, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0xa79a7d37, __VMLINUX_SYMBOL_STR(nci_send_data) },
	{ 0x8ce5932e, __VMLINUX_SYMBOL_STR(nci_core_init) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc133ed53, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0x8e136a1e, __VMLINUX_SYMBOL_STR(nci_core_conn_create) },
	{ 0x67ba76f8, __VMLINUX_SYMBOL_STR(nci_prop_cmd) },
	{ 0xde57a8ca, __VMLINUX_SYMBOL_STR(nci_core_reset) },
	{ 0xdd92ce10, __VMLINUX_SYMBOL_STR(nci_core_cmd) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xed090bc6, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0x5b0dd3f3, __VMLINUX_SYMBOL_STR(nci_get_conn_info_by_dest_type_params) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb1cee70, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x88db56f0, __VMLINUX_SYMBOL_STR(nci_free_device) },
	{ 0xd0f45e34, __VMLINUX_SYMBOL_STR(nci_conn_max_data_pkt_payload_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci";

