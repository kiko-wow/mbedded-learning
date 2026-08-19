#ifndef _XUESHENG_H
#define _XUESHENG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct xuesheng
{
    char name[20];
    int id;
    char gender[20];
    float score;
} xs;


// 全局变量声明（定义在 main.c）
extern xs *arr;
extern int count;


/// @brief 打印功能菜单
/// @param
void cai_dan(void);

/// @brief 初始化学生数据
void init_score(void);

/// @brief 计算平均分
void avg_coser(void);

/// @brief 列出最大成绩名字，最小成绩名字
void max_min_score(void);

/// @brief 成绩排序，打印名字
/// @param  
void pai_xu(void);


/// @brief 先移除一位学生，再添加一位学生
/// @param  
void add_score(void);

/// @brief 移除一位学生
/// @param  
void delete_score(void);

/// @brief 按照成绩大小，从小到大排序
/// @param  
void min_max(void);

#endif
