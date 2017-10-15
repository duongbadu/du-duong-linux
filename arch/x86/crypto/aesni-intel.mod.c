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
	{ 0xd1b588b, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8f02ac4d, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit_one) },
	{ 0xe409b491, __VMLINUX_SYMBOL_STR(crypto_aes_decrypt_x86) },
	{ 0x7060bf0a, __VMLINUX_SYMBOL_STR(crypto_aes_encrypt_x86) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xb0be500c, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x41a0581b, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xd161f4f, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x70a51021, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x161baea, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x64daee7b, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0x2138640d, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xcfc868ac, __VMLINUX_SYMBOL_STR(cryptd_free_aead) },
	{ 0x36d5329, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x9eb6d40, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x24aac4d9, __VMLINUX_SYMBOL_STR(crypto_aes_expand_key) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x9e6fed85, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x128b9ed2, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x829ed9a0, __VMLINUX_SYMBOL_STR(cryptd_aead_queued) },
	{ 0x9c696b16, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x8b783df3, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x25cd53fb, __VMLINUX_SYMBOL_STR(ablk_init_common) },
	{ 0x23cf479e, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x53334685, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfee6f3b4, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x57c676a2, __VMLINUX_SYMBOL_STR(crypto_unregister_aeads) },
	{ 0xfec43e8e, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x81fd1a56, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0x41d9bab6, __VMLINUX_SYMBOL_STR(crypto_register_aeads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49c9eedc, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x7b3f9776, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0xf09e19ec, __VMLINUX_SYMBOL_STR(cryptd_aead_child) },
	{ 0xedcac547, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0x654e7991, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x44457c94, __VMLINUX_SYMBOL_STR(cryptd_alloc_aead) },
	{ 0x49a8b54b, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,aes-x86_64,lrw,cryptd,ablk_helper";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");
