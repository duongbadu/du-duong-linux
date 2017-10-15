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
	{ 0x14956723, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x9b2a002b, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x818da066, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xfc3d0904, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf84214f4, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x780bc605, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x6564c0d1, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xca7b3033, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x1f9c5270, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0x18fa5f78, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xbd7aba0b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x616afe29, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x297c6c94, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xda077aad, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x685ec44a, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xedf1eaba, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1a2e3b4c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xadde1e84, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x6731aed0, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2658c815, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

