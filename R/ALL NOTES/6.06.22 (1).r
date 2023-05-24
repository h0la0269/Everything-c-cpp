#matrices
#method 1
x = c(1,6,9,-2,1,0);x
matrix(x,2,3,byrow = T)

#method 2
y = c(seq(1,21,1));y
r = c("r1","r2","r3");r
c = c("c1","c2","c3","c4","c5","c6","c7");c
m = matrix(y,3,7,byrow = T);m
rownames(m) = r;m
colnames(m) = c;m
m[2,]
m[,2]

#method 3 - row wise
a = c(1,6,9);a
b= c(-2,1,0);b
rbind(a,b)

#method 4 - column wise
a = c(1,-2);a
b = c(6,1);b
c = c(9,0);c
cbind(a,b,c)