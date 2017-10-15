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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xd30789e, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0x92953f8a, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x28abfe6e, __VMLINUX_SYMBOL_STR(scsi_kmap_atomic_sg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9f31f9bf, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0x7304e203, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xf4a3dfd5, __VMLINUX_SYMBOL_STR(__starget_for_each_device) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x56c8799d, __VMLINUX_SYMBOL_STR(scsi_kunmap_atomic_sg) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0xeeec33f5, __VMLINUX_SYMBOL_STR(spi_populate_tag_msg) },
	{ 0xcffa2aff, __VMLINUX_SYMBOL_STR(spi_populate_width_msg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcc44c71a, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6d716638, __VMLINUX_SYMBOL_STR(__scsi_device_lookup_by_target) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x49810a37, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0xa0c71dac, __VMLINUX_SYMBOL_STR(spi_populate_sync_msg) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_spi";


MODULE_INFO(srcversion, "C19031D9493C3F8700CCDDC");
