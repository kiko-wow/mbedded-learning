#include "homework.h"

/* 全局成绩数据：空位用 EMPTY 标记 */
int scores[MAX_STU];
int count = 0;

/**
 * @brief  将成绩数组全部初始化为空位
 * @return 无
 */
static void clear_scores(void)
{
    int i;
    for (i = 0; i < MAX_STU; i++) {
        scores[i] = EMPTY;
    }
    count = 0;
}

/**
 * @brief  打印系统功能菜单
 * @return 无
 */
void print_menu(void)
{
    printf("\n======== 学生成绩管理系统 ========\n");
    printf("1. 手动录入学生成绩\n");
    printf("2. 展示学生成绩\n");
    printf("3. 删除某个学生成绩\n");
    printf("4. 增加某个学生成绩\n");
    printf("5. 统计满分人数\n");
    printf("6. 统计不及格人数\n");
    printf("7. 计算全班平均分\n");
    printf("8. 成绩从高到低排序\n");
    printf("9. 成绩从低到高排序\n");
    printf("10. 退出本系统\n");
    printf("请选择功能编号：");
}

/**
 * @brief  手动录入 10 名学生的成绩
 * @note   若之前已有数据，将全部覆盖并重新录入
 * @return 无
 */
void input_scores(void)
{
    int i;
    int score;

    clear_scores();
    printf("请依次录入 %d 名学生的成绩（0~100）：\n", MAX_STU);
    for (i = 0; i < MAX_STU; i++) {
        while (1) {
            printf("第 %d 名学生成绩：", i + 1);
            if (scanf("%d", &score) != 1) {
                while (getchar() != '\n') {
                    ;
                }
                printf("输入无效，请重新输入。\n");
                continue;
            }
            if (score < 0 || score > FULL) {
                printf("成绩须在 0~100 之间，请重新输入。\n");
                continue;
            }
            break;
        }
        scores[i] = score;
    }
    count = MAX_STU;
    printf("录入完成，共 %d 名学生。\n", count);
}

/**
 * @brief  展示当前所有有效学生的成绩
 * @return 无
 */
void display_scores(void)
{
    int i;
    int no = 0;

    if (count == 0) {
        printf("当前没有学生成绩，请先录入。\n");
        return;
    }

    printf("----- 学生成绩一览（共 %d 人）-----\n", count);
    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] == EMPTY) {
            continue;
        }
        no++;
        printf("第 %d 名：%d 分\n", no, scores[i]);
    }
}

/**
 * @brief  按有效序号删除某一名学生的成绩
 * @note   删除后产生空位，之后才允许增加新成绩
 * @return 无
 */
void delete_score(void)
{
    int i;
    int no = 0;
    int target;
    int found = 0;

    if (count == 0) {
        printf("当前没有学生成绩，无法删除。\n");
        return;
    }

    display_scores();
    printf("请输入要删除的学生序号（1~%d）：", count);
    if (scanf("%d", &target) != 1) {
        while (getchar() != '\n') {
            ;
        }
        printf("输入无效。\n");
        return;
    }

    if (target < 1 || target > count) {
        printf("序号超出范围。\n");
        return;
    }

    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] == EMPTY) {
            continue;
        }
        no++;
        if (no == target) {
            printf("已删除第 %d 名学生成绩（原成绩：%d）。\n", target, scores[i]);
            scores[i] = EMPTY;
            count--;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到对应学生。\n");
    }
}

/**
 * @brief  增加一名学生的成绩
 * @note   满员（10 人）时必须先删除一名才能增加
 * @return 无
 */
void add_score(void)
{
    int i;
    int score;
    int slot = -1;

    if (count >= MAX_STU) {
        printf("已满员（%d 人），请先删除一名学生再增加。\n", MAX_STU);
        return;
    }

    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] == EMPTY) {
            slot = i;
            break;
        }
    }

    if (slot < 0) {
        printf("未找到空位，无法增加。\n");
        return;
    }

    while (1) {
        printf("请输入新增学生成绩（0~100）：");
        if (scanf("%d", &score) != 1) {
            while (getchar() != '\n') {
                ;
            }
            printf("输入无效，请重新输入。\n");
            continue;
        }
        if (score < 0 || score > FULL) {
            printf("成绩须在 0~100 之间，请重新输入。\n");
            continue;
        }
        break;
    }

    scores[slot] = score;
    count++;
    printf("增加成功，当前共 %d 名学生。\n", count);
}
