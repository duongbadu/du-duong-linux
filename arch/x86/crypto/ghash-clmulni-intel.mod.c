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
	{ 0x8d5227ed, __VMLINUX_SYMBOL_STR(cryptd_ahash_queued) },
	{ 0x4a2fb718, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xaf1e4779, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x2b59eaef, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xb5f23168, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x19bc7ab5, __VMLINUX_SYMBOL_STR(cryptd_shash_desc) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x811202d8, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0xe65a9847, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0xd5a02f77, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x51e0b9e7, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb3c55f32, __VMLINUX_SYMBOL_STR(cryptd_ahash_child) },
	{ 0xe07f6fb4, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xf7289618, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x227adecf, __VMLINUX_SYMBOL_STR(cryptd_alloc_ahash) },
	{ 0x8400b6ab, __VMLINUX_SYMBOL_STR(cryptd_free_ahash) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x1dc050ad, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");
