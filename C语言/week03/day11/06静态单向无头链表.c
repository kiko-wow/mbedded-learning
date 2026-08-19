#include <stdio.h>

typedef struct student
{
    // 数据域  用于存储学生信息
    char name[32];
    int id;
    char gender;
    float score;

    // 指针域  指向下一个节点的指针
    //  STU *next ;  执行到此处 还没有STU 所以不能用小名
    struct student *next;
} STU;

int main(int argc, char const *argv[])
{
    STU stu1 = {"亚索", 1, 'M', 90.0F};
    STU stu2 = {"永恩", 2, 'M', 92.0F};
    STU stu3 = {"瑞文", 3, 'F', 91.0F};
    STU stu4 = {"墨菲特", 4, 'M', 93.0F};
    STU stu5 = {"菲奥娜", 5, 'F', 94.0F};

    stu1.next = &stu2;
    stu2.next = &stu3;
    stu3.next = &stu4;
    stu4.next = &stu5;
    stu5.next = NULL;

    printf("第1个学生的信息：NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu1.name, stu1.id, stu1.gender, stu1.score);
    // stu1是整个链表第一个学生 stu1.next 是一个指针 指针取值 用->
    printf("第2个学生的信息：NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu1.next->name, stu1.next->id, stu1.next->gender, stu1.next->score);
    printf("第3个学生的信息：NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu1.next->next->name, stu1.next->next->id, stu1.next->next->gender, stu1.next->next->score);
    printf("第4个学生的信息：NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu1.next->next->next->name, stu1.next->next->next->id, stu1.next->next->next->gender, stu1.next->next->next->score);
    printf("第5个学生的信息：NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu1.next->next->next->next->name, stu1.next->next->next->next->id, stu1.next->next->next->next->gender, stu1.next->next->next->next->score);
    return 0;
}