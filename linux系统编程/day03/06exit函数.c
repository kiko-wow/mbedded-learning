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

        printf("欢迎来到子进程"); //exit 安全退出 会刷新缓冲区
         exit(0); //这里的退出状态 可以写任意值，对于计算机来说不重要
        //但是父进程后续可以解析这个退出状态，判断这个进程退出的原因

        //就算没有exit也会打印出来 因为后面有return 0

    }
    else if (pid > 0) // 父进程
    {
        printf("欢迎来到父进程\n");
    }

     return 0;
}