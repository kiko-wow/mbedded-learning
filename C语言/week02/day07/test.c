#include <stdio.h>

int get_max(int num1, int num2);

void show_max(int num1, int num2);

int main(int argc, char const *argv[])
{
  
    int num1 = 3;
    int num2 = 4;
    get_max(num1,num2);  //执行完·的结果  num1   num2
    printf("%d\n",get_max(get_max(3,4),5));

    show_max(get_max(3,4),5);
    return 0;
}


int get_max(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;    
    }
    else
    {
        return num2;    
    }
}

void show_max(int num1,int num2)
{
    if(num1 > num2)
    {
        printf("%d比较大\n",num1);    
    }
    else
    {
        printf("%d比较大\n",num2);   
    }
}