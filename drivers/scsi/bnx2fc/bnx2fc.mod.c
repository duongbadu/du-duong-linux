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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2573bf6c, __VMLINUX_SYMBOL_STR(fcoe_start_io) },
	{ 0x2bb8aa3f, __VMLINUX_SYMBOL_STR(fc_exch_init) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x2d729bfb, __VMLINUX_SYMBOL_STR(fcoe_ctlr_recv_flogi) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x513a7c72, __VMLINUX_SYMBOL_STR(fcoe_ctlr_els_send) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb364914c, __VMLINUX_SYMBOL_STR(fcoe_transport_detach) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2663d374, __VMLINUX_SYMBOL_STR(fc_lport_bsg_request) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9644b8cf, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf4853dc0, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x78fba6c2, __VMLINUX_SYMBOL_STR(fcoe_ctlr_link_up) },
	{ 0x5bae1b82, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x5e2d4472, __VMLINUX_SYMBOL_STR(fcoe_ctlr_recv) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x374c1e1c, __VMLINUX_SYMBOL_STR(fcoe_wwn_from_mac) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec9a5d3d, __VMLINUX_SYMBOL_STR(libfc_vport_create) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x88f2a551, __VMLINUX_SYMBOL_STR(fcoe_get_lesb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x17769eaf, __VMLINUX_SYMBOL_STR(fcoe_clean_pending_queue) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xf5e1c876, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x9240fed9, __VMLINUX_SYMBOL_STR(fc_disc_config) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x76c37f43, __VMLINUX_SYMBOL_STR(fc_lport_flogi_resp) },
	{ 0xb57e2b0e, __VMLINUX_SYMBOL_STR(fc_exch_mgr_free) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x889c2cb7, __VMLINUX_SYMBOL_STR(fc_lport_destroy) },
	{ 0xdd845a8, __VMLINUX_SYMBOL_STR(fc_elsct_init) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x9000144d, __VMLINUX_SYMBOL_STR(fc_vport_id_lookup) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x801b4e79, __VMLINUX_SYMBOL_STR(fc_slave_alloc) },
	{ 0x1288c05a, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd388c155, __VMLINUX_SYMBOL_STR(fcoe_get_wwn) },
	{ 0xf6211ea5, __VMLINUX_SYMBOL_STR(fcoe_ctlr_link_down) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xfb51275, __VMLINUX_SYMBOL_STR(fcoe_queue_timer) },
	{ 0x2ba96070, __VMLINUX_SYMBOL_STR(fc_set_mfs) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xaecb70f6, __VMLINUX_SYMBOL_STR(fc_exch_recv) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0xc87e619e, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0xb9b0ddff, __VMLINUX_SYMBOL_STR(fc_get_host_stats) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd403f7c5, __VMLINUX_SYMBOL_STR(fc_set_rport_loss_tmo) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x636af174, __VMLINUX_SYMBOL_STR(cnic_unregister_driver) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x946dfe09, __VMLINUX_SYMBOL_STR(fc_fabric_logoff) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x71558565, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0x82d0e43c, __VMLINUX_SYMBOL_STR(fc_elsct_send) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x84b3d915, __VMLINUX_SYMBOL_STR(fcoe_wwn_to_str) },
	{ 0xbf7ffc6f, __VMLINUX_SYMBOL_STR(fc_rport_terminate_io) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xa4fc745c, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0xff56e310, __VMLINUX_SYMBOL_STR(fc_get_host_speed) },
	{ 0xee95509a, __VMLINUX_SYMBOL_STR(fc_lport_logo_resp) },
	{ 0x9bf2635a, __VMLINUX_SYMBOL_STR(fc_lport_reset) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x9571c946, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0xff770737, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xe3fbf516, __VMLINUX_SYMBOL_STR(__dev_remove_pack) },
	{ 0x477fda91, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa6cda6e8, __VMLINUX_SYMBOL_STR(fcoe_validate_vport_create) },
	{ 0x59e93a6, __VMLINUX_SYMBOL_STR(fcoe_ctlr_device_add) },
	{ 0x748274c1, __VMLINUX_SYMBOL_STR(fcoe_ctlr_device_delete) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x52304b80, __VMLINUX_SYMBOL_STR(fcoe_transport_attach) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf83c74b6, __VMLINUX_SYMBOL_STR(cnic_register_driver) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfeb4af4a, __VMLINUX_SYMBOL_STR(fcoe_ctlr_destroy) },
	{ 0xd2414165, __VMLINUX_SYMBOL_STR(fc_block_scsi_eh) },
	{ 0x936bea0, __VMLINUX_SYMBOL_STR(fcoe_fc_crc) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xfcb69604, __VMLINUX_SYMBOL_STR(fc_disc_init) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x6d5f3fef, __VMLINUX_SYMBOL_STR(fcoe_fcf_get_selected) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x3bb5092d, __VMLINUX_SYMBOL_STR(fc_lport_config) },
	{ 0x84c25a86, __VMLINUX_SYMBOL_STR(fcoe_check_wait_queue) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb0200569, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xdb8bb0ca, __VMLINUX_SYMBOL_STR(fc_exch_mgr_alloc) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x59168761, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x28d34d14, __VMLINUX_SYMBOL_STR(fc_vport_setlink) },
	{ 0xc86ea819, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x56be6823, __VMLINUX_SYMBOL_STR(fc_exch_mgr_list_clone) },
	{ 0x90921d4b, __VMLINUX_SYMBOL_STR(fc_rport_init) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xc482304a, __VMLINUX_SYMBOL_STR(fc_fabric_login) },
	{ 0x6f9ca5ff, __VMLINUX_SYMBOL_STR(fc_eh_host_reset) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf436e10, __VMLINUX_SYMBOL_STR(fc_get_host_port_state) },
	{ 0x6731aed0, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xe49a91c5, __VMLINUX_SYMBOL_STR(fc_lport_init) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x2658c815, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x5a30c714, __VMLINUX_SYMBOL_STR(fcoe_ctlr_get_lesb) },
	{ 0xc7249e3d, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2b06cf99, __VMLINUX_SYMBOL_STR(fcoe_link_speed_update) },
	{ 0x274d49ab, __VMLINUX_SYMBOL_STR(fcoe_get_paged_crc_eof) },
	{ 0xdfb4edde, __VMLINUX_SYMBOL_STR(fcoe_ctlr_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfcoe,libfc,scsi_mod,scsi_transport_fc,cnic";


MODULE_INFO(srcversion, "7F2220982C2276D998B67D3");
