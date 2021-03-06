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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x73b481ef, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf71d4879, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf24edb37, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7304e203, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe638a2fa, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xfe5d4bb2, __VMLINUX_SYMBOL_STR(sys_tz) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5d625bc9, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x8972fc20, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x27614475, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0xf302d31a, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");
