# 题目0：
# 编写一个脚本：判断用户按下按键的情况
# 无论按下YES  yes  Y   y  Ye  等等y与e与s的大小写组合，均打印yes
# 无论按下NO  No  nO  n  N  等等n与o的大小写组合，均打印no

echo "请输入yes/no"
read num
if [ "$num" = "yes" ];then
echo "yes"
elif [ "$num" = "ye" ];then
echo "yes"
elif [ "$num" = "y" ];then
echo "yes"
elif [ "$num" = "es" ];then
echo "yes"
elif [ "$num" = "s" ];then
echo "yes"
elif [ "$num" = "e" ];then
echo "yes"
elif [ "$num" = "no" ];then
echo "no"
elif [ "$num" = "n" ];then
echo "no"
elif [ "$num" = "o" ];then
echo "no"
else
echo "输入错误"
fi