#include<iostream>
using namespace std;

struct node{
	int key;
	struct node *left, *right;
};

struct node *createNode(int k){
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->key=k;
	newNode->left=newNode->right=NULL;
	return newNode;
}

struct node *insertNode(struct node *root,int key){
	if(root==NULL)
		return createNode(key);
	if(key<root->key)
		root->left=insertNode(root->left, key);
	else
		root->right=insertNode(root->right, key);
	return root;

}

void inOrderTraversal(struct node *n){
	if(n!=NULL){
		inOrderTraversal(n->left);
		cout<<n->key<<" ";
		inOrderTraversal(n->right);
	}
}

int main(){
	struct node *root = NULL;
	root = insertNode(root, 8);
	root = insertNode(root, 3);
	root = insertNode(root, 1);
	root = insertNode(root, 6);
	root = insertNode(root, 7);
	root = insertNode(root, 10);
	root = insertNode(root, 14);
	root = insertNode(root, 4);
	inOrderTraversal(root);
	cout<<endl;
	return 0;
}