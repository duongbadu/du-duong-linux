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
	{ 0x7d7b39b4, __VMLINUX_SYMBOL_STR(hid_sensor_pm_ops) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8d0d213f, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0xbce9794, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x82cb9c19, __VMLINUX_SYMBOL_STR(hid_sensor_setup_trigger) },
	{ 0xaa71e55b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xc83a92bf, __VMLINUX_SYMBOL_STR(hid_sensor_format_scale) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x26ca4a65, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa90d06b2, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x794de116, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x57beef23, __VMLINUX_SYMBOL_STR(hid_sensor_read_samp_freq_value) },
	{ 0x21c8b8b8, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0xa9d1cde7, __VMLINUX_SYMBOL_STR(hid_sensor_power_state) },
	{ 0x905e863c, __VMLINUX_SYMBOL_STR(hid_sensor_read_raw_hyst_value) },
	{ 0xec45f17f, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2d260e1f, __VMLINUX_SYMBOL_STR(hid_sensor_write_samp_freq_value) },
	{ 0x4cfd281a, __VMLINUX_SYMBOL_STR(hid_sensor_write_raw_hyst_value) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x76f19457, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x19de8206, __VMLINUX_SYMBOL_STR(hid_sensor_remove_trigger) },
	{ 0xb3824df1, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xd06044b0, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-trigger,hid-sensor-hub,industrialio,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-200086");
