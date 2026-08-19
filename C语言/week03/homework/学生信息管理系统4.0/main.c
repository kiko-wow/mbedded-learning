#include "student.h"

int main(int argc, char const *argv[])
{
    STU *stu1=(STU*)malloc(sizeof(STU));
    if (stu1==NULL)
    {
        perror("malloc");
    }
    
    return 0;
}
