#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 5; i++)
    {
        if (i==4)
        {
            continue;  //i==4  跳过本次 循环 后续的代码就不再执行了
        }

        printf("i=%d\n",i);
        
    }
    
    return 0;
}
