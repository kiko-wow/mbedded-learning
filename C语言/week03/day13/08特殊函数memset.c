#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    memset(arr,1,sizeof(arr));
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
