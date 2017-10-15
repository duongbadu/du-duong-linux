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
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe4e2ab3a, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xd015836a, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbf8dbf61, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xd60a2756, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8850a29, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xe4b36e28, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x430898e0, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x480a774f, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x3d6cbcd5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x8ab31c7, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xa8a1b9f3, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xaf4065f1, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xdd87eb28, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x54aa5818, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x95434e28, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x84012da6, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x59d13c04, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x7b5bad62, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x11460b4e, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x3f04678f, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x7230ec11, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xf6170fb4, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf6a3b5c, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0x4c5e732d, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x3eab0b63, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0xaf078cb4, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0xe38f6d81, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xc9e23d4f, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x48302bd3, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x14f38446, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xcfd07559, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xe8a7948b, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6f630686, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x61cbcb49, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x12d84c2d, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0xe3d6ba77, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x6abd2e8e, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x4ced8dab, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x2dd78a03, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xdcdd2aec, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf0d5bc06, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000002v*");
