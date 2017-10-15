#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5237ca9, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0x332e7e1a, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x9b9d3c17, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x709b87b7, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0x4e5a148f, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9dd4c265, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0xbdcd610, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x67dafcdf, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x6eb8aaac, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x23c695dc, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb5a7a71b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x438d19c1, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xa3c608e2, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0xd53c1738, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x21732252, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe9b64a40, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x7d11d73a, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x48ed29cb, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xa74b8cef, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x93423cea, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4bb6c9bb, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf5159f02, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor,async_pq";

