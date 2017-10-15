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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x6d8a95e0, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x69880db7, __VMLINUX_SYMBOL_STR(cpu_sibling_map) },
	{ 0xb1cfad22, __VMLINUX_SYMBOL_STR(rdmsr_on_cpu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x668e03a0, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe942b025, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x7cebd20f, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa8f61e6e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb3db90a8, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x584738f9, __VMLINUX_SYMBOL_STR(rdmsr_safe_on_cpu) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb9de835, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70fe334f, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7df382b3, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");
