# 题目4：检查文件是否可读且非空
# 描述：编写一个脚本，检查指定文件是否可读并且非空（大小大于0）。满足条件则输出“文件有效”，否则输出具体原因
#/home/kiko/桌面/linux系统编程/day01/homeweek/test.c
if [ -r test.c -a -s test.c ];then
echo "文件有效"
elif [ -r test.c ];then
echo "文件可读，空"
elif [ -s test.c ];then
echo "文件不可读，非空"
else
echo "文件不可读，空"
fi