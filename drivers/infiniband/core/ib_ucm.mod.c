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
	{ 0xdd1f707d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xaf1bdc02, __VMLINUX_SYMBOL_STR(class_remove_file_ns) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x78f02bdf, __VMLINUX_SYMBOL_STR(ib_send_cm_rej) },
	{ 0xdd6e35ee, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x23ab5f9, __VMLINUX_SYMBOL_STR(ib_send_cm_req) },
	{ 0xb1c80c1c, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xbbeaa943, __VMLINUX_SYMBOL_STR(ib_send_cm_rtu) },
	{ 0x4b269510, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x6bfd06f2, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x72bd40e1, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0xaa4506d6, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_from_user) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xea6d7008, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7bb9ccbe, __VMLINUX_SYMBOL_STR(ib_send_cm_mra) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x97091d4c, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0xc54e9a8c, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xc4456ea9, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5397d778, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x87a04cd1, __VMLINUX_SYMBOL_STR(ib_send_cm_rep) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x7152ead5, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x711cf8ec, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x3d6cbcd5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xdd4a5fe8, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x9176a200, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xb806af13, __VMLINUX_SYMBOL_STR(ib_cm_notify) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4e269de2, __VMLINUX_SYMBOL_STR(class_create_file_ns) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8249aa3c, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0x4d129c2c, __VMLINUX_SYMBOL_STR(ib_send_cm_apr) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x38c8a074, __VMLINUX_SYMBOL_STR(ib_cm_listen) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd38c99f1, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe1b53dc1, __VMLINUX_SYMBOL_STR(ib_send_cm_lap) },
	{ 0x41d4234, __VMLINUX_SYMBOL_STR(cm_class) },
	{ 0x5dc9da68, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4f0ff1c5, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_rep) },
	{ 0xd6311d91, __VMLINUX_SYMBOL_STR(show_class_attr_string) },
	{ 0xcee37b39, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x1fc5d6f7, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_cm,ib_uverbs,ib_core";

