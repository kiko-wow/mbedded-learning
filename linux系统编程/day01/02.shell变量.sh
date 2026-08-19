#定义一个变量
num=10
str="你好"
echo "num=$num"
echo "str=$str"

unset num #将num变量清除
echo "num=$num"

echo "请输入num的值"
read num
echo "num=$num"

readonly num #只读变量
echo "num=$num"
unset num
echo "num=$num"
