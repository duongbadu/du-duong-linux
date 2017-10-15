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
	{ 0xd72d31ea, __VMLINUX_SYMBOL_STR(nd_btt_probe) },
	{ 0x38423466, __VMLINUX_SYMBOL_STR(to_nd_pfn) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x997de81d, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xc2a75b9f, __VMLINUX_SYMBOL_STR(devm_init_badblocks) },
	{ 0x1afe085c, __VMLINUX_SYMBOL_STR(badblocks_clear) },
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x3f0d75de, __VMLINUX_SYMBOL_STR(nvdimm_namespace_common_probe) },
	{ 0xb94750ac, __VMLINUX_SYMBOL_STR(is_nd_pfn) },
	{ 0x977682dd, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0xff00176, __VMLINUX_SYMBOL_STR(memcpy_mcsafe_unrolled) },
	{ 0x6f916648, __VMLINUX_SYMBOL_STR(devm_nsio_disable) },
	{ 0x768b5ea5, __VMLINUX_SYMBOL_STR(devm_memremap_pages) },
	{ 0xb61fe0b4, __VMLINUX_SYMBOL_STR(nd_dax_probe) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xf6170fb4, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xf6557fd, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x8d6dbf9f, __VMLINUX_SYMBOL_STR(nd_iostat_end) },
	{ 0x20b49e0f, __VMLINUX_SYMBOL_STR(nd_pfn_probe) },
	{ 0xc4f33165, __VMLINUX_SYMBOL_STR(nvdimm_flush) },
	{ 0x359f1c8d, __VMLINUX_SYMBOL_STR(is_nd_btt) },
	{ 0xc805f93, __VMLINUX_SYMBOL_STR(clflush_cache_range) },
	{ 0x2d8718e1, __VMLINUX_SYMBOL_STR(nvdimm_namespace_disk_name) },
	{ 0x304c12f0, __VMLINUX_SYMBOL_STR(__nd_iostat_start) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x904184ba, __VMLINUX_SYMBOL_STR(devm_nsio_enable) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xb2df13ec, __VMLINUX_SYMBOL_STR(to_nd_btt) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xf342408e, __VMLINUX_SYMBOL_STR(__nd_driver_register) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1d62e886, __VMLINUX_SYMBOL_STR(nvdimm_clear_poison) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a6e1010, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xf2c80f95, __VMLINUX_SYMBOL_STR(pmem_should_map_pages) },
	{ 0x76710363, __VMLINUX_SYMBOL_STR(nvdimm_has_flush) },
	{ 0x695124b4, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xa8a1b9f3, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xb2055d6a, __VMLINUX_SYMBOL_STR(nvdimm_namespace_detach_btt) },
	{ 0xd5023114, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x4a6cffb, __VMLINUX_SYMBOL_STR(nvdimm_badblocks_populate) },
	{ 0x8850a29, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x9b08596e, __VMLINUX_SYMBOL_STR(nvdimm_namespace_attach_btt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd0843df1, __VMLINUX_SYMBOL_STR(nvdimm_setup_pfn) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x168729fe, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3f04678f, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa8c9536d, __VMLINUX_SYMBOL_STR(mcsafe_key) },
	{ 0x21436cac, __VMLINUX_SYMBOL_STR(to_nd_region) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf3df8a97, __VMLINUX_SYMBOL_STR(nvdimm_revalidate_disk) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x2d5d3241, __VMLINUX_SYMBOL_STR(devm_memremap) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x64e0164b, __VMLINUX_SYMBOL_STR(page_endio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nd_btt";

