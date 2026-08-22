#define _POSIX_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

void handler(int sig)
{
    printf("处理信号 %d\n",sig);
}

void show_pending(sigset_t *pending)
{
    printf("未决信号集（1-31）：");
    for (int i = 1; i <=31; i++)
    {
        printf("%d",sigismember(pending,i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    signal(SIGINT,handler);
    signal(SIGTSTP,handler);

    sigset_t set;
    sigaddset(&set,SIGINT);
    sigaddset(&set,SIGTSTP);
    sigprocmask(SIG_BLOCK,&set,NULL);

    printf("SIGINT和SIGTSTP已经阻塞\n");
    printf("请按Ctrl+Z 测试，观察未决位图变化\n");

    while (1)
    {
        sigset_t pending;
        sigemptyset(&pending);
        sigpending(&pending);
        show_pending(&pending);
        sleep(2);
    }
    
    return 0;
}
