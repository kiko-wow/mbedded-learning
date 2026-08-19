#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int fd = open("student.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("open");
    }

    char buff[23];
    // int ret = read(fd, buff, 22); // 从fd中 读取22个字节 放到buff里

    // //v我50   读数据的时候，考虑偏移量的问题，这一次读取到50，没有对光标进行刷新，下一次从50后面开始读
    // printf("buff:%s\n", buff);

    // ret = read(fd, buff, 22); // 从fd中 读取22个字节 放到buff里
    // printf("buff:%s\n", buff);  //v我51

    while (1)
    {
        char buff[23] = {0};
        int ret = read(fd, buff, 22); // 从fd中 读取22个字节 放到buff里
        if (ret == 0)
        {
            break;
        }

        printf("buff:%s\n", buff);
    }

    return 0;
}