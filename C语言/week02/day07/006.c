#include <stdio.h>
int main(int argc, char const *argv[])
{
    char arr[11]="helloworld";
    printf("arr:%s",arr);
    printf("\n");

    for (int i = 0; i < sizeof(arr)-1; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");

    int num = 0;
    while (arr[num]!='\0')
    {
        printf("%c",arr[num]);
        num++;
    }
    printf("\n");
    
    return 0;
}
