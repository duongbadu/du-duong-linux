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
	{ 0x78d05e5c, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1f3f6384, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x95434e28, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdb14f18c, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0x2626876f, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xa2551c7f, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x82250728, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xe638a2fa, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x679fb5b6, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x397dbd3b, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x8c8095e0, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0x22486571, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1a6653a2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x915b898, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x25708755, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x3e811ec5, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0x5d625bc9, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x403662ae, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x838594c0, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x86f73104, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x53b41587, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x28346207, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbe71496d, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0xe650e252, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0xbcd34687, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xafa18183, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x2fa6f33, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0xbf8dbf61, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xd392a026, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,cdrom";

