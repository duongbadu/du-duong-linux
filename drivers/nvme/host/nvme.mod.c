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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9ba146bf, __VMLINUX_SYMBOL_STR(wait_for_completion_io_timeout) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x29d432cc, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0x1d4f267b, __VMLINUX_SYMBOL_STR(pci_free_irq_vectors) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0xd163ff0a, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x2ad65f89, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0x48302bd3, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xfd46c578, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0x7cc83b13, __VMLINUX_SYMBOL_STR(nvme_shutdown_ctrl) },
	{ 0x11e74ecb, __VMLINUX_SYMBOL_STR(nvme_set_queue_count) },
	{ 0x3ebcf771, __VMLINUX_SYMBOL_STR(blk_rq_map_integrity_sg) },
	{ 0xccf2f1ad, __VMLINUX_SYMBOL_STR(nvme_stop_queues) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x3a36bcd9, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0xb77616a3, __VMLINUX_SYMBOL_STR(nvme_complete_async_event) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd771e90, __VMLINUX_SYMBOL_STR(nvme_kill_queues) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x2dd78a03, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x5f4badaa, __VMLINUX_SYMBOL_STR(blk_mq_update_nr_hw_queues) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdd87eb28, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x81febf34, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x31c37f6e, __VMLINUX_SYMBOL_STR(nvme_enable_ctrl) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x56eb86cd, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd0996e0f, __VMLINUX_SYMBOL_STR(nvme_io_timeout) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x197bc11f, __VMLINUX_SYMBOL_STR(sysfs_remove_file_from_group) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xe8a7948b, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x92fbf025, __VMLINUX_SYMBOL_STR(nvme_init_identify) },
	{ 0x6f630686, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0xbb4a2479, __VMLINUX_SYMBOL_STR(nvme_remove_namespaces) },
	{ 0x327858b1, __VMLINUX_SYMBOL_STR(nvme_max_retries) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xb4dd86e9, __VMLINUX_SYMBOL_STR(nvme_requeue_req) },
	{ 0xad8a6309, __VMLINUX_SYMBOL_STR(pci_device_is_present) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x826c54d1, __VMLINUX_SYMBOL_STR(nvme_queue_scan) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc242eda4, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xb12c967d, __VMLINUX_SYMBOL_STR(nvme_put_ctrl) },
	{ 0x12d84c2d, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0xb9752216, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0xa677c872, __VMLINUX_SYMBOL_STR(nvme_init_ctrl) },
	{ 0xa9ca0401, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbb0e1e63, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x97d32f33, __VMLINUX_SYMBOL_STR(nvme_change_ctrl_state) },
	{ 0x91ebd946, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x7d1bae03, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x39aef50c, __VMLINUX_SYMBOL_STR(nvme_cancel_request) },
	{ 0xccdc7fad, __VMLINUX_SYMBOL_STR(blk_mq_pci_map_queues) },
	{ 0x3cc839f3, __VMLINUX_SYMBOL_STR(blk_rq_count_integrity_sg) },
	{ 0xc9e23d4f, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x54aa5818, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94743ef, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5e9df802, __VMLINUX_SYMBOL_STR(nvme_disable_ctrl) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf0d5bc06, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xb7af3335, __VMLINUX_SYMBOL_STR(pci_irq_vector) },
	{ 0x2baa1d24, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0xdb73ec62, __VMLINUX_SYMBOL_STR(nvme_queue_async_events) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe607b15c, __VMLINUX_SYMBOL_STR(nvme_submit_sync_cmd) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xdee36bdd, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x38262da4, __VMLINUX_SYMBOL_STR(nvme_setup_cmd) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xf958ab24, __VMLINUX_SYMBOL_STR(admin_timeout) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x51478b92, __VMLINUX_SYMBOL_STR(nvme_alloc_request) },
	{ 0x45905832, __VMLINUX_SYMBOL_STR(nvme_start_queues) },
	{ 0x8019ba9f, __VMLINUX_SYMBOL_STR(sysfs_add_file_to_group) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe8e19ea6, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6df73ebb, __VMLINUX_SYMBOL_STR(pci_alloc_irq_vectors) },
	{ 0x3d1a2a37, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x17b430e0, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x253f90be, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xcfb5232f, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xe350c0a8, __VMLINUX_SYMBOL_STR(nvme_uninit_ctrl) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C39D6296F12C973F08DF142");
