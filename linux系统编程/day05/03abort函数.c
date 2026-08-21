#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char const *argv[])
{
    abort();//已中止
    printf("123456789\n");
    return 0;
}
