# 题目5：遍历家目录下的所有文件夹
# 描述：编写一个脚本，展示家目录里面的所有文件夹

# for i in /home/kiko/*
# do
# if [ -d "$i" ];then
# echo "$i"
# fi
# done

# for n in /home/kiko/*
# do
# if [ -f "$n" ];then
# echo "$n"
# fi
# done


#!/bin/bash
for i in $HOME/* $HOME/.*
do
if [ -d "$i" ];then
echo "$i 是文件夹"
elif [ -f "$i" ];then
echo "$i 是文件"
else
echo "1"
fi
done