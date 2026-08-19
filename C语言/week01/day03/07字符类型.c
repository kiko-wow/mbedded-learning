#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch = 'a';
    printf("ch= %c\n",ch);
    printf("char类型所占字节：%lu\n",sizeof(ch));
    printf("a所占字节：%lu\n",sizeof('a'));
    
    return 0;
}
