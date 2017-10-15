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
	{ 0x52d9e0fb, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x24627b79, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xe5cc4489, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xf083efec, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2c4d5bc7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf0698db5, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x15af20fc, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xecdaa784, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf3b81ea7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xa7b02cc, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x96c10d83, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x5893aee6, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x2dc928fb, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x250848e6, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x11badcb8, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0xa425bde3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1cfa7c8e, __VMLINUX_SYMBOL_STR(af_alg_link_sg) },
	{ 0x20392c94, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x885b9e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x6949ff5c, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0x9bc9fd8e, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x6aa4436b, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xb4557e67, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9f254d98, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x8b783df3, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xa4ce563c, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xffabc08f, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2952fdf5, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0xd6bb8f44, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x81fd1a56, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x5df55376, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x1e73a03c, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

