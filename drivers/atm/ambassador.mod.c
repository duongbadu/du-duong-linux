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
	{ 0x354a9f40, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8af83372, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf49bc67a, __VMLINUX_SYMBOL_STR(atm_pcr_goal) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xe6518187, __VMLINUX_SYMBOL_STR(atm_dev_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd9c66860, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4111a89b, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0xba5000f3, __VMLINUX_SYMBOL_STR(atm_dev_deregister) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb64d512a, __VMLINUX_SYMBOL_STR(atm_charge) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";

MODULE_ALIAS("pci:v000010B6d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B6d00001002sv*sd*bc*sc*i*");
