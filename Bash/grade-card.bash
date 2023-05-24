#grade card

read -p "Enter no.of subjects: " sub
s=0
echo "Enter subject marks"
for((i=1;i<=sub;i++))
do
read n
s=`expr $s + $n`
done
marks=`expr $s / $sub`
if [ $marks -ge 85 ]
then echo "Your Grade: O"
elif [ $marks -ge 75 ] && [ $marks -lt 85 ]
then echo "Your Grade: A+"
elif [ $marks -ge 65 ] && [ $marks -lt 75 ]
then echo "Your Grade: A"
elif [ $marks -ge 55 ] && [ $marks -lt 65 ]
then echo "Your Grade: B+"
elif [ $marks -ge 50 ] && [ $marks -lt 55 ]
then echo "Your Grade: B"
elif [ $marks -ge 40 ] && [ $marks -lt 50 ]
then echo "Your Grade: C"
elif [ $marks -ge 35 ] && [ $marks -lt 40 ]
then echo "Your Grade: D"
else echo "Your Grade: F"
fi