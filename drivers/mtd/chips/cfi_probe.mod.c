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
	{ 0x95862f0c, __VMLINUX_SYMBOL_STR(unregister_mtd_chip_driver) },
	{ 0x3ed7e55d, __VMLINUX_SYMBOL_STR(register_mtd_chip_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x316a77bb, __VMLINUX_SYMBOL_STR(cfi_send_gen_cmd) },
	{ 0xad0b63d8, __VMLINUX_SYMBOL_STR(cfi_build_cmd) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe666ad85, __VMLINUX_SYMBOL_STR(cfi_qry_mode_off) },
	{ 0x833e880d, __VMLINUX_SYMBOL_STR(cfi_qry_present) },
	{ 0x87662b48, __VMLINUX_SYMBOL_STR(cfi_qry_mode_on) },
	{ 0xe6c436c, __VMLINUX_SYMBOL_STR(mtd_do_chip_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=chipreg,cfi_util,gen_probe";

