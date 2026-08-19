#include <stdio.h>

void my_strcpy(char *dest,char *source);
int main(int argc, char const *argv[])
{
    char dest[32];
    char source[]="甄姬";

    my_strcpy(dest,source);

    printf("dest = %s\n",dest);
    return 0;
}

void my_strcpy(char *dest,char *source)
{
    int num = 0;
    while (source[num]!='\0')
    {
        dest[num]=source[num];
        num++;
    }
    dest[num]='\0';
    
}
