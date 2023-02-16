#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void ll(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
}

Node *push(Node *head, int ndata)
{
    Node *nnode = new Node();
    nnode->data = ndata;
    nnode->next = head;
    head = nnode;
    return head;
}

int main()
{
    Node *head = NULL;
    head = push(head,5);
    head = push(head,2);
    head = push(head,4);
    head = push(head,6);
    ll(head);
}