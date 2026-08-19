#!/bin/bash
declare -i sum
declare -i i
sum=0
i=0
while [ $i -le  10 ]
do
    sum=$sum+$i
    i=$i+1
done
echo "结果为：$sum"