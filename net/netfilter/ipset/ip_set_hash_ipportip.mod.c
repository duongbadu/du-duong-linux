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
	{ 0x9e140a62, __VMLINUX_SYMBOL_STR(ip_set_type_unregister) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x203651c5, __VMLINUX_SYMBOL_STR(ip_set_type_register) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3608c715, __VMLINUX_SYMBOL_STR(ip_set_elem_len) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf3b4d4ae, __VMLINUX_SYMBOL_STR(ip_set_alloc) },
	{ 0xc848d02d, __VMLINUX_SYMBOL_STR(ip_set_get_ip4_port) },
	{ 0x7924b6de, __VMLINUX_SYMBOL_STR(ip_set_hostmask_map) },
	{ 0xa293f8a6, __VMLINUX_SYMBOL_STR(ip_set_get_ipaddr4) },
	{ 0xa1d652fa, __VMLINUX_SYMBOL_STR(ip_set_get_ip6_port) },
	{ 0x728ea6e3, __VMLINUX_SYMBOL_STR(ip_set_get_extensions) },
	{ 0x9e98722b, __VMLINUX_SYMBOL_STR(ip_set_get_ipaddr6) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x653d7094, __VMLINUX_SYMBOL_STR(ip_set_put_extensions) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x397f6231, __VMLINUX_SYMBOL_STR(ip_set_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcc001bd9, __VMLINUX_SYMBOL_STR(ip_set_extensions) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";

