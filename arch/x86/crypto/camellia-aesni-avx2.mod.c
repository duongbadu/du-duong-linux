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
	{ 0x1636abdf, __VMLINUX_SYMBOL_STR(__camellia_enc_blk) },
	{ 0x16061d06, __VMLINUX_SYMBOL_STR(__camellia_setkey) },
	{ 0x13a65ecf, __VMLINUX_SYMBOL_STR(camellia_ecb_enc_16way) },
	{ 0xb0be500c, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0xd161f4f, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xf4521fda, __VMLINUX_SYMBOL_STR(camellia_dec_blk_2way) },
	{ 0x70a51021, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x64daee7b, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0x34a2f43d, __VMLINUX_SYMBOL_STR(lrw_camellia_exit_tfm) },
	{ 0x5ab47fa3, __VMLINUX_SYMBOL_STR(xts_camellia_setkey) },
	{ 0x31bbe42b, __VMLINUX_SYMBOL_STR(camellia_crypt_ctr_2way) },
	{ 0xd1b31487, __VMLINUX_SYMBOL_STR(lrw_camellia_setkey) },
	{ 0x9e8086dc, __VMLINUX_SYMBOL_STR(camellia_ctr_16way) },
	{ 0x1f631dd7, __VMLINUX_SYMBOL_STR(glue_ctr_crypt_128bit) },
	{ 0x36d5329, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x1da0e256, __VMLINUX_SYMBOL_STR(camellia_crypt_ctr) },
	{ 0x47129015, __VMLINUX_SYMBOL_STR(camellia_xts_enc_16way) },
	{ 0x867a1754, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0x7d54edc2, __VMLINUX_SYMBOL_STR(camellia_cbc_dec_16way) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0x128b9ed2, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x7e87ef55, __VMLINUX_SYMBOL_STR(camellia_ecb_dec_16way) },
	{ 0xc0ecf73c, __VMLINUX_SYMBOL_STR(glue_cbc_decrypt_128bit) },
	{ 0x50dc55b6, __VMLINUX_SYMBOL_STR(__camellia_enc_blk_2way) },
	{ 0x23cf479e, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x53334685, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x930f687f, __VMLINUX_SYMBOL_STR(camellia_decrypt_cbc_2way) },
	{ 0xfec43e8e, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5d59b630, __VMLINUX_SYMBOL_STR(glue_ecb_crypt_128bit) },
	{ 0x8f185793, __VMLINUX_SYMBOL_STR(camellia_xts_dec) },
	{ 0x49c9eedc, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x99283430, __VMLINUX_SYMBOL_STR(glue_cbc_encrypt_128bit) },
	{ 0x17bf48dc, __VMLINUX_SYMBOL_STR(camellia_xts_dec_16way) },
	{ 0xa41a5ad3, __VMLINUX_SYMBOL_STR(camellia_dec_blk) },
	{ 0x1a08ded1, __VMLINUX_SYMBOL_STR(camellia_xts_enc) },
	{ 0x49a8b54b, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=camellia-x86_64,camellia-aesni-avx-x86_64,lrw,glue_helper,ablk_helper";

