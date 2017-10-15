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
	{ 0xbfa87aeb, __VMLINUX_SYMBOL_STR(sbc_attrib_attrs) },
	{ 0x546af881, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0xeb244663, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0x280c888, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0x704742bb, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0xe532d5c2, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0x7aaadafc, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xf7b980b2, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x85228b59, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0xfd14532a, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x34ae8b7b, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xa8c6281b, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0x9242572b, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xb5c8b637, __VMLINUX_SYMBOL_STR(blkdev_issue_write_same) },
	{ 0xfef65474, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf20b011a, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xe446b2d8, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xf6c884ad, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5237ca9, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x23c695dc, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x9a2adbd8, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1ecc1d05, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0xcc7ab568, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0xadbb51eb, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

