#include <stdio.h>

typedef struct student
{
    char name[32];
    int id;
    char gender;
    float score;
} STU;

int main(int argc, char const *argv[])
{
    STU stu1;
    STU stu2;
    STU stu3;
    // 打开当前路径下的 名字叫 studet.txt的文档，以读的形式
    FILE *fd = fopen("./student.txt", "r");
    if (fd == NULL)
    {
        perror("fopen");
    }
    char buff[256];
    // 第一次 读取第一行
    fgets(buff, sizeof(buff) - 1, fd);

    sscanf(buff, "NAME:%s ID:%d GENDER:%c SCORE:%f",
           stu1.name, &(stu1.id), &(stu1.gender), &(stu1.score));

    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu1.name, stu1.id, stu1.gender, stu1.score);

    // 第二次 自动读取第二行
    fgets(buff, sizeof(buff) - 1, fd);
    sscanf(buff, "NAME:%s ID:%d GENDER:%c SCORE:%f",
           stu2.name, &(stu2.id), &(stu2.gender), &(stu2.score));

    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu2.name, stu2.id, stu2.gender, stu2.score);
    // 第三次 自动读取第三行
    fgets(buff, sizeof(buff) - 1, fd);
    sscanf(buff, "NAME:%s ID:%d GENDER:%c SCORE:%f",
           stu3.name, &(stu3.id), &(stu3.gender), &(stu3.score));

    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu3.name, stu3.id, stu3.gender, stu3.score);

    fclose(fd);
    return 0;
}