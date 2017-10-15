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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb0be500c, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x161baea, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x36d5329, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf8c78d49, __VMLINUX_SYMBOL_STR(__des3_ede_setkey) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x49c9eedc, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x7b3f9776, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xedcac547, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=des_generic";

