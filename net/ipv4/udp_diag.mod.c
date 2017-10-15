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
	{ 0x780733f3, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x10497412, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0xf03da2c2, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x60576c53, __VMLINUX_SYMBOL_STR(sock_diag_destroy) },
	{ 0x8cfbb69e, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xe690b8d8, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3d5f9676, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0xcfe36344, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x11e11f8d, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0xd795100, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x52d3ff63, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x6fe462d8, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";

