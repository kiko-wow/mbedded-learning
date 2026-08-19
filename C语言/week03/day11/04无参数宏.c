#include <stdio.h>

#define PI  3.14   //定义一个 宏  PI  等价于 3.14
#define row 10
#define col 10

int main(int argc, char const *argv[])
{
    printf("半径为10的圆的面积%0.1f\n",10*10*PI);  //此处的 PI等价于 3.14

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}