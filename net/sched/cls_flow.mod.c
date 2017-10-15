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
	{ 0xbd8baa69, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0x1da0dfa7, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0xa22ef5fd, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0x5e48198b, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xd437c286, __VMLINUX_SYMBOL_STR(flow_get_u32_src) },
	{ 0xd17161a4, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0xad94cdc6, __VMLINUX_SYMBOL_STR(flow_get_u32_dst) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6ee6d586, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc565e715, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x2d2b5823, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf364ca1b, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe8801bdd, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0xd2d74857, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

