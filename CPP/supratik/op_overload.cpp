#include <iostream>
using namespace std;

struct node{
    int coef,power;
    node *next;
};
struct list{
    node *head = NULL;
};
void append(node *&refhead,int coef,int power)
{
    node *tmp=new node;
    tmp->coef=coef;
    tmp->power=power;
    if(refhead==NULL)
        refhead=tmp;
    else
    {
        node *ptr=refhead;
        while(ptr->next!=NULL)
            ptr = ptr->next;
        ptr->next=tmp;
    }
    tmp->next=NULL;
}
node* polyadd(node *h1,node *h2)
{
    node *h3 = NULL;
    while(h1!=NULL && h2!=NULL)
    {
        if(h1->power>h2->power)
        {
            append(h3,h1->coef,h1->power);
            h1=h1->next;
        }
        else if(h1->power<h2->power)
        {
            append(h3,h2->coef,h2->power);
            h2=h2->next;
        }
        else
        {
            append(h3,h1->coef+h2->coef,h1->power);
            h1=h1->next;
            h2=h2->next;
        }
    }
    while(h1!=NULL)
    {
        append(h3,h1->coef,h1->power);
        h1=h1->next;
    }
    while(h2!=NULL)
    {
        append(h3,h2->coef,h2->power);
        h2=h2->next;
    }
    return h3;
}
list operator+(list &l1,list &l2)
{
    list res;
    res.head=polyadd(l1.head,l2.head);
    return res;
}
void traverse(node *head)
{
    while(head!=NULL)
    {
        cout<<head->coef<<" "<<head->power<<endl;
        head=head->next;
    }
}
int main()
{
    list l1,l2,l3;
    append(l1.head,6,5);
    append(l1.head,5,4);
    append(l1.head,3,2);

    append(l2.head,3,5);
    append(l2.head,7,3);
    append(l2.head,8,1);

    l3=l1+l2;
    traverse(l3.head);
    return 0;
}