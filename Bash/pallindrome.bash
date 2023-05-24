#pallindrome

read -p "Enter a number: " n
rev=0
original=$n
while [[ n -ne 0 ]]
do
rem=`expr $n % 10`
revD=`expr $rev \* 10`
rev=`expr $revD + $rem`
n=`expr $n / 10`
done
echo $rev
echo $original
if [ $rev -eq  $original ]
then
echo "Number is pallindrome"
else
echo "Number is not pallindrome"
fi