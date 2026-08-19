#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 方法1 最正规的
    //int arr[5] = {0, 0, 0, 0, 0};
    // 方法2  最常用
    //int arr[5] = {0};
    // 方法3
   // int arr[] = {0, 0, 0, 0, 0};

    //c语言中对某个下标数据进行赋值的方法
    int arr [5]={[2]=20,[3]=30};
    printf("arr[0]= %d\n",arr[0]);
    printf("arr[1]= %d\n",arr[1]);
    printf("arr[2]= %d\n",arr[2]);
    printf("arr[3]= %d\n",arr[3]);
    printf("arr[4]= %d\n",arr[4]);


    return 0;
}
