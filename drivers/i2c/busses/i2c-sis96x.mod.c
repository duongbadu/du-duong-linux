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
	{ 0x158b68b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7354081, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x400390fb, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001039d00000016sv*sd*bc*sc*i*");
