#include <iostream>
#include <string>
using namespace std;
class Node{
	public: 
		string name, stream;
		long long int roll_no;
		Node *next;
};

// void check(Node *nd, int roll)

void add_details(Node **nd, string name, long long int roll, string stream){
	Node *newNode = new Node();
	Node* head;
	newNode->name = name;
	newNode->roll_no = roll;
	newNode->stream = stream;
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

//remove student detail by roll number
bool remove_details(Node **head, long long int roll){
	if(head==NULL)
		return false;
	else{
		Node *tmp=new Node();
		
	}
}


void display(Node *s){
	cout << "\nDisplaying students data \n\n"<<endl;
	int count = 1;
	while(s!=NULL){
		cout << "\nStudent " << count << endl;
		cout << "Name: " << s->name << endl << "Roll Number: "<< s->roll_no << endl << "Stream: " << s->stream <<endl;
		count++;
		cout << "--------------<>--------------";
		s=s->next;
	}
}

int main(){
	Node *s = NULL;
	int choice;
	long long int rollNumber;
	string name, stream;
	while (true){
		cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" 
		<< endl << "\nMENU"<< endl << "1. Add Student" << endl<<"2. Delete Student" << endl
		 << "3. Display Student" 
		<< endl << "4. Exit\n" << endl << "\nEnter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Student Info:" << endl;
			cout << "Enter Name: ";
			cin.ignore();
			getline(cin,name);
			cout << "Enter Roll No: ";
			cin >> rollNumber;
			cout << "Enter Stream: ";
			cin.ignore();
			getline(cin,stream);
			add_details(&s, name,rollNumber,stream);
			cout << "Details Added" << endl;
			break;
		case 2:
			//deleting student details
			display(s);
			cout<<"Enter the student roll no. to be deleted: "<<endl;
			cin>>rollNumber;
			remove_details(&s,rollNumber);
			break;
		case 3:
			display (s);
			break;
		case 4:
			return false;
			break;
		default:
			break;
		}
	}
	
	return 0;
}