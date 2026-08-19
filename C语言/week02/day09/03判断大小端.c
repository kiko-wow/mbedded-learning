#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num =1;
    //定义一个指针变量p 储存的地址是num的地址（首地址）
    //后续从p进行数据访问 是用short约束的
    short *p =(short *)&num;

    //int num =97;
    //char ch =(char)num;

    printf("*p = %hd\n",*p); //0-->大端 1 小端

    return 0;
}
