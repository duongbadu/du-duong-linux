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
	{ 0xcd9bc143, __VMLINUX_SYMBOL_STR(iio_unregister_sw_trigger_type) },
	{ 0xeff8f22f, __VMLINUX_SYMBOL_STR(iio_register_sw_trigger_type) },
	{ 0x95936806, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xb7514f62, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x3d6790c4, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xca7d8764, __VMLINUX_SYMBOL_STR(kthread_freezable_should_stop) },
	{ 0x8d2e6aa2, __VMLINUX_SYMBOL_STR(iio_trigger_poll_chained) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e6947fb, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0x1af8774c, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-sw-trigger,industrialio";

