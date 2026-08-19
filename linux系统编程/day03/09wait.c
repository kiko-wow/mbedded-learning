#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{

    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork");
    }
    else if (pid == 0) // 子进程
    {
        printf("当前进程是子进程，pid是：%d\n",getpid());
        for (int i = 1; i <= 5; i++)
        {
            printf("你还可以再玩游戏玩%ds\n", 5 - i);
            sleep(1);
        }
        printf("我不玩了\n");
        exit(0);
    }
    else if (pid > 0) // 父进程
    {
        printf("当前所在父进程\n");
        int ret = wait(NULL); //不关心退出状态，传NULL  会在这阻塞
        printf("儿子%d已经不玩了\n",ret);
    }

    return 0;
}