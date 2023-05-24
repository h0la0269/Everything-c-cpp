#pattern
: '
   *
  **
 ***
****
'
read -p "Enter no.of lines: " n
for((i=1;i<=n;i++))
do
for((k=n-i;k>=1;k--))
do
echo -n " "
done
for((j=1;j<=i;j++))
do
echo -n "*"
done
echo
done

