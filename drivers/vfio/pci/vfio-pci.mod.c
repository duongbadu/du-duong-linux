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
	{ 0xf094314a, __VMLINUX_SYMBOL_STR(vfio_iommu_group_put) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1d4f267b, __VMLINUX_SYMBOL_STR(pci_free_irq_vectors) },
	{ 0x88809991, __VMLINUX_SYMBOL_STR(vga_set_legacy_decoding) },
	{ 0x108359ff, __VMLINUX_SYMBOL_STR(pci_intx_mask_supported) },
	{ 0x9c93a4b8, __VMLINUX_SYMBOL_STR(vfio_info_cap_add) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xc05a0022, __VMLINUX_SYMBOL_STR(vfio_group_get_external_user) },
	{ 0xa548576d, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xe23743c4, __VMLINUX_SYMBOL_STR(vga_get) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x5e9a198d, __VMLINUX_SYMBOL_STR(pci_walk_bus) },
	{ 0x95258207, __VMLINUX_SYMBOL_STR(vfio_device_data) },
	{ 0x3567743b, __VMLINUX_SYMBOL_STR(vfio_external_user_iommu_id) },
	{ 0xe123d999, __VMLINUX_SYMBOL_STR(pci_check_and_unmask_intx) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x91ece342, __VMLINUX_SYMBOL_STR(pci_add_dynid) },
	{ 0x5f97a27, __VMLINUX_SYMBOL_STR(pci_try_reset_slot) },
	{ 0x805c8f6a, __VMLINUX_SYMBOL_STR(pci_load_and_free_saved_state) },
	{ 0x9cf92dc8, __VMLINUX_SYMBOL_STR(pci_user_write_config_dword) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x92c70344, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0xbfb38d7a, __VMLINUX_SYMBOL_STR(pci_try_reset_function) },
	{ 0xef87d186, __VMLINUX_SYMBOL_STR(pci_user_read_config_byte) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xf6e772c3, __VMLINUX_SYMBOL_STR(irq_bypass_unregister_producer) },
	{ 0x735923c0, __VMLINUX_SYMBOL_STR(pci_dev_driver) },
	{ 0xff03347a, __VMLINUX_SYMBOL_STR(vga_put) },
	{ 0xd99569a8, __VMLINUX_SYMBOL_STR(pci_reset_function) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x307751bb, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfc39e32f, __VMLINUX_SYMBOL_STR(ioport_unmap) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x86f0d974, __VMLINUX_SYMBOL_STR(get_cached_msi_msg) },
	{ 0x6f3e9e0e, __VMLINUX_SYMBOL_STR(pci_store_saved_state) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x683f9df7, __VMLINUX_SYMBOL_STR(vfio_device_get_from_dev) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0x1fba6f28, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x2bf87302, __VMLINUX_SYMBOL_STR(vfio_add_group_dev) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb39fb5f0, __VMLINUX_SYMBOL_STR(vga_client_register) },
	{ 0xb3db90a8, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x1172df66, __VMLINUX_SYMBOL_STR(vfio_virqfd_enable) },
	{ 0x2111017f, __VMLINUX_SYMBOL_STR(pci_write_vpd) },
	{ 0x418873cc, __VMLINUX_SYMBOL_STR(irq_bypass_register_producer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6e7943ec, __VMLINUX_SYMBOL_STR(iommu_group_id) },
	{ 0xf87ac944, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xae8ebd02, __VMLINUX_SYMBOL_STR(pci_user_write_config_word) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb3bae92f, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0xc4913442, __VMLINUX_SYMBOL_STR(vfio_group_put_external_user) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xd04680b7, __VMLINUX_SYMBOL_STR(vfio_del_group_dev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x89485687, __VMLINUX_SYMBOL_STR(iommu_group_put) },
	{ 0x310f02ec, __VMLINUX_SYMBOL_STR(memremap) },
	{ 0x6820b4, __VMLINUX_SYMBOL_STR(pci_write_msi_msg) },
	{ 0xb7af3335, __VMLINUX_SYMBOL_STR(pci_irq_vector) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xc65e77ec, __VMLINUX_SYMBOL_STR(pci_probe_reset_slot) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x9179dedc, __VMLINUX_SYMBOL_STR(pci_probe_reset_bus) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xeca4acce, __VMLINUX_SYMBOL_STR(pci_user_read_config_word) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x29b91655, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x869c6b73, __VMLINUX_SYMBOL_STR(pci_user_read_config_dword) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6adbfdee, __VMLINUX_SYMBOL_STR(vfio_virqfd_disable) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x969c73d9, __VMLINUX_SYMBOL_STR(vfio_device_put) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x543d5a3, __VMLINUX_SYMBOL_STR(iommu_group_get) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x6df73ebb, __VMLINUX_SYMBOL_STR(pci_alloc_irq_vectors) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0x19567d06, __VMLINUX_SYMBOL_STR(vfio_info_cap_shift) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xfa846130, __VMLINUX_SYMBOL_STR(pci_check_and_mask_intx) },
	{ 0xd0f9eb69, __VMLINUX_SYMBOL_STR(pci_bus_max_busnr) },
	{ 0xc32e7af3, __VMLINUX_SYMBOL_STR(pci_try_reset_bus) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe19b66a5, __VMLINUX_SYMBOL_STR(pci_user_write_config_byte) },
	{ 0x17b430e0, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x253f90be, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x905de950, __VMLINUX_SYMBOL_STR(pci_read_vpd) },
	{ 0xef46ee10, __VMLINUX_SYMBOL_STR(vfio_iommu_group_get) },
	{ 0x3695edda, __VMLINUX_SYMBOL_STR(request_resource) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vfio,irqbypass,vfio_virqfd";


MODULE_INFO(srcversion, "227134BD02C719FE0D38119");
