# a more optimized version of prime
count=0
flag=1
number=int (input("Enter a number: "))
for i in range(2,number//2+1):
    if number%i==0:
        flag=0
        break
if flag==1:

    print("Number is Prime")
else:
    print("Not prime")