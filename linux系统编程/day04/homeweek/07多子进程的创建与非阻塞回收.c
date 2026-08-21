#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        pid_t pid = fork();
        if (pid==0)
        {
            sleep(i+1);
            _exit(10+i);
        }
        
    }

    int cnt = 0;
    while (cnt<5)
    {
        int status;
        pid_t r = waitpid(-1,&status,WNOHANG);
        if (r>0)
        {
            printf("回收子进程%d，退出状态%d\n",r,WEXITSTATUS(status));
            cnt++;
        }
        else
        {
            printf("暂无子进程退出，继续轮询...\n");
            sleep(1);
        }
        
    }
    printf("全部回收完成，共%d个子进程\n",cnt);
    
    
    return 0;
}
