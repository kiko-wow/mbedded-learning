#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[8]={2,4,5,4,7,8,9,0,};
    int n =8;
    printf("排序前的：");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j+1 <n-i ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int huan =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=huan;
            }
            
        }
        
    }
    printf("排序后的：");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
    

    return 0;
}
