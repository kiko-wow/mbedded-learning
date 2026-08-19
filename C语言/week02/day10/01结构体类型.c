#include <stdio.h>
//char name[30];
//{
//    int id;
//    char gender;
//    float score;
//};

typedef struct student
{
    char name[30];
    int id;
    char gender;
    float score;
} STU; // 小名


int main(int argc, char const *argv[])
{
    struct student stu1 = {"胡桃",001,'F',99.9f};
    STU stu2 = {"火男",002,'M',66.6f};

    printf("name:%s,id%d,gender%c,score%0.1f\n",stu1.name,stu1.id,stu1.gender,stu1.score);
    printf("name:%s,id%d,gender%c,score%0.1f\n",stu2.name,stu2.id,stu2.gender,stu2.score);

    if (stu1.score>stu2.score)
    {
        printf("成绩比较高的是：%s\n",stu1.name);
    }
    else
    {
        printf("成绩比较高的是：%s\n",stu2.name);
    }
    
    return 0;
}
