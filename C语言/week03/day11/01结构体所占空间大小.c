#include <stdio.h>

int main(int argc, char const *argv[])
{
    typedef struct student
{
    //假如 结构体成员所占字节 从0开始编号
    char name[32];  // 所占字节：0~31
    int id;    // int类型占4个字节，所以起始编号必须是 4的整数倍   32是4的整数倍 所以所占字节 32~35
    //偏移4个字节   36~39
    double score; // double类型 占8个字节，起始位置必须是8的倍数，36不是8的倍数.但是40是8的倍数：所占字节40~47
    char gender;  //char 占1个字节 48是1的倍数：48
    //0~48  一共49个字节，不是最大单一类型 8 的整数倍
    // 补齐7个字节，到55  一共 0~55  一共56个字节
} STU;
    
    return 0;
}
