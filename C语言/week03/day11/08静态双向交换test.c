#include <stdio.h>


typedef struct student
{
    char name[32];
    int id;
    char gender;
    float score;
} STU;


typedef struct node
{
    STU *stu;          // 指向学生 数据
    struct node *next; // 指向下一个节点
    struct node *prev; // 指向上一个节点


} Node;


int main(int argc, char const *argv[])
{
    STU stu1 = {"亚索", 1, 'M', 90.0F};
    Node node1;
    node1.stu = &stu1;


    STU stu2 = {"艾瑞莉娅", 2, 'F', 92.0F};
    Node node2;
    node2.stu = &stu2;


    node1.next = &node2;
    node2.prev = &node1;


    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           node1.stu->name, node1.stu->id, node1.stu->gender, node1.stu->score);


    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           node2.stu->name, node2.stu->id, node2.stu->gender, node2.stu->score);


    STU *flag = node1.stu;
    node1.stu = node2.stu;
    node2.stu = flag;


    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           node1.stu->name, node1.stu->id, node1.stu->gender, node1.stu->score);


    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           node2.stu->name, node2.stu->id, node2.stu->gender, node2.stu->score);
    return 0;
}
