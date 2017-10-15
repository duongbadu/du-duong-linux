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
	{ 0xe303c993, __VMLINUX_SYMBOL_STR(irlmp_data_request) },
	{ 0xaac5b0cd, __VMLINUX_SYMBOL_STR(irlmp_open_lsap) },
	{ 0x8010a55a, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0x858a2f63, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0xeef52458, __VMLINUX_SYMBOL_STR(irlmp_close_lsap) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x543e1662, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0xf84214f4, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1e64d877, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0x392ffcb6, __VMLINUX_SYMBOL_STR(irlmp_connect_response) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x127005d7, __VMLINUX_SYMBOL_STR(irlmp_disconnect_request) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfc08036d, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0xec242b93, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x98a8b3b4, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc0196c2, __VMLINUX_SYMBOL_STR(hashbin_remove) },
	{ 0x2b432980, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x297c6c94, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3ea61a6, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe329462a, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc894bab3, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xce3c8f88, __VMLINUX_SYMBOL_STR(irlmp_connect_request) },
	{ 0xadde1e84, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x66f10312, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0x70a3f20f, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0xe56d529, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x599cc728, __VMLINUX_SYMBOL_STR(irttp_flow_request) },
	{ 0x9ccbdfca, __VMLINUX_SYMBOL_STR(hashbin_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";

