#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char *name;
    int id;
    char gender;
    float score;
} STU; // 小名

int main(int argc, char const *argv[])
{
    STU *stu=(STU *)malloc(sizeof(STU));
    if (stu==NULL)
    {
        perror("malloc");
    }
    stu->id=1;
    stu->gender='M';
    stu->score=90.0f;

    stu->name = (char *)malloc(sizeof("胡桃"));
    if (stu->name==NULL)
    {
        perror("malloc");
    }
    strcpy(stu->name,"胡桃");
    
    printf("名字：%s 学号：%d 性别：%c 成绩：%0.1f\n", stu->name,stu->id,stu->gender,stu->score);
    
    free(stu->name);
    stu->name==NULL;
    
    
    
    
    return 0;
}
