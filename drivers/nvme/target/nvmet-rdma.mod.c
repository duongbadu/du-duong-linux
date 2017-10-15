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
	{ 0xb5dbd64e, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_init) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7f1ac199, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x214114cc, __VMLINUX_SYMBOL_STR(nvmet_ctrl_fatal_error) },
	{ 0x207e208d, __VMLINUX_SYMBOL_STR(ib_drain_qp) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0xa00259e9, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x7e6c87c9, __VMLINUX_SYMBOL_STR(nvmet_sq_init) },
	{ 0xd99127f9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x21907cfa, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0x9f7ddccf, __VMLINUX_SYMBOL_STR(ib_create_srq) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8fc52107, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0xb23ce60e, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x89f5a825, __VMLINUX_SYMBOL_STR(ib_destroy_srq) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x1b228b47, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0x82f337ae, __VMLINUX_SYMBOL_STR(nvmet_register_transport) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2595b55e, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4abf51d5, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_wrs) },
	{ 0xf46a47ed, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x50dcc3d, __VMLINUX_SYMBOL_STR(nvmet_req_init) },
	{ 0xc4643a2c, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x62d62830, __VMLINUX_SYMBOL_STR(nvmet_unregister_transport) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcef51982, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xf39ba0f9, __VMLINUX_SYMBOL_STR(nvmet_sq_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf6b41035, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf483ae8e, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x63457ac9, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_post) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b96bf90, __VMLINUX_SYMBOL_STR(nvmet_req_complete) },
	{ 0x7512ed9, __VMLINUX_SYMBOL_STR(__ib_alloc_pd) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0x1ed223bb, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf1d07104, __VMLINUX_SYMBOL_STR(ib_alloc_cq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,nvmet,rdma_cm";

