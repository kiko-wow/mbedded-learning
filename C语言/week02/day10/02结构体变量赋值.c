#include <stdio.h>
#include <string.h>


typedef struct student
{
    char name[30];
    int id;
    char gender;
    float score;
} STU; // 小名

int main(int argc, char const *argv[])
{

    //1.直接赋值
    STU stu1 = {"胡桃",1,'M',90.f};
    printf("name:%s,id%d,gender%c,score%0.1f\n",stu1.name,stu1.id,stu1.gender,stu1.score);
    
    //2.用scanf手动输入
    STU stu2;
    scanf("%s %d %c %f",stu2.name,stu2.id,stu2.gender,stu2.score);
    printf("name:%s,id%d,gender%c,score%0.1f\n",stu2.name,stu2.id,stu2.gender,stu2.score);
    
    //3.逐一赋值
    STU stu3;
    stu3.id=3;
    stu3.gender='M';
    stu3.score=90.0f;
    
    
    return 0;
}
