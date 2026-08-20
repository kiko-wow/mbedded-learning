// 编程题 2：子进程状态报告（核心）
// 题目描述：
// 编写一个程序，父进程创建 1个子进程，子进程执行以下操作：
// 1. 子进程打印自己的 PID 和父进程 PID。
// 2. 子进程调用 sleep(3) 模拟工作。
// 3. 子进程以退出码 42 结束（exit(42) ）。
// 父进程需要：
// 1. 使用 waitpid 等待子进程结束（不使用 wait ）。
// 2. 获取子进程的退出状态，并打印："Child [PID] exited with status: 42"（替换为实际 PID）。
// 3. 如果子进程异常终止（比如被信号杀死），打印 "Child terminated abnormally"。
// 考察点：
// waitpid 用法、退出状态解析（WIFEXITED / WEXITSTATUS ）、进程 PID 获取。

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork");
    }
    else if (pid == 0)
    {
        sleep(3);
        printf("当前所在子进程，子进程为pid：%d,父进程pid为：%d\n", getpid(), getppid());
        exit(42);
    }
    else if (pid > 0)
    {
        sleep(4);
        int status = 0;
        printf("当前所在父进程");
        int ret = waitpid(0, &status, WNOHANG);
        if (ret == -1)
        {
            printf("Child terminated abnormally\n");
        }
        else
        {
            int pid1 = WEXITSTATUS(status);
            printf("Child [PID] exited with status: %d\n", pid1);
        }
    }
    return 0;
}