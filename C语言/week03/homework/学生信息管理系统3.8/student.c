#include "student.h"
STU *get_stu(char *name,int id,char gender,float score)
{
    STU *flag = (STU *)malloc(sizeof(STU));
    if (flag==NULL)
    {
        perror("STU malloc");
    }
    //对学生空间进行赋值
    flag->id=id;
    flag->gender=gender;
    flag->score=score;
    strcpy(flag->name,name);

    return flag;
    
}

void show_stu(STU *stu)
{
    printf("NAME:%s ID: %d GENDER:%c SCORE:%0.1f\n",
    stu->name,stu->id,stu->gender,stu->score);
}