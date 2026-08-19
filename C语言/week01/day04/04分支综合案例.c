#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("请依次输入三角形的三条边，tab键隔开\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("能构成三角形\n");
        if (a==b && b==c)
        {
            printf("是等边三角形\n");
        }
        if (a==b || b==c || a==c)
        {
            printf("是等腰三角形\n");
        }
        if (a*a+b*b==c*c || b*b+c*c==a*a||a*a+c*c==b*b)
        {
          printf("是直角三角形\n");
        }
          
    }
    else{
            printf("不能构成三角形\n");
        }
    
    return 0;
}
