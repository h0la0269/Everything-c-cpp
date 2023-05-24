#  DAY 1
#====================================
#  Algebric Operation in R
#====================================

x=5 
2*x^3-3*x^2+7*x-5


x=5
y=2
x^2 + 5*x*y - 2*y^3
2*x^2.3 - sqrt(x*y) + y

#====================================
#====================================





#DAY 2
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#CALLING AN ARRAY
x=c(10,20,30,40,50);x #entering an array of 5 elements


#sequence-------
s=seq(1:100);s
p=seq(1,100,3);p

th=seq(0,1,1/1000);th
#sequence-------


#ARRAY LENGTH
length(th);

#Extracting a component/components of an array
x=c(-1,20, 39, 71, 100, 0.54, -1.68)
x[seq(2,6,2)][c(3,4)]  #extracting multiple elements from an array
x[seq(3:4)]

x[-c(5,6)]  #DELETING
x[-seq(5,6)]  #DELETING

x[x>0] #condition
x[x%%2==0] #condition
#Different properties of an array

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






#DAY 3
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
z=seq(-1,1,0.001);z
e=z[z^2<1/2];e

#OPERATION IN ARRAYS
a=c(1,-2,3,-5)  
b=c(4,5,-6,-10)
A=rbind(a,b);A     #declaring a matrix

#transpose
t(A)

#operations(should be of same length  )
a+b
a-b
a*b

which(a>0)  #which position the condition exists

#scaler product of arrays
a=c(1,-2,3,-5)  #1*4-->>>> 4*1
b=c(5,-6,-10)
A=rbind(a,b);A

o=c(1,-2,3)  
p=c(4,5,-6,-10) #1*4
B=rbind(o,p);B
t(a)%*%p          #scaler product
p%*%t(a)          #matrix multiplication

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





#DAY 4
#----------------------------------
#----------------------------------
#Diagramatic Representation of DATA

year=seq(1970,1995,5)
death=c(162.8,169.7,183.9,193.3,203.2,204.7)
plot(year,death,type="l")  #line-diagram is preferred for time series
plot(year,death,type="h")  #column/line diagram is preferred for discrete data


#x-lab, y-lab for giving comments in a diagram
plot(year,death,type="l",xlab="TIME SPAN",ylab="DEATHS IN RESPECTIVE YEARS")


Months=c("jan", "feb", "mar", "apr", "may", "june", "july", "aug", "sep","oct", "nov","dec")
s=month.name;s
Sales=c(1025.6,1129.7,1092.8,1577.3,1473.5,1385.8,1291.3,1082.4,1009.7,1108.1,1000.6,993.5)
plot(1:12,Sales,type="l",xaxt="none",xlab="Month",ylab="Sales")
axis(side = 1,at = 1:12, labels = s)
s=letters[1:5];s
month.abb

#----------------------------------
#----------------------------------







#DAY 4
#----------------------------------
#----------------------------------

x=c(1,6,9,-2,1,0)
mat=matrix(x,2,3,byrow=T) # matrix representation- matrix(array, row, col) default=col


x=seq(1,21,1)
matrix(x,3,7,byrow=T)

#another way to declare a matrix
q=c(1,6,9)
p=c(-2,1,0)
mat=rbind(q,p);mat          #rowbind(rbind)

c1=c(1,-2)
c2=c(6,1)
c3=c(9,0)
mat=cbind(c1,c2,c3);mat

#extract components
A=mat[1,2];A         #extracting a specific component
A=mat[,3];A         #extracting a col
A=mat[2,];A         #extracting a row


x=c(1,6,9,-2,1,0,5,7,8)
mat=matrix(x,3,3,byrow=T)
char1=c("s","u","b")
char2=c("h","a","m")
rownames(mat) = char2
colnames(mat) = char1
mat


xz=c(1,6,9)
yz=c(-2,1,0)
zz=c(5,7,8)
char1=c("s","u","b")
char2=c("h","a","m")
m=rbind(xz,yz,zz);m
rownames(m) = char2
colnames(m) = char1

#diagramatic representation of two graphs in one
Months=c("jan", "feb", "mar", "apr", "may", "june", "july", "aug", "sep","oct", "nov","dec")
year=seq(1970,1995,5)
death=c(162.8,169.7,183.9,193.3,203.2,204.7)
z=c(160.1, 170.8, 186.6, 190.4, 199.7,208.9)
m=cbind(year,death,z);m
matplot(m[,1],m[,2:3],type="l",xlab="Month",ylab="COVID CASES")
#----------------------------------
#----------------------------------
