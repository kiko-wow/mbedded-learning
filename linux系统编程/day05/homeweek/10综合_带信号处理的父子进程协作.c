#define _POSIX_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

pid_t child_pid;

void child_handler(int sig)
{
    static int count = 0;
    count++;
    printf("子进程：收到父进程通知（第%d次）\n",count);
}

void parent_handler(int sig)
{
    printf("\n父进程：收到Ctrl+C，中止子进程\n");
    kill(child_pid,SIGTERM);
}

int main(int argc, char const *argv[])
{
    child_pid = fork();
    if (child_pid==0)
    {
        struct sigaction act;
        act.sa_handler=child_handler;
        sigemptyset(&act.sa_mask);
        act.sa_flags=0;
        sigaction(SIGUSR1,&act,NULL);

        while (1)
        {
            printf("子进程等待中...\n");
            sleep(1);
        }
        
    }
    else
    {
        signal(SIGINT,parent_handler);

        for (int i = 0; i < 3; i++)
        {
            sleep(2);
            kill(child_pid,SIGUSR1);
            printf("父进程：已发送第%d次通知\n",i+1);
        }

        sleep(1);
        kill(child_pid,SIGTERM);
        int status;
        wait(&status);
        if (WIFSIGNALED(status))
        {
            printf("子进程被信号%d终止\n",WTERMSIG(status));
        }
        else
        {
            printf("子进程正常退出\n");
        }
        
        
    }
    
    return 0;
}
