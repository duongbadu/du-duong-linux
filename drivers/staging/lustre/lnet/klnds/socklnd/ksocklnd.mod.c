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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb3997b63, __VMLINUX_SYMBOL_STR(cfs_cpt_number) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x545488fb, __VMLINUX_SYMBOL_STR(lnet_notify) },
	{ 0xbe1761c8, __VMLINUX_SYMBOL_STR(lnet_kiov_nob) },
	{ 0x5ee1ab80, __VMLINUX_SYMBOL_STR(lnet_connect) },
	{ 0xf5dc6337, __VMLINUX_SYMBOL_STR(lnet_iov_nob) },
	{ 0xa56de08d, __VMLINUX_SYMBOL_STR(lnet_ipif_free_enumeration) },
	{ 0xfebe106f, __VMLINUX_SYMBOL_STR(cfs_cpt_weight) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xee07e339, __VMLINUX_SYMBOL_STR(tcp_sendpage) },
	{ 0x16309888, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb747e673, __VMLINUX_SYMBOL_STR(cfs_percpt_lock) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x4cba99fe, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x9a692a27, __VMLINUX_SYMBOL_STR(cfs_cpt_spread_node) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7e93080c, __VMLINUX_SYMBOL_STR(libcfs_nid2str_r) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x735c65e, __VMLINUX_SYMBOL_STR(lnet_sock_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf8a8644b, __VMLINUX_SYMBOL_STR(libcfs_id2str) },
	{ 0x8840f591, __VMLINUX_SYMBOL_STR(cfs_block_allsigs) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xd0a42f02, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xcc9442bc, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xb1b08338, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0x18181950, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0xf5eff79, __VMLINUX_SYMBOL_STR(cfs_percpt_number) },
	{ 0x59cce778, __VMLINUX_SYMBOL_STR(lnet_extract_kiov) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x9d877973, __VMLINUX_SYMBOL_STR(lnet_sock_getbuf) },
	{ 0xe6de69d5, __VMLINUX_SYMBOL_STR(lnet_finalize) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x916bd963, __VMLINUX_SYMBOL_STR(cfs_percpt_alloc) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6df5dcc9, __VMLINUX_SYMBOL_STR(kernel_getsockopt) },
	{ 0xba5566d2, __VMLINUX_SYMBOL_STR(lnet_acceptor_port) },
	{ 0x110daa3e, __VMLINUX_SYMBOL_STR(the_lnet) },
	{ 0xbb0e1e63, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x571cd939, __VMLINUX_SYMBOL_STR(lnet_sock_write) },
	{ 0xa2f98a72, __VMLINUX_SYMBOL_STR(cfs_percpt_unlock) },
	{ 0x47fe6d6a, __VMLINUX_SYMBOL_STR(lnet_extract_iov) },
	{ 0x5fee352c, __VMLINUX_SYMBOL_STR(lnet_acceptor_timeout) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xade657cc, __VMLINUX_SYMBOL_STR(libcfs_next_nidstring) },
	{ 0xe3bf6897, __VMLINUX_SYMBOL_STR(cfs_percpt_free) },
	{ 0x1ee5f15e, __VMLINUX_SYMBOL_STR(lnet_ipif_query) },
	{ 0x17dc91b1, __VMLINUX_SYMBOL_STR(lnet_sock_setbuf) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x532dc3a, __VMLINUX_SYMBOL_STR(lnet_register_lnd) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe781b445, __VMLINUX_SYMBOL_STR(lnet_unregister_lnd) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xfdfd6c90, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xa1db8edf, __VMLINUX_SYMBOL_STR(lnet_sock_getaddr) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3e0bff42, __VMLINUX_SYMBOL_STR(lnet_parse) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3699fd8c, __VMLINUX_SYMBOL_STR(cfs_cpt_bind) },
	{ 0x2ac93e90, __VMLINUX_SYMBOL_STR(lnet_connect_console_error) },
	{ 0x66d449b1, __VMLINUX_SYMBOL_STR(lnet_ipif_enumerate) },
	{ 0x23fd3028, __VMLINUX_SYMBOL_STR(vmalloc_node) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2aa9953d, __VMLINUX_SYMBOL_STR(lnet_cpt_of_nid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcfs,lnet";


MODULE_INFO(srcversion, "9DD45CCC8D2AD95164C867A");
