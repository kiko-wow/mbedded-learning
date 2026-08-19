#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int fd = open("test2.txt",O_RDONLY);
    if (fd==-1)
    {
        perror("open");
    }
    int fd2 = open("test2_copy.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    

    
    while (1)
    {
        char buff[1024]={0};
        int ret = read(fd,buff,30);
        if (ret==0)
        {
            break;
        }
        write(fd2,buff,ret);
        
    }
    

    return 0;
}
