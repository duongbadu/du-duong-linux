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
	{ 0x93be8488, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0x3fd35519, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0x28a3e7bc, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd17a09d0, __VMLINUX_SYMBOL_STR(atm_init_aal5) },
	{ 0x31bd7e10, __VMLINUX_SYMBOL_STR(vcc_insert_socket) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x109da8ab, __VMLINUX_SYMBOL_STR(atm_dev_lookup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xa19a4db1, __VMLINUX_SYMBOL_STR(atm_alloc_charge) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe6518187, __VMLINUX_SYMBOL_STR(atm_dev_register) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x2cc2d52d, __VMLINUX_SYMBOL_STR(vcc_hash) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x8ddbfc86, __VMLINUX_SYMBOL_STR(vcc_sklist_lock) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xba5000f3, __VMLINUX_SYMBOL_STR(atm_dev_deregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";

