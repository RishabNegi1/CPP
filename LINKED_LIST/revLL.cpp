#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next = NULL;
    }
};

Node* revll(Node* head)
{
    Node* prev = NULL, *curr = head, *next;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* revllrec(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* newh = revllrec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newh;
}

void prll(Node* newh)
{
    Node* temp = newh;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* f = new Node(20);
    Node* s = new Node(30);
    Node* t = new Node(40);
    Node* fr = new Node(50);

    head->next = f;
    f->next = s;
    s->next = t;
    t->next = fr;
    fr->next = NULL;

    //Node* newh = revll(head);
    Node* newh = revllrec(head);
    prll(newh);
}