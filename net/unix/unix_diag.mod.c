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
	{ 0x1d77b0f8, __VMLINUX_SYMBOL_STR(unix_socket_table) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7874b5ec, __VMLINUX_SYMBOL_STR(unix_table_lock) },
	{ 0xe59eaceb, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0xc4c28252, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xa475ff41, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5a434535, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xcd3ce215, __VMLINUX_SYMBOL_STR(unix_peer_get) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xcfe36344, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x54692840, __VMLINUX_SYMBOL_STR(unix_inq_len) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x52d3ff63, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x13dc5753, __VMLINUX_SYMBOL_STR(unix_outq_len) },
	{ 0x86053fd2, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x2943d6fe, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x8fa755d8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x691a2f7, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

