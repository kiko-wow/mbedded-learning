#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int capacity =5;

    //堆区开辟 capacity *sieof(int)个字节 将首地址赋值给 arr
    int *arr =(int *)calloc(capacity,sizeof(int));
    if (arr==NULL)
    {
        perror("calloc");
    }

    //使用堆区空间
    for (int i = 0; i < capacity; i++)
    {
        arr[i]=(i+1)*10;
    }

    for (int i = 0; i < capacity; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //释放
    free(arr);
    arr=NULL;
    
    
    
    return 0;
}
