# 总结部分
Unix标准:
(1)ISO C
(2)IEEE POSIX
(3)SUS
Unix实现:
(1)SVR4
(2)BSD
(3)FreeBSD
(3)Linux
标准和实现的编译限制
(1)确定的限制:头文件
(2)和系统有关的限制:sysconf
(3)和文件系统有关的限制:pathconf,fpathconf
```
#include <unistd.h>
long sysconf(int name)
long pathconf(const char *pathname,int name)
long fpathconf(int fd,const char *pathname,int name)
```
参数name可以是:_SC_ARG_MAX,_PC_LINK_MAX;

基本的系统数据类
- time_t(int):日历秒数
- clock_t(int):系统时钟滴答数
- comp_t 
- dev_t(int):系统设备号
- fd_set
- fpost_t
- uid_t(int):用户ID
- git_t(int):数值组ID
- ino_t(int) :i节点node号
- mode_t(int):文件类型和权限
- nlink_t(int):文件链接数
- off_t(int):字节偏移数
- pid_t(int):进程id
- pthread_t(int):线程ID
-size_t(int):大小
-ssize_t(uint):大小

# 习题部分
## 2.1

在28节中提到一些基本系统数据类型可以在多个头文件中定义。例如。在FroeBSD 8.0中， size_t在29个不同的头文件中都有定义。由于一个程序可能包含这29个不同的头文件。 但是18OC却不允许对同一个名字进行多次typedef,事么如何编写这些头文件呢?

条件编译

## 2.2 
查系统的头文件，列出实现基本系统数据类型所用到的实际数据类型

见总结部分
## 2.3
略

