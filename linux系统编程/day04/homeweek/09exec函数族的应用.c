#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid==0)
    {
        printf("子程序：即将exec\n");
        execlp("ls","ls","-l",NULL);
        perror("exec");
        _exit(1);
    }
    int status;
    wait(&status);
    printf("子进程退出状态：%d\n",WEXITSTATUS(status));
    return 0;
}
