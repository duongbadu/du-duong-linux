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
	{ 0x76f19457, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x6820b869, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd33555f, __VMLINUX_SYMBOL_STR(st_sensors_power_enable) },
	{ 0xfc09b1aa, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5957ff2f, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0xcc2ef33e, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0xbce9794, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x54208252, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0xb3824df1, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x14e537e5, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0x52b3d073, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0x16d3742f, __VMLINUX_SYMBOL_STR(st_sensors_validate_device) },
	{ 0x5fb6aaa2, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc56fae2d, __VMLINUX_SYMBOL_STR(st_sensors_power_disable) },
	{ 0x7f591610, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9f22f7e8, __VMLINUX_SYMBOL_STR(st_sensors_debugfs_reg_access) },
	{ 0xcc5d47f4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd39a9f7a, __VMLINUX_SYMBOL_STR(st_sensors_set_odr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1d3a0b6, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0xe67765ae, __VMLINUX_SYMBOL_STR(st_sensors_set_axis_enable) },
	{ 0x7d27ad5b, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0xaa71e55b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";

