declare -i sum
declare -i i
sum=0
for((i=1;i<=10;i++))
#for i in 1 2 3 4 5 6 7 8 9 10
do
sum=$sum+$i
done
echo "结果为：$sum"