#include "xuesheng.h"

int capacity = 0;
xs **stu;

// ========== 菜单 ==========
void cai_dan(void)
{
    printf("\n===== 学生信息管理系统3.5 =====\n");
    printf("1. 初始化5个学生信息（动态分配）\n");
    printf("2. 全班平均分\n");
    printf("3. 最高分 & 最低分姓名\n");
    printf("4. 按成绩排序，打印姓名顺序\n");
    printf("5. 扩容：增加1个学生\n");
    printf("6. 缩容：删除最后1个学生\n");
    printf("7. 按成绩从小到大排序\n");
    printf("0. 退出\n");
    printf("================================\n");
}

// ========== 1. 初始化5个学生 ==========
// 动态申请：指针数组（堆区）+ 每个结构体（堆区）
// 结果存到全局变量 g_xs，这样 main 和其他函数都能用
void init_score(int n)
{
    // 1. 申请指针数组（存 xs* 的数组），放在堆区
    stu = (xs **)malloc(n * sizeof(xs *));
    if (stu == NULL)
    {
        perror("malloc 指针数组失败");
        return;
    }
    capacity = n; // 同步全局变量

    // 硬编码5个学生的名字和性别
    char *names[] = {"胡桃", "冰女", "红叶", "紫萍", "迦南"};
    char *genders[] = {"女", "女", "女", "女", "女"};

    // 2. 为每个学生动态申请结构体内存
    for (int i = 0; i < n; i++)
    {
        stu[i] = (xs *)malloc(sizeof(xs)); // 每个学生单独分配
        if (stu[i] == NULL)
        {
            perror("malloc");
        }
        stu[i]->id = i + 1;                 // 序号
        stu[i]->score = (i + 1) * 10;       // 成绩：10, 20, 30, 40, 50
        strcpy(stu[i]->name, names[i]);     // 复制姓名
        strcpy(stu[i]->gender, genders[i]); // 复制性别
    }

    printf("初始化数据完成\n");
    for (int i = 0; i < n; i++)
    {
        printf("姓名：%s 序号：%d 性别：%s 成绩：%0.2f\n",
               stu[i]->name, stu[i]->id, stu[i]->gender, stu[i]->score);
    }
}

// ========== 2. 计算平均分 ==========
void show_avg(void)
{

    if (stu == NULL)
    {
        printf("请先执行功能1初始化学生信息\n");
        return;
    }
    float sum = 0; // 累加成绩
    for (int i = 0; i < capacity; i++)
    {
        sum = sum + stu[i]->score;
    }
    printf("平均成绩为：%0.2f\n", (sum) / (capacity));
}

void scoer_max_min(xs **stu, int n)
{
    xs *max_names = stu[0];
    xs *min_names = stu[0];

    for (int i = 0; i < n; i++)
    {
        if (stu[i]->score > max_names->score)
        {
            max_names = stu[i];
        }
        if (stu[i]->score < min_names->score)
        {
            min_names = stu[i];
        }
    }
    printf("最高分：%s \n", max_names->name);
    printf("最低分：%s \n", min_names->name);
}

// 排序
void pai_xu()
{
    for (int i = 0; i < capacity; i++)
    {
        for (int j = 0; j + 1 < capacity - i; j++)
        {
            if (stu[j]->score > stu[j + 1]->score)
            {
                int tmp = stu[j]->score;
                stu[j]->score = stu[j + 1]->score;
                stu[j + 1]->score = tmp;
            }
        }
    }
    for (int i = 0; i < capacity; i++)
    {
        printf("%s ", stu[i]->name);
    }
}

// 扩容
void add_xs()
{
    // 1. 扩指针数组
    stu = (xs **)realloc(stu, sizeof(xs *) * (capacity + 1));

    // 2. 给新学生分配结构体
    stu[capacity] = malloc(sizeof(xs)); // 注意这里是 capacity，不是 capacity+1

    // 3. 输入信息
    printf("请输入姓名：");
    scanf("%s", stu[capacity]->name);
    printf("请输入ID：");
    scanf("%d", &stu[capacity]->id);
    printf("请输入性别：");
    scanf("%c", stu[capacity]->gender);
    printf("请输入成绩：");
    scanf("%f", &stu[capacity]->score);
    // ... 同理输入成绩等

    // 4. capacity + 1
    capacity++;
    for (int i = 0; i < capacity; i++)
    {
        printf("姓名：%s 序号：%d 性别：%s 成绩：%0.2f\n",
               stu[i]->name, stu[i]->id, stu[i]->gender, stu[i]->score);
    }
}
