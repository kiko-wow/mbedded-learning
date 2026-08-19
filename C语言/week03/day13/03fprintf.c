#include <stdio.h>

typedef struct student
    {
        char name[32];
        int id;
        char gender;
        float score;
    }STU;


int main(int argc, char const *argv[])
{
    STU stu={"李磊",1,'M',80.0f};
    STU stu1={"王璐",2,'F',90.0f};

    FILE *fd = fopen("./student.txt","w");
    if (fd==NULL)
    {
        perror("fopen");
    }
    fprintf(fd, "NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
            stu.name, stu.id, stu.gender, stu.score);
    fprintf(fd, "NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
            stu1.name, stu1.id, stu1.gender, stu1.score);
    
    return 0;
}
