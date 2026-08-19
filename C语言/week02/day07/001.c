/*请封装函数，帮我实现如下功能：
1.int num = 3；
函数执行
函数执行完毕后 num 变成 6*/

#include <stdio.h>

int num_n (int num);
int main(int argc, char const *argv[])

{
    int num =3;
    num=num_n(num);
    printf("%d\n",num);
    return 0;
}


int num_n (int num){
    return num+3;
}
