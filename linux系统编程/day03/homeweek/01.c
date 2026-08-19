// //练习 1：基础 fork 与进程识别
// 编写一个程序，使用 fork() 创建一个子进程。在父子进程中分别打印它们的进程ID（PID）和父进程ID（PPID），以及是父进程还是子进程的提示信息。
// 练习题2：编写代码，父子进程各自运算不同的内容，子进程计算 1~100之间所有奇数的值，父进程计算1~100之间所有偶数的值
// 练习题3：尝试创建多个子进程，1个父亲创造3个儿子，而不是1个父亲创造1个儿子，儿子再创造儿子。而且要能够区分哪一个是父亲，三个儿子又分别是谁
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>



int main(int argc, char const *argv[])
{
    pid_t pid = fork();
    if (pid==-1)
    {
        perror("fork");
    }
    else if (pid==0)
    {
        printf("当前在子进程\n");
        printf("子进程号：%d\n",getpid());
        printf("父进程号：%d\n",getppid());
        int num;
        for (int i = 1; i < 101; i++)
        {
            
            if (i%2!=0)
            {
                num=i+num;
            }
            
        }
        printf("1-100的奇数和为：%d\n",num);
        
    }
    else if (pid>0)
    {
        printf("当前在父进程\n");
        printf("子进程号：%d\n",pid);
        printf("父进程号：%d\n",getppid());

        int num2;
        for (int j = 1; j < 101; j++)
        {
            if (j%2==0)
            {
                num2=j+num2;
            }
            
        }
        printf("1-100的偶数和为：%d\n",num2);
    }
    
    
    
    return 0;
}
