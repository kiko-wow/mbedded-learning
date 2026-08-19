#include "student.h"


int main(int argc, char const *argv[])
{
    STU ** stu;


    int capacity = 0;
    printf("欢迎您使用本系统2\n");
    
    printf("请您输入您想要的学生的数量\n");
    scanf("%d",&capacity);
    stu = init_stu(capacity);

    //展示学生信息
    show_stu(stu,capacity);

    bubble_big_to_small(stu,capacity);
    printf("从大到小排序后的结果\n");
    show_stu(stu,capacity);   
    //扩容
    add_stu(&stu,&capacity);

    printf("增加学生后的结果\n");
    show_stu(stu,capacity); 
    
    
    bubble_big_to_small(stu,capacity);
    printf("从大到小排序后的结果\n");
    show_stu(stu,capacity);  



   

    return 0;
}
