#include "homework.h"

/**
 * @brief  程序入口：循环显示菜单并执行对应功能，直至退出
 * @return 正常退出返回 0
 */
int main(void)
{
    int choice;
    int i;

    /* 启动时将所有槽位置为空 */
    for (i = 0; i < MAX_STU; i++) {
        scores[i] = EMPTY;
    }
    count = 0;

    while (1) {
        print_menu();
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n') {
                ;
            }
            printf("输入无效，请重新选择。\n");
            continue;
        }

        switch (choice) {
        case 1:
            input_scores();
            break;
        case 2:
            display_scores();
            break;
        case 3:
            delete_score();
            break;
        case 4:
            add_score();
            break;
        case 5:
            printf("满分（100）人数：%d\n", count_full());
            break;
        case 6:
            printf("不及格人数：%d\n", count_fail());
            break;
        case 7:
            if (count == 0) {
                printf("当前没有学生成绩，无法计算平均分。\n");
            } else {
                printf("全班平均分：%.2f\n", calc_average());
            }
            break;
        case 8:
            sort_desc();
            if (count > 0) {
                display_scores();
            }
            break;
        case 9:
            sort_asc();
            if (count > 0) {
                display_scores();
            }
            break;
        case 10:
            printf("已退出学生成绩管理系统，再见！\n");
            return 0;
        default:
            printf("无此选项，请输入 1~10。\n");
            break;
        }
    }
}
