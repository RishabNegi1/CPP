#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void prll(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int maian()
{
    Node* head=new Node();
    Node* f=new Node();
    Node* s=new Node();
    Node* t=new Node();

    head->data=10;
    head->next=f;

    f->data=20;
    f->next=s;

    s->data=30;
    s->next=t;

    t->data=40;
    t->next=NULL;

    prll(head);
    return 0;
}