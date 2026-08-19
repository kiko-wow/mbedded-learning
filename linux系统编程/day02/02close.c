#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    close(1);
    int fd = open("student.txt",O_WRONLY | O_CREAT,0664);
    if (fd == -1)
    {
        perror("open");
    }
    printf("fd=%d\n",fd);
    
    return 0;
}
