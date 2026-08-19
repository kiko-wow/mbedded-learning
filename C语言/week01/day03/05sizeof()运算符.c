#include <stdio.h>
int main(int argc, char const *argv[])
{
    short num1 = 100;
    int num2 = 100;
    long num3 = 100;
    printf("num1=%hd\n", num1);
    printf("num2=%d\n", num2);
    printf("num3=%ld\n", num3);
    printf("short所占字节个数：%lu\n",sizeof(num1));
    printf("int所占字节个数：%lu\n",sizeof(num2));
    printf("long所占字节个数：%lu\n",sizeof(num3));
    return 0;
}
