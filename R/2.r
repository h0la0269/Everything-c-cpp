lx=length(x)
ly=length(y)
m = matrix(0,lx,ly)
for(i in 1:lx){
  for (j in 1:ly) {
    if(i==j){
      m[i,j]=(1/x[i]^2)+(1/y[i]^2)
    }
    else{
      m[i,j]=(1/x[i]*y[i])
    }
  }
}