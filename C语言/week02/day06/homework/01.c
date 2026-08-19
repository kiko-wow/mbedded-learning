/*1.数组元素求和
编写一个程序，定义一个长度为 n 的一维数组，给定
n 个整数，并计算这些整数的和。*/

#include <stdio.h>

int main()
{
    int n, i, sum;
    int a[100];   /* 假设最多 100 个元素 */

    sum = 0;

    printf("请输入 n: ");
    scanf("%d", &n);

    printf("请输入 %d 个整数: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];   /* 边读边累加 */
    }

    printf("和 = %d\n", sum);

    return 0;
}
