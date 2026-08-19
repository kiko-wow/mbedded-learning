#include <stdio.h>
int main(int argc, char const *argv[])
{
   // int *p=NULL;
//printf("指针p的地址为：%p",p);

    int num;
    int *p = &num;
    printf("num的地址为%d",&num);
    printf("p的地址为：%p",p);
    
    return 0;
}
