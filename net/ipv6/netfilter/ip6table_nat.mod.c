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
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd1799161, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x3f311300, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xa878a448, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x5e4eeb60, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xadf0062b, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x3b15a2ca, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0xf5d4d899, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xa76cae77, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";

