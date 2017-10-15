#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5067d8a5, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0x16309888, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x283945cf, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xd0a42f02, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x67e5b5d6, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xf2b20f2e, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x40ca6da3, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x1c4678dd, __VMLINUX_SYMBOL_STR(ip6_local_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

