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
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x58ba6eb3, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x838594c0, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x589267e2, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0x41c04c28, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1c0e268, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0x5eee9ce9, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x8043530f, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0x426fbf91, __VMLINUX_SYMBOL_STR(sas_get_address) },
	{ 0x11b826f2, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0xf253ce6a, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbce749c0, __VMLINUX_SYMBOL_STR(enclosure_component_alloc) },
	{ 0x3bbf7153, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2626876f, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2a4dd614, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3f36676, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x70d1a79e, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0x1a6653a2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,enclosure,scsi_transport_sas";

