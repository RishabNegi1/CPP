// remove duplicate Node from unsorted linked list
#include<bits/stdc++.h>
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
    unordered_set<int>s;
    Node* curr = head, *prev = NULL;
    while (curr != NULL)
    {
        if(s.find(curr->data)!=s.end())
        {
            prev->next = curr->next;
        }
        else{
            s.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
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
    Node* s = new Node(3);
    Node* t = new Node(4);
    Node* fr = new Node(2);

    head->next = f;
    f->next = s;
    s->next = t;
    t->next = fr;
    fr->next = NULL;

    deldup(head);
    prll(head);
}