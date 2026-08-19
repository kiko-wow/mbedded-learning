#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={[2]=20,[3]=30};
    //arr是数组名，是一个及其特殊的地址，sizeof(arr)计算的是整个数组的所占字节
    // sizeof(arr[0]),arr[0]是int类型 所以此处是4
    int capacity =sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < capacity; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    
    return 0;
}
