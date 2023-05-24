#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> g){			// function to print the list
	list<int>::iterator itr;		     // initializing iterator
	for (itr = g.begin(); itr != g.end();++itr)
		cout << "\t" << *itr;
	cout << "\n";
}

void insert(list<int> geo){
	geo.push_back(99);
}

int main(){
	list<int> ll_1;
	int len,num;
	char choice;
	cout << "Enter list length: " << endl;
	cin >> len;
	for (int i = 0 ; i < len ; ++i){
		ll_1.push_back(i);
	}
	showlist(ll_1);
	cout << "Do you want to add element in list[y/n]: ";
	cin >> choice;
	if(choice == 'y'){
		cout << "Enter number to be added: ";
		cin >> num;
		ll_1.push_back(num); 			// pushing at the end of the list
		 insert(ll_1);
		cout << "After adding, the new list is" << endl;
		showlist(ll_1); 					//printing the list
	}
	cout << "Exiting process"<<endl;

	return 0;
}