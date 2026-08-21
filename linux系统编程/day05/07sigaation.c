#define _POSIX_SOURCE
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

int * addr=NULL;

void my_free(int signal)
{
    if (addr!=NULL)
    {
        free(addr);
        addr=NULL;
    }
    else
    {
        printf("addr已将释放\n");
    }
    
}

int main(int argc, char const *argv[])
{
    addr=(int *)malloc(sizeof(int));
    void (*p)(int);
    p=my_free;
    struct sigaction act;
    act.sa_flags=0;
    act.sa_handler=p;
    sigaction(SIGINT,&act,NULL);

    while (1)
    {
        printf("堆区开辟的空间的首地址：%p\n",addr);
        sleep(2);
    }
    free(addr);
    
    return 0;
}
