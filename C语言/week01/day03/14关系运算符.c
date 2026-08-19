#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ret = 5>10;
    printf("ret = %d\n",ret);

    ret=5<10;
    printf("ret = %d\n",ret);

    ret=5==10;
    printf("ret=%d\n",ret);
    return 0;
}
