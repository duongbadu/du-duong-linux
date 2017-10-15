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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xf7eb43ae, __VMLINUX_SYMBOL_STR(sg_alloc_table_chained) },
	{ 0x2ad65f89, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0x48302bd3, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x426f035c, __VMLINUX_SYMBOL_STR(nvmf_register_transport) },
	{ 0x7cc83b13, __VMLINUX_SYMBOL_STR(nvme_shutdown_ctrl) },
	{ 0x11e74ecb, __VMLINUX_SYMBOL_STR(nvme_set_queue_count) },
	{ 0xccf2f1ad, __VMLINUX_SYMBOL_STR(nvme_stop_queues) },
	{ 0xb77616a3, __VMLINUX_SYMBOL_STR(nvme_complete_async_event) },
	{ 0x7e6c87c9, __VMLINUX_SYMBOL_STR(nvmet_sq_init) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2dd78a03, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xe1b02d13, __VMLINUX_SYMBOL_STR(nvmf_reg_write32) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdd87eb28, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x4549823e, __VMLINUX_SYMBOL_STR(nvme_start_keep_alive) },
	{ 0x31c37f6e, __VMLINUX_SYMBOL_STR(nvme_enable_ctrl) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd0996e0f, __VMLINUX_SYMBOL_STR(nvme_io_timeout) },
	{ 0x4e41c19d, __VMLINUX_SYMBOL_STR(nvmf_connect_admin_queue) },
	{ 0xe8a7948b, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x92fbf025, __VMLINUX_SYMBOL_STR(nvme_init_identify) },
	{ 0x87fe3442, __VMLINUX_SYMBOL_STR(nvmf_reg_read64) },
	{ 0x5e91584c, __VMLINUX_SYMBOL_STR(nvmf_get_subsysnqn) },
	{ 0x6f630686, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x327858b1, __VMLINUX_SYMBOL_STR(nvme_max_retries) },
	{ 0x82f337ae, __VMLINUX_SYMBOL_STR(nvmet_register_transport) },
	{ 0xb4dd86e9, __VMLINUX_SYMBOL_STR(nvme_requeue_req) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x826c54d1, __VMLINUX_SYMBOL_STR(nvme_queue_scan) },
	{ 0xb12c967d, __VMLINUX_SYMBOL_STR(nvme_put_ctrl) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x50dcc3d, __VMLINUX_SYMBOL_STR(nvmet_req_init) },
	{ 0xa677c872, __VMLINUX_SYMBOL_STR(nvme_init_ctrl) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x97d32f33, __VMLINUX_SYMBOL_STR(nvme_change_ctrl_state) },
	{ 0x62d62830, __VMLINUX_SYMBOL_STR(nvmet_unregister_transport) },
	{ 0x45b1ca34, __VMLINUX_SYMBOL_STR(nvmf_unregister_transport) },
	{ 0x39aef50c, __VMLINUX_SYMBOL_STR(nvme_cancel_request) },
	{ 0xf39ba0f9, __VMLINUX_SYMBOL_STR(nvmet_sq_destroy) },
	{ 0xc9e23d4f, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x54aa5818, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf0d5bc06, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0x650273ac, __VMLINUX_SYMBOL_STR(nvmf_reg_read32) },
	{ 0x9d6e9700, __VMLINUX_SYMBOL_STR(sg_free_table_chained) },
	{ 0xdb73ec62, __VMLINUX_SYMBOL_STR(nvme_queue_async_events) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe3531f3a, __VMLINUX_SYMBOL_STR(nvmf_connect_io_queue) },
	{ 0x38262da4, __VMLINUX_SYMBOL_STR(nvme_setup_cmd) },
	{ 0xb56c2782, __VMLINUX_SYMBOL_STR(nvme_stop_keep_alive) },
	{ 0xf958ab24, __VMLINUX_SYMBOL_STR(admin_timeout) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x45905832, __VMLINUX_SYMBOL_STR(nvme_start_queues) },
	{ 0xffd4fca3, __VMLINUX_SYMBOL_STR(nvmf_free_options) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe350c0a8, __VMLINUX_SYMBOL_STR(nvme_uninit_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-fabrics,nvme-core,nvmet";

