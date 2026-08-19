#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
    int num = 100;
    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork");
    }
    else if (pid == 0)
    {
        printf("当前所在子进程，num=%d\n",num);
        printf("子进程里：子进程号：%d\n",getpid());
        printf("子进程里：父进程号：%d\n",getppid());
    }
    else if (pid > 0)
    {
        printf("当前所在父进程，num=%d\n",num);
        printf("父进程里：其子进程号：%d\n",pid);
        printf("父进程里：其进程号：%d\n",getpid());
    }
    
    return 0;
}
