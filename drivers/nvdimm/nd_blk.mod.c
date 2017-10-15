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
	{ 0x95434e28, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x3f0d75de, __VMLINUX_SYMBOL_STR(nvdimm_namespace_common_probe) },
	{ 0xd1605459, __VMLINUX_SYMBOL_STR(nd_integrity_init) },
	{ 0xb024e559, __VMLINUX_SYMBOL_STR(nvdimm_namespace_capacity) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xf6170fb4, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x8d6dbf9f, __VMLINUX_SYMBOL_STR(nd_iostat_end) },
	{ 0x359f1c8d, __VMLINUX_SYMBOL_STR(is_nd_btt) },
	{ 0x2d8718e1, __VMLINUX_SYMBOL_STR(nvdimm_namespace_disk_name) },
	{ 0x304c12f0, __VMLINUX_SYMBOL_STR(__nd_iostat_start) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x32b9884a, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xb2df13ec, __VMLINUX_SYMBOL_STR(to_nd_btt) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xf342408e, __VMLINUX_SYMBOL_STR(__nd_driver_register) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a6e1010, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x695124b4, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xa8a1b9f3, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xb2055d6a, __VMLINUX_SYMBOL_STR(nvdimm_namespace_detach_btt) },
	{ 0xd5023114, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x9b08596e, __VMLINUX_SYMBOL_STR(nvdimm_namespace_attach_btt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x4f27fae4, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdc1f16fc, __VMLINUX_SYMBOL_STR(bio_integrity_enabled) },
	{ 0xf3df8a97, __VMLINUX_SYMBOL_STR(nvdimm_revalidate_disk) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xbf8dbf61, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x62103aab, __VMLINUX_SYMBOL_STR(bio_integrity_prep) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nd_btt";

