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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3330730e, __VMLINUX_SYMBOL_STR(dlmunlock) },
	{ 0x7a1211f8, __VMLINUX_SYMBOL_STR(dlm_setup_eviction_cb) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x1b89c6ee, __VMLINUX_SYMBOL_STR(o2hb_fill_node_map) },
	{ 0xb14108c, __VMLINUX_SYMBOL_STR(dlm_register_eviction_cb) },
	{ 0xd830ff0b, __VMLINUX_SYMBOL_STR(dlm_register_domain) },
	{ 0x2703e179, __VMLINUX_SYMBOL_STR(dlm_unregister_domain) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbfd7d7a2, __VMLINUX_SYMBOL_STR(o2hb_global_heartbeat_active) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xd8fa57a6, __VMLINUX_SYMBOL_STR(dlm_unregister_eviction_cb) },
	{ 0xe470fc6a, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_unregister) },
	{ 0xd859ac8c, __VMLINUX_SYMBOL_STR(o2net_fill_node_map) },
	{ 0xd5b44327, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_register) },
	{ 0x11736b03, __VMLINUX_SYMBOL_STR(__mlog_printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9eaeb66e, __VMLINUX_SYMBOL_STR(dlmlock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa82a8645, __VMLINUX_SYMBOL_STR(o2nm_this_node) },
	{ 0x76960498, __VMLINUX_SYMBOL_STR(dlm_print_one_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue";

