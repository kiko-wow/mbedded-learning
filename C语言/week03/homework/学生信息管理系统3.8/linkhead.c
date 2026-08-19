#include "student.h"
#include "linkhead.h"


LINKHEAD *get_head(void)
{
    LINKHEAD *flag = (LINKHEAD *)malloc(sizeof(LINKHEAD));
    if (flag==NULL)
    {
        perror("LINKHEAD malloc");
        return flag;
    }
    flag->first=NULL;
    flag->last=NULL;
    flag->size=0;
    return flag;
    
}