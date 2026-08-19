#include <stdio.h>
#include <string.h>

// enum season
// {
//     spring, // 默认 spring == 0
//     summer, // 默认 summer == 1
//     autumn, // 默认 autumn == 2
//     winter  // 默认winter == 3
// };

// enum season
// {
//     spring = 1, // 指定spring == 1
//     summer,     //  2
//     autumn,     // 3
//     winter      // 4
// };

enum season
{
    spring,     // 默认是0
    summer,     // 默认是1
    autumn = 3, // 指定为3
    winter      //  从指定处 接着往下进行编号 指定为4
};

int main(int argc, char const *argv[])
{
    enum season day = autumn;
 
    printf("today is %d\n", day);
    return 0;
}