#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *addr=NULL;
//堆区空间 开辟5个int类型数据的空间 返回的首地址是一个万能指针  不能直接使用
//所以强制转换

    addr = (int *)malloc(5*sizeof(int));
    if (addr==NULL)
    {
        perror("malloc");
    }


    for (int i = 0; i < 5; i++)
    {
        addr[i]=(i+1)*10;
    }
    for (int i=0; i < 5; i++)
    {
        printf("addr[%d]=%d\n",i,addr[i]);
    }
    
    free(addr);
    return 0;
}
