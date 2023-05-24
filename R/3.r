l=1:100
length(l)
p=c(3,4,4,5,9,5,3,10,4,1,3,5,5,6,3,3,14,5,4);p
N=length(p);N
n=6
srswr=sample(l,n,replace = TRUE);srswr
mean(p)
s2 = var(p);s2
sig_2=((N-1)*s2)/N;sig_2
mean(srswr)
std_er=(sqrt(sig_2)/sqrt(n));std_er