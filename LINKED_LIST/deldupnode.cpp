// remove duplicate Node from sorted linked list
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next =NULL;
    }
};

Node* deldup(Node* head)
{
    Node* curr = head;
    while(curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
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
}

int main()
{
    Node* head = new Node(1);
    Node* f = new Node(2);
    Node* s = new Node(2);
    Node* t = new Node(3);
    Node* fr = new Node(4);

    head->next = f;
    f->next = s;
    s->next = t;
    t->next = fr;
    fr->next = NULL;

    deldup(head);
    prll(head);
}