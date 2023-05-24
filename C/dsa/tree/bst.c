#include<stdio.h>
#include<stdlib.h>

#define n 100
typedef struct {
	int key;
	struct node* left;
	struct node* right; 
}node;

typedef struct{
	int data[n];
	int tos;
}stack;


node* getnode(int key){
	node *tmp=(node *)malloc(sizeof(node));
	tmp->key=key;
	tmp->left=tmp->right=NULL;
	return tmp;
}

node* bsearch(node *root, int key){
	if(root==NULL)
		return NULL;
	else {
		if(root->key>key)
			return bsearch(root->left, key);
		if(root->key<key)
			return bsearch(root->right, key);
	}
}

void insert (node ** ptroot, int key){
	if (*ptroot==NULL)
		*ptroot=getnode(key);
	else if (key<(*ptroot)->key)
		insert(&(*ptroot)->left, key);
	else
		insert(&(*ptroot)->right, key);
}

void inorder(node *root){
	stack *s;
	while(1){
		while (root !=NULL){
			push (&s, root);
			root=root->left;
		}
		if(isempty(&s)==1)
			break;
		else{
			root=pop(&s);
			printf("%d", root->key);
		}
		root=root->right;
	}
}


int main(){
	node *ptr;
	insert(ptr, 10);
	insert(ptr, 1);
	insert(ptr, 6);
	insert(ptr, 7);
	insert(ptr, 2);
	insert(ptr, 13);
	insert(ptr, 16);
	insert(ptr, 5);


}