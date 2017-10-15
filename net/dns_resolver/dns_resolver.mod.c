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
	{ 0x461a661d, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf85a1154, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7d733835, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0xfc3d0904, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc847f446, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0x8d35e2ee, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0x4e4e35c0, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x75b3dff3, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xfe1db4ef, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0x5990bfb2, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x1ced3357, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x690b70a5, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x58e65212, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0x8c66d2de, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x62803d47, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0xe98efa7a, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xce5d9455, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0xe7f08d4a, __VMLINUX_SYMBOL_STR(revert_creds) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

