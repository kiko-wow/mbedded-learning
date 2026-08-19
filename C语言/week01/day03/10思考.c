#include <stdio.h>
int main(int argc, char const *argv[])
{
//思考题1：请分析以下代码的执行结果
int num1 = -10;
unsigned int num2 = 6;
if(num1 > num2)
{
    printf("num1大\n");
}
if(num1 < num2)
{
    printf("num2大\n");
}
//思考题2：请分析以下代码的执行结果
printf("num1 + num2 = %d\n",num1+num2);
printf("num1 + num2 = %u\n",num1+num2);
    return 0;
}
