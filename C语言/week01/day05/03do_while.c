#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // 初始化时间种子，确保每一次随机数不一样
    srand(time(NULL));

    // 随机生一个 num
    int num = 0;
    // 随机生成 0 ~ 2^31-1

    num= rand()%1001; // 如何操作保证 num 是 0 ~ 1000
    int guess =0;
    do
    {
        printf("请输入您的猜想\n");
        scanf("%d",&guess);
        if (guess<num)
        {
            printf("猜小了\n");
        }
        else if (guess>num)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("猜对了\n");
        }
        
        
    } while (guess!=num);

    printf("欢迎下次光临\n");
    
    return 0;
}
