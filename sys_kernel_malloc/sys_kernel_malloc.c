#include <linux/linkage.h>
#include <linux/module.h>
#include <linux/slab.h>

asmlinkage long sys_kernel_malloc(long size) {
	kmalloc(sizeof(double) * size, GFP_KERNEL);
	return 0;
}
