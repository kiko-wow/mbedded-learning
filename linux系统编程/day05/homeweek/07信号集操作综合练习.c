#define _POSIX_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

void print_set(sigset_t *set,const char *name)
{
    printf("%s:",name);
    for (int i = 1; i < 31; i++)
    {
        printf("%d",sigismember(set,i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    sigset_t set1,ser2;

    //set1空集 添加3个信号
    sigemptyset(&set1);
    sigaddset(&set1,SIGINT);
    sigaddset(&set1,SIGTERM);
    sigaddset(&set1,SIGUSR1);
    print_set(&set1,"set1");

    //从set1删除SIGTERM
    sigdelset(&set1,SIGTERM);
    printf("删除 SIGTERM 后，ste1中SGTRM存在：%d\n",
    sigismember(&set1,SIGTERM));
    return 0;
}
