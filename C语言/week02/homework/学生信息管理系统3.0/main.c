#include "xuesheng.h"

// 全局变量
xs *arr;
int count = 0;



int main(int argc, char const *argv[])
{

    int num;

    cai_dan();

    while (1)
    {
        
        printf("请选择你需要的功能\n");
        scanf("%d", &num);
        
        if (num==1)
        {
            init_score();
        }
        if (num==2)
        {
            avg_coser();
        }
        if (num==3)
        {
            max_min_score();
        }
        if (num==4)
        {
            pai_xu();
        }
        if (num==5)
        {
            add_score();
        }
        if (num==6)
        {
            delete_score();
        }
        if (num==7)
        {
            min_max();
        }
        if (num==0)
        {
            break;
        }
        
        
    }
    printf("再见\n");

    return 0;
}
