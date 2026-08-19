#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int i=0;
    for ( i; i < 3; i++)
    {
        pid_t pid =fork();
        if (pid==0)
        {
            break;
        }
        
    }
    if (i==0)
    {
        int fd1=open("output.txt",O_WRONLY | O_CREAT | O_APPEND);
        printf("子进程1：%d\n",getpid());
        write(fd1,"Child 1: Hello\n",15);
        close(fd1);
        exit(0);
    }
    else if (i==1)
    {
        int fd2=open("output.txt",O_WRONLY | O_CREAT | O_APPEND);
        printf("子进程2：%d\n",getpid());
        write(fd2,"Child 2: Hello\n",15);
        close(fd2);
        exit(0);
    }
    else if (i==2)
    {
        int fd3=open("output.txt",O_WRONLY | O_CREAT | O_APPEND);
        printf("子进程3：%d\n",getpid());
        write(fd3,"Child 3: Hello\n",15);
        close(fd3);
        exit(0);
    }
    
    
    sleep(3);
    return 0;
}
