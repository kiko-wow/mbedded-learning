#ifndef _NODE_H
#define _NODE_H

#include "student.h"

typedef struct node
{
    STU *stu;
    struct node *next;
    struct node *prev;
}NODE;

/// @brief 堆区开辟一个node
/// @param stu 要给node赋值的学生的地址
/// @return 堆区开辟的node的首地址
NODE *get_node(STU *stu);


#endif