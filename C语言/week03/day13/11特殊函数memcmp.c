#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int arr2[5] = {10, 50, 30, 40, 50};
    int arr[5] = {10, 20, 30, 40, 50};
    int ret = memcmp(arr, arr2, sizeof(arr));  //结果是 负的
    printf("%d\n", ret);
    return 0;
}