#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    pid_t pid=fork();
    if (pid==0)
    {
        printf("我的pid：%d\n",getpid());
        printf("我的父进程pid：%d\n",getppid());
        sleep(3);
        exit(42);
    }
    else
    {
        int status;
        waitpid(pid,&status,0);
        if (WIFEXITED(status))
        {
            printf("Child [%d] exited with status:%d\n",pid,WEXITSTATUS(status));
        }
        else
        {
            printf("Child terminated abnormally");
        }
    }

    
    return 0;
}
