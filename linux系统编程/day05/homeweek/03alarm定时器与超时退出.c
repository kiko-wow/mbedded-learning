#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void timeout_handler(int sig)
{
    printf("\n时间到!信号%d触发\n",sig);
    _exit(0);
}

int main(int argc, char const *argv[])
{
    signal(SIGALRM,timeout_handler);
    alarm(5);

    for (int i = 5; i > 0; i--)
    {
        printf("倒计时：%d\n",i);
        sleep(1);
    }
    
    return 0;
}
