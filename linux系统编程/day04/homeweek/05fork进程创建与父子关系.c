#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
    int i =100;
    pid_t pid = fork();
    if (pid==-1)
    {
        perror("fork");
        return 1;
    }
    if (pid==0)
    {
        printf("子进程：我的pid=%d,父pid=%d,i=%d\n",getpid(),getppid(),i);
        sleep(2);
        printf("子进程即将退出\n");
    }
    else
    {
        printf("父进程：我的pid=%d，子pid=%d,i=%d\n",getpid(),pid,i);
        sleep(1);
        printf("父进程即将结束\n");
    }
    
    
    return 0;
}
