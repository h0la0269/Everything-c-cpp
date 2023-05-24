#include <iostream>
using namespace std;

int main(){
	int val, nextVal, count =1;
	cout << "Enter numbers:"<< endl;
	if(cin >> val){
		while (cin >> nextVal)
		{
			if(val == nextVal)
				count ++;
			else {
				cout << val << " occured " << count << " times." << endl;
				val = nextVal;
				count = 1; 
			}
		}
		cout << val << " occured " << count << " times." << endl;
	}
	return 0;
}