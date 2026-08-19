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
    struct student *prev;
} STU;

typedef struct linkhead
{
    STU *first;
    STU *last;
    int size;
}LH;

int main(int argc, char const *argv[])
{
    LH linkhead;
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

    stu5.prev=&stu4;
    stu4.prev=&stu3;
    stu3.prev=&stu2;
    stu2.prev=&stu1;
    stu1.prev=NULL;

    linkhead.first=&stu1;
    linkhead.last=&stu5;
    linkhead.size=5;

    printf("从前往后遍历：\n");
    STU *flag=linkhead.first;
    while (flag!=NULL)
    {
        printf("名字：%s ID：%d 性别：%c 成绩：%0.1f\n",
        flag->name,flag->id,flag->gender,flag->score);
        flag=flag->next;
    }

    printf("从后往前遍历：\n");
    flag=linkhead.last;
    while (flag!=NULL)
    {
        printf("名字：%s ID：%d 性别：%c 成绩：%0.1f\n",
        flag->name,flag->id,flag->gender,flag->score);
        flag=flag->prev;
    }
    
    

    return 0;
}


