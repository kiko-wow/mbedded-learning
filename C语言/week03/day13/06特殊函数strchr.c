#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char dest[32] = "helloworld";
    char ch = 'o';
    printf("dest的地址：%p\n",dest);
    printf("o第一次出现的位置：%p\n",strchr(dest,ch));


    return 0;
}