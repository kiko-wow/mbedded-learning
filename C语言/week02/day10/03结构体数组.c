#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[32];
    int id;
    char gender;
    float score;
} STU; // 小名

int main(int argc, char const *argv[])
{
    STU stu[3] = {
        {"亚索", 1, 'M', 90.0F},
        {"瑞文", 2, 'F', 92.0F},
        {"永恩", 3, 'M', 94.0F},
    };
    for (int i = 0; i < 3; i++)
    {
        printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
               stu[i].name, stu[i].id, stu[i].gender, stu[i].score);
    }

    return 0;
}