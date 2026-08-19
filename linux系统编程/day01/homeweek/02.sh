# 题目2：检查文件类型
# 描述：编写一个脚本，接受一个文件路径作为参数，判断它是普通文件、目录还是其他类型，并输出相应信息。
#bash 02.sh /home/kiko/桌面/test.c
cd "$1"
if [ -d test.c ];then
echo "存在，是文件夹"
elif [ -f test.c ];then
echo "存在，是文件"
else
echo "不存在"
fi