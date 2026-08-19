#!/bin/bash
score=0
echo "请输入您的成绩"
read score

if [ $score -ge 60 ];then
echo "恭喜你，及格了"
else
echo "你好意思，不及格"
fi