#include "xuesheng.h"

void cai_dan()
{
    printf("---------------\n");
    printf("1.录入学生成绩\n");
    printf("2.展示学生成绩\n");
    printf("3.删除某位学生的成绩\n");
    printf("4.增加某位学生成绩\n");
    printf("5.将成绩按照从低到高排序\n");
    printf("6.将成绩按照从高到低排序\n");
    printf("7.统计满分100的人数\n");
    printf("8.统计不及格学生的成绩\n");
    printf("9.计算全班学生的平均值\n");
    printf("0.退出本系统\n");
    printf("---------------\n");
}

void luru_scores(int scores[])
{
    for (int i = 0; i < 5; i++)
    {
        scores[i] = (i + 1) * 20;
    }
    printf("录入成功\n");
}

void zhan_scores(int scores[], int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        printf("%d \n", scores[i]);
    }
}

// void delete_scores(int **scoers,int *count,int index)
//{
// }

void di_gao(int scores[], int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        for (int j = 0; j + 1 < capacity - i; j++)
        {
            if (scores[j] > scores[j + 1])
            {
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < capacity; i++)
    {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

void gao_di(int scores[], int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        for (int j = 0; j + 1 < capacity - i; j++)
        {
            if (scores[j] < scores[j + 1])
            {
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < capacity; i++)
    {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

void man_scores(int scores[], int capacity)
{
    int man = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (scores[i] == 100)
        {
            man++;
        }
    }
    printf("%d 位不及格\n", man);
}

void no_jige(int scores[], int capacity)
{
    int man = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (scores[i] < 60)
        {
            man++;
        }
    }
    printf("%d 位不及格\n", man);
}