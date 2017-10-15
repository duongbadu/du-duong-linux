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
	{ 0x14956723, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xdd1f707d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdd6e35ee, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x8702e548, __VMLINUX_SYMBOL_STR(process_srcu) },
	{ 0x786a87dc, __VMLINUX_SYMBOL_STR(vmf_insert_pfn_pmd) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6ade7a46, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xb4ba2621, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x367386ca, __VMLINUX_SYMBOL_STR(kern_unmount) },
	{ 0x10f8901a, __VMLINUX_SYMBOL_STR(__srcu_read_unlock) },
	{ 0xfe2b74cc, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6bdf6a2d, __VMLINUX_SYMBOL_STR(mount_pseudo_xattr) },
	{ 0xc2115909, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x7a9b30bd, __VMLINUX_SYMBOL_STR(__srcu_read_lock) },
	{ 0x79cda109, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xe2a9e58b, __VMLINUX_SYMBOL_STR(linear_hugepage_index) },
	{ 0xdd4a5fe8, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x25ceae38, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x695124b4, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x26786563, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x832f62eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x65eb295b, __VMLINUX_SYMBOL_STR(synchronize_srcu) },
	{ 0xead76b9d, __VMLINUX_SYMBOL_STR(vm_insert_mixed) },
	{ 0xfe90add2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a3f613b, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0xc5709f89, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xe24fd3b5, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xe26905c8, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xd38c99f1, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x205b304b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x51662797, __VMLINUX_SYMBOL_STR(kern_mount_data) },
	{ 0x5dc9da68, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x30b04526, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6c9ca28d, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

