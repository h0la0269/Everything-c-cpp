
/*#include<iostream>
using namespace std;
int main(){
    string s="192.168.0.1";
    int prev=0,nxt=0;
    s.insert(3,1,'[');
    s.insert(5,1,']');
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            // s.insert(i-1,1,'[');
            // s.insert(i+2,1,']');
            cout<<"yes"<<endl;
        }
    }
    // for(const char &i:s)
    //     cout<<s[i]<<" ";
    cout<<endl;
    return 0;
}*/




/*
    Calculating the length of the last word in a string
#include<iostream>
using namespace std;
int main(){
    string s{"I am Subham Sinha"};
    int len=s.length()-1;
    while(len!=0 and !isspace(s[len]))
        --len;
    string lastWord=s.substr(len+1);
    cout<<lastWord.length()<<endl;
    return 0;
}
*/

//testing reference
/*#include<iostream>
using namespace std;
int main(){
	int x=2,b=10;
	cout<<x<<endl;
    int& a=x;
	cout<<a<<endl;
	cout<<b;
	a=3;
	a=b;
	cout<<x<<endl<<a<<endl;
    return 0;
}*/

// C++ Program to find decimal value of
// binary linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
class Node
{
	public:
	bool data;
	Node* next;
};

/* Returns decimal value of binary linked list */
int decimalValue(Node *head)
{
	// Initialized result
	int res = 0;

	// Traverse linked list
	while (head != NULL)
	{
		// Multiply result by 2 and add
		// head's data
		res = (res << 1) + head->data;
        cout<<res<<endl;
		// Move next
		head = head->next;
	}
	return res;
}

// Utility function to create a new node.
Node *newNode(bool data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

/* Driver program to test above function*/
int main()
{
	/* Start with the empty list */
	Node* head = newNode(0);
	head->next = newNode(1);
	head->next->next = newNode(0);
	head->next->next->next = newNode(1);

	cout << "Decimal value is "
		<< decimalValue(head);

	return 0;
}

// This is code is contributed by rathbhupendra
