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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd137b085, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0xc60e5d95, __VMLINUX_SYMBOL_STR(__parport_register_driver) },
	{ 0x4835d0a8, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xad37e919, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xa7b1507, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x74b9f79b, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xc2c8e492, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0x834b334b, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb245361d, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0x8f941070, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1bed39b3, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x76515bbb, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x1ec9b065, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x83e06309, __VMLINUX_SYMBOL_STR(parport_negotiate) },
	{ 0xeea3badc, __VMLINUX_SYMBOL_STR(parport_register_dev_model) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

