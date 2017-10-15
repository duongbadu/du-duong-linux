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
	{ 0x7be85f0d, __VMLINUX_SYMBOL_STR(passthrough_attrib_attrs) },
	{ 0xeb244663, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0x280c888, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x7aaadafc, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xafa18183, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7dbada9d, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident_type) },
	{ 0x85aa880c, __VMLINUX_SYMBOL_STR(transport_set_vpd_assoc) },
	{ 0xf01621c7, __VMLINUX_SYMBOL_STR(transport_set_vpd_proto_id) },
	{ 0x2de3b18, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident) },
	{ 0x2626876f, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xc242eda4, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x59d13c04, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x5237ca9, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x7b24c96e, __VMLINUX_SYMBOL_STR(blk_rq_append_bio) },
	{ 0xf5159f02, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x69daf2f9, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x11460b4e, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xd0a7f5b5, __VMLINUX_SYMBOL_STR(passthrough_parse_cdb) },
	{ 0xceecb62f, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0xfd14532a, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x5d625bc9, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeb4fe988, __VMLINUX_SYMBOL_STR(transport_kunmap_data_sg) },
	{ 0x9f4f4fb1, __VMLINUX_SYMBOL_STR(transport_kmap_data_sg) },
	{ 0x4ec0bf0e, __VMLINUX_SYMBOL_STR(target_lun_is_rdonly) },
	{ 0x23c695dc, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9b7e26e8, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x9a2adbd8, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,scsi_mod";

