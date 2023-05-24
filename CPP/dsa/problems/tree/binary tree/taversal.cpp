#include <iostream>
using namespace std;
#define ITEM int
struct node{
	ITEM data;
	struct node *left;
	struct node*right;
};

struct node *addNewNode(ITEM data){
	node* newNode = new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return (newNode);
}

void preOrderTraversal(struct node*temp){
	if(temp!=NULL){
		cout<< " "<<temp->data;
		preOrderTraversal(temp->left);
		preOrderTraversal(temp->right);
	}
}

void inOrderTraversal(struct node*temp){
	if(temp!=NULL){
		preOrderTraversal(temp->left);
		cout<< " "<<temp->data;
		preOrderTraversal(temp->right);
	}
}

void postOrderTraversal(struct node*temp){
	if(temp!=NULL){
		preOrderTraversal(temp->left);
		preOrderTraversal(temp->right);
		cout<< " "<<temp->data;
	}
}
int main(){
	struct node* root = addNewNode(3);
	root->left=addNewNode(2);
	root->right=addNewNode(1);
	preOrderTraversal(root);
	cout<<endl;
	inOrderTraversal(root);
	cout<<endl;
	postOrderTraversal(root);
	cout<<endl;
	return 0;
}