#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    for (i; i < 4; i++)
    {
        pid_t pid = fork();
        if (pid == -1)
        {
            perror("fork");
        }
        if (pid == 0)
        {
            break;
        }
    }
    if (i == 0)
    {
        int fd = open("222.txt", O_WRONLY | O_APPEND | O_CREAT, 0777);
        if (fd == -1)
        {
            perror("open_w");
        }
        printf("在子进程1\n");
        int sum = 0;
        for (int i = 1; i <= 100; i++)
        {
            sum = sum + i;
        }
        char buff1[256];
        sprintf(buff1, "1+2+3+4+...+100=%d\n", sum);
        int ret1 = write(fd, &buff1, strlen(buff1));
        if (ret1 == -1)
        {
            perror("write1");
        }
        close(fd);
        exit(11);
    }
    else if (i == 1)
    {
        int fd = open("222.txt", O_WRONLY | O_APPEND | O_CREAT, 0777);
        if (fd == -1)
        {
            perror("open_w");
        }
        printf("在子进程2\n");
        int pile = 1;
        for (int i = 2; i <= 10; i++)
        {
            pile = pile * i;
        }
        char buff2[256];
        sprintf(buff2, "1*2*3*4*...*10=%d\n", pile);
        int ret2 = write(fd, &buff2, strlen(buff2));
        if (ret2 == -1)
        {
            perror("write2");
        }
        close(fd);
        exit(12);
    }
    else if (i == 2)
    {
        int fd = open("222.txt", O_WRONLY | O_APPEND | O_CREAT, 0777);
        if (fd == -1)
        {
            perror("open_w");
        }
        printf("在子进程3\n");
        int sum1 = 0;
        for (int i = 1; i <= 10; i++)
        {
            sum1 = sum1 + i * i;
        }
        char buff3[256];
        sprintf(buff3, "1*1+2*2+3*3+4*4+...+10*10=%d\n", sum1);
        int ret3 = write(fd, &buff3, strlen(buff3));
        if (ret3 == -1)
        {
            perror("write3");
        }
        close(fd);
        exit(13);
    }
    else if (i == 3)
    {
        int fd = open("222.txt", O_WRONLY | O_APPEND | O_CREAT, 0777);
        if (fd == -1)
        {
            perror("open_w");
        }
        printf("在子进程4\n");
        int num = 97;
        int a = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                a++;
            }
        }
        if (a == 2)
        {
            char buff4[256];
            sprintf(buff4, "97是质数\n");
            int ret4 = write(fd, &buff4, strlen(buff4));
            if (ret4 == -1)
            {
                perror("write4");
            }
        }
        else
        {
            char buff4[256];
            sprintf(buff4, "97不是质数\n");
            int ret4 = write(fd, &buff4, strlen(buff4));
            if (ret4 == -1)
            {
                perror("write4");
            }
        }
        close(fd);
        exit(14);
    }
    else
    {
        sleep(1);
        printf("在父进程\n");
        while (1)
        {
            int status = 0;
            int ret = waitpid(0, &status, WNOHANG);
            if (ret == 0)
            {
                printf("还没有进程退出\n");
            }
            if (ret > 0)
            {
                if (WEXITSTATUS(status) == 11)
                {
                    printf("进程1回收成功,Waiting for children...\n");
                }
                else if (WEXITSTATUS(status) == 12)
                {
                    printf("进程2回收成功,Waiting for children...\n");
                }
                else if (WEXITSTATUS(status) == 13)
                {
                    printf("进程3回收成功,Waiting for children...\n");
                }
                else
                {
                    printf("进程4回收成功,Waiting for children...\n");
                }
            }
            else
            {
                printf("所有进程回收完毕\n");
                break;
            }
        }
        FILE *fl = fopen("./222.txt", "r");
        if (fl == NULL)
        {
            perror("fopen");
        }
        for (int i = 0; i < 4; i++)
        {
            char buff[64] = {0};
            fgets(buff, sizeof(buff)-1, fl);
            printf("%s", buff);
        }
        fclose(fl);
    }
    return 0;
}
