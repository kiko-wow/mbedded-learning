#include <stdio.h>

double give_me_pi(void);

int main(int argc, char const *argv[])
{
    double r = 0;
    printf("请输入一个圆的半径\n");
    scanf("%lf",&r);
    printf("以%lf为半径的圆的面积是：%lf\n",r,r*r*give_me_pi());

    return 0;
}

double give_me_pi(void)
{
    return 3.141592;
}
