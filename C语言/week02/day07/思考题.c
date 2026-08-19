#include <stdio.h>

/// @brief 计算指定字符串或者字符数组中 除了 \0 以外的字符个数
/// @param arr 目标字符串/数组名字
/// @return  有效字符个数
int my_strlen(char arr[]);

/// @brief 将源字符串拼接到目标字符串后
/// @param arr1 目标字符串
/// @param arr2 源字符串
void my_strcat(char arr1[],char arr2[]);



int main(int argc, char const *argv[])
{
    char arr1[20] = {'h', 'e', 'l', 'l', 'o'};
    char arr2[] ="world";
    printf("arr1所占有效字节个数:%d\n",my_strlen(arr1));

    my_strcat(arr1,arr2);
    printf("arr1:%s\n",arr1);

    printf("arr1所占有效字节个数:%d\n",my_strlen(arr1));

    return 0;
}


int my_strlen(char arr[])
{
    int num = 0;
    while (arr[num] != '\0')
    {
        num++;
    }
    return num;
}


void my_strcat(char arr1[],char arr2[])
{
    int num1 = 0;
    //先找到 arr1的结尾  \0
    while (arr1[num1] != '\0')
    {
        num1++;
    }

    //将arr2的数据 依次拼接到 arr1后面 直到arr2拼接完
    int num2 = 0;
    while (arr2[num2] != '\0')
    {
        arr1[num1] = arr2[num2];
        num1++;
        num2++;
    }
    arr1[num1] = '\0';

}