#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    // 打开 当前路径下的student.txt  以写的模式打开 如果不存在就创建
    //  创建文件给的权限值 拥有者、同组用户、访客，全部可读可写可执行
    int fd = open("student.txt", O_WRONLY | O_CREAT, 0777);

    //思考1：打开模式 与 文件本身的权限值有什么关系？
    // 创建文件可读可写可执行  但是我们这一次操作仅仅是 以写的模式

    //思考2：请利用ls -l查看student.txt的权限值，与我们mode比较
    // linux open函数 受到掩码的约束  掩码：umask   我们得到的mode 实际是 mode & (~umask)
    if (fd == -1)
    {
        perror("open");
    }
    printf("fd = %d\n", fd);

    return 0;
}