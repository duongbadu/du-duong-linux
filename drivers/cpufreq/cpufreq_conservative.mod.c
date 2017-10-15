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
	{ 0xebc2ce89, __VMLINUX_SYMBOL_STR(store_sampling_rate) },
	{ 0xc7b3726e, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_limits) },
	{ 0x3b2d9263, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_stop) },
	{ 0x74ff7f49, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_start) },
	{ 0xd015b109, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_exit) },
	{ 0x529f2475, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_init) },
	{ 0x15dafa49, __VMLINUX_SYMBOL_STR(cpufreq_unregister_governor) },
	{ 0x8ed04d5e, __VMLINUX_SYMBOL_STR(cpufreq_register_governor) },
	{ 0x86ed9d7, __VMLINUX_SYMBOL_STR(gov_update_cpu_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xc787ad1f, __VMLINUX_SYMBOL_STR(__cpufreq_driver_target) },
	{ 0xc7c21407, __VMLINUX_SYMBOL_STR(dbs_update) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

