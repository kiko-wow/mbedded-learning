#include <sys/types.h>
#include <sys/wait.h>
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

        printf("我是第1个子进程%d，我的父进程号是%d\n",getpid(),getppid());
        exit(0);
    }
    else if (i==1)
    {
        sleep(4);
        printf("我是第2个子进程%d，我的父进程号是%d\n",getpid(),getppid());
        exit(1);
    }
    else if (i==2)
    {
        printf("我是父进程，进程号是%d\n",getpid());
        while (1)
        {
            sleep(1);
            int status=0;
            int ret = waitpid(-1,&status,WNOHANG);
            if (ret==0)
            {
                printf("还没有进程退出\n");
            }
            else if (ret>0)
            {
                if (WEXITSTATUS(status)==0)
                {
                    printf("子程序1退出并且回收\n");
                }
                if (WEXITSTATUS(status)==1)
                {
                    printf("子程序2退出并且回收\n");
                }
                
                
            }
            else
            {
                printf("所有子程序都已经退出并且回收\n");
                break;
            }
            
            
        }
        
    }
    
    
    
    
    return 0;
}
