#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *addr = NULL;
    addr = (int *)malloc(5 * sizeof(int));
    printf("addr = %p\n", addr);
    if (addr == NULL)
    {
        perror("malloc");
    }

    for (int i = 0; i < 5; i++)
    {
        addr[i] = (i + 1) * 10;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("addr[%d]=%d\n", i, addr[i]);
    }

    addr = (int *)realloc(addr, 10 * sizeof(int));
    printf("addr = %p\n", addr);

    for (int i = 0; i < 10; i++)
    {
        addr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("addr[%d]=%d\n", i, addr[i]);
    }
    //释放堆区空间
    free(addr);
    //保护机制 为了避免操作不属于自己的内存 释放完后 置空 再操作就会出现段错误
    addr = NULL;

    return 0;
}
