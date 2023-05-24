#largest of three numbers
echo "Enter three numbers"
read n1 n2 n3
if [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]
then
x=$n1
elif [ $n2 -gt $n1 ] && [ $n2 -gt $n3 ]
then
x=$n2
else x=$n3
fi
echo "The greatest number is " $x