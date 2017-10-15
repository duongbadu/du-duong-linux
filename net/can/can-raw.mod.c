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
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xe244d5b1, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x12728de4, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x885b9e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xc2082581, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xcb670cb8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf8b8edbe, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x52d9e0fb, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf3b81ea7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2c4d5bc7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xecdaa784, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x437a0d6d, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x414575a6, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf083efec, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xa31d3a7e, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xe9296fc, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xc67c5b7d, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a4095e0, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfc5cc19, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x5b75fa9a, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa7b02cc, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xff2be877, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xbabda3fd, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x5f887304, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";

