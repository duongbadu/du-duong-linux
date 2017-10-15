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
	{ 0x4b269510, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xe24fd3b5, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xe4e2ab3a, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xd015836a, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6c9ca28d, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xab17e79, __VMLINUX_SYMBOL_STR(hvc_instantiate) },
	{ 0x9833bc0c, __VMLINUX_SYMBOL_STR(hvc_kick) },
	{ 0x4469aeea, __VMLINUX_SYMBOL_STR(hvc_poll) },
	{ 0x41c04c28, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xa8f61e6e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x70fe334f, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x797ffac1, __VMLINUX_SYMBOL_STR(hvc_remove) },
	{ 0x8621bad5, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3201b94f, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x471ac442, __VMLINUX_SYMBOL_STR(pipe_unlock) },
	{ 0x81d97647, __VMLINUX_SYMBOL_STR(pipe_lock) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x1c3a8aec, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x1d8fc50d, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xdd1f707d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x498aff7a, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xdd4a5fe8, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x65838b4, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xdcdd2aec, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x269eb7b0, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xea6d7008, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x52b1738c, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x10288bdf, __VMLINUX_SYMBOL_STR(hvc_alloc) },
	{ 0x6abd2e8e, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc416f360, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4ced8dab, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xd2eab8d, __VMLINUX_SYMBOL_STR(__hvc_resize) },
	{ 0x61cbcb49, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xca127308, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x9bc9fd8e, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xe018bf28, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe38f6d81, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x1bd4d813, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000003v*");
