#include <stdio.h>
/// @brief 展示数组的内容
/// @param arr 要展示的数组的首地址
/// @param capacity 数组容量
void show_arr(int *arr,int capacity);

int main(int argc, char const *argv[])
{
    int arr[3]={1,2,3};
    printf("sizeof(arr)=%lu\n",sizeof(arr));
    show_arr(arr,5);
    printf("arr的地址%p\n",arr);
    printf("arr数组的首元素的首地址：%p\n",&arr[0]);
    return 0;
}

//void init_score(int score[],int capacity);
void show_arr(int *arr,int capacity){
    printf("函数内：sizeof(arr)=%lu\n",sizeof(arr));
}

