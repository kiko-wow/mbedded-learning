#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd=open("out.txt",O_WRONLY|O_CREAT|O_TRUNC,0644);
    if (fd==-1)
    {
        perror("open");
        return 1;
    }

    dup2(fd,1);
    printf(" 这行printf 内容会写入out.txt 而不是终端\n");

    write(1,"write 直接写入，不受缓冲区约束\n",22);
    
    return 0;
}
