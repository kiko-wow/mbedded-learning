#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    if (argc!=3)
    {
        fprintf(stderr,"用法：./mycp 源文件 目标文件\n");
        return 1;
    }
    int fd_src = open(argv[1],O_RDONLY);
    if (fd_src==-1)
    {
        perror("open src");
        return 1;
    }
    int fd_dst = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0644);
    if (fd_dst==-1)
    {
        perror("open dst");
        return 1;
    }

    char buf[1024];
    int n,total=0;
    while ((n=read(fd_src,buf,sizeof(buf)))>0)
    {
        if (write(fd_dst,buf,n)!=n)
        {
            perror("write");
            break;
            total +=n;
        }
        
    }
    close(fd_src);
    close(fd_dst);
    printf("复制完成，共%d字节\n",total);
    
    
    
    return 0;
}