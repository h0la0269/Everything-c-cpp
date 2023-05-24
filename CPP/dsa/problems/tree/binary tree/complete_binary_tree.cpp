#include<iostream>
#include<vector>

using namespace std;

struct node{
	int data;
	struct node *left, *right;
};

struct node *newNode(int val){
	struct node* Node= (struct node *)malloc(sizeof(struct node));
	Node->data=val;
	Node->left=Node->right=NULL;
	return Node;
}

void inOrderTraversal(struct node*temp){
	if(temp!=NULL){
		inOrderTraversal(temp->left);
		cout<< " "<<temp->data;
		inOrderTraversal(temp->right);
	}
}



int main(){
	struct node* tree;
	tree=newNode(10);
	tree->left=newNode(2);
	tree->right=newNode(5);
	inOrderTraversal(tree);
	return 0;
}