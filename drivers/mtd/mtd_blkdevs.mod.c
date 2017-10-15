#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x347f2aee, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x95434e28, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4b1a0004, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x18e6a6bd, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0x2f4aac0c, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x9a956799, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0x70fe334f, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd14b3db0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa8f61e6e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x10385496, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x484e06d0, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0xb4ce062a, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x9465fe13, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd62cfe24, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0xdd668c53, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xb7733cf0, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x28a3e7bc, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x3f04678f, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xbf8dbf61, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xd60a2756, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";

