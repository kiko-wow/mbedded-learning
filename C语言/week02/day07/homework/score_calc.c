#include "homework.h"

/**
 * @brief  将有效成绩收集到临时数组
 * @param  tmp  临时数组，用于存放有效成绩
 * @return 有效成绩个数
 */
static int collect_valid(int tmp[])
{
    int i;
    int n = 0;

    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] != EMPTY) {
            tmp[n++] = scores[i];
        }
    }
    return n;
}

/**
 * @brief  将临时数组中的成绩写回全局 scores（剩余位置置为空）
 * @param  tmp  已排序的有效成绩
 * @param  n    有效成绩个数
 * @return 无
 */
static void write_back(const int tmp[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        scores[i] = tmp[i];
    }
    for (; i < MAX_STU; i++) {
        scores[i] = EMPTY;
    }
}

/**
 * @brief  统计满分（100 分）的人数
 * @return 满分人数
 */
int count_full(void)
{
    int i;
    int full = 0;

    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] == FULL) {
            full++;
        }
    }
    return full;
}

/**
 * @brief  统计不及格（低于 60 分）的人数
 * @return 不及格人数
 */
int count_fail(void)
{
    int i;
    int fail = 0;

    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] != EMPTY && scores[i] < PASS) {
            fail++;
        }
    }
    return fail;
}

/**
 * @brief  计算全班同学成绩的平均值
 * @return 平均分；若无人则返回 0.0
 */
double calc_average(void)
{
    int i;
    int sum = 0;

    if (count == 0) {
        return 0.0;
    }

    for (i = 0; i < MAX_STU; i++) {
        if (scores[i] != EMPTY) {
            sum += scores[i];
        }
    }
    return (double)sum / count;
}

/**
 * @brief  将成绩从高到低排序
 * @note   仅对有效成绩排序，空位保持 EMPTY
 * @return 无
 */
void sort_desc(void)
{
    int tmp[MAX_STU];
    int n;
    int i, j;
    int t;

    if (count == 0) {
        printf("当前没有学生成绩，无法排序。\n");
        return;
    }

    n = collect_valid(tmp);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tmp[j] < tmp[j + 1]) {
                t = tmp[j];
                tmp[j] = tmp[j + 1];
                tmp[j + 1] = t;
            }
        }
    }
    write_back(tmp, n);
    printf("已按从高到低排序。\n");
}

/**
 * @brief  将成绩从低到高排序
 * @note   仅对有效成绩排序，空位保持 EMPTY
 * @return 无
 */
void sort_asc(void)
{
    int tmp[MAX_STU];
    int n;
    int i, j;
    int t;

    if (count == 0) {
        printf("当前没有学生成绩，无法排序。\n");
        return;
    }

    n = collect_valid(tmp);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tmp[j] > tmp[j + 1]) {
                t = tmp[j];
                tmp[j] = tmp[j + 1];
                tmp[j + 1] = t;
            }
        }
    }
    write_back(tmp, n);
    printf("已按从低到高排序。\n");
}
