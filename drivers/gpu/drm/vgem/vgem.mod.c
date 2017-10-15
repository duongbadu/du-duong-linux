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
	{ 0x3cb7fc58, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0xff7429e5, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbfcdb6b5, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xfe911cbc, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0xc0ac3cb7, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x4657ebaa, __VMLINUX_SYMBOL_STR(fence_context_alloc) },
	{ 0xccbfb029, __VMLINUX_SYMBOL_STR(fence_default_wait) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf36c115f, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0x60560f3b, __VMLINUX_SYMBOL_STR(fence_signal) },
	{ 0x426ba24, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x89184c69, __VMLINUX_SYMBOL_STR(reservation_object_add_shared_fence) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x5a1e87b9, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0xd3be2ffd, __VMLINUX_SYMBOL_STR(drm_prime_pages_to_sg) },
	{ 0xf56d9856, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc7f551, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x985ae93, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x5c4e42, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x46963b5c, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x1a7fec9d, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xce0a238e, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x5dd10eef, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0xf116b700, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x308bd681, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xc761c5a5, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x656f29f6, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0x59aa14cf, __VMLINUX_SYMBOL_STR(fence_release) },
	{ 0xec568bf6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x87cf2dab, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0x292ea2c0, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x6bb4acc0, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xb9fd3b1e, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0xd2064e2f, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x494e3393, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x344181b1, __VMLINUX_SYMBOL_STR(reservation_object_reserve_shared) },
	{ 0x4201017, __VMLINUX_SYMBOL_STR(fence_init) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x96618cb, __VMLINUX_SYMBOL_STR(fence_free) },
	{ 0x70b52d27, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0x2c6bcf20, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xfa8d3fb6, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

