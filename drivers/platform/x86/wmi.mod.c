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
	{ 0x8a64d0a9, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xba2d8594, __VMLINUX_SYMBOL_STR(ec_read) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6449fd41, __VMLINUX_SYMBOL_STR(acpi_install_address_space_handler) },
	{ 0x75fbdefd, __VMLINUX_SYMBOL_STR(acpi_remove_address_space_handler) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x4a10a332, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc4456ea9, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xea557c56, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x6a81339e, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4fbae6a6, __VMLINUX_SYMBOL_STR(uuid_le_to_bin) },
	{ 0xd38c99f1, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5dc9da68, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x876dafc3, __VMLINUX_SYMBOL_STR(ec_write) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C14:*");
MODULE_ALIAS("acpi*:pnp0c14:*");
