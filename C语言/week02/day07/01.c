#include <stdio.h>

void init_arr(int arr[],int capacity);

int main(int argc, char const *argv[])
{
    int arr[10];
    int capacity = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < capacity; i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    init_arr(arr,capacity);
    for (int i = 0; i < capacity; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

return 0;
}
void init_arr(int arr[],int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        arr[i]=(i+1)*10;
    }
    
}