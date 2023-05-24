#prime or not

read -p "Enter a number" n
p=1
if [[ $n -eq 0 || $n -eq 1 ]]
then
echo "The number is not prime"
else
for((i=2;i<=n/2;i++))
do
if [[ `expr $n % $i` -eq 0 ]]
then
p=0
fi
done
fi

if [[ $p -eq 1 ]]
then
echo "The number is prime"
else echo "The number is not prime"
fi