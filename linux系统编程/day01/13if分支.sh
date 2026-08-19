declare -i mnoey
money=0
echo "请输入你消费的金额"
read money
if [ $money -gt 50 ];then
echo  "恭喜你消费满50"
money=$money-5
fi
echo "你最终需要支付$money元"