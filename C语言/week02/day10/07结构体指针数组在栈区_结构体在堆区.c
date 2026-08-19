#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char *name;
    int id;
    char gender;
    float score;
}XS;

int main(int argc, char const *argv[])
{
    XS *xs1[5];

    for (int i = 0; i < 5; i++)
    {
        xs1[i]=(XS *)malloc(sizeof(XS));
        if (xs1[i]==NULL)
        {
            perror("malloc");

        }
        xs1[i]->id=i;
        xs1[i]->gender='M';
        xs1[i]->score=(i+1)*10;

        xs1[i]->name=(char *)malloc(sizeof("胡桃"));
        if (xs1[i]->name==NULL)
        {
            perror("name malloc");

        }
        strcpy(xs1[i]->name,"胡桃");  
    }
    for (int i = 0; i < 5; i++)
    {
        printf("名字：%s ID：%d 性别：%c 成绩：%0.1f \n",
        xs1[i]->name,xs1[i]->id,xs1[i]->gender,xs1[i]->score);
    }

    for (int i = 0; i < 5; i++)
    {
        free(xs1[i]->name);
        xs1[i]->name==NULL;
        free(xs1[i]);
        xs1[i]=NULL;
    
    }
    
    
    

    return 0;
}
