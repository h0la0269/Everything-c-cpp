#include <stdio.h>
#include <stdlib.h>
#define item int

typedef struct st{
    item data;
    struct st *left;
    struct st *right;
}node;

void init(node **root);
node *createnode(item val);
void preorder(node *root);
void inorder(node *root);
void postorder(node *root);

void init(node **root){
    (*root)->left = NULL;
    (*root)->right = NULL;
}

node *createnode(item val){
    node *tmp = (node *)malloc(sizeof(node));
    tmp->data = val;
    tmp->left = NULL;
    tmp->right = NULL;
}

void preorder(node *root){
    if (root!=NULL)
        return;
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){
    if(root!=NULL)
        return;
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
}

void postorder(node *root){
    if(root!=NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->data);
}

int main(){
    node *root = NULL;
    root = createnode(16);
    root->left = createnode(53);
    root->right = createnode(45);

    root->left->left = createnode(1);
    root->left->right = createnode(2);

    root->right->right = createnode(19);

    preorder(root);
    inorder(root);
    postorder(root);
    return 0;
}