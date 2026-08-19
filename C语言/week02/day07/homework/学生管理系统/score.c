#include "xuesheng.h"

int scores[MAX_STU];
int num_scores = 0;

//展示功能菜单
void cai_dan(void){
    printf("-----学生成绩管理系统-----\n");
    printf("1.录入学生的成绩\n");
    printf("2.展示学生成绩\n");
    printf("3.删除某位学生的成绩\n");
    printf("4.增加某一位学生的成绩\n");
    printf("5.统计满分为100的人数\n");
    printf("6.统计不及格学生的人数\n");
    printf("7.计算全班学生成绩的平均值\n");
    printf("8.将成绩从高到低排序\n");
    printf("9.将成绩从低到高排序\n");
    printf("0.退出系统\n");
    printf("-----请输入选项0-9-----\n");
}

//录入10个成绩
void shuru_scores(void){
    printf("请依次输入%d名学生的成绩\n",MAX_STU);
    for (int i = 0; i < MAX_STU; i++)
    {
        printf("请输入第%d位学生的成绩：",i+1);
        scanf("%d",&scores[i]);
        while (scores[i]<0 || scores[i]>100)
        {
            printf("成绩应在1-100之间，请重新输入：");
            scanf("%d",&scores[i]);
        }
        
    }
    num_scores= MAX_STU;
    printf("录入完成！\n");
    

}

//展示所有成绩
void display_scores(void){
    if (num_scores==0)
    {
        printf("当前没有成绩记录\n");
        return;
    }
    printf("当前共有 %d 名学生的成绩：\n",num_scores);
    for (int i = 0; i < num_scores; i++)
    {
        printf("序号 %d:%d \n",i+i,scores[i]);
    }
}

//删除指定序号的学生成绩（序号从1开始）
void delete_scores(void){
    if (num_scores==0)
    {
        printf("没有可删除的成绩！\n");
        return;
    }
    int index;
    printf("请输入要删除的学生序号 (1-%d)",num_scores);
    scanf("%d",&index);
    if (index <1 || index > num_scores)
    {
        printf("输入的序号无效！\n");
        return;
    }
    for (int i = index-1; i < num_scores-1; i++)
    {
        scores[i]=scores[i+1];
    }
    num_scores--;
    printf  ("删除成功，剩余%d个成绩",num_scores);
       
}

