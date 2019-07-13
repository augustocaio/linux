#include <linux/linkage.h>
#include <linux/module.h>
#include <linux/slab.h>

asmlinkage long sys_kernel_malloc(long size) {
	double *array = kmalloc(sizeof(double) * size, GFP_KERNEL);
	long i = 0;
	while(i < size) {
		array[i++] = 1;
	}
	return 0;
}
