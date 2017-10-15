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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa8f61e6e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x1887763e, __VMLINUX_SYMBOL_STR(acpi_thermal_rel_misc_device_add) },
	{ 0xd3cbc861, __VMLINUX_SYMBOL_STR(thermal_zone_device_register) },
	{ 0xdf707fab, __VMLINUX_SYMBOL_STR(acpi_parse_trt) },
	{ 0x5007fc2c, __VMLINUX_SYMBOL_STR(acpi_parse_art) },
	{ 0xb66421b2, __VMLINUX_SYMBOL_STR(acpi_str_to_uuid) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb20ecf88, __VMLINUX_SYMBOL_STR(acpi_run_osc) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6848829, __VMLINUX_SYMBOL_STR(thermal_zone_device_unregister) },
	{ 0x70fe334f, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x86c998e6, __VMLINUX_SYMBOL_STR(acpi_thermal_rel_misc_device_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=acpi_thermal_rel";

MODULE_ALIAS("acpi*:INT3400:*");
