#include "student.h"

STU **init_stu(int capacity)
{
    // 堆区开辟 结构体指针数组
    STU **stu = (STU **)malloc(capacity * sizeof(STU *));
    if (stu == NULL)
    {
        perror("malloc");
    }
    for (int i = 0; i < capacity; i++)
    {
        stu[i] = (STU *)malloc(sizeof(STU));
        if (stu[i] == NULL)
        {
            perror("malloc");
        }
        // printf("请您依次输入第%d个学生的信息，用空格隔开：姓名 学号 性别 成绩\n",i);
        // scanf("%s %d %c %f",stu[i]->name,&(stu[i]->id),&(stu[i]->gender),&(stu[i]->score));
        stu[i]->id = i;
        stu[i]->gender = 'M';
        stu[i]->score = (i + 1) * 10;
        strcpy(stu[i]->name, "亚索");
    }

    return stu;
}

void show_stu(STU **stu, int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
               stu[i]->name, stu[i]->id, stu[i]->gender, stu[i]->score);
    }
}

void bubble_big_to_small(STU **stu, int capacity)
{
    for (int i = 0; i < capacity - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j + 1 < capacity - i; j++)
        {
            if (stu[j]->score < stu[j + 1]->score)
            {
                STU *temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0) // 如果flag 还是0 证明 没有发生交换 证明已经有序  所以直接跳出循环即可
        {
            break;
        }
    }
}


void add_stu(STU ***stu,int *capacity)
{
    *capacity = *capacity + 1;
    *stu = (STU **)realloc(*stu,*capacity*sizeof(STU*));
    if (*stu == NULL)
    {
        perror("realloc");
    }
    //stu是个三级指针  *stu是二级指针，数组名  *stu + [] 是一级指针
    (*stu)[*capacity-1] = (STU *)malloc(sizeof(STU));

    (*stu)[*capacity-1]->id = *capacity-1;
    (*stu)[*capacity-1]->gender = 'M';
    (*stu)[*capacity-1]->score = (*capacity) *10;
    strcpy( (*stu)[*capacity-1]->name,"亚索");
}