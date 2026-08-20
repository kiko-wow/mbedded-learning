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
    pid_t pid = fork();
    if (pid==-1)
    {
        perror("fork");
    }
    else if (pid==0)
    {
        sleep(1);
        while (1)
        {
            printf("子进程\n");
        }
        
        printf("子进程\n");
    }
    else if (pid>0)
    {

        sleep(3);
        printf("父进程\n");
        
    }
    //如果进程关不掉，用 kill -9 进程号  #杀死对应进程
    
    
    
    
    return 0;
}
