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
	{ 0xd980759f, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x318b333b, __VMLINUX_SYMBOL_STR(dev_mc_sync_multiple) },
	{ 0x8e26fccf, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xc1586756, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x12ca8977, __VMLINUX_SYMBOL_STR(rtmsg_ifinfo) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x87958f75, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x585e986c, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0x8010a55a, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x9644b8cf, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xa22ef5fd, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfc3d0904, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xcb9bbb52, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x754774f0, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xc4dc0bf7, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0x3699a24b, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0x1b66c649, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd437c286, __VMLINUX_SYMBOL_STR(flow_get_u32_src) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x2460c724, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x78d67053, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xf84214f4, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3faa8558, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x51c0bb94, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x4dab57b0, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xad2a2439, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xad14508d, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xbf2b51fe, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0x8115009a, __VMLINUX_SYMBOL_STR(vlan_vids_del_by_dev) },
	{ 0x5a00da2b, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe0729564, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xed1d5274, __VMLINUX_SYMBOL_STR(vlan_vids_add_by_dev) },
	{ 0xd2f0c8ca, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x3e07be28, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbaf4e749, __VMLINUX_SYMBOL_STR(netdev_lower_get_next_private_rcu) },
	{ 0x5a818edb, __VMLINUX_SYMBOL_STR(netdev_lower_state_changed) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8a2f01c3, __VMLINUX_SYMBOL_STR(netdev_change_features) },
	{ 0x72e16d05, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x6564c0d1, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x3a63d0e5, __VMLINUX_SYMBOL_STR(netdev_has_upper_dev) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xdfbd1e10, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xbd7aba0b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x156a8a59, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x6a21c14c, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x7e47a313, __VMLINUX_SYMBOL_STR(arp_create) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdde2bdc4, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9e763530, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0x9fc8bcff, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x762d625c, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x503e2143, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x62849ac7, __VMLINUX_SYMBOL_STR(dev_valid_name) },
	{ 0x61e4172d, __VMLINUX_SYMBOL_STR(netdev_class_remove_file_ns) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x24a1cccb, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb448e965, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa38acbf6, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0x884f0bb7, __VMLINUX_SYMBOL_STR(netdev_bonding_info_change) },
	{ 0x6dd48748, __VMLINUX_SYMBOL_STR(dev_mc_flush) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x6c124b5d, __VMLINUX_SYMBOL_STR(inet_confirm_addr) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xcd526e29, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x38440764, __VMLINUX_SYMBOL_STR(netdev_lower_dev_get_private) },
	{ 0x26c77dee, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xb25efee2, __VMLINUX_SYMBOL_STR(dev_uc_flush) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x6c8faf21, __VMLINUX_SYMBOL_STR(netdev_upper_get_next_dev_rcu) },
	{ 0x6cdd05f4, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd8e14e4, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_proto) },
	{ 0x29ca93cf, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x35f1f899, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xf3434173, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x80f68f3f, __VMLINUX_SYMBOL_STR(arp_xmit) },
	{ 0xaa85bb30, __VMLINUX_SYMBOL_STR(netdev_lower_get_next_private) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x258e3070, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcba9e5eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x5ec5587, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x17533651, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xe034a1, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbf49cd12, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0xb6a7be05, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x70c6ac5d, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc724a9ea, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xadde1e84, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3875659a, __VMLINUX_SYMBOL_STR(__skb_flow_get_ports) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe9d46975, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0xad94cdc6, __VMLINUX_SYMBOL_STR(flow_get_u32_dst) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeca990d6, __VMLINUX_SYMBOL_STR(dev_uc_sync_multiple) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa3e21452, __VMLINUX_SYMBOL_STR(dev_trans_start) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x5395199b, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xdbbbec12, __VMLINUX_SYMBOL_STR(netdev_lower_get_first_private_rcu) },
	{ 0xa0dad88e, __VMLINUX_SYMBOL_STR(netdev_adjacent_get_private) },
	{ 0xbbe897a7, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe56d529, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xaa8462a2, __VMLINUX_SYMBOL_STR(netdev_all_upper_get_next_dev_rcu) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd76daab7, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_construct) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x1592ecaf, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x2658c815, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x8df9963, __VMLINUX_SYMBOL_STR(netdev_is_rx_handler_busy) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2b98b292, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6525cd5d, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_destroy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x61684d3e, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x89855b25, __VMLINUX_SYMBOL_STR(netdev_class_create_file_ns) },
	{ 0xda4bd233, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1E5432919089304452BE8FC");
