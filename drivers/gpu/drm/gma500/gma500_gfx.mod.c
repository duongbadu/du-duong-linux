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
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xff7429e5, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x16f6da01, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xb8a95c9e, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_config) },
	{ 0xae109b17, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xf85a1154, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc0bdec99, __VMLINUX_SYMBOL_STR(drm_helper_resume_force_mode) },
	{ 0xfe911cbc, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0xe082d24a, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x673e146d, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x2b6be8c1, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xa548576d, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0x2bbe1764, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x5318c28c, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0x44a602ce, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x7af362b1, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x89388715, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0x19ce2683, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xe45b4133, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xfdf103f3, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x82ba2433, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1546374a, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd4825f5d, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x119e2d4c, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4f1db543, __VMLINUX_SYMBOL_STR(set_pages_array_wc) },
	{ 0x5607bd80, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x35224317, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xe7dfd697, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x3b953a70, __VMLINUX_SYMBOL_STR(allocate_resource) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0x69514955, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xea92f995, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xb7354081, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x75b3dff3, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xf90df965, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd2335101, __VMLINUX_SYMBOL_STR(drm_fb_get_bpp_depth) },
	{ 0x510d00ef, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xc6f32585, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe8f691cf, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0xe9b2b321, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0x5ec8f9b3, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf78a63c4, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0xf56d9856, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0x50dd809e, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a1d8fa, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x3aed1793, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe8465922, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0x7fc7f551, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x3d199a8f, __VMLINUX_SYMBOL_STR(drm_gem_dumb_destroy) },
	{ 0x1fba6f28, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x1f980e8d, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3db90a8, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x46963b5c, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x1a7fec9d, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x7fdb1180, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x1ba16c85, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x85e7498f, __VMLINUX_SYMBOL_STR(drm_fb_helper_release_fbi) },
	{ 0x8c2bacdc, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc4147359, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x82fac0d, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xdd1ec059, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0xce0a238e, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x2def69a, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x5dd10eef, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0xf51af4ed, __VMLINUX_SYMBOL_STR(drm_helper_crtc_in_use) },
	{ 0x158b68b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x69d1c8cd, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0xf116b700, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x308bd681, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x809e80dc, __VMLINUX_SYMBOL_STR(set_pages_array_wb) },
	{ 0x3eff6d65, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x243b2e2f, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0xafc4578, __VMLINUX_SYMBOL_STR(drm_framebuffer_unregister_private) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x84e46f21, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x9f96c608, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x2229a6c8, __VMLINUX_SYMBOL_STR(drm_object_property_get_value) },
	{ 0xc6ab253e, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0xd93f70f6, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0x2059c6f2, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_mode) },
	{ 0xcc2d69fc, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x734c8659, __VMLINUX_SYMBOL_STR(set_pages_wb) },
	{ 0xfde3eb7b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xec568bf6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x3530fd52, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x535b98f6, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb2bd729c, __VMLINUX_SYMBOL_STR(drm_crtc_init) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7b952d2e, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x6bb4acc0, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xe1790603, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb9fd3b1e, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0xead76b9d, __VMLINUX_SYMBOL_STR(vm_insert_mixed) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x52d6c6f5, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0x81555a64, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5e00e591, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x68c7263, __VMLINUX_SYMBOL_STR(ioremap_cache) },
	{ 0x1a5da480, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0xa3b97ed6, __VMLINUX_SYMBOL_STR(set_pages_uc) },
	{ 0xa71717b3, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x4bfa4e63, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0x87c9739c, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x9dad6b4d, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0xad3ef961, __VMLINUX_SYMBOL_STR(drm_fb_helper_restore_fbdev_mode_unlocked) },
	{ 0x9793909e, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcc06bee5, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x5f07dfb1, __VMLINUX_SYMBOL_STR(drm_helper_disable_unused_functions) },
	{ 0xe2a58c67, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xb6441795, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0x843f4393, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x624817c5, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x843fab2, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x70b52d27, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0x8fcdce7a, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x869854b8, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x777f7db0, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x25af04cd, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x81e88feb, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x2c6bcf20, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xaf19932d, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x80dcd3df, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0xb763f8c4, __VMLINUX_SYMBOL_STR(vm_insert_pfn) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xfa8d3fb6, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x8aa75217, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xeef21dc3, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,video,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");
