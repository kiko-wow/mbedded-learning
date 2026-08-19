#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid ==-1)
    {
        perror("fork");
    }
    else if (pid == 0)
    {
        printf("当前进程是子进程，pid是：%d\n",getpid());
        for (int i = 1; i <=5; i++)
        {
            printf("你还可以再玩游戏玩%ds\n",5-i);
            sleep(1);
        }
        printf("我不玩了\n");
        exit(3);
    }
    else if (pid>0)
    {
        int status = -1;
        printf("当前所在父进程\n");
        while (1)
        {
            sleep(1);
            int ret = waitpid(0,&status,WNOHANG);
            if (ret == pid)
            {
                printf("子进程%d已经被回收\n",pid);
                break;
            }
            else
            {
                printf("打印一下，证明不阻塞\n");
            }
            
        }
        
    }
    
    
    return 0;
}
