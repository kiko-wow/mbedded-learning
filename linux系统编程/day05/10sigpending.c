#define _POSIX_SOURCE
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

void show_pending(sigset_t *pending)
{
    for (int i = 1; i <= 31; i++) // 遍历1 ~ 31 号信号
    {
        if (1 == sigismember(pending, i)) // 检测 i信号 是不是pending的成员
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGINT);
    sigaddset(&set, SIGTSTP);
    sigprocmask(SIG_BLOCK, &set, NULL);

    while (1)
    {
        sigset_t pending;
        sigemptyset(&pending);
        sigpending(&pending); // 此时 pending 中存放的结果就是未决信号集
     
        show_pending(&pending);
        sleep(2);
    }

    return 0;
}