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
    FILE * fd = fopen("./student.txt","r");
    if (fd==NULL)
    {
        perror("fopen");
    }
    
    char buff[256];

    fgets(buff,sizeof(buff)-1,fd);
    printf("buff:%s",buff);


    fgets(buff,sizeof(buff)-1,fd);
    printf("buff:%s \n",buff);

    fclose(fd);


    return 0;
}
