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
	{ 0x6a8aa717, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xe84f2c84, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4ca6773d, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0xffff6a70, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x3e28ccd0, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0xa2159dcc, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x5665db15, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x76f88684, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x33d61b0c, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0x4b294ea2, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x62516879, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5046db49, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xaa403c7a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x4099f4f5, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0x9e17defc, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xe5e8bbf2, __VMLINUX_SYMBOL_STR(ata_host_start) },
	{ 0x1aa82510, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa820ae0b, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0xb00198e0, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0xad3a843d, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xa5e619f9, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xd4fa3c95, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xd26aafea, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xfdfd2b83, __VMLINUX_SYMBOL_STR(ata_host_register) },
	{ 0x6ea12747, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0x23915301, __VMLINUX_SYMBOL_STR(sata_lpm_ignore_phy_events) },
	{ 0x4f27fae4, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcbe6a8ef, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x23b5238a, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8ddf67e6, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0xf5731678, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb34d83f5, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb20daf8c, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x5c92f2d8, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xe1c012c7, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x6993bb56, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

