#!/bin/bash
num1=10
num2=20

test $num1 -eq $num2
echo "上一条指令执行的结果：$?"

[ $num1 -lt $num2 ]
echo "上一条指令执行的结果：$?"