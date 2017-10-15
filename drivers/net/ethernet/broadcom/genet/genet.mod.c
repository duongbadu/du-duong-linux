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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x69a2ada1, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x5cb908ff, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x51f751f5, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x375bad8c, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x7e693a39, __VMLINUX_SYMBOL_STR(__napi_schedule_irqoff) },
	{ 0x71a153a0, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x484b2693, __VMLINUX_SYMBOL_STR(phy_resume) },
	{ 0x3f305c31, __VMLINUX_SYMBOL_STR(netdev_boot_setup_check) },
	{ 0x81bf5bf, __VMLINUX_SYMBOL_STR(phy_ethtool_ksettings_set) },
	{ 0xc02be265, __VMLINUX_SYMBOL_STR(phy_init_hw) },
	{ 0x1261174e, __VMLINUX_SYMBOL_STR(phy_ethtool_ksettings_get) },
	{ 0x9ef5c52f, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x5728f6a2, __VMLINUX_SYMBOL_STR(mdiobus_get_phy) },
	{ 0x2460c724, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x2262cf77, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xd4ad2496, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x198ed204, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe0729564, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x363e0354, __VMLINUX_SYMBOL_STR(phy_ethtool_get_eee) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xec30a350, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd728e1c6, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0x54335e7e, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x76bd67b, __VMLINUX_SYMBOL_STR(phy_mac_interrupt) },
	{ 0x35adc4a5, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x4201af1f, __VMLINUX_SYMBOL_STR(phy_find_first) },
	{ 0x16444d73, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xbda8e890, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdde2bdc4, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x6b9d3a52, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xf38d4801, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x985b7bd7, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xfb373e6a, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0xf79361d3, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xf5822fe0, __VMLINUX_SYMBOL_STR(fixed_phy_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x244eba79, __VMLINUX_SYMBOL_STR(fixed_phy_set_link_update) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9cd21726, __VMLINUX_SYMBOL_STR(phy_suspend) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6fcfca6d, __VMLINUX_SYMBOL_STR(phy_init_eee) },
	{ 0x955757b6, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x8c04edcb, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1b119cc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x72830094, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x39d188f4, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x36b9f401, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1ebf7d57, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0xcba9e5eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc724a9ea, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9ef06ffc, __VMLINUX_SYMBOL_STR(phy_ethtool_set_eee) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6bacd73c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xe07aadf8, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x19de617c, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x63fb0ba3, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x94b24cc7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x68b47ff2, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xe25a1c80, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0x952028df, __VMLINUX_SYMBOL_STR(netdev_crit) },
	{ 0xd21c04b1, __VMLINUX_SYMBOL_STR(genphy_restart_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy,fixed_phy";

MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
