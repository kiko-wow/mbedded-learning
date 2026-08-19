#include <stdio.h>
int main(int argc, char const *argv[])
{
    char arr[11]="helloworld";

    printf("arr:%s\n",arr);

    char arr2[11]={'h','e','l','l','o','w','o','r','l','d','\0'};
    
    printf("arr2:%s\n",arr2);

    char arr3[11]={'h','e','l','l','o','w','o','r','l','d'};

    printf("arr3:%s\n",arr3);

    return 0;
}
