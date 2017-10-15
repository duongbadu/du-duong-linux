#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8b1e6d08, __VMLINUX_SYMBOL_STR(tpm_pm_resume) },
	{ 0x816976d, __VMLINUX_SYMBOL_STR(tpm_do_selftest) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2d3b0d26, __VMLINUX_SYMBOL_STR(tpm2_probe) },
	{ 0xd98b7be1, __VMLINUX_SYMBOL_STR(tpm_getcap) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x269eb7b0, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x47d96815, __VMLINUX_SYMBOL_STR(wait_for_tpm_stat) },
	{ 0x2dd7bcb3, __VMLINUX_SYMBOL_STR(tpmm_chip_alloc) },
	{ 0x7f19b4a4, __VMLINUX_SYMBOL_STR(tpm_get_timeouts) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x46e46121, __VMLINUX_SYMBOL_STR(tpm_chip_register) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12bc4240, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x95de5f4f, __VMLINUX_SYMBOL_STR(tpm_calc_ordinal_duration) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x30b0636c, __VMLINUX_SYMBOL_STR(tpm2_get_tpm_pt) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e95f4a3, __VMLINUX_SYMBOL_STR(tpm2_calc_ordinal_duration) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";


MODULE_INFO(srcversion, "B3858F2E2FFD154904FFCE1");
