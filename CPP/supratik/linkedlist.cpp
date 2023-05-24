#include <iostream>
using namespace std;
class list;
class node{
    friend class list;
    int data;
    node *next;
};

class list{
    node *head;
    public:
    list()
    {
        head = NULL;
    }
    ~list()
    {
        
    }
    void addbeg(int);
    void append(int);
    void delbeg();
    void delend();
    void traverse();
};

void list::addbeg(int val)
{
    node *tmp = new node;
    tmp->data=val;
    tmp->next=head;
    head=tmp;
}
void list::append(int val)
{
    node *tmp = new node;
    tmp->data = val;
    if(head==NULL)
    {
        head=tmp;
    }
    else
    {
        node *ptr = head;
        while(ptr->next!=NULL)
        {
             ptr=ptr->next;
        }
        ptr->next=tmp;
    }
    tmp->next=NULL; 
}
void list::delbeg()
{
    if(head==NULL)
        return;
    node *tmp = head;
    head = tmp->next;
    delete tmp;
}
void list::delend()
{
    if(head==NULL)
        return;
    node *ptr = head;
    while(ptr->next->next!=NULL)
        ptr=ptr->next;
    node *tmp = ptr->next;
    ptr->next = NULL;
    delete tmp;
}
void list::traverse()
{
    if(head==NULL)
        cout<<"The List is Empty"<<endl;
    else
    {
        node *tmp = head;
        while(tmp!=NULL)
        {
            cout<<tmp->data<<endl;
            tmp=tmp->next;
        }
    }
}
int main ()
{
    list l1;
    l1.append(19);
    l1.append(5);
    l1.append(7);
    l1.traverse();
    return 0;
}