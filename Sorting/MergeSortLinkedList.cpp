#include<iostream>
using namespace std;
//finding mid of Linked List
class node
{
public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){};
};

void insertAtFront(node* &head,int d)
{
    if(head==NULL)
    {
        node *n=new node(d);
        head=n;
        return;
    }
    node* n=new node(d);
    n->next=head;
    head=n;
    return;
}

node* mid(node* head)
{
    if(head==NULL)
    {
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


node* merge(node* A,node* B)
{
    if(A==NULL)
    {
        return B;
    }
    if(B==NULL)
    {
        return A;
    }
    node* nhead=NULL;
    if(A->data>B->data)
    {
        nhead=B;
        nhead->next=merge(A,B->next);
    }
    else
    {
        nhead=A;
        nhead->next=merge(A->next,B);
    }
    return nhead;
}

node* mergeSort(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* m=mid(head);
    node* x=head;
    node* y=m->next;
    m->next=NULL;
    x=mergeSort(x);
    y=mergeSort(y);
    node* nhead=merge(x,y);
    return nhead;
}

void print(node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;
    // insertAtFront(head1,5);
    // insertAtFront(head2,4);
    // insertAtFront(head2,3);
    // insertAtFront(head2,2);
    // insertAtFront(head1,1);
    // node* temp=merge(head1,head2);
    insertAtFront(head1,3);
    insertAtFront(head1,7);
    insertAtFront(head1,5);
    node* temp=mergeSort(head1);
    if(temp)
    {print(temp);}
}