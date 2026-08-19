#include "xuesheng.h"

int main(int argc, char const *argv[])
{
    cai_dan(); // 显示菜单
    while (1)
    {
        int num;
        printf("请输入您需要的功能\n");
        scanf("%d", &num);

        if (num == 1)
        {
            init_score(5); // 初始化5个学生
        }
        else if (num == 2)
        {
            show_avg(); // 显示平均分
        }
        else if (num == 3)
        {
            scoer_max_min(stu,capacity);
        }
        else if (num == 4)
        {
           pai_xu();
        }
        else if (num == 5)
        {
            add_xs();
        }
        else if (num == 6)
        {
            
        }
        else if (num == 7)
        {
            
        }
        else if (num == 0)
        {
            
            break;
        }
        else
        {
            printf("无效输入，请重新选择\n");
        }
    }
    return 0;
}
