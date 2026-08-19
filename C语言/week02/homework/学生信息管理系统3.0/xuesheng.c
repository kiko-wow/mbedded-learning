#include "xuesheng.h"

void cai_dan(void)
{
    printf("-----学生管理系统-----\n");
    printf("1.初始化学生信息\n");
    printf("2.学生成绩的平均分\n");
    printf("3.学生成绩的最大值叫什么名字,最小值者叫什么名字\n");
    printf("4.学生的成绩进行排序，然后按照顺序打印对应的学生姓名\n");
    printf("5.对结构体数组进行扩容，增加1个学生成绩（必须先删除再添加）\n");
    printf("6.结构体数组进行缩减容量，减少1个学生成绩\n");
    printf("7.按照成绩从小到大，对这几个学生进行排序\n");
    printf("0.退出系统\n");
    printf("---------------------\n");
}

void init_score(void)
{
    count = 5;
    arr = malloc(sizeof(xs) * count); // 分配5个学生空间
    strcpy(arr[0].name, "张三");
    arr[0].id = 1001;
    strcpy(arr[0].gender, "男");
    arr[0].score = 85.0;
    strcpy(arr[1].name, "李四");
    arr[1].id = 1002;
    strcpy(arr[1].gender, "女");
    arr[1].score = 90.0;
    strcpy(arr[2].name, "王五");
    arr[2].id = 1003;
    strcpy(arr[2].gender, "男");
    arr[2].score = 78.0;
    strcpy(arr[3].name, "赵六");
    arr[3].id = 1004;
    strcpy(arr[3].gender, "女");
    arr[3].score = 95.0;
    strcpy(arr[4].name, "孙七");
    arr[4].id = 1005;
    strcpy(arr[4].gender, "男");
    arr[4].score = 88.0;

    for (int i = 0; i < count; i++)
    {
        printf("姓名：%s 学号：%d 性别：%s 成绩：%.1f\n",
               arr[i].name, arr[i].id, arr[i].gender, arr[i].score);
    }
    printf("初始化学生数据成功\n");
}

void avg_coser()
{
    float sun;
    for (int i = 0; i < count; i++)
    {
        sun = sun + arr[i].score;
    }
    float avg = sun / 5;
    printf("平均分 = %.2f\n", avg);
}

void max_min_score(void)
{
    int max_idx = 0;
    int min_idx = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i].score > arr[max_idx].score)
        {
            max_idx = i;
        }
        if (arr[i].score < arr[min_idx].score)
        {
            min_idx = i;
        }
    }
    printf("成绩最高的人是：%s\n", arr[max_idx].name);
    printf("成绩最低的人是：%s\n", arr[min_idx].name);
}

void pai_xu(void)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j + 1 < 5 - i; j++)
        {
            if (arr[j].score > arr[j + 1].score)
            {
                xs tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("按成绩从小到大：\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", arr[i].name);
    }
}

void add_score()
{
    char yes;

    printf("添加成绩前会先移除一位成绩，确定要继续吗(y/n)");
    scanf(" %c", &yes); // 注意 %c 前有空格，跳过换行符
    if (yes == 'y')
    {
        count--;
        arr = realloc(arr, sizeof(xs) * count);
        printf("已删除最后一名学生，当前共 %d 人。\n", count);
        count++;
        arr = realloc(arr, sizeof(xs) * count);
        printf("--- 请输入新学生信息 ---\n");
        printf("姓名: ");
        scanf("%s", arr[count - 1].name);
        printf("学号: ");
        scanf("%d", &arr[count - 1].id);
        printf("性别: ");
        scanf("%s", arr[count - 1].gender);
        printf("成绩: ");
        scanf("%f", &arr[count - 1].score);
        printf("新增成功，当前共 %d 人。\n", count);
    }
    else
    {
        printf("---------------\n");
    }
}

void delete_score()
{
    count--;
    arr = realloc(arr, sizeof(xs) *count);
    printf("已删除最后一名学生，当前共 %d 人。\n", count);
}



void min_max(void)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j + 1 < 5 - i; j++)
        {
            if (arr[j].score > arr[j + 1].score)
            {
                xs tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("按成绩从小到大：\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s %d %s %0.1f\n", arr[i].name,arr[i].id,arr[i].gender,arr[i].score);
    }
}
