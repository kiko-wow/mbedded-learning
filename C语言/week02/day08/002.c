#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=100;
    printf("num的地址：%p\n",&num);

    int *p =&num;
    printf("p中储存的地址：%p",p);
    printf("num=%d\n",num);
    printf("*p = %d\n",*p);
    printf("*&num= %d",*&num);
    return 0;
}
