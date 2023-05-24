#defining an array
a=c(1,2,3);a

x=seq(1,100,1);x
b=seq(5,1000,5);b
1:100

#length of an array
l=length(x);l

#different properties of array
x=c(2,-1,3,6,13,-7.5);x

#extraction
a=x[c(3,4)];a
b=x[c(2,3,4,5)];b
b=x[2:5];b

#deletion
c=x[-c(5,6)];c#same
c=x[-(5:6)];c#same
c=x[-seq(5,6,1)];c#same
d=x[x>0];d
e=x[x%%2==0];e