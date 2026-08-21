// #include <stdio.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main(int argc, char const *argv[])
// {
//     pid_t pid = fork();
//     if (pid==0)
//     {
//         sleep(2);
//         _exit(0);
//     }
//     sleep(10);  //期间用ps -ajx 观察
//     wait(NULL);
//     printf("已回收子进程\n");
//     return 0;
// }

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid==0)
    {
        sleep(3);
        printf("孤儿，现在的父进程是%d\n",getppid());
    }
    else
    {
        printf("父进程先退出\n");
        exit(0);
    }

    return 0;

}