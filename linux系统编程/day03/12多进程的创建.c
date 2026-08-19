#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i=0;
    for (i ; i < 3; i++)
    {
        pid_t pid = fork();
        if (pid==0)
        {
            break;
        }
        
    }
    if (i==0)
    {
        printf("我是第1个子进程%d,我的父进程是%d\n",getpid(),getppid());
    }
    else if (i==1)
    {
        printf("我是第2个子进程%d,我的父进程是%d\n",getpid(),getppid());
    }
    else if (i==2)
    {
        printf("我是第3个子进程%d,我的父进程是%d\n",getpid(),getppid());
    }
    else if (i==3)
    {
        printf("我是父进程%d\n",getpid());
    }
    
    
    
    return 0;
}
