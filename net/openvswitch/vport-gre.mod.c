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
	{ 0x2658c815, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xd9a67c04, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x70a0629b, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x655d7baa, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0xff3b6b27, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x70f035a3, __VMLINUX_SYMBOL_STR(rtnl_delete_link) },
	{ 0xf1488c7e, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x45be895c, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xab9e7f74, __VMLINUX_SYMBOL_STR(gretap_fb_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xd09db242, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,ip_gre";

