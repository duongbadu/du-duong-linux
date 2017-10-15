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
	{ 0x4be6ae07, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x6eb821c1, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xc4ec9edd, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x634d584c, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x487551de, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x7aabe874, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xf051bf79, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0xa399ce2c, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0xa6119e61, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0x5055a616, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x98385c41, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x70baf6ae, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xdc1bfb31, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";

