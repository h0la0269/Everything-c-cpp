// A number guessing game
#include<iostream>
using namespace std;
int main(){
	srand(time(0));
	int n,choice,num;
	string comment;
	cout<<"Enter the upper limit of the numbers: ";
	cin>>n;
	cout<<"Your guess?"<<endl<<"->";
	cin>>choice;
	num=(rand() %n)+1;
	comment = (num==choice)? "\nYour guess was RIGHT\n": "\nSorry. Better luck next time\n";
	cout<<"\n\nThe RESULT:"<<comment<<endl;
	return 0;
}