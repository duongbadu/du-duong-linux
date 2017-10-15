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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x94ed0594, __VMLINUX_SYMBOL_STR(serial8250_register_8250_port) },
	{ 0x32812c43, __VMLINUX_SYMBOL_STR(pcim_iomap) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xcefcd99a, __VMLINUX_SYMBOL_STR(serial8250_unregister_port) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001393d00001024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001182sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001183sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001683sv*sd*bc*sc*i*");
