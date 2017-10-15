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
	{ 0x7dd73a1e, __VMLINUX_SYMBOL_STR(virtio_transport_recv_pkt) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdade8c99, __VMLINUX_SYMBOL_STR(virtio_transport_set_buffer_size) },
	{ 0xb4c62e05, __VMLINUX_SYMBOL_STR(virtio_transport_destruct) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x36d667d4, __VMLINUX_SYMBOL_STR(vhost_work_flush) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x669daaef, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0xb7803fab, __VMLINUX_SYMBOL_STR(virtio_transport_get_max_buffer_size) },
	{ 0xab326694, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_block) },
	{ 0xb280bb1b, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_space) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6586bfea, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_in) },
	{ 0x885b9e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x69b67966, __VMLINUX_SYMBOL_STR(virtio_transport_do_socket_init) },
	{ 0x2d948bb4, __VMLINUX_SYMBOL_STR(virtio_transport_stream_is_active) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbd19e1d0, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0x34056ccc, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x6ebb4bbb, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0x858515a7, __VMLINUX_SYMBOL_STR(virtio_transport_set_min_buffer_size) },
	{ 0x2dfc5f1a, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0x98d42558, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_allow) },
	{ 0x57d72639, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_post_dequeue) },
	{ 0xf2c5aecd, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_out) },
	{ 0x502820b8, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f596959, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0x7834179d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x382060fd, __VMLINUX_SYMBOL_STR(vhost_signal) },
	{ 0x142d4b3b, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x9a76fea4, __VMLINUX_SYMBOL_STR(virtio_transport_stream_dequeue) },
	{ 0xc2c27fe7, __VMLINUX_SYMBOL_STR(virtio_transport_stream_enqueue) },
	{ 0xcce32f92, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_dequeue) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdcaff72c, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0xe3e120ed, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_enqueue) },
	{ 0xc2115909, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc2fb600, __VMLINUX_SYMBOL_STR(vhost_work_queue) },
	{ 0x48a0f908, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_init) },
	{ 0xe16ca3f8, __VMLINUX_SYMBOL_STR(virtio_transport_stream_allow) },
	{ 0xe7492390, __VMLINUX_SYMBOL_STR(virtio_transport_get_buffer_size) },
	{ 0x410333a, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0xa1bf9c1, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_dequeue) },
	{ 0x674d4ce4, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_post_enqueue) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xa92effb0, __VMLINUX_SYMBOL_STR(virtio_transport_shutdown) },
	{ 0x84560a80, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_enqueue) },
	{ 0x114a9cc9, __VMLINUX_SYMBOL_STR(vhost_work_init) },
	{ 0x7a6088f6, __VMLINUX_SYMBOL_STR(vhost_vq_init_access) },
	{ 0xb50091fb, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_block) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa9e289e1, __VMLINUX_SYMBOL_STR(virtio_transport_free_pkt) },
	{ 0x55758a6a, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_bind) },
	{ 0x366bdd2c, __VMLINUX_SYMBOL_STR(iov_iter_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x13d941c0, __VMLINUX_SYMBOL_STR(virtio_transport_stream_rcvhiwat) },
	{ 0x97b59c17, __VMLINUX_SYMBOL_STR(virtio_transport_set_max_buffer_size) },
	{ 0x4115b0b5, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0xff2be877, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x907a48ef, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0xbc771f11, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0xda96fdde, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_data) },
	{ 0x123dbed3, __VMLINUX_SYMBOL_STR(virtio_transport_connect) },
	{ 0xd0b9996d, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3817642, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0x1d04b131, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x5198438c, __VMLINUX_SYMBOL_STR(virtio_transport_release) },
	{ 0x9a7a16e9, __VMLINUX_SYMBOL_STR(virtio_transport_get_min_buffer_size) },
	{ 0xfeedc7c6, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_init) },
	{ 0xf1634509, __VMLINUX_SYMBOL_STR(vhost_add_used) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,vhost,vsock";

