#ifndef _STUDENT_H
#define _STUDENT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct student
{
    char name[32];
    int id;
    char gender;
    float score;
}STU;


/// @brief 堆区开辟 容纳学生信息的空间
/// @param name 要赋值的学生姓名
/// @param id 要赋值的学生的id
/// @param gender 要赋值的学生的性别
/// @param score 要赋值的学生的成绩
/// @return 堆区开辟的学生空间的首地址
STU *get_stu(char *name,int id,char gender,float score);
void show_stu(STU *stu);


#endif