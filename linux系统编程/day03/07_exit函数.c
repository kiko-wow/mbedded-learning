#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork");
    }
    else if (pid == 0) // 子进程
    {

        printf("欢迎来到子进程");
        _exit(0); //进程执行到此处 立刻马上退出 不会进行任何清理 所以这句话打印不出来

    }
    else if (pid > 0) // 父进程
    {
        printf("欢迎来到父进程\n");
    }

     return 0;
}