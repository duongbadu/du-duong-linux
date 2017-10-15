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
	{ 0xc1586756, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x69a2ada1, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x50b1dd03, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_groups) },
	{ 0x87958f75, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x51f751f5, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x484b2693, __VMLINUX_SYMBOL_STR(phy_resume) },
	{ 0x90485628, __VMLINUX_SYMBOL_STR(genphy_update_link) },
	{ 0x47a30b27, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xc4dc0bf7, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0x9ef5c52f, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x3699a24b, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0x1bf2f706, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x7eeba594, __VMLINUX_SYMBOL_STR(skb_copy_and_csum_dev) },
	{ 0x5728f6a2, __VMLINUX_SYMBOL_STR(mdiobus_get_phy) },
	{ 0x7eb0a794, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x2460c724, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x74691a69, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x3faa8558, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xad14508d, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xbf2b51fe, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0x5a00da2b, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd4ad2496, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe53b8517, __VMLINUX_SYMBOL_STR(devm_mdiobus_alloc_size) },
	{ 0x363e0354, __VMLINUX_SYMBOL_STR(phy_ethtool_get_eee) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x72e16d05, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xd728e1c6, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0x35adc4a5, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x6d294e43, __VMLINUX_SYMBOL_STR(clock_t_to_jiffies) },
	{ 0x86320cdb, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x503e2143, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf38d4801, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xe67fa7c3, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xda077aad, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x9cd21726, __VMLINUX_SYMBOL_STR(phy_suspend) },
	{ 0x955757b6, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x1b119cc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x72830094, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf3434173, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x36b9f401, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x258e3070, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcba9e5eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x5ec5587, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x17533651, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbf49cd12, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0xbe14449e, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xe9d46975, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6c86d0e4, __VMLINUX_SYMBOL_STR(phy_attached_info) },
	{ 0xb0200569, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x9ef06ffc, __VMLINUX_SYMBOL_STR(phy_ethtool_set_eee) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x5d0579c4, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5395199b, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x6bacd73c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xbbe897a7, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0xe07aadf8, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x276ec220, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6731aed0, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2658c815, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2b98b292, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xd21c04b1, __VMLINUX_SYMBOL_STR(genphy_restart_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("of:N*T*Cmarvell,dsa");
MODULE_ALIAS("of:N*T*Cmarvell,dsaC*");
