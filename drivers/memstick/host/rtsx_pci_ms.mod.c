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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdd422d91, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x714435b7, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0x7ea0b37e, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0xf3a7b895, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe09af633, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0xf6ed7868, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0x1da34d16, __VMLINUX_SYMBOL_STR(rtsx_pci_transfer_data) },
	{ 0x8c5a5c8f, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0xef1b3d77, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0x5fcafee8, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe4fab545, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0x215c5789, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0x5194b369, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x5369d78d, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0x8b76a14b, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4224408d, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0x8b29fe37, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0x767ee952, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbdcea7b4, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0x6b13ab15, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa526ecce, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x134a4303, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,memstick";

MODULE_ALIAS("platform:rtsx_pci_ms");
