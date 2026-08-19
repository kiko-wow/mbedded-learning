#ifndef _STUDENT_H
#define _STUDENT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[32];
    int id;
    char gender;
    float score;
}STU;

/// @brief 堆区开辟学生成绩的空间
/// @param capacity 容纳学生指针的个数
/// @return 堆区开辟数组空间首地址
STU ** init_stu(int capacity);

/// @brief 展示学生数据
/// @param stu 学生结构体指针数组的首地址
/// @param capacity 学生个数
void show_stu(STU **stu,int capacity);


/// @brief 将学生成绩按照从大到小排列
/// @param stu 学生空间首地址
/// @param capacity 学生数量
void bubble_big_to_small(STU **stu,int capacity);

/// @brief 对数组进行扩容
/// @param stu 要扩容的数组的首地址的地址
/// @param capacity 原来数组容量
void add_stu(STU ***stu,int *capacity);



#endif