#line diagram

year = seq(1970,1995,5);year
death = c(162.8,169.7,183.9,193.3,203.2,204.7);death
plot(year,death,type = "l")
plot(year,death,type = "h",xlab = "covid deaths",ylab = "covid year")

m = LETTERS[1:6];m
#if we want sales on x-axis and m
m = month.abb;m
sales = c(1025.6,1129.7,1092.8,1577.3,1473.5,1385.8,1291.3,1082.4,1009.7,1108.1,1000.6,993.5);sales
plot(1:12,sales,type = "l",xaxt = "none",xlab = "m")
axis(side = 1,at = 1:12,labels = m)

#matrix plotting as a graph
year = seq(1970,1995,5);year
death = c(162.8,169.7,183.9,193.3,203.2,204.7);death
z = c(160.1,170.8,186.6,190.4,199.7,208.9);z
M = cbind(year,death,z);M #column wise matrix formation 
matplot(M[,1],M[,2],type = "l")
