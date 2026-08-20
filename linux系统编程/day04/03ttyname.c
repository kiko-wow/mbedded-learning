#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("标准输入文件所关联终端：%s\n",ttyname(0));
    printf("标准输出文件所关联终端：%s\n",ttyname(1));
    printf("标准错误文件所关联终端：%s\n",ttyname(2));
    printf("当前进程的进程号：%d\n",getpid());

    while (1)
    {
        /* code */
    }
    
    return 0;
}
