#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid==-1)
    {
        perror("fork");
    }
    else if (pid==0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%ds\n",i);
            sleep(1);
        }
        printf("欢迎来到子进程\n");
        
    }
    else if (pid>0)
    {
        printf("欢迎来到父进程\n");
    }
    
    
    
    return 0;
}
