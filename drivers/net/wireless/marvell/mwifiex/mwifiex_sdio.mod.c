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
	{ 0xe7ecb490, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x583faf00, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x83e5dce8, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0x1228d1e6, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xfafbd3ef, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x46375c9b, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x93edccbe, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x995ad896, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x17229fe7, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1ef254f, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x75856ec6, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x37f4e488, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0x451e5d5b, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0x8fe337ab, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xf45d8b26, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x18341a6a, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x46878e55, __VMLINUX_SYMBOL_STR(mwifiex_dnld_fw) },
	{ 0x10e99158, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6611a0de, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4e4aea67, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xa1205eb1, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0x7d6fe710, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0x1641b88, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xe1fbd00c, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x14f5ba3a, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x18494b7a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xb3262e02, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x557022c1, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3f464748, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x43bb34ad, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6d2f6571, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x691ad3c2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "85070A93B2F890016CA4A4A");
