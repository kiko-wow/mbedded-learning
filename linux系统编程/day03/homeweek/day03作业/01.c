// 编程题 1：多进程文件写入（基础）
// 题目描述：
// 编写一个程序，父进程创建 3个子进程，每个子进程向同一个文件 output.txt 中写入一行内容：
// 子进程1写入："Child 1: Hello\n"
// 子进程2写入："Child 2: Hello\n"
// 子进程3写入："Child 3: Hello\n"
// 要求：
// 1. 父进程必须等待所有子进程结束后才退出。
// 2. 文件以追加模式打开（O_APPEND ），避免互相覆盖。
// 3. 父进程最后在屏幕上打印："All children finished."
// 考察点： 循环创建子进程、wait 回收、文件共享与并发写入

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{

    int fd = open("111.txt", O_WRONLY | O_APPEND | O_CREAT, 0777);
    if (fd == -1)
    {
        perror("open1");
    }
    int i = 0;
    for (i; i < 3; i++)
    {
        pid_t pid = fork();
        if (pid == 0)
        {
            break;
        }
    }
    if (i == 0)
    {
        printf("我是子进程1，进程号为：%d ,我的父进程是%d\n", getpid(), getppid());
        write(fd, "Child 1: Hello\n", sizeof("Child 1: Hello\n") - 1);
        exit(0);
    }
    else if (i == 1)
    {
        printf("我是子进程2，进程号为：%d ,我的父进程是%d\n", getpid(), getppid());
        write(fd, "Child 2: Hello\n", sizeof("Child 2: Hello\n") - 1);
        exit(1);
    }
    else if (i == 2)
    {
        printf("我是子进程3，进程号为：%d ,我的父进程是%d\n", getpid(), getppid());
        write(fd, "Child 3: Hello\n", sizeof("Child 3: Hello\n") - 1);
        exit(2);
    }
    else
    {
        printf("我是父进程，进程号为：%d\n", getpid());
        while (1)
        {
            sleep(1);
            int status = 0;
            int ret = waitpid(0, &status, WNOHANG);
            if (ret == 0)
            {
                printf("还没有子进程退出\n");
            }
            if (ret > 0)
            {
                if (WEXITSTATUS(status) == 0)
                {
                    printf("进程1成功回收\n");
                }
                else if (WEXITSTATUS(status) == 1)
                {
                    printf("进程2成功回收\n");
                }
                else if (WEXITSTATUS(status) == 2)
                {
                    printf("进程3成功回收\n");
                }
            }
            else
            {
                printf("所有进程已经回收完毕\n");
                break;
            }
        }
        printf("All children finished.\n");
    }
    close(fd);
    return 0;
}