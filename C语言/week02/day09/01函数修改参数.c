//已知int num = 3； 请你封装函数，传入 num ，执行完毕后 num变成6

#include <stdio.h>

void change_num(int *p);
int main(int argc, char const *argv[])
{
    int num =3;
    printf("函数执行前num = %d\n",num);
    change_num(&num);
    printf("函数执行后num = %d\n",num);
    return 0;
}

void change_num(int *p){
    //基于p这个地址 将p这个地址里的值 改成6；
    *p = 6;
}
