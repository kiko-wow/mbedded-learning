#ifndef _NODE_H
#define _NODE_H
#include "student.h"

typedef struct node
{
    STU *stu;
    struct node *next;
    struct node *prev;
}NODE;


#endif