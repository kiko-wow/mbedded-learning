#define _POSIX_SOURCE
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

void my_signal(int num)
{
    printf("收到信号%d\n",num);
}

int main(int argc, char const *argv[])
{
    void (*p)(int);
    p=my_signal;
    signal(10,p);
    printf("我的pid是%d\n",getpid());

    raise(10);
    printf("raise 之后继续执行\n");

    raise(15);
    printf("这行不会执行\n");
    return 0;
}
