#include <iostream>
#include <string>
using namespace std;

class Node{ 
	public: 
		char std_name [50];
		long long int roll;
		Node *next;
};

void add (Node** nd,char *name, long long int roll){
	Node* newNode = (Node *)malloc(sizeof(Node));
	Node* head;
	newNode->std_name = name;
	newNode->roll = roll;
	newNode->next = NULL;
	if(*nd == NULL)
		*nd = newNode;
	else{
		head = *nd;
		while (head->next != NULL)
			head = head->next;
		head->next = newNode;
	}
}

int main (){
	char arr[50];
	long long int roll;
	cout << "Enter your name: ";
	cin.get(arr,100);
	cout << "Enter you roll: ";
	cin >> roll;
	cout << "Your Name: " << arr << endl << "Your Roll: " << roll << endl;
	

	return 0;
}