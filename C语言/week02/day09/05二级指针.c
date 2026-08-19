#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 100;
    int *p = &num;

    //将p的地址 赋值给二级指针 p2  因为本身就是一个地址，所以&p是个二级地址
    int **p2 = &p;
    printf("nun 的地址：%p\n", &num);
    printf("nun 的地址：%p\n", p);
    printf("num 的地址：%p\n", *p2);

    printf("p 的地址：%p\n",&p);
    printf("p 的地址：%p\n",*p2);

    printf("num 的值：%d\n",num);
    printf("num 的值：%d\n",*p);
    printf("num 的值：%d\n",**p2);
    
    
    
    
    return 0;
}
