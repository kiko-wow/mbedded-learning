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
    STU stu1={"胡桃",1,'M',90.0F};
    STU *stu=&stu1;
    //stu 是一个结构体变量指针  里面存储的初始地址 stu1的地址
    //stu == &stu1     *stu == stu1
    printf("名字：%s 学号：%d 性别：%c 成绩：%0.1f\n",stu1.name,stu1.id,stu1.gender,stu1.score);
    printf("名字：%s 学号：%d 性别：%c 成绩：%0.1f\n",(*stu).name,(*stu).id,(*stu).gender,(*stu).score);

    //如果是一个结构体指针 用变量名 + -> 可以取出成员
    printf("名字：%s 学号：%d 性别：%c 成绩：%0.1f\n",stu->name,stu->id,stu->gender,stu->score);
    printf("名字：%s 学号：%d 性别：%c 成绩：%0.1f\n",(&stu1)->name,(&stu1)->id,(&stu1)->gender,(&stu1)->score);
    return 0;
}