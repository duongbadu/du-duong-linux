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
	{ 0xf45d8b26, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x18494b7a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x43bb34ad, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x46375c9b, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xe5a3f211, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0xf7aa0f8a, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfafbd3ef, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5f4422b8, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x67cd7bdf, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x535f9a01, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1228d1e6, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x6197af6c, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0x6940c43e, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7b2b9752, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8fe337ab, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6b130f82, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x583faf00, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x4e4aea67, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6d2f6571, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x6611a0de, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x691ad3c2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe7ecb490, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xb3262e02, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x18341a6a, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x1d59b865, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xfa3a135a, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x4adc71f4, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x75856ec6, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "D9C1890158472E2AF2F57D4");
