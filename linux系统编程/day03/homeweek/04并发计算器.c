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
    for ( i ; i < 4; i++)
    {
        pid_t pid =fork();
        if (pid==0)
        {
            break;
        }
        
    }

    if (i==0)
    {
        printf("子进程0");
    }
    
    return 0;
}
