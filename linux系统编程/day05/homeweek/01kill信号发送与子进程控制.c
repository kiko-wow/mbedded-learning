#define _POSIX_SOURCE
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char const *argv[])
{
    pid_t pid =fork();
    if (pid==0)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("正在运行...%d\n",i);
            sleep(1);
        }
        exit(0);
        
    }
    else
    {
        sleep(3);
        kill(pid,2);//SIGINT
        int status;
        wait(&status);
        if (WIFEXITED(status))
        {
            printf("子进程正常退出，状态=%d\n",WEXITSTATUS(status));
        }
        else if (WIFSIGNALED(status))
        {
            printf("子进程被信号%d杀死\n",WTERMSIG(status));
        }
        

        
    }
    
    return 0;
}
