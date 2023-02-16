#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node* newn(Node* head)
{
    Node* new_node= new Node(50);
    new_node->next = head;
    return new_node;
}

void insbet(Node* head, int val)
{
    Node* new_node = new Node(60);
    Node* temp = head;
    while(temp->data != val)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void insend(Node* head)
{
    Node* new_node = new Node(70);
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void prll(Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(10);
    Node* f = new Node(20);
    Node* s = new Node(30);
    Node* t = new Node(40);

    head->next=f;
    f->next=s;
    s->next=t;

    //head = newn(head);
    //insbet(head,20);
    //insend(head);
    prll(head);
    return 0;
}