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
	{ 0xf419b10e, __VMLINUX_SYMBOL_STR(sctp_for_each_endpoint) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdafdf144, __VMLINUX_SYMBOL_STR(sctp_for_each_transport) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcfe36344, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x52d3ff63, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1b0f4c28, __VMLINUX_SYMBOL_STR(inet_diag_msg_common_fill) },
	{ 0x1cdd714e, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2943d6fe, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa071019d, __VMLINUX_SYMBOL_STR(inet_diag_msg_attrs_fill) },
	{ 0x8fa755d8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x86053fd2, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f999096, __VMLINUX_SYMBOL_STR(sctp_transport_lookup_process) },
	{ 0xd795100, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0xa04f0170, __VMLINUX_SYMBOL_STR(sctp_get_sctp_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,sctp";

