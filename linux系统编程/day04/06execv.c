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
    char *p[]={"ls","-a","-l",NULL};
    execv("/bin/ls",p);//文件路径
    printf("hello\n");//不执行，覆盖
    return 0;
}