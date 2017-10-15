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
	{ 0xb6a7be05, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x2a09f713, __VMLINUX_SYMBOL_STR(cfpkt_fromnative) },
	{ 0xd980759f, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2a332d3f, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xda4bd233, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
	{ 0xcd526e29, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xd89e0377, __VMLINUX_SYMBOL_STR(caif_connect_client) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3928ef77, __VMLINUX_SYMBOL_STR(caif_disconnect_client) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb7b6874e, __VMLINUX_SYMBOL_STR(caif_free_client) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x18fa5f78, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x902c1a49, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4a237e57, __VMLINUX_SYMBOL_STR(cfpkt_tonative) },
	{ 0x1446b60a, __VMLINUX_SYMBOL_STR(caif_client_register_refcnt) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x16444d73, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xa38acbf6, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caif";

