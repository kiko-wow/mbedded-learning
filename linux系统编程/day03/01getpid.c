#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("当前进程的进程号是：%d\n",getpid());
    
    return 0;
}


