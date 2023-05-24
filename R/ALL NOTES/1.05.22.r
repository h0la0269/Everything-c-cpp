#operations between arrays

#transpose

a = c(1,2,3);a
b = t(a);b
d = c(3,4,5);d
e = c(6,7,8);e
f = rbind(d,e);f
g = t(f);g
h = c(1,2,3);h
i = c(9,8,7);i
add = h+i;add
subt = h-i;subt
j = c(-3,1,3.5,-13,19,-21);j
which(j>0);

#dot product
l = c(9,8,7);l
m = c(6,5,4);m
sc1 = t(m)%*%l;sc1
sc2 = m%*%t(l);sc2
