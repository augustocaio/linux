#include<linux/linkage.h>
#include<linux/module.h>

static int saved_number;

asmlinkage int sys_save(int number) {
	return saved_number = number;
}

asmlinkage int sys_recover(void) {
	return saved_number;
}
