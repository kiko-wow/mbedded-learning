#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[32];
    int id;
    char gender;
    float score;
} STU;

int main(int argc, char const *argv[])
{
    int capacity = 5;

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
        stu[i]->id = i;
        stu[i]->gender = 'M';
        stu[i]->score = (i + 1) * 10;
        strcpy(stu[i]->name, "胡桃");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("名字：%s ID：%d 性别：%c 成绩：%0.1f \n", stu[i]->name, stu[i]->id, stu[i]->gender, stu[i]->score);
    }
    for (int i = 0; i < 5; i++)
    {
        free(stu[i]);
        stu[i] = NULL;
    }

    free(stu);
    stu = NULL;

    return 0;
}
