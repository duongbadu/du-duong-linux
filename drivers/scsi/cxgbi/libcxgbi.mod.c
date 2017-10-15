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
	{ 0x1ed1f7f9, __VMLINUX_SYMBOL_STR(cxgbi_ppm_ppods_reserve) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x66ba1246, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe550305, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xbb8ece8c, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0x8e56aaf, __VMLINUX_SYMBOL_STR(cxgbi_ppm_ppod_release) },
	{ 0x374d305e, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5bae1b82, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xcf3a69e2, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xf16fd1f7, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6f6ebbe3, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x34bf3c7d, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x47f36e5a, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xaaa0ed0c, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0xdcd717e6, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd00429a9, __VMLINUX_SYMBOL_STR(cxgbi_ppm_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xaa2bcff5, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x8c23c379, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x15ba61c2, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xb6658a0b, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9bc9fd8e, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0xd8367ca8, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0xec29afb1, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x9571c946, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0xc18e0d68, __VMLINUX_SYMBOL_STR(ipv6_dev_get_saddr) },
	{ 0xabf5ab88, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x86e87cd0, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc2e1a6db, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xbcf610e3, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x7d3ca88f, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x8ddf2141, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xf1bf1176, __VMLINUX_SYMBOL_STR(cxgbi_ppm_release) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x55025c0f, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x70c6ac5d, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x2ab81c42, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x32fb73a, __VMLINUX_SYMBOL_STR(__ip_dev_find) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x74b72567, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xca2dc7da, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x57c8a075, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x12e640f9, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_segment_is_hdr) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xef0960e3, __VMLINUX_SYMBOL_STR(cxgbi_ppm_make_ppod_hdr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi,scsi_mod";


MODULE_INFO(srcversion, "C19EA28B0DF522B84393B37");
