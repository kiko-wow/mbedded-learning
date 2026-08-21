#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork");
    }
    else if (pid == 0) // 子进程
    {
        printf("当前进程是子进程，pid是：%d\n", getpid());
        raise(9);
        for (int i = 1; i <= 5; i++)
        {
            printf("你还可以再玩游戏玩%ds\n", 5 - i);
            sleep(1);
        }
        printf("我不玩了\n");
        exit(3);
    }
    else if (pid > 0) // 父进程
    {
        int status = -1;
        printf("当前所在父进程，两秒后我将关闭你\n");
        sleep(2);
        //向 pid 发送一个 2号信号  杀死
        // kill(pid,SIGINT);
        int ret = wait(&status); 
        if (WIFEXITED(status) == 0)
        {
            printf("儿子%d已经不玩了，非正常退出\n",ret); 
        }
        else
        {
            printf("儿子%d已经不玩了，正常退出\n",ret); 
        }
        
       
    }

    return 0;
}