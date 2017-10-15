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
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x3f0d75de, __VMLINUX_SYMBOL_STR(nvdimm_namespace_common_probe) },
	{ 0x6f916648, __VMLINUX_SYMBOL_STR(devm_nsio_disable) },
	{ 0x768b5ea5, __VMLINUX_SYMBOL_STR(devm_memremap_pages) },
	{ 0x6726c5f9, __VMLINUX_SYMBOL_STR(alloc_dax_region) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x904184ba, __VMLINUX_SYMBOL_STR(devm_nsio_enable) },
	{ 0x4dce0cde, __VMLINUX_SYMBOL_STR(devm_create_dax_dev) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xf342408e, __VMLINUX_SYMBOL_STR(__nd_driver_register) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x85fc80e9, __VMLINUX_SYMBOL_STR(dax_region_put) },
	{ 0xdd57e2b5, __VMLINUX_SYMBOL_STR(percpu_ref_exit) },
	{ 0x695124b4, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd0843df1, __VMLINUX_SYMBOL_STR(nvdimm_setup_pfn) },
	{ 0x168729fe, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3dfc436e, __VMLINUX_SYMBOL_STR(percpu_ref_kill_and_confirm) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe3dfbd26, __VMLINUX_SYMBOL_STR(to_nd_dax) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa2ac5519, __VMLINUX_SYMBOL_STR(percpu_ref_init) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dax";

