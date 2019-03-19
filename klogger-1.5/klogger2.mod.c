#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x73064479, "struct_module" },
	{ 0x37afe3a2, "per_cpu__current_task" },
	{ 0x2c9b319a, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcef588e0, "call_usermodehelper_exec" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0xd0d8621b, "strlen" },
	{ 0x6dcfd380, "boot_cpu_data" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x45364c89, "filp_close" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8b18496f, "__copy_to_user_ll" },
	{ 0xc280a525, "__copy_from_user_ll" },
	{ 0x70d1f8f3, "strncat" },
	{ 0xb72397d5, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x2e89b48a, "fput" },
	{ 0x972574c8, "kmem_cache_alloc" },
	{ 0xeb012f6a, "pv_cpu_ops" },
	{ 0x75c7fd9e, "call_usermodehelper_setup" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb57691b, "fget" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x8235805b, "memmove" },
	{ 0xe3a87bc7, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4C326EFEBE69CE6BF232CB3");
