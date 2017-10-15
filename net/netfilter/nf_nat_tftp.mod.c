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
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x6d42e61e, __VMLINUX_SYMBOL_STR(nf_nat_tftp_hook) },
	{ 0x48d6a933, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x35632a29, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xcfe1cf59, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_tftp,nf_conntrack,nf_nat";

