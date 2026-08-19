#include <stdio.h>

void my_swap(int *num1, int *num2);
int main(int argc, char const *argv[])
{
    int num1 = 3;
    int num2 = 4;
    printf("交换前num1= %d num2= %d\n", num1, num2);
    my_swap(&num1, &num2);
    printf("交换后num1= %d num2= %d\n", num1, num2);
    return 0;
}

void my_swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}