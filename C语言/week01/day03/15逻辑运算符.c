#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ret = 5>10 && 5>1;
    printf("ret= %d\n",ret);

    ret =5<10 || 5<3;
    printf("ret=%d\n",ret);

    ret = !(5==10);
    printf("ret = %d\n",ret);
    return 0;
}
//逻辑运算的短路原则
/*思考题：
int n = 10;
int ret = n > 10 && ++n >10;  //左边 n > 10 已经可以确定 ret 的结果一定是0  所以右半部分不再运算
ret = 0
n = 10 
*/