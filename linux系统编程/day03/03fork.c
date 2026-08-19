#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t pid=fork();
    if (pid==-1)
    {
        perror("fork");
    }
    else if (pid==0)
    {
        printf("当前所在子进程\n");
    }
    else if (pid > 0)
    {
        printf("当前所在父进程\n");
    }
    
    
    
    return 0;
}
