#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char haystack[32] = "亚索永恩瑞文";
    char needle[10] = "永恩";
    printf("dest的地址：%p\n",haystack);
    printf("永恩第一次出现的位置：%p\n",strstr(haystack,needle));
    return 0;
}