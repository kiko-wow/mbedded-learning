#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice = 0;
    printf("请输入您想要的菜1-4\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("1.大饼卷肉\n");
        break;

    case 2:
        printf("2.焖子\n");
        break;

    case 3:
        printf("3.板面\n");
        break;
    default:
        printf("4.驴肉火烧\n");
        break;
    }
    return 0;
}
