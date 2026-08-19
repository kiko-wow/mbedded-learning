#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE * fd = fopen("./student.txt","w");
    if (fd==NULL)
    {
        perror("fopen");
    }
    
    fputc('a',fd);
    fputc('b',fd);
    fputc('\n',fd);
    fputs("姓名:胡桃 ID:1001 性别:女 成绩:98.0",fd);
    return 0;
}
