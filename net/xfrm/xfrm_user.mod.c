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
	{ 0x77368404, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2176db90, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x45cfdf08, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0x138fa975, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe892c4e7, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0xa0686286, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0xddf2415f, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0x55745ce, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x60b73277, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0xf8ebdcb6, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xbc785e8f, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xd3fdcab1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x43055d6e, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0x59a252f8, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0xe8b751bf, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xb0893bf, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0xbc4fb680, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x217a6406, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcc7fe568, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x3ecdf2a7, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x1f798832, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x691a2f7, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xd795100, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x307c128f, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x6a9d308b, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xcfe36344, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe8965658, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0xb34e6bb8, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0x9cb8ef7f, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0x5494333, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0xae969cb, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0x7417d72d, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x7fca5a9f, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0xe472b9c3, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0xf909cad0, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0x97b9f0e2, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x12c82841, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0x48c36c53, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0xad16cdac, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x618342f, __VMLINUX_SYMBOL_STR(xfrm_policy_hash_rebuild) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2688b093, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x75606d44, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x1c38dad2, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8fa755d8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x2943d6fe, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8cf560e6, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

