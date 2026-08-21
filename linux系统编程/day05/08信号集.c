#define _POSIX_SOURCE
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/time.h>

int main(int argc, char const *argv[])
{
    sigset_t set;
    sigemptyset(&set);

    int ret = sigaddset(&set,2);
    printf("ret=%d\n",ret);

    int ret2 = sigismember(&set,2);
    if (ret2==1)
    {
        printf("2号信号在集合中\n");
    }
    else
    {
        printf("2号信号不在集合中\n");
    }
    sigdelset(&set,SIGINT);

    ret2=sigismember(&set,SIGINT);

    if (ret2==1)
    {
        printf("2号信号在集合中\n");
    }
    else
    {
        printf("2号信号不在集合中\n");
    }
    
    return 0;
}
