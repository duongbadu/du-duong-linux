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
	{ 0x2138640d, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x9e6fed85, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x59d77991, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xe07f6fb4, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbcc17917, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x41a0581b, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x7c4135d4, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0xa3a6ef33, __VMLINUX_SYMBOL_STR(crypto_find_alg) },
	{ 0x1dc050ad, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
	{ 0x87bf1f75, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb148f221, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x43619e1a, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9c696b16, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x16c12ea0, __VMLINUX_SYMBOL_STR(crypto_get_default_null_skcipher) },
	{ 0x580c50a5, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x21cd536a, __VMLINUX_SYMBOL_STR(crypto_put_default_null_skcipher) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x8b783df3, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x81fd1a56, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

