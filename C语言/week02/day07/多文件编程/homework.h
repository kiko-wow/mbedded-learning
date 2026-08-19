#ifndef _HOMEWORK_H
#define _HOMEWORK_H

//资源引入
#include <stdio.h>

/// @brief 计算数组内数据的平均值
/// @param arr 数组名
/// @param capacity 数组容量
/// @return 计算出的平均值
int score_averge(int arr[],int capacity);

/// @brief 对学生成绩进行展示
/// @param arr 要展示的数组的名字
/// @param capacity 要展示的数组的容量
void show_score(int arr[],int capacity);

/// @brief 对学生成绩 用冒泡排序 从小到大
/// @param arr 要排序的数组
/// @param capacity 数组容量
void bubble_small_to_big(int arr[],int capacity);

#endif