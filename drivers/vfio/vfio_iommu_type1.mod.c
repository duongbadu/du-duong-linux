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
	{ 0x60fd7d1e, __VMLINUX_SYMBOL_STR(vfio_unregister_iommu_driver) },
	{ 0x94ef101f, __VMLINUX_SYMBOL_STR(vfio_register_iommu_driver) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf85a1154, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9c8e257f, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x75b3dff3, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x30f1eecc, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x9977d8e7, __VMLINUX_SYMBOL_STR(iommu_map) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x5e98bcd4, __VMLINUX_SYMBOL_STR(iommu_capable) },
	{ 0xf0da9632, __VMLINUX_SYMBOL_STR(iommu_attach_group) },
	{ 0xa5a0d961, __VMLINUX_SYMBOL_STR(iommu_domain_set_attr) },
	{ 0x7e74d61c, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0x4b48d201, __VMLINUX_SYMBOL_STR(iommu_group_for_each_dev) },
	{ 0x623f50ad, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0x22e34553, __VMLINUX_SYMBOL_STR(iommu_detach_group) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xa15db825, __VMLINUX_SYMBOL_STR(iommu_iova_to_phys) },
	{ 0x673d17e5, __VMLINUX_SYMBOL_STR(iommu_unmap) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8c2bacdc, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1a2d228, __VMLINUX_SYMBOL_STR(down_write_killable) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x4604a43a, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vfio";


MODULE_INFO(srcversion, "25A9CA687127C30D5636505");
