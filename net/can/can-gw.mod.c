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
	{ 0x14956723, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe244d5b1, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7eb0a794, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xaec1b53f, __VMLINUX_SYMBOL_STR(__rtnl_register) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xcd526e29, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xe9296fc, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6c4b1ba2, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x579e0bf5, __VMLINUX_SYMBOL_STR(rtnl_unregister_all) },
	{ 0xbabda3fd, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8fa755d8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";

