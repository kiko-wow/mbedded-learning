//1.封装一个方法，返回两个整数里较大的那个
#include <stdio.h>
void biJiao(int num1, int num2);
int main(int argc, char const *argv[])
{
    int num1=2;
    int num2=5;
    biJiao(num1,num2);
    printf("\n");
    return 0;
}
void biJiao(int num1,int num2){
    if (num1>num2)
    {
        printf("num1%d大",num1);
    }
    else{
        printf("num2%d大",num2);
    }
    
}
