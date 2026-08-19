#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int fd = open("test.txt", O_RDWR | O_CREAT,0644);
    if (fd == -1)
    {
        perror("open");
    }

    //write(fd,"0123456789", 10);
    //lseek(fd, 0, SEEK_SET);
    char buff[11]={0};
    int ret = read(fd, buff, 5);
    printf("buff:%s\n", buff);
    write(fd,"AB",2);

    return 0;
}
