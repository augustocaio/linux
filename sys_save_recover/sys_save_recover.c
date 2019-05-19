#include<linux/linkage.h>
#include<linux/module.h>

static long saved_number;

asmlinkage long sys_save(long number) {
	return saved_number = number;
}

asmlinkage long sys_recover(void) {
	return saved_number;
}
