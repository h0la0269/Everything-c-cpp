#armstrong
read -p "Enter a number: " num
digitCount=0
org=$num
f=$num
sum=0
while [[ num -ne 0 ]]
do
digitCount=`expr $digitCount + 1`
num=`expr $num / 10`
done
while [[ $org -ne 0 ]]
do
dg=`expr $org % 10` 
dgPow=1
for((i=1;i<=digitCount;i++)) 
do
dgPow=`expr $dgPow \* $dg`
done
sum=`expr $sum + $dgPow`
org=`expr $org / 10`
done
if [ $sum -eq $f ]
then
echo "The number is Armstrong"
else
echo "The number is not Armstrong"
fi


