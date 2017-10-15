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
	{ 0x93d7f8fb, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x73d5bd61, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1fd91c8a, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xacba3e17, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xd60a22c2, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xf6c884ad, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x4a6e1010, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x34ae8b7b, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x906e649d, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xe0853eb5, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xe6e4bf70, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf6170fb4, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xb6c972df, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xbc8cfa53, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x2d492fd5, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8d7bb87a, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

