#include <stdio.h>
// 1.函数的声明
int get_max(int num1,int num2);

int main(int argc, char const *argv[])
{
    int num1 = 3;// num1不再是形式参数 而是实际值
    int num2 = 4;// num2不再是形式参数 而是实际值

    //3.函数调用
    //get_max(num1,num2) 的结果就是num1和num2里比较大的那一个
    //在这里 get_max(num1,num2)等价于 num2
    get_max(num1,num2);
    printf("较大值是: %d\n",get_max(num1,num2));
    return 0;

}


int get_max(int num1,int num2)
{
    if (num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
    
}