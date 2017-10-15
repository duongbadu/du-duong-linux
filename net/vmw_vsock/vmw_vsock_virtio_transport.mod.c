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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7dd73a1e, __VMLINUX_SYMBOL_STR(virtio_transport_recv_pkt) },
	{ 0xdade8c99, __VMLINUX_SYMBOL_STR(virtio_transport_set_buffer_size) },
	{ 0xb4c62e05, __VMLINUX_SYMBOL_STR(virtio_transport_destruct) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xb7803fab, __VMLINUX_SYMBOL_STR(virtio_transport_get_max_buffer_size) },
	{ 0xab326694, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_block) },
	{ 0xb280bb1b, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_space) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6586bfea, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_in) },
	{ 0x69b67966, __VMLINUX_SYMBOL_STR(virtio_transport_do_socket_init) },
	{ 0x1bd4d813, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x2d948bb4, __VMLINUX_SYMBOL_STR(virtio_transport_stream_is_active) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe38f6d81, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xbd19e1d0, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0x858515a7, __VMLINUX_SYMBOL_STR(virtio_transport_set_min_buffer_size) },
	{ 0x4ced8dab, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x98d42558, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_allow) },
	{ 0x57d72639, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_post_dequeue) },
	{ 0xf2c5aecd, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_out) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0x14f38446, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x9a76fea4, __VMLINUX_SYMBOL_STR(virtio_transport_stream_dequeue) },
	{ 0xdcdd2aec, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0xc2c27fe7, __VMLINUX_SYMBOL_STR(virtio_transport_stream_enqueue) },
	{ 0xcce32f92, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_dequeue) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe3e120ed, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_enqueue) },
	{ 0x48a0f908, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_init) },
	{ 0xe3312f97, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xe16ca3f8, __VMLINUX_SYMBOL_STR(virtio_transport_stream_allow) },
	{ 0xe7492390, __VMLINUX_SYMBOL_STR(virtio_transport_get_buffer_size) },
	{ 0xe4e2ab3a, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xa1bf9c1, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_dequeue) },
	{ 0x674d4ce4, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_post_enqueue) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa92effb0, __VMLINUX_SYMBOL_STR(virtio_transport_shutdown) },
	{ 0x84560a80, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_enqueue) },
	{ 0xb50091fb, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_block) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa9e289e1, __VMLINUX_SYMBOL_STR(virtio_transport_free_pkt) },
	{ 0x55758a6a, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_bind) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x13d941c0, __VMLINUX_SYMBOL_STR(virtio_transport_stream_rcvhiwat) },
	{ 0x97b59c17, __VMLINUX_SYMBOL_STR(virtio_transport_set_max_buffer_size) },
	{ 0xda96fdde, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_data) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x123dbed3, __VMLINUX_SYMBOL_STR(virtio_transport_connect) },
	{ 0x52b1738c, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0xd0b9996d, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0xe3d6ba77, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x5198438c, __VMLINUX_SYMBOL_STR(virtio_transport_release) },
	{ 0x9a7a16e9, __VMLINUX_SYMBOL_STR(virtio_transport_get_min_buffer_size) },
	{ 0xfeedc7c6, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_init) },
	{ 0xd015836a, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,virtio_ring,vsock,virtio";

MODULE_ALIAS("virtio:d00000013v*");
