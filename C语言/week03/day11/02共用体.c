#include <stdio.h>
#include <string.h>

union student
{
    char name[32];
    double score;
    int id;
    char gender;
};

int main(int argc, char const *argv[])
{
    union student stu;
    printf("共用体所占字节:%lu\n",sizeof(stu));
    strcpy(stu.name,"亚索");
    printf("NAME:%s\n",stu.name);
    stu.id = 97;  // 'a'   将stu.name 的数据覆盖掉
    printf("NAME:%s\n",stu.name);

    return 0;
}