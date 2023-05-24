x = c(1,2,3,4,5,6);x
I = 1:length(x)
I1 = I[I %% 2 != 0]
I2 = I[I %% 2 == 0]
S1 = x[I1];S1
S2 = x[I2];S2
s = S1 - S2;s

#2 arrays
x = c(2,4,-5,7,9);x
y = c(1,-6,11,-3/2,0.6);y
n = length(x);n
S = 0
S1 =0
S2 = 0
S3 = 0
for(i in 1:n)
{
  S1 = S1 + (x[i]^2 * y[i]^3);S1
  S2 = S2 + 2 * (x[i]^2 * y[i]^2);S2
  S3 = S3 + 6 * (x[i]^3 * y[i]);S3
}
S = S + S1 - S2 + S3;S

#matrix
x = c(2,4,-5,7,9);x
y = c(1,-6,11,-3/2,0.6);y
lx = length(x)
ly = length(y)
m = matrix(0,lx,ly)
print(m)
for(i in 1:lx)
{
  for(j in 1:ly)
  {
    if(i == j)
      m[i,i] = (1/x[i]^2)+(1/y[i]^2)
    else
      m[i,j] = 1/(x[i]*y[i])
  }
}
print(m)

#population
l = 1:21
print(l)
p = c(3,4,4,18,5,9,5,3,10,4,1,3,5,5,6,3,3,1,4,5,4);p#population
N = length(p);N#population size
n = 6
srswr = sample(l,n,replace = TRUE)
print(srswr)
mean(p)
S2 = var(p);S2
sig2 = (N-1)/N * S2;sig2
mean(srswr)
var(srswr)
SEwr = sqrt(sig2)/sqrt(n);SEwr
print(SEwr^2)
