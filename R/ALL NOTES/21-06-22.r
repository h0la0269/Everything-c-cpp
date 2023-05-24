#X is a variable with values x1,x2,.......

#1.sum
x=c(2,2,10);x
sum=0;sum
n=length(x);n
for(i in 1:n)
{
  sum=sum+x[i]
}
print(sum)
sum(x)

#mean
m=0;m
for(i in 1:n)
{
  m=m+(x[i])/n
}
print(m)
mean(x)

#a.sum(xi,yi)
#b.sum(xi^3*yi^2)
#c.sum(xi*2+log(yi))
x1=c(1,3,5,7);x1
y1=c(2,4,6,8);y1
n=length(x1)
sum=0
s=0
for(i in 1:n)
{
  sum=sum+(x1[i]*y1[i])
}
print(sum)
sum(x1^3*y1^2)

for(i in 1:n)
{
  s=s+(x1[i]^2+log(y1[i]) )
}
print(s)

#variance
var=( sum(x1^2)/n )-mean(x1)^2
print(var)

