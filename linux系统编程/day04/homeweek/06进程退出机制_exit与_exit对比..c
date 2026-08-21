#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_cleanup(void)
{
    printf("atexit 注册的清理函数被自动调用\n");
}
int main(int argc, char const *argv[])
{
    printf("hello");
    atexit(my_cleanup);
    //exit(3);//调用
    _exit(3);//不调用
    return 0;
}
