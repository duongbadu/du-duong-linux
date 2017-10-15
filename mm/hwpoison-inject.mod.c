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
	{ 0x3dfc89, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x45592887, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x676bd4b2, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x1829b9ed, __VMLINUX_SYMBOL_STR(hwpoison_filter_memcg) },
	{ 0x1f1988f7, __VMLINUX_SYMBOL_STR(hwpoison_filter_flags_value) },
	{ 0x8c42809b, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x1edc21cb, __VMLINUX_SYMBOL_STR(hwpoison_filter_flags_mask) },
	{ 0xae6eaf93, __VMLINUX_SYMBOL_STR(hwpoison_filter_dev_minor) },
	{ 0x117c7305, __VMLINUX_SYMBOL_STR(hwpoison_filter_dev_major) },
	{ 0xafebbaca, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x5efdf23a, __VMLINUX_SYMBOL_STR(shake_page) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x3a38dc65, __VMLINUX_SYMBOL_STR(memory_failure) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3a3311bb, __VMLINUX_SYMBOL_STR(hwpoison_filter) },
	{ 0xd323f7b6, __VMLINUX_SYMBOL_STR(PageHuge) },
	{ 0x1e000879, __VMLINUX_SYMBOL_STR(hwpoison_filter_enable) },
	{ 0x396a05aa, __VMLINUX_SYMBOL_STR(get_hwpoison_page) },
	{ 0x4604a43a, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0xb907513f, __VMLINUX_SYMBOL_STR(unpoison_memory) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x39690884, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

