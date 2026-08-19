#ifndef _HOMEWORK_H
#define _HOMEWORK_H

#include <stdio.h>

#define MAX_STU 10 /* 班级最大人数 */
#define EMPTY   -1 /* 空位标记：该槽位无人 */
#define PASS    60 /* 及格线 */
#define FULL    100 /* 满分 */

/* 成绩数组与有效人数（在 score_io.c 中定义） */
extern int scores[MAX_STU];
extern int count;

/**
 * @brief  打印系统功能菜单
 * @return 无
 */
void print_menu(void);

/**
 * @brief  手动录入 10 名学生的成绩
 * @note   若之前已有数据，将全部覆盖并重新录入
 * @return 无
 */
void input_scores(void);

/**
 * @brief  展示当前所有有效学生的成绩
 * @return 无
 */
void display_scores(void);

/**
 * @brief  按有效序号删除某一名学生的成绩
 * @note   删除后产生空位，之后才允许增加新成绩
 * @return 无
 */
void delete_score(void);

/**
 * @brief  增加一名学生的成绩
 * @note   满员（10 人）时必须先删除一名才能增加
 * @return 无
 */
void add_score(void);

/**
 * @brief  统计满分（100 分）的人数
 * @return 满分人数
 */
int count_full(void);

/**
 * @brief  统计不及格（低于 60 分）的人数
 * @return 不及格人数
 */
int count_fail(void);

/**
 * @brief  计算全班同学成绩的平均值
 * @return 平均分；若无人则返回 0.0
 */
double calc_average(void);

/**
 * @brief  将成绩从高到低排序
 * @note   仅对有效成绩排序，空位保持 EMPTY
 * @return 无
 */
void sort_desc(void);

/**
 * @brief  将成绩从低到高排序
 * @note   仅对有效成绩排序，空位保持 EMPTY
 * @return 无
 */
void sort_asc(void);

#endif
