#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year = 0;
    printf("请您输入一个闰年\n");

    while (1)
    {
        scanf("%d", &year);
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            //printf("您输入的是闰年\n");
            break; //如果输入的就是闰年，就可以跳出while(1)
        }
        else{
            printf("您输入的不是闰年\n");
        }
    }
        // 怎么保证代码到这 一定是闰年
    return 0;
}
