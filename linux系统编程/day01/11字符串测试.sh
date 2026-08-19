str="heoolworld"

test -z "$str"
echo "上一条命令执行结果：$?"

[ -z "$str" ]
echo "上一条命令执行结果：$?"