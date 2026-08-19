#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    for ( i; i < 2; i++)
    {
        pid_t pid = fork();
        if (pid==0)
        {
            break;
        }
        
    }
    if (i==0)
    {
        sleep(3);

        printf("我是第1个子进程%d，我的父进程号是%n\n",getpid(),getppid());
        exit(0);
    }
    else if (i==1)
    {
        sleep(4);
        printf("我是第2个子进程%d，我的父进程号是%n\n",getpid(),getppid());
        exit(1);
    }
    else if (i==2)
    {
        printf("我是父进程，进程号是%d\n",getpid());
        while (1)
        {
            sleep(1);
        }
        
    }
    
    
    
    
    return 0;
}
