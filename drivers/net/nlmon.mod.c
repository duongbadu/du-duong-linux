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
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x388bf955, __VMLINUX_SYMBOL_STR(netlink_add_tap) },
	{ 0x4197a064, __VMLINUX_SYMBOL_STR(netlink_remove_tap) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

