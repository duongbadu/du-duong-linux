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
	{ 0xf8b8edbe, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x52d9e0fb, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x6b709279, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x24627b79, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xe5cc4489, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xf083efec, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2c4d5bc7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf0698db5, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xd1fa164a, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x15af20fc, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xecdaa784, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf3b81ea7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xa7b02cc, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x96c10d83, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x5893aee6, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x2dc928fb, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x250848e6, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x838b7e61, __VMLINUX_SYMBOL_STR(crypto_alloc_rng) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb784f97b, __VMLINUX_SYMBOL_STR(crypto_rng_reset) },
	{ 0x2952fdf5, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0x5df55376, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0xffabc08f, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc15a44c6, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xff2be877, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

