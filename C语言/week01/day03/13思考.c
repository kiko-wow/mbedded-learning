/*思考题1：
int num = 10;
int ret = num+++num;   //C语言从左往右 会一次性尽可能多的匹配符号  num++ +num  --》10+11
ret = ?
思考题2：
int num = 10;
int ret = ++(num++); //报错   ++（11） 表达式必须是可修改的左值  （）里面运算完成后 不再是变量 
ret=?
思考题3:
int n = 5;
int ret = n++*++n+n--*--n+(n++ +n--)/--n;
5 * 7 + 7 * 5 + (5+6)/4 -->35+35+2-->72  //结果具有偶然性*/


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num =10;
    //int ret =num+++num;  //C语言从左往右 会一次性尽可能多的匹配符号  num++ +num  --》10+11
    //int ret = ++(num++);  报错   ++（11） 表达式必须是可修改的左值  （）里面运算完成后 不再是变量 
    //printf("ret=%d\n",ret);


    int n=5;
    int ret= n++*++n+n--*--n+(n++ +n--)/--n;
    printf("ret=%d\n",ret);  //结果具有偶然性
    return 0;

    //因为自增自减运算符本身使用位置不一样，会具有歧义，所以应该尽量避免使用。如果非要使用，请单独成行。
}