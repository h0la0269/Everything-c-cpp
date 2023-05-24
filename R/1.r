x=c(1,2,3,4,5,6,7,8,9)
mean(x)
s=0
{
  s=s+x[i]  
}
s
for(i in 1:length(x)){
  a=a+x[i]-x[i+1];print(a)
}
a
i=1:length(x)
i1=i[i%*%2!=0]
i2=i[i%*%2==0]
s1=s[i1]
s2=s[i2]
sultimates=s1-s2