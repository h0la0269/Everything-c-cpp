#learning arrays
a=c(1,2,3,4,5,6,7,8,9) # to initialize

a#to print
x=c(2,5.7,7.11,-6,9);x# ";" to complete to operational lines in a single line
y=length(x)#length(array name) this is the syntax
y
z=1:5;z
n=seq(2,10,2);n
s=seq(1,9,2);s
cbind(n,s);
lenght(s)
length(n)
k=seq(5,1000,5);k
length(k)
x[3]
x[c(2,3)]
i=2:1000
i=1:1000
h=c(0,5,4,3,2,1,9,8,7,6);h
floor(h)
floor(2.99) #rounds of to the nearest integer
i[c(seq(2,1000,2))]
n=c(0,-6,9,-3,2,34)
floor(n)
t=n[n>0];t

h=n[n==floor(n)];h#floor function sorts out the integer values
g=n[n!=floor(n)];g#returns non integer values
i=n[-which(n==floor(n))];i#returns non integer values,n[which(n!=floor(n))]
u=c("apple","orange","banana","tomato","guava");u
u>0
#vector operations

j=c(1,2,3)
p=c(5,6,7)
a=c(9,8,7)
w=rbind(j,p,a);w
f=c(9,7,3)
e=c(0,5,2)
o=c(3,2,1)
q=rbind(f,e,o);q
c=w+q;c
z=w-q;z
x=w*q;x
y=w/q;y
v=j%*%p;v
s=sum(j*p);s
st=t(w);st
dt=t(q);dt
tt=t(j)%*%p;tt
ty=t(p)%*%j;ty
ut=t(j)*p;ut
it=t(p)*j;it
ot=t(t(j));ot