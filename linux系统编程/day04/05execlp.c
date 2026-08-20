#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("hello\n");
    execlp("ls","ls","-a","-l",NULL);//文件名
    printf("hello\n");//不执行，覆盖
    return 0;
}