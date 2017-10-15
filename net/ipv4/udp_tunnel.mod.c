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
	{ 0x16309888, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x3a9ffc5f, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x283945cf, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x67e5b5d6, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xd8832440, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xf2b20f2e, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8fb8d133, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x32df4bd8, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x40ca6da3, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

