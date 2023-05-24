#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        int cnt=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
	for(const int &n:arr){
		if(n<0)
			cnt++;
	}
	if(cnt%2==0)
		cout<<'0';
	else	cout<<'1';
	}
    return 0;
}