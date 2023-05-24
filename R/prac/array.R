x=c(12,23,4.5,7.21,66,100);x
x[which(x>50)]
which(x>50)
x[2]
x[c(3,4)]



x=seq(0:99);x

length(x)   #array length



#array declarations
x[seq(10:20)] [c(3,4)]

a=seq(100:200);a
a[c(3,4)]

arr=seq(1,10,2);arr #successfully extracted
arr[c(3,4)]


ar[seq(2:40)][c(2,4)]

x[x%%2!=0]

x=seq(1:100)
x[x%%2==0]

new_arr=seq(1:1000);new_arr

new_arr[(new_arr>500) & (new_arr%%2==0)] #single "&" for logical AND

#matrix declarations
a=c(1,-2,3,-5)  

b=c(4,5,-6, -4/10,-10);b
which(b>0)


c=cbind(a,b);c
d=rbind(a,b);d
c%*%d #matrix multiplication

t(c) #transpose of matrix


x=c(24,9,4.5,10)
y=c(13,34,7.12,4.67)
f=cbind(x,y);f

a=c(1,-2,3,-5)  
b=c(4,5,-6,-10)

t(a)%*%b #transpose...





#PLOTS

year=seq(1970,1995,5)
death=c(162.8,169.7,183.9,193.3,203.2,204.7)
plot(year,death,type="l",xlab="YOUR MOM",ylab = "YOUR DAD")


s=month.abb;s
Sales=c(1025.6,1129.7,1092.8,1577.3,1473.5,1385.8,1291.3,1082.4,1009.7,1108.1,1000.6,993.5)
plot(1:12,Sales,type="h",xlab = "MONTHS",ylab = "SALES")
axis(side = 1,at = 1:12, labels = s)




y = c(seq(1,21,1));y
r = c("r1","r2","r3");r
c = c("c1","c2","c3","c4","c5","c6","c7");c
m = matrix(y,3,7,byrow = T);m
rownames(m) = r;m
colnames(m) = c;m
m[2,]
m[,2:5]







year = seq(1970,1995,5);year
death = c(162.8,169.7,183.9,193.3,203.2,204.7);death
matplot(year,death)


namae=c("Maity", "Sinjoy","Sujal", "Aditya", "Kaushik", "Anubhav", "Subham", "Ishan", "Roopam", "Sayak", "Anik", "Debargha", "Chirag", "Supratik", "Arindrajit")
weight=c(64,71,57,55,65,63,73,60,67,71,65,86,80,79,69)
height=c(5.9,5.10,6,5.3,5.9,5.3,5.2,5.11,5.10,5.10,5.5,5.11,5.10,6,5.5)
matrix=rbind(height, weight);matrix
bar=barplot(matrix,names.arg = namae, beside=F,xlab="NAMES",ylab="WEIGHT & HEIGHT")

par(mfrow=c(2,1)) #getting multiple graphs in the plot

bar=barplot(matrix,names.arg = namae, beside=T,xlab="NAMES",ylab="WEIGHT & HEIGHT",col=c("blue","yellow"))
bar=barplot(matrix,names.arg = namae, beside=T,xlab="NAMES",ylab="WEIGHT & HEIGHT", col=c("green","cyan"))