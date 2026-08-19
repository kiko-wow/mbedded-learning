#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,9,8,6,7,10};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < capacity - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j + 1 < capacity - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)  //如果flag 还是0 证明 没有发生交换 证明已经有序  所以直接跳出循环即可
        {
            break;
        }


    }

    for (int i = 0; i < capacity; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
    return 0;
}