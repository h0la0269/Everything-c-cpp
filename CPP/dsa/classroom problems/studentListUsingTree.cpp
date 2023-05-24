#include<iostream>
using namespace std;

struct list{
	long long int rollN;
	string name, stream;
	list *next;
};

void addToList(list **s, string n, string st,long long int r){
	list *tmp=new list;
	tmp->name=n;
	tmp->stream=st;
	tmp->rollN=r;
	tmp->next=NULL;
	if(*s=NULL){
		*s=tmp;
	}
	else{
		list *head=*s;
		while(head!=NULL)
			head=head->next;
	}
}

void display(list *s){
	while(s!=NULL){
		
		s=s->next;
	}
}

int main(){
	list *s=NULL;
	string name,stream;
	cout<<"Enter student details: "<<endl;
	cout<<"Student Name: ";
	getline(cin, name);
	cout<<"Stream";
	getline(cin, stream);
	addToList(&s,name,stream,2111200002504);
	cout<<endl<<"Name: "<<s->name<<endl<<"Stream"<<s->stream<<endl<<"Roll No: "<<s->rollN<<endl;
	display(s);
	return 0;
}