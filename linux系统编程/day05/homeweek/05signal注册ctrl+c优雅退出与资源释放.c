#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int *addr = NULL;

void my_free(int sig)
{
    if (addr!=NULL)
    {
        free(addr);
        addr=NULL;
        printf("资源已释放，再见\n");
    }
    else
    {
        printf("资源已经释放过了\n");
    }
    
}

int main(int argc, char const *argv[])
{
    addr = (int*)malloc(sizeof(int));
    signal(SIGINT,my_free);

    while (1)
    {
        printf("堆区内存地址：%p\n",addr);
        sleep(2);
    }
    free(addr);
    
    return 0;
}
