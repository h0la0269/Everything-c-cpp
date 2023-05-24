# multiple bar diagram
y=seq(1980,2020,5);y
p1=c(203.8,207.6,201.8,212.3,219.4,217.7,221.5,225,232.2);p1
p2=c(204.7,207.9,203.5,215.8,220.7,221.1,223.3,224.2,227.8);p2
u=rbind(p1,p2);u
barplot(u,ylim=c(190,235),ylab="comparing the two data",beside=T)#beside to print both the bar diagrams beside each other vertically
barplot(u,horiz=T,xlim=c(190,235),xlab="comparing the two data",beside=T,col=c("red","blue"))#same aS ABOVE BUT PRINTS HORIZONTRALLY, col=c("red","blue") we use col beacuse this is the syntx of colour
barplot(u,ylim=c(190,235),ylab="comparing the two data")
        
names=c("maity","sinjoy","sujal","aditya","kaushik","anubhav","shubham","souptik","ishan","roopam","sayak","anik","debarghya","chirag","arindrajit","supratik");names
height=c(5.9,5.10,5.6,6,5.8,5.9,5.2,5.11,5.10,5.10,5.5,5.8,5.10,6,5.5,5.5);height
weight=c(84,71,57,55,65,63,73,60,69,71,65,86,80,79,69,69);weight
h=cbind(height,weight);h
g=rbind(height,weight);g
par(mfrow=c(2,2))
barplot(g,names.arg=names,beside=T,xlab="NAMES->CSBS SUPREMACY",col=c("blue","purple"),ylab="blue->height , purple->weight")
barplot(g,names.arg=names,xlab="NAMES->CSBS SUPREMACY",col=c("blue","purple"),ylab="blue->height , purple->weight")
barplot(h,beside=T,xlab="NAMES->CSBS SUPREMACY",col=c("blue","purple"),ylab="blue->height , purple->weight")
i=cbind(weight,height);i
matplot(i[,1],i[,2],xlab="weight",ylab="height")
i
plot(i[,1],i[,2],type="l",xlab="weight",ylab="height")#line diagram nbot possible
