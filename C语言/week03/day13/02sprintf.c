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
    STU stu = {"王露",1,'M',90.0f};

    FILE *fd=fopen("./student.txt","w");
    if(fd==NULL)
    {
        perror("fopen");
    }
    printf("NAME:%s ID:%d GENDER:%c SCORE:%0.1f\n",
           stu.name, stu.id, stu.gender, stu.score);
    return 0;
 }
 