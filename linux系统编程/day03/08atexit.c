#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_clean(void)
{
    printf("my_clean已经自动调用\n");
}

int main(int argc, char const *argv[])
{
    void (*p)(void);
    p = my_clean;   //函数指针 存储 my_clean
    atexit(p);   //atexit注册 函数p

    pid_t pid = fork();
    if (pid == -1)
    {
        perror("fork");
    }
    else if (pid == 0) // 子进程
    {

        printf("欢迎来到子进程");
        exit(0); //会自动调用 my_clean
    }
    else if (pid > 0) // 父进程
    {
        printf("欢迎来到父进程\n");
    }

    return 0; // 也会调用 atexit注册过的函数
}