#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 60以下不及格
    // 60~80 中
    // 80 ~90 良
    // 90以上  优

    int score = 0;
    printf("请输入成绩：\n");
    scanf("%d", &score);
    if (score>=90)
    {
        printf("优秀\n");
    }
    else if (score>=80 && score<90)
    {
        printf("良好\n");
    }
    else if (score>=60 && score<80)
    {
        printf("及格\n");   
    }
    else
    {
        printf("不及格\n");
    }
    
    return 0;
}
