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
        alarm(5); // 5s以后向自己发送一个 14 号信号
        printf("当前进程是子进程，pid是：%d\n", getpid());
        for (int i = 1; i <= 5; i++)
        {
            printf("你还可以再玩游戏玩%ds\n", 5 - i);
            sleep(1);
            if (i == 3)
            {
                unsigned long ret = alarm(0); // 取消闹钟  ret 存储的是上一闹钟的剩余时间
                printf("上一个闹钟剩余时间：%lu\n", ret);
            }
        }
        printf("我不玩了\n");

        exit(3);
    }
    else if (pid > 0) // 父进程
    {
        int status = -1;

        int ret = wait(&status);

        if (WIFEXITED(status) == 0)
        {
            printf("儿子%d已经不玩了，非正常退出\n", ret);
        }
        else
        {
            printf("儿子%d已经不玩了，正常退出\n", ret);
        }
    }

    return 0;
}