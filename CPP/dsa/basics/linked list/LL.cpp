#include <iostream>
#include <list>
#include <string>
using namespace std;

class Node{
	public:
		string name;
		Node* next;
};

void add (Node** nd,string name){
	Node* newNode = new Node();
	Node* head;
	newNode->name = name;
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

void display(Node *s){
	while(s!=NULL){
		cout << "Name of student: " << s->name << endl;
		s=s->next;
	}
}

int main (){
	Node* s = NULL;
	int choice;
	string name;
	while(true){
		cout << "MENU"<< endl << "1. Add Student" << endl << "2. Display Student" << endl << "\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter Name of student: ";




			cin.ignore();
			getline(cin, name);
			add(&s, name);





			cout << "Name added\n" << endl;
			break;
		case 2:
			display (s);
			break;
		case 3:
			
		default:
			break;
		}
	}
	return 0;
}
