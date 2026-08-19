score=0
echo "请输入您的成绩"
read score

if [ $scro -ge 90 -a $score -le 100 ];then
echo "A"
if [ $scro -ge 80 -a $score -lt 90 ];then
echo "B"
if [ $scro -ge 60 -a $score -lt 80 ];then
echo "C"
else
echo "D"
fi
