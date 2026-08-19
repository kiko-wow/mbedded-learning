#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={1,5,4,6,3,2,9,8,7,11};
    printf("排序前:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j+1 < 10-i; j++)
        {
            if (arr[j]<arr[j+1])//小到大
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("排序后：");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    
    return 0;
}
