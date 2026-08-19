#ifndef _XUESHENG_H
#define _XUESHENG_H

#include <stdio.h>
#include <stdlib.h>
/// @brief 展示功能菜单
/// @param  
void cai_dan(void);


/// @brief 录入成绩
/// @param scores 
void luru_scores(int scores[]);


/// @brief 展示成绩
/// @param scores 数组名
/// @param num 数组容量
void zhan_scores(int scores[],int capacity);

/// @brief 删除成绩
/// @param scoers 数组的二级指针  
/// @param count 当前人数的指针
/// @param index 要删除的下标
//void delete_scores(int **scoers,int *count,int index);

/// @brief 成绩从低到高排序
/// @param scores 数组名
/// @param capacity 容量
void di_gao(int scores[], int capacity);

/// @brief 成绩从高到低排序
/// @param scores 数组名
/// @param capacity 容量
void gao_di(int scores[], int capacity);

/// @brief 判断满分人数
/// @param scores 数组名
/// @param capacity 容量
void man_scores(int scores[],int capacity);

/// @brief 判断不及格人数
/// @param scores 
/// @param capacity 
void no_jige(int scores[],int capacity);


void add_scores(int *scores,int capacity);
#endif