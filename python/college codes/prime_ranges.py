startingNumber=int(input("Enter the starting number:"))
endingNumber=int(input("Enter ending number: "))
for i in range(startingNumber,endingNumber):
    flag=1
    for j in range(2,i//2+1):
        if i%j==0:
            flag=0
            break
    if flag==1:

        print(i," is PRIME")
    else:
        print(i," NOT PRIME")