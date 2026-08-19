/*2.
int num1 = 3;
int num2 = 4;
//封装的函数 调用
调用函数后 num1变成4，num2变成3*/

#include <stdio.h>
    int num1=3;
    int num2 =4;
void huan_num(void);
int main(int argc, char const *argv[])
{
    
    printf("调用前：\nnum1=%d\nnum2=%d\n",num1,num2);
    huan_num();
    printf("调用后：\nnum1=%d\nnum2=%d\n",num1,num2);
    return 0;
}

void huan_num(void){
        int num3=num1;
        num1=num2;
        num2=num3;
}
