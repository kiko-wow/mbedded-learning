#define _POSIX_SOURCE
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char const *argv[])
{
    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGINT); // 将2号信号 添加到 set里

    sigprocmask(SIG_BLOCK, &set, NULL); // 将set添加到阻塞信号集 而且不关心 原来的阻塞信号集
    printf("SIGINT已经在阻塞信号集\n");
    sleep(5);

    sigprocmask(SIG_UNBLOCK, &set, NULL); // 将set从阻塞信号集剔除  原来阻塞时候 产生的信号 会被处理
    while (1)
    {
        /* code */
    }
    

    return 0;
}