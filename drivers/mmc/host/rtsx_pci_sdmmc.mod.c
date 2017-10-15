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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4588e27c, __VMLINUX_SYMBOL_STR(rtsx_pci_write_ppbuf) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0xa0a59cca, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_transfer) },
	{ 0x8c5a5c8f, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb84590af, __VMLINUX_SYMBOL_STR(rtsx_pci_read_ppbuf) },
	{ 0x7ea0b37e, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0xf3a7b895, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0xef1b3d77, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0xdd422d91, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x714435b7, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3ecac605, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_output_voltage) },
	{ 0xe4fab545, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0x215c5789, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xe09af633, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfdeaf20b, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_map_sg) },
	{ 0x423bbfac, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exist) },
	{ 0x5194b369, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x2b7f2a19, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_unmap_sg) },
	{ 0x5369d78d, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x5fcafee8, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0x4222f11c, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0xc76aa730, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe5e4123a, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x72d0240f, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x6c4463a9, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x899dc08a, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x6b13ab15, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,mmc_core";

MODULE_ALIAS("platform:rtsx_pci_sdmmc");
