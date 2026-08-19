#include <stdio.h>

// #define ADD(a, b) a + b // 只要遇到ADD(a,b)  就自动替换为 a+b
#define ADD(a, b) (a + b) // 只要遇到ADD(a,b)  就自动替换为 (a+b)

int main(int argc, char const *argv[])
{
    // printf("ADD(3,4)*5 = %d\n", ADD(3, 4) * 5); // 3+4*5  -->23
    printf("ADD(3,4)*5 = %d\n", ADD(3, 4) * 5); // (3+4)*5  -->35

    return 0;
}