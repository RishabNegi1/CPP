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

Node* revLLrec(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* newh = revLLrec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newh;
}

Node* add1Ll(Node* head)
{
    Node* new_head = revLLrec(head);
    Node* current = new_head, *prev = NULL, *current1 = new_head;
        
    int carry = 0;
        while(current != NULL){
            int sum = 0;
            if(prev == NULL){
                sum = current->data + 1;
            }else{
                sum = current->data + carry;
            }
            
            carry = sum/10;
            current->data = sum%10;
            prev = current;
            current = current->next;
            
        }
        
        if(carry == 1){
            Node* new_node = new Node(1);
            prev->next = new_node;
        }
        return revLLrec(current1);
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
    Node* fr = new Node(5);

    head->next = f;
    f->next = s;
    s->next = t;
    t->next = fr;
    fr->next = NULL;

    add1Ll(head);
    prll(head);
}