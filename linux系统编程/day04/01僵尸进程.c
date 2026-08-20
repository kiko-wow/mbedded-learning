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
        printf("子进程");
    }
    else if (pid>0)
    {
        printf("父进程");
        while (1)
        {
            
        }
        printf("父进程");
        
    }
    
    
    
    
    return 0;
}
