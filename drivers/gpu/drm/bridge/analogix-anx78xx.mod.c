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
	{ 0x16953875, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xc8f2246a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0xea92f995, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xfdf103f3, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xe460f018, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x9c296579, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8759244f, __VMLINUX_SYMBOL_STR(regmap_multi_reg_write) },
	{ 0x577d35f3, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_pack) },
	{ 0xa1440fb3, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0xbe38e7e5, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbc92037, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x94522436, __VMLINUX_SYMBOL_STR(drm_dp_link_configure) },
	{ 0x711a004a, __VMLINUX_SYMBOL_STR(drm_dp_link_rate_to_bw_code) },
	{ 0xb7165c15, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_write) },
	{ 0x4b5ea3c7, __VMLINUX_SYMBOL_STR(drm_dp_link_power_up) },
	{ 0x911f5425, __VMLINUX_SYMBOL_STR(drm_dp_link_probe) },
	{ 0x5e00e591, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0xebbc8f27, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x525211fa, __VMLINUX_SYMBOL_STR(drm_bridge_add) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba988334, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x7617ab1c, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x726b9b69, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x83b97a71, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x709500bc, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x62a749b0, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x278c030f, __VMLINUX_SYMBOL_STR(drm_edid_to_eld) },
	{ 0x2def69a, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0xe082d24a, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0xabca691d, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_read) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7fdb1180, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0xe8f691cf, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x777f7db0, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x82fac0d, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xf8af2277, __VMLINUX_SYMBOL_STR(drm_dp_aux_register) },
	{ 0xb86e4a30, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x2facf255, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x932b241f, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xb09f6980, __VMLINUX_SYMBOL_STR(drm_bridge_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_kms_helper,drm";

MODULE_ALIAS("i2c:anx7814");
