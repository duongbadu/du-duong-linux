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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8378a759, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x4d01fa57, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xb157593d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xbfe59f9, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x6db726eb, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xd6f3efa2, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x9eb5bbce, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x365c30fa, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xcbc2bfd, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x46feb099, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9543cab3, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x3fe2ccbe, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x89f0879f, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xb8f2c131, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc929819a, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x5b4495ec, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x882a6a75, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x2d492fd5, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xb6c972df, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xe2e6cb08, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xa3dd13e0, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1c5062e1, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xf6170fb4, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x57beec9b, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0x3c8d47d0, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0xbbbb9074, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xdb14ca5, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x3395f8ea, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";

