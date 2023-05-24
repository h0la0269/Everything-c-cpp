#include <iostream>
using namespace std;

int main(){
	int s,n,count=0;
	cin>>s;
	while(s>0){
		n=s%10;
		if(n==4)
			count++;
		s=s/10;
		
	}
	cout<<count<<endl;
	return 0;
}