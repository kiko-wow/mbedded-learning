#ifndef _XUESHENG_H
#define _XUESHENG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




// 定义学生结构体
typedef struct xuesheng
{
    char name[50];   // 姓名
    int id;          // 序号
    char gender[10]; // 性别
    float score;     // 成绩
} xs;

extern int capacity;
extern xs **stu;



void cai_dan(void);
void init_score(int n);
void show_avg(void);
void scoer_max_min(xs **stu, int capacity);
void pai_xu();
void add_xs();

#endif
