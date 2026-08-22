#define _POSIX_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int num = 0;

void my_int(int sig)
{
    num++;
    printf("收到SIGINT%d次触发",num);
    if (num>=3)
    {
        printf("已达3次，恢复默认动作\n");
        signal(SIGINT,SIG_DFL);

    }
    
}

void my_quit(int sig)
{
    printf("收到SIGQIT退出程序\n");
    _exit(0);
}

int main(int argc, char const *argv[])
{
    struct sigaction zhong_duan;
    zhong_duan.sa_handler=my_int;
    sigemptyset(&zhong_duan.sa_mask);
    sigaddset(&zhong_duan.sa_mask,SIGQUIT);
    zhong_duan.sa_flags=0;
    sigaction(SIGINT,&zhong_duan,NULL);

    struct sigaction tui_chu;
    tui_chu.sa_handler=my_quit;
    sigemptyset(&tui_chu.sa_mask);
    tui_chu.sa_flags=0;
    sigaction(SIGQUIT,&tui_chu,NULL);

    printf("本程序的进程id为%d\n",getpid());

    while (1)
    {
        sleep(1);
    }
    
    return 0;
}
