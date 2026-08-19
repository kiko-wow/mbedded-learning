#!/bin/bash
num=1000
(
    num=100
    echo "小括号内num=$num"   #100
)
    echo "小括号外num=$num"  #1000

{
    num=100
    echo "大括号内num=$num"  #100
}
    echo "大括号外num=$num"  #100