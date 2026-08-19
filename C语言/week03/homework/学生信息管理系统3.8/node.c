#include "node.h"

NODE *get_node(STU *stu)
{
    NODE *flag = (NODE *)malloc(sizeof(NODE));
    if (flag== NULL)
    {
        perror("NODE malloc");
    }
    flag->stu=stu;
    flag->next=NULL;
    flag->prev=NULL;
    return flag;
}