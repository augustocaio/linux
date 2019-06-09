#include<linux/linkage.h>
#include<linux/module.h>
#include<linux/syscalls.h>
#include<linux/printk.h>

asmlinkage long sys_forkexecve(const char *filename, const char *const argv[], const char *const envp[]) {
  long pid = sys_fork();
  printk("[KERNEL] pid from sys_fork: %ld\n", pid);
  sys_execve(filename, argv, envp);
  
  return pid; 
}
