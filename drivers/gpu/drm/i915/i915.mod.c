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
	{ 0x1e849a74, __VMLINUX_SYMBOL_STR(static_key_enable) },
	{ 0x42595e58, __VMLINUX_SYMBOL_STR(vgacon_text_force) },
	{ 0x3725ae22, __VMLINUX_SYMBOL_STR(drm_helper_move_panel_connectors_to_head) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x931f05d3, __VMLINUX_SYMBOL_STR(ktime_get_raw) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x14956723, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xff7429e5, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x3147b479, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0xb82bed63, __VMLINUX_SYMBOL_STR(drm_atomic_get_connector_state) },
	{ 0x16f6da01, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0xaa2bf4be, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x1f6ce67a, __VMLINUX_SYMBOL_STR(sg_pcopy_to_buffer) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb52ee8be, __VMLINUX_SYMBOL_STR(intel_gtt_clear_range) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x709ae761, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part1) },
	{ 0x266b7638, __VMLINUX_SYMBOL_STR(interval_tree_remove) },
	{ 0x5d74dbcf, __VMLINUX_SYMBOL_STR(pnp_range_reserved) },
	{ 0xbfcdb6b5, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x725f7d4a, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xae109b17, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0x5247b8a8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_suspend) },
	{ 0xf85a1154, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xb7165c15, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_write) },
	{ 0x765cedbc, __VMLINUX_SYMBOL_STR(drm_dp_get_dual_mode_type_name) },
	{ 0x41ebdaea, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xe082d24a, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0x6c344f8c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0xc3f44e5f, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xc693b44f, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_max_tmds_clock) },
	{ 0x7dfcb888, __VMLINUX_SYMBOL_STR(drm_crtc_arm_vblank_event) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x91fec1cc, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale) },
	{ 0x86f6b99d, __VMLINUX_SYMBOL_STR(synchronize_rcu_expedited) },
	{ 0x673e146d, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x154429c9, __VMLINUX_SYMBOL_STR(drm_calc_vbltimestamp_from_scanoutpos) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2b6be8c1, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xee51662b, __VMLINUX_SYMBOL_STR(get_task_pid) },
	{ 0x5dbcc42d, __VMLINUX_SYMBOL_STR(drm_hdmi_vendor_infoframe_from_display_mode) },
	{ 0x758a9dbf, __VMLINUX_SYMBOL_STR(dummy_con) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x278c030f, __VMLINUX_SYMBOL_STR(drm_edid_to_eld) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xa08f28e8, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2a4fdd29, __VMLINUX_SYMBOL_STR(drm_wait_one_vblank) },
	{ 0x12c067e7, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0xd9b33bee, __VMLINUX_SYMBOL_STR(drm_plane_helper_check_state) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xa548576d, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0x79648b1a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_wait_for_dependencies) },
	{ 0x408212ba, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xaa3530c, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_release) },
	{ 0x2bbe1764, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0xd49dad5f, __VMLINUX_SYMBOL_STR(reservation_object_wait_timeout_rcu) },
	{ 0x25dbc760, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0xc91787a6, __VMLINUX_SYMBOL_STR(drm_modeset_drop_locks) },
	{ 0xe23743c4, __VMLINUX_SYMBOL_STR(vga_get) },
	{ 0x8384062a, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x9e9eb34c, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x5318c28c, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xe460f018, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x52455f36, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_hw_done) },
	{ 0x1b1e1088, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0xa0db93cf, __VMLINUX_SYMBOL_STR(drm_atomic_state_clear) },
	{ 0x4fbe1040, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0xa11b55b2, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x43bdadd8, __VMLINUX_SYMBOL_STR(do_unregister_con_driver) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa2bafa40, __VMLINUX_SYMBOL_STR(interval_tree_insert) },
	{ 0x818da066, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7af362b1, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0xd4c14632, __VMLINUX_SYMBOL_STR(system_unbound_wq) },
	{ 0x9e8472bf, __VMLINUX_SYMBOL_STR(drm_match_cea_mode) },
	{ 0xfc3d0904, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x371a026d, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_write_buffer) },
	{ 0x43b76249, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xa9a8e17f, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0x89388715, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0x5cc509a4, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies) },
	{ 0x97dee319, __VMLINUX_SYMBOL_STR(drm_atomic_helper_swap_state) },
	{ 0x81f5eccd, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_resume) },
	{ 0x19ce2683, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x569e0723, __VMLINUX_SYMBOL_STR(drm_atomic_get_plane_state) },
	{ 0xb323a510, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0xc619369, __VMLINUX_SYMBOL_STR(drm_mm_scan_add_block) },
	{ 0x47c4f7fc, __VMLINUX_SYMBOL_STR(nr_swap_pages) },
	{ 0x87939eff, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_all) },
	{ 0x780fdfd1, __VMLINUX_SYMBOL_STR(intel_enable_gtt) },
	{ 0x1a63af34, __VMLINUX_SYMBOL_STR(vga_switcheroo_process_delayed_switch) },
	{ 0x9972db48, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale_relaxed) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xeb82deab, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0xe45b4133, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x526f6f71, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale_relaxed) },
	{ 0x3a5ba1e7, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x64ea81d5, __VMLINUX_SYMBOL_STR(drm_modeset_backoff) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x612dcc77, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2a5e568b, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_set_mst) },
	{ 0xf349b760, __VMLINUX_SYMBOL_STR(fence_wait_timeout) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x4657ebaa, __VMLINUX_SYMBOL_STR(fence_context_alloc) },
	{ 0xfdf103f3, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x82ba2433, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x395d9930, __VMLINUX_SYMBOL_STR(sysfs_create_files) },
	{ 0xeb545cf2, __VMLINUX_SYMBOL_STR(__mmu_notifier_register) },
	{ 0x810d7d35, __VMLINUX_SYMBOL_STR(drm_dp_psr_setup_time) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x92c70344, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0x448c47b2, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xb26e6b53, __VMLINUX_SYMBOL_STR(intel_gtt_insert_page) },
	{ 0x26ed2186, __VMLINUX_SYMBOL_STR(register_vmap_purge_notifier) },
	{ 0xf68687be, __VMLINUX_SYMBOL_STR(__sg_page_iter_start) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa47826e4, __VMLINUX_SYMBOL_STR(drm_dp_calc_pbn_mode) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x7645af6f, __VMLINUX_SYMBOL_STR(sg_pcopy_from_buffer) },
	{ 0x1546374a, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xea36c1ea, __VMLINUX_SYMBOL_STR(__get_user_pages_fast) },
	{ 0x8aea0c4, __VMLINUX_SYMBOL_STR(drm_vblank_cleanup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcb936989, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x591d2eba, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0xa63d8153, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range_generic) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x1a2d228, __VMLINUX_SYMBOL_STR(down_write_killable) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21df74d9, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0xc512626a, __VMLINUX_SYMBOL_STR(__supported_pte_mask) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x38394ddf, __VMLINUX_SYMBOL_STR(drm_vblank_no_hw_counter) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd0903f15, __VMLINUX_SYMBOL_STR(drm_format_plane_width) },
	{ 0x85f4dbc, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0xbbf85398, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x70718dec, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_destroy) },
	{ 0x2a1314cc, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xf36c115f, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x119e2d4c, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x60560f3b, __VMLINUX_SYMBOL_STR(fence_signal) },
	{ 0x5607bd80, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0xb6fe7efc, __VMLINUX_SYMBOL_STR(drm_dp_mst_hpd_irq) },
	{ 0x41ca5caa, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_fini) },
	{ 0x319d9f0d, __VMLINUX_SYMBOL_STR(drm_pci_free) },
	{ 0x35224317, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7f971f7c, __VMLINUX_SYMBOL_STR(pci_bus_alloc_resource) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xea1d380e, __VMLINUX_SYMBOL_STR(shmem_truncate_range) },
	{ 0x426ba24, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91a5ed73, __VMLINUX_SYMBOL_STR(drm_crtc_enable_color_mgmt) },
	{ 0xf61fe24b, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_destroy_state) },
	{ 0x26948d96, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x696efc31, __VMLINUX_SYMBOL_STR(drm_av_sync_delay) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x1653ba0b, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0x34b63b3d, __VMLINUX_SYMBOL_STR(drm_dp_mst_allocate_vcpi) },
	{ 0xadb29209, __VMLINUX_SYMBOL_STR(drm_mm_init_scan) },
	{ 0x375a4ec5, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x69514955, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0xff03347a, __VMLINUX_SYMBOL_STR(vga_put) },
	{ 0x34871adf, __VMLINUX_SYMBOL_STR(drm_dp_channel_eq_ok) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xea92f995, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xb7354081, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x3da171f9, __VMLINUX_SYMBOL_STR(pci_mem_start) },
	{ 0xd14b3db0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x18729925, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x75b3dff3, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0xcc5d6805, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_plane_duplicate_state) },
	{ 0x676bd4b2, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xf90df965, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0xd370a3ca, __VMLINUX_SYMBOL_STR(drm_atomic_set_mode_for_crtc) },
	{ 0x89184c69, __VMLINUX_SYMBOL_STR(reservation_object_add_shared_fence) },
	{ 0xc8f2246a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xd48a6381, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_duplicate_state) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1a6660eb, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x257fc701, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_legacy_modeset_state) },
	{ 0x78575bee, __VMLINUX_SYMBOL_STR(atomic_notifier_call_chain) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xcb2340b8, __VMLINUX_SYMBOL_STR(drm_rect_debug_print) },
	{ 0x1f570e83, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0x510d00ef, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0x15b0ebb9, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_set_tmds_output) },
	{ 0xfeab9f8e, __VMLINUX_SYMBOL_STR(vga_switcheroo_unregister_client) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xa73501e1, __VMLINUX_SYMBOL_STR(drm_mode_object_reference) },
	{ 0xa084749a, __VMLINUX_SYMBOL_STR(__bitmap_or) },
	{ 0x5a7c82d8, __VMLINUX_SYMBOL_STR(drm_dp_mst_deallocate_vcpi) },
	{ 0xe9ecd9b3, __VMLINUX_SYMBOL_STR(drm_dp_check_act_status) },
	{ 0xef6c3f70, __VMLINUX_SYMBOL_STR(round_jiffies_up_relative) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3f6e5c04, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_suspend) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd64b2aec, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xb2fa4edd, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0xa7b1507, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x2f384db3, __VMLINUX_SYMBOL_STR(acpi_is_video_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb7ac7d7e, __VMLINUX_SYMBOL_STR(vga_switcheroo_client_probe_defer) },
	{ 0xe8f691cf, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0xe9b2b321, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0x7fde0e46, __VMLINUX_SYMBOL_STR(drm_dp_downstream_debug) },
	{ 0x136348e8, __VMLINUX_SYMBOL_STR(drm_atomic_state_alloc) },
	{ 0x29eba37f, __VMLINUX_SYMBOL_STR(current_is_async) },
	{ 0xe81ef1dd, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0x5ec8f9b3, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xf69e8b2a, __VMLINUX_SYMBOL_STR(drm_mode_connector_set_path_property) },
	{ 0x711a004a, __VMLINUX_SYMBOL_STR(drm_dp_link_rate_to_bw_code) },
	{ 0xbad4db78, __VMLINUX_SYMBOL_STR(drm_mode_copy) },
	{ 0x95529d00, __VMLINUX_SYMBOL_STR(drm_noop) },
	{ 0xcaf602bd, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xcb68e34f, __VMLINUX_SYMBOL_STR(drm_atomic_commit) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x48193639, __VMLINUX_SYMBOL_STR(acpi_lid_open) },
	{ 0x5a1e87b9, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x74065eb0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_cleanup_done) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x629c05e1, __VMLINUX_SYMBOL_STR(drm_clflush_sg) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf78a63c4, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x394433a0, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_put) },
	{ 0xf56d9856, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x50dd809e, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a1d8fa, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa94447d8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_prepare_planes) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x3aed1793, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x7272dcdb, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0x69b4aa8c, __VMLINUX_SYMBOL_STR(drm_has_preferred_mode) },
	{ 0x1ebf6c2a, __VMLINUX_SYMBOL_STR(pci_power_names) },
	{ 0xb2a07f0a, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x6e30ba8e, __VMLINUX_SYMBOL_STR(drm_rect_rotate_inv) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0xafb8c6ff, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0xb44970d2, __VMLINUX_SYMBOL_STR(pm_runtime_get_if_in_use) },
	{ 0x2e6d14a1, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_connector) },
	{ 0x1afcfeb2, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x7fc7f551, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xeef8b5ce, __VMLINUX_SYMBOL_STR(drm_dp_mst_reset_vcpi_slots) },
	{ 0xb5742acf, __VMLINUX_SYMBOL_STR(drm_mm_reserve_node) },
	{ 0x3d199a8f, __VMLINUX_SYMBOL_STR(drm_gem_dumb_destroy) },
	{ 0x985ae93, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0xcbae6c7a, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_unregister) },
	{ 0xfd3a393b, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x3a32839e, __VMLINUX_SYMBOL_STR(intel_gtt_chipset_flush) },
	{ 0x1fba6f28, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x98e47d2, __VMLINUX_SYMBOL_STR(drm_dp_link_train_clock_recovery_delay) },
	{ 0xaff9f885, __VMLINUX_SYMBOL_STR(drm_mode_create_rotation_property) },
	{ 0xb59267c2, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xa77858bb, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_voltage) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xbe7ca6f, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_on) },
	{ 0x2c7a154a, __VMLINUX_SYMBOL_STR(drm_atomic_state_free) },
	{ 0xd33da1cb, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xf3a34a3a, __VMLINUX_SYMBOL_STR(fence_enable_sw_signaling) },
	{ 0x1f980e8d, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x5c4e42, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0xc874ab4f, __VMLINUX_SYMBOL_STR(drm_plane_from_index) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x870832, __VMLINUX_SYMBOL_STR(drm_atomic_state_init) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf40e9158, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xcea2b70b, __VMLINUX_SYMBOL_STR(drm_accurate_vblank_count) },
	{ 0x297c6c94, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x6c5c166c, __VMLINUX_SYMBOL_STR(drm_panel_attach) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0xd9287801, __VMLINUX_SYMBOL_STR(sched_setscheduler_nocheck) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x79e69460, __VMLINUX_SYMBOL_STR(intel_iommu_gfx_mapped) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa92e8560, __VMLINUX_SYMBOL_STR(drm_select_eld) },
	{ 0xb39fb5f0, __VMLINUX_SYMBOL_STR(vga_client_register) },
	{ 0x6d8f62d1, __VMLINUX_SYMBOL_STR(drm_probe_ddc) },
	{ 0xb3db90a8, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xfb6eedf9, __VMLINUX_SYMBOL_STR(power_group_name) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9a7588c4, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_suspend) },
	{ 0xf0187927, __VMLINUX_SYMBOL_STR(__sg_page_iter_next) },
	{ 0x46963b5c, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xed7ad457, __VMLINUX_SYMBOL_STR(drm_modeset_legacy_acquire_ctx) },
	{ 0x346a7400, __VMLINUX_SYMBOL_STR(sysfs_merge_group) },
	{ 0x1a7fec9d, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xd96babb4, __VMLINUX_SYMBOL_STR(interval_tree_iter_next) },
	{ 0xc2115909, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4615ce44, __VMLINUX_SYMBOL_STR(drm_dp_downstream_max_bpc) },
	{ 0x7fdb1180, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x1ba16c85, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xb77b8171, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0xfba7b378, __VMLINUX_SYMBOL_STR(drm_dp_aux_unregister) },
	{ 0x3dfc89, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x143efa99, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x85e7498f, __VMLINUX_SYMBOL_STR(drm_fb_helper_release_fbi) },
	{ 0xb4515daf, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0xa7ce0989, __VMLINUX_SYMBOL_STR(drm_atomic_set_fb_for_plane) },
	{ 0x97968be7, __VMLINUX_SYMBOL_STR(mipi_dsi_generic_write) },
	{ 0x8c2bacdc, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x5aaea97, __VMLINUX_SYMBOL_STR(drm_fb_helper_add_one_connector) },
	{ 0x375886f, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all_ctx) },
	{ 0xc4147359, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x1cc3458a, __VMLINUX_SYMBOL_STR(sysfs_unmerge_group) },
	{ 0x6bfc959b, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x43042fa5, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_set_property) },
	{ 0xee6dc507, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x5e764614, __VMLINUX_SYMBOL_STR(con_is_bound) },
	{ 0x5a5af0d8, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0xad5f0017, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x82fac0d, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x94431a74, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xc617f82c, __VMLINUX_SYMBOL_STR(unregister_oom_notifier) },
	{ 0x9d200ee0, __VMLINUX_SYMBOL_STR(vga_con) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0xdd1ec059, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0xce0a238e, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x2def69a, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0x7230ec11, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb9dbb62, __VMLINUX_SYMBOL_STR(drm_modeset_unlock) },
	{ 0x33108fb9, __VMLINUX_SYMBOL_STR(drm_dp_mst_dump_topology) },
	{ 0x5dd10eef, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0xf02c3222, __VMLINUX_SYMBOL_STR(drm_modeset_lock) },
	{ 0x322c314b, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7a45377b, __VMLINUX_SYMBOL_STR(acpi_video_unregister) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x382df951, __VMLINUX_SYMBOL_STR(fence_add_callback) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x48f612e3, __VMLINUX_SYMBOL_STR(stop_machine) },
	{ 0xbdcf8646, __VMLINUX_SYMBOL_STR(drm_crtc_get_hv_timing) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x72a98fdb, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0xff97f773, __VMLINUX_SYMBOL_STR(drm_atomic_get_crtc_state) },
	{ 0xd0772e5e, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x1823bdb9, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x9c8e257f, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x85f1601d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_set_property) },
	{ 0x158b68b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x808100f5, __VMLINUX_SYMBOL_STR(drm_framebuffer_remove) },
	{ 0x69d1c8cd, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0xf50fea5, __VMLINUX_SYMBOL_STR(drm_plane_cleanup) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0xf116b700, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xe4327b1a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_legacy_gamma_set) },
	{ 0xfc1caea0, __VMLINUX_SYMBOL_STR(drm_dp_find_vcpi_slots) },
	{ 0xfd7bd72d, __VMLINUX_SYMBOL_STR(drm_property_create_enum) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xfde99620, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0x308bd681, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xc87abc5f, __VMLINUX_SYMBOL_STR(drm_mode_hsync) },
	{ 0xb8a810ce, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2b05a21b, __VMLINUX_SYMBOL_STR(intel_gtt_get) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x932ef199, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_plane) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x7fc83b53, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xc761c5a5, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x16953875, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0x243b2e2f, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x56ed1576, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_export) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0x2e4d11e8, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x40d04664, __VMLINUX_SYMBOL_STR(console_trylock) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x19a62ad8, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_reset) },
	{ 0x865b7a30, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable_locked) },
	{ 0x656f29f6, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x46dcfe7b, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_detect) },
	{ 0x84e46f21, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x9f96c608, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0xabbcb6ab, __VMLINUX_SYMBOL_STR(drm_mode_create_aspect_ratio_property) },
	{ 0x84e924ba, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_pre_emphasis) },
	{ 0x59aa14cf, __VMLINUX_SYMBOL_STR(fence_release) },
	{ 0xc6ab253e, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa72f765, __VMLINUX_SYMBOL_STR(drm_clflush_virt_range) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x936f93ae, __VMLINUX_SYMBOL_STR(drm_dp_mst_get_edid) },
	{ 0x37937829, __VMLINUX_SYMBOL_STR(vga_switcheroo_client_fb_set) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xeed4051e, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xc25a4e82, __VMLINUX_SYMBOL_STR(drm_dev_init) },
	{ 0x231efe84, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x622c7922, __VMLINUX_SYMBOL_STR(register_oom_notifier) },
	{ 0x168729fe, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xb01b1db8, __VMLINUX_SYMBOL_STR(intel_gtt_insert_sg_entries) },
	{ 0xb053adda, __VMLINUX_SYMBOL_STR(drm_rect_rotate) },
	{ 0x38a4f7ae, __VMLINUX_SYMBOL_STR(drm_format_num_planes) },
	{ 0xcf658e08, __VMLINUX_SYMBOL_STR(do_take_over_console) },
	{ 0x2ff063b5, __VMLINUX_SYMBOL_STR(acpi_get_name) },
	{ 0x544b0c11, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_register) },
	{ 0xcc2d69fc, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x96257bf8, __VMLINUX_SYMBOL_STR(drm_dp_aux_init) },
	{ 0x9b720312, __VMLINUX_SYMBOL_STR(acpi_target_system_state) },
	{ 0xfde3eb7b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x163251c8, __VMLINUX_SYMBOL_STR(drm_dp_link_train_channel_eq_delay) },
	{ 0x4cd777b1, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0xec568bf6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x70cc566f, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_get) },
	{ 0xa047445, __VMLINUX_SYMBOL_STR(drm_pci_alloc) },
	{ 0x3530fd52, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0xbb8e169a, __VMLINUX_SYMBOL_STR(vga_switcheroo_handler_flags) },
	{ 0xdc909ca8, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x1a84004e, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_init) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xeea91cd9, __VMLINUX_SYMBOL_STR(drm_mm_init_scan_with_range) },
	{ 0x30d03e0f, __VMLINUX_SYMBOL_STR(get_user_pages_remote) },
	{ 0xd0486c75, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8f2cdf50, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd41fffab, __VMLINUX_SYMBOL_STR(interval_tree_iter_first) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xafe5a9cc, __VMLINUX_SYMBOL_STR(drm_atomic_helper_duplicate_state) },
	{ 0x535b98f6, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xd7a37431, __VMLINUX_SYMBOL_STR(drm_atomic_helper_setup_commit) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb1c72c7d, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x87cf2dab, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x310f02ec, __VMLINUX_SYMBOL_STR(memremap) },
	{ 0x9c296579, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0x5057cdbf, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0x292ea2c0, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xe708ae1, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_init) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4dae5252, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x7b952d2e, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x6bb4acc0, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xe1790603, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2376243f, __VMLINUX_SYMBOL_STR(sysfs_remove_files) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0xd33bba89, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_write) },
	{ 0x1226bdb6, __VMLINUX_SYMBOL_STR(ex_handler_default) },
	{ 0xe2614541, __VMLINUX_SYMBOL_STR(zap_vma_ptes) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xb9fd3b1e, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x59637f3d, __VMLINUX_SYMBOL_STR(drm_dp_downstream_max_clock) },
	{ 0x6dac58da, __VMLINUX_SYMBOL_STR(drm_get_format_name) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x52e13592, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0x410b9e17, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x52d6c6f5, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xa28078b2, __VMLINUX_SYMBOL_STR(drm_edid_duplicate) },
	{ 0xa46a628, __VMLINUX_SYMBOL_STR(drm_get_edid_switcheroo) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4ea260c3, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_planes_on_crtc) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x93df10b1, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0xc331b273, __VMLINUX_SYMBOL_STR(i2c_bit_algo) },
	{ 0x81555a64, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x5e00e591, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xa1440fb3, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0x2a3f613b, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0x9cc06ebd, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37835914, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x8db702ae, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xddb893d2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x6989adbb, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7ee6d93a, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies64) },
	{ 0x107742a9, __VMLINUX_SYMBOL_STR(drm_get_subpixel_order_name) },
	{ 0x8028f73e, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x32fe66e0, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xe7e1e736, __VMLINUX_SYMBOL_STR(vga_switcheroo_register_client) },
	{ 0xa8cb44c4, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x6900d335, __VMLINUX_SYMBOL_STR(drm_rect_clip_scaled) },
	{ 0xc5810b9f, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0x63b74086, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9da05e10, __VMLINUX_SYMBOL_STR(mipi_dsi_create_packet) },
	{ 0x888b627f, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x1a5da480, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7533cac4, __VMLINUX_SYMBOL_STR(drm_atomic_helper_cleanup_planes) },
	{ 0x8d1031ee, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xc96963cb, __VMLINUX_SYMBOL_STR(drm_atomic_state_default_clear) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x62a749b0, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xf8b7390b, __VMLINUX_SYMBOL_STR(drm_fb_helper_remove_one_connector) },
	{ 0x7c0b324, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0xeb4c4ccf, __VMLINUX_SYMBOL_STR(drm_debugfs_remove_files) },
	{ 0xa71717b3, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4bfa4e63, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xc83fa618, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x84ae167b, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x525a0058, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_count) },
	{ 0xc6d935da, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x2d50570f, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xb37d51ad, __VMLINUX_SYMBOL_STR(drm_format_plane_height) },
	{ 0xfa6d98e6, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x494e3393, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x2e21fe23, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_read) },
	{ 0x8d32b478, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x893e4bb7, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_connectors) },
	{ 0xad3ef961, __VMLINUX_SYMBOL_STR(drm_fb_helper_restore_fbdev_mode_unlocked) },
	{ 0x9793909e, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbc9bc758, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part2) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf147dcb2, __VMLINUX_SYMBOL_STR(hdmi_spd_infoframe_init) },
	{ 0xcc06bee5, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x879bf9cc, __VMLINUX_SYMBOL_STR(reservation_object_get_fences_rcu) },
	{ 0x4ecda8e4, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_planes) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xc2245222, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0x9a023940, __VMLINUX_SYMBOL_STR(trace_output_call) },
	{ 0xb6441795, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0x344181b1, __VMLINUX_SYMBOL_STR(reservation_object_reserve_shared) },
	{ 0x843f4393, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0xa38602cd, __VMLINUX_SYMBOL_STR(drain_workqueue) },
	{ 0x4201017, __VMLINUX_SYMBOL_STR(fence_init) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x7a29a3fa, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x30b04526, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x624817c5, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0xf3f1ba4f, __VMLINUX_SYMBOL_STR(pcibios_align_resource) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xeea50152, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0xabca691d, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_read) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc487992a, __VMLINUX_SYMBOL_STR(drm_dp_mst_detect_port) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8fcdce7a, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xf8af2277, __VMLINUX_SYMBOL_STR(drm_dp_aux_register) },
	{ 0x394fb6f, __VMLINUX_SYMBOL_STR(drm_mode_object_unreference) },
	{ 0x869854b8, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x3d08e7d5, __VMLINUX_SYMBOL_STR(drm_pick_cmdline_mode) },
	{ 0x777f7db0, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x39690884, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x25af04cd, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0xcb5deef8, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0x6073b011, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0xf52c311a, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x7fde1c5c, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0x2c6bcf20, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xaf19932d, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x45592887, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x80dcd3df, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x91ac822f, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x15892417, __VMLINUX_SYMBOL_STR(async_synchronize_cookie) },
	{ 0x12464601, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
	{ 0x6a2d4126, __VMLINUX_SYMBOL_STR(drm_mm_scan_remove_block) },
	{ 0x51fbad29, __VMLINUX_SYMBOL_STR(drm_is_current_master) },
	{ 0x2e7a4300, __VMLINUX_SYMBOL_STR(drm_rgb_quant_range_selectable) },
	{ 0x3174bd79, __VMLINUX_SYMBOL_STR(bitmap_clear) },
	{ 0x5fd73e73, __VMLINUX_SYMBOL_STR(sched_clock_cpu) },
	{ 0xfa8d3fb6, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x8aa75217, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb7c69a63, __VMLINUX_SYMBOL_STR(unregister_vmap_purge_notifier) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x97f0128a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_planes) },
	{ 0xf96ec70, __VMLINUX_SYMBOL_STR(drm_dp_clock_recovery_ok) },
	{ 0x9a91b7df, __VMLINUX_SYMBOL_STR(gpiod_get) },
	{ 0xfe740644, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_modeset) },
	{ 0x77667d8b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0xeef21dc3, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_kms_helper,drm,intel-gtt,video,button,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000157sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000155sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001632sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001636sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Bsv*sd*bc03sc*i*");
