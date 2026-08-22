#define _POSIX_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

void handler(int sig)
{
    printf("\n收到信号%d （可能是被阻塞之前的）\n",sig);
}

int main(int argc, char const *argv[])
{
    signal(SIGINT,handler);

    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set,SIGINT);

    //阻塞 SIGINT
    sigprocmask(SIG_BLOCK,&set,NULL);
    printf("SIGINT 已经阻塞，5秒内按Ctrl+C 不会中止\n");
    
    sleep(5);

    //解除阻塞
    printf("解除阻塞...\n");
    sigprocmask(SIG_UNBLOCK,&set,NULL);
    printf("阻塞已解除，如果有被延迟的信号将被处理\n");

    while (1)
    {
        sleep(1);
    }
    
    
    return 0;
}
