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

Node* delnode(Node* head, int val)
{
    Node* temp = head;
    Node* prev = NULL;
    while(temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    } 
    prev->next = temp->next;
    return head;
}

void prll(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(10);
    Node* f = new Node(20);
    Node* s = new Node(30);
    Node* t = new Node(40);
    Node* u = new Node(50);

    head->next =f;
    f->next = s;
    s->next = t;
    t->next = u;
    u->next = NULL;

    delnode(head, 20);
    prll(head);
    return 0;
}