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
	{ 0xb4709322, __VMLINUX_SYMBOL_STR(scsi_dev_info_add_list) },
	{ 0xf8386a7e, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x800c8f7f, __VMLINUX_SYMBOL_STR(scsi_get_device_flags_keyed) },
	{ 0xe0f94003, __VMLINUX_SYMBOL_STR(scsi_target_resume) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xbc1af575, __VMLINUX_SYMBOL_STR(anon_transport_class_register) },
	{ 0xe9267db2, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x40a27c37, __VMLINUX_SYMBOL_STR(scsi_dev_info_remove_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x397dbd3b, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x6c200925, __VMLINUX_SYMBOL_STR(scsi_device_quiesce) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb7303f44, __VMLINUX_SYMBOL_STR(sysfs_chmod_file) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1a6653a2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xff11223, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e91ca46, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x5d8d8d81, __VMLINUX_SYMBOL_STR(sysfs_update_group) },
	{ 0x5d625bc9, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdc047fc4, __VMLINUX_SYMBOL_STR(scsi_dev_info_list_add_keyed) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x602e9e95, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xeb916290, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbfed53b2, __VMLINUX_SYMBOL_STR(scsi_target_quiesce) },
	{ 0x5ebc61f1, __VMLINUX_SYMBOL_STR(scsi_is_target_device) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xafa18183, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x40a63919, __VMLINUX_SYMBOL_STR(anon_transport_class_unregister) },
	{ 0x855df2bd, __VMLINUX_SYMBOL_STR(scsi_is_sdev_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

