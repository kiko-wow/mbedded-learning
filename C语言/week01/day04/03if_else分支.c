#include <stdio.h>
int main(int argc, char const *argv[])
{

    int score = 0;
    printf("请输入你的成绩：\n");
    scanf("%d",&score);


    if (score >=60)
    {
        printf("恭喜你及格了\n");
    }
    else
    {
        printf("不及格");
    }
    
    return 0;
}
