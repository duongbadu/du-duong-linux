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
	{ 0xda077aad, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x6731aed0, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb030568e, __VMLINUX_SYMBOL_STR(caif_enroll_dev) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28a3e7bc, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6a44fc70, __VMLINUX_SYMBOL_STR(cfpkt_extr_head) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x966d7de2, __VMLINUX_SYMBOL_STR(cfpkt_add_head) },
	{ 0x329dbd06, __VMLINUX_SYMBOL_STR(cfpkt_info) },
	{ 0x4a237e57, __VMLINUX_SYMBOL_STR(cfpkt_tonative) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caif";

