//checking if a tree is a full binary tree.

#include<iostream>
using namespace std;

struct node{
	int key;
	struct node *left, *right;
};

struct node *newNode(int k){
	struct node *NEWnode=(struct node*)malloc(sizeof(struct node));
	NEWnode->key=k;
	NEWnode->left=NEWnode->right=NULL;
	return NEWnode;
}

bool isFullBinaryTree(struct node* root){
	if(root==NULL)	
		return true;
	if(root->left==NULL and root->right==NULL)
		return true;
	if((root->left) and (root->right))
		return (isFullBinaryTree(root->left) and isFullBinaryTree(root->right));
	return false;
}

int main(){
	struct node *root = NULL;
	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->left = newNode(6);
	root->left->right->right = newNode(7);
	root->left->right->left->right = newNode(8); //remove this line to make the tree a full binary tree
	if(isFullBinaryTree(root))
		cout<<"The tree is a full binary tree"<<endl;
	else	cout<<"Tree is not a full binary tree"<<endl;
	return 0;

}