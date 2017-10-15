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
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf52cce7c, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0x7304e203, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x73ecec04, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v00001103d00003220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004210sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003690sv*sd*bc*sc*i*");
