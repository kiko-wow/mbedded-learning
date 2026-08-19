#include "xuesheng.h"

int main(int argc, char const *argv[])
{
    int num;
    int *scores = NULL;
    int count = 5;
    scores = (int *)malloc(5 * sizeof(int));

    printf("请输入你需要的功能数字0-9\n");

    while (1)
    {
        cai_dan();
        scanf("%d", &num);
        if (num == 1)
        {
            luru_scores(scores);
        }
        if (num == 2)
        {
            zhan_scores(scores, count);
        }
        if (num == 3)
        {
        }
        if (num == 4)
        {
        }
        if (num == 5)
        {
            di_gao(scores, count);
        }
        if (num == 6)
        {
            gao_di(scores, count);
        }
        if (num == 7)
        {
            man_scores(scores, count);
        }
        if (num==8)
        {
            no_jige(scores,count);
        }
        
        if (num == 0)
        {
            free(scores);
            return 0;
        }
    }
        
    
    
    
    for (int i = 0; i < 5; i++)
        {
            printf("%d \n", scores[i]);
        }

        return 0;
    
}