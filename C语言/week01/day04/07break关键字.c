#include <stdio.h>
int main(int argc, char const *argv[])
{
    char skill = 0;
    printf("请输入您的技能\n");
    scanf("%c", &skill);
    switch (skill)
    {
    case 'q':
    case 'Q':
        printf("天女散花\n");
        break;
    case 'w':
    case 'W':
        printf("女神的宽恕\n");
        break;

    default:
        break;
    }
    return 0;
}
