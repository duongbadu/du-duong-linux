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
	{ 0xfdf7a548, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x13ce87e8, __VMLINUX_SYMBOL_STR(asn1_ber_decoder) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xffe17893, __VMLINUX_SYMBOL_STR(public_key_free) },
	{ 0x78cd5342, __VMLINUX_SYMBOL_STR(public_key_subtype) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x961b62e, __VMLINUX_SYMBOL_STR(public_key_signature_free) },
	{ 0xd45cc6ca, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0x7377dfad, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xbb6f025a, __VMLINUX_SYMBOL_STR(asymmetric_key_generate_id) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8018548c, __VMLINUX_SYMBOL_STR(unregister_asymmetric_key_parser) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbb80d24b, __VMLINUX_SYMBOL_STR(public_key_verify_signature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x28a3e7bc, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xfc201b66, __VMLINUX_SYMBOL_STR(sprint_oid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x392fe739, __VMLINUX_SYMBOL_STR(look_up_OID) },
	{ 0x975519c1, __VMLINUX_SYMBOL_STR(asymmetric_key_id_same) },
	{ 0x4ab7ecde, __VMLINUX_SYMBOL_STR(register_asymmetric_key_parser) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=asn1_decoder,public_key,oid_registry";

