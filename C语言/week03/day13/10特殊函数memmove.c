#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int arr2[5] = {10,20,30,40,50};
    int arr[5];
    memmove(arr,arr2,sizeof(arr));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}