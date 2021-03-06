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
	{ 0x4a10a332, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x8a64d0a9, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xad37e919, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8f941070, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6449fd41, __VMLINUX_SYMBOL_STR(acpi_install_address_space_handler) },
	{ 0x1bed39b3, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xe5085280, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x1ec9b065, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4835d0a8, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x75fbdefd, __VMLINUX_SYMBOL_STR(acpi_remove_address_space_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ASIM0000:*");
