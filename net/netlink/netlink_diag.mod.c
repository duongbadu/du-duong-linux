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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xba81ec48, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0xe59eaceb, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x82e0c500, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0xc4c28252, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xa475ff41, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8d13007, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0x5a434535, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0xfb924520, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb8f5177d, __VMLINUX_SYMBOL_STR(nl_table) },
	{ 0x9c09dc5c, __VMLINUX_SYMBOL_STR(nl_table_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa0dcf480, __VMLINUX_SYMBOL_STR(rhashtable_walk_enter) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x86053fd2, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x8fa755d8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x691a2f7, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

