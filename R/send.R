x = c(1,2,3,4,5,6)
n = length(x)

sum =0
for(i in 1:n)
{
  sum = sum + x[i]
}
print(sum)
sum(x)
m = 0
for(i in 1:n)
{
  m = m+x[i]/n
}
print(m)
mean(x)

x = c(1,2,3,4,5,6)
y = c(9,8,7,6,5,4)
sum =0

for(i in 1:n)
{
  sum = sum + x[i]*y[i]
  
}
print(sum)

x = c(1,2,3,4,5,6)
y = c(9,8,7,6,5,4)
sum =0

for(i in 1:n)
{
  sum = sum + (x[i]^3)*(y[i]^2)
  
}
print(sum)

x = c(1,2,3,4,5,6)
y = c(9,8,7,6,5,4)
sum =0

for(i in 1:n)
{
  sum = sum + (x[i]^2) + log(y[i])
  
}
print(sum)