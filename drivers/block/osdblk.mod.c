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
	{ 0xe24fd3b5, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x6a81339e, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x3f04678f, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0xaa5e85a7, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x8f4c6a09, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0xdc83d35b, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0x1ecc5f0f, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x347f2aee, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x95434e28, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x9b9d3c17, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x49f5b807, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0x6eb8aaac, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x9dd4c265, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0x2e43d51a, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x228f284d, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0xd53c1738, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x332e7e1a, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x23c695dc, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x220438c8, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x67dafcdf, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x4bb6c9bb, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x438d19c1, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0x48ed29cb, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x807efc25, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xdd668c53, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x168f7377, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb7733cf0, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xa3c608e2, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0xe9b64a40, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";

