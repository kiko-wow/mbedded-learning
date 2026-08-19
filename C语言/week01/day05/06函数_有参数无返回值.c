#include <stdio.h>

void show_max(int num1,int num2);

int main(int argc, char const *argv[])
{
    int num1=3;
    int num2=5;
    show_max(num1,num2);
    return 0;
}

void show_max(int num1,int num2)
{
    if (num1>num2)
    {
        printf("%d比较大\n",num1);
    }
    else
    {
        printf("%d比较大\n",num2);
    }
    
}