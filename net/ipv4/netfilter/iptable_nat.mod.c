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
	{ 0xbe7ebf3f, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x2ebe8f65, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xcba16e10, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x3b9deb6c, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xff45ffa1, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0x8436ca0d, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x960d12c1, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0x6c5303f5, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";

