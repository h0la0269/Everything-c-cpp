#for time series data we use line diagram,e.g,n run rate
#for discrete type data we use column diagram or bar diagram,but for bar diagram we need to use barplot
#for cumulative frequency we use step diagram
#"l" for line diagram
#"h" for column diagram or height diagram
#"s" for step diagram 
#plot function is limited tro these three diagrams
#"barplot" for bar diagram
#matplot to compare two data 
#barplot is used for spatial data
y=seq(1980,2020,5);y
length(y)
p=c(203.8,207.6,201.8,212.3,219.4,217.7,221.5,225,232.2);length(p)
plot(y,p)#to scatter the points
plot(y,p,type="l")#to join the lines of the plotted points hence creating a line diagram
plot(y,p,type="h")#prints a column diagram which is not suitable for this type of data
plot(y,p,type="s")#prints a step diagram 

#to compare to line diagrams
#xlim to limit the x axis range
#ylim to limit the y axis range
#YLIM AND XLIM JUST LIMITS THE DISPLAY ,BUT RLAB DOES IT ALL 

y=seq(1980,2020,5);y
p1=c(203.8,207.6,201.8,212.3,219.4,217.7,221.5,225,232.2);p1
p2=c(204.7,207.9,203.5,215.8,220.7,221.1,223.3,224.2,227.8);p2

ma=cbind(y,p1,p2);ma

matplot(ma[,1],ma[,2:3],type="l",xlab="years",ylab="production")#[,1] extracts the x axis that is the years,and [,2:3] extracts the 2nd and 3rd that is the line diagrams

#xlab command prints the metadata of the x-axis,and ylab command prints the metadata of the y-axis

barplot(p1,ylim=c(200,235),ylab="production of first firm")#for vertical bar diagram 

barplot(p1,horiz=T,xlim=c(200,235),xlab="production of first firm")#for horizontal bar diagram

year=c("1980","1985","1990","1995","2000","2005","2010","2015","2020");year

barplot(p1,names.arg=year,ylim=c(200,235),xlab="years")
