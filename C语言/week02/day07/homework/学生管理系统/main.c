#include "xuesheng.h"


//展示功能菜单



int main(int argc, char const *argv[])
{
    int xuhao;
    cai_dan();
    scanf("%d",&xuhao);
    switch (xuhao)
    {
    case 1:
        shuru_score();
        break;
    case 2:
    display_scores();
    break;
    case 3:
    
    
    default:
        break;
    }
    
    return 0;
}
