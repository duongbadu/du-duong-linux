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
	{ 0x8c3513ea, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xcc5d47f4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x5fb6aaa2, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd38b2842, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xbce9794, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xa08f28e8, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc6d935da, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xf1e357e7, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0xb7514f62, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x28a3e7bc, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x1923c2c1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xae14503b, __VMLINUX_SYMBOL_STR(devm_iio_trigger_alloc) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xaa71e55b, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x794de116, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x1af8774c, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x76f19457, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xb3824df1, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd97ddf14, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x6042972b, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0xa53302d3, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0x27c325f6, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x2a5637a0, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xec45f17f, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb86500d5, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data_or_emulated) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8384062a, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16b27f55, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:kxcjk1013");
MODULE_ALIAS("i2c:kxcj91008");
MODULE_ALIAS("i2c:kxtj21009");
MODULE_ALIAS("i2c:SMO8500");
MODULE_ALIAS("acpi*:KXCJ1013:*");
MODULE_ALIAS("acpi*:KXCJ1008:*");
MODULE_ALIAS("acpi*:KXCJ9000:*");
MODULE_ALIAS("acpi*:KIOX000A:*");
MODULE_ALIAS("acpi*:KXTJ1009:*");
MODULE_ALIAS("acpi*:SMO8500:*");
