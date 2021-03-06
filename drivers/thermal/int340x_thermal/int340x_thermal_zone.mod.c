#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0xdaa06dc1, __VMLINUX_SYMBOL_STR(acpi_lpat_raw_to_temp) },
	{ 0xd3cbc861, __VMLINUX_SYMBOL_STR(thermal_zone_device_register) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0xdb63a944, __VMLINUX_SYMBOL_STR(acpi_lpat_get_conversion_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7de65a03, __VMLINUX_SYMBOL_STR(acpi_lpat_free_conversion_table) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc6848829, __VMLINUX_SYMBOL_STR(thermal_zone_device_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

