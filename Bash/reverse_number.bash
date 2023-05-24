#reverse a number

read -p "Enter a number" n
rev=0
while [[ n -ne 0 ]]
do
rem=`expr $n % 10`
revD=`expr $rev \* 10`
rev=`expr $revD + $rem`
n=`expr $n / 10`
done
echo "The reverse of the number is: " $rev



