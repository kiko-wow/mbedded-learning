#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num1 = 3.14f;
    double num2 = 3.14;
    printf("num1=%f\n",num1);
    printf("num2=%lf\n",num2);
    printf("float所占字节：%lu\n",sizeof(num1));
    printf("double所占字节：%lu\n",sizeof(num2));
    return 0;
}
