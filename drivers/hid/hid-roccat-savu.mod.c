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
	{ 0x2269d273, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xe24fd3b5, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7622b07b, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x6c9ca28d, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x191fe75d, __VMLINUX_SYMBOL_STR(roccat_connect) },
	{ 0x34fd6b85, __VMLINUX_SYMBOL_STR(roccat_common2_device_init_struct) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9cd4c781, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x365e6a87, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8c4181ec, __VMLINUX_SYMBOL_STR(roccat_report_event) },
	{ 0xa649e1ac, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_read) },
	{ 0x9a2dc5a0, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_write) },
	{ 0x2f622ea1, __VMLINUX_SYMBOL_STR(roccat_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdcd20c82, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid,hid-roccat,hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002D5A");
