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

Node* rev(Node* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node* newh = rev(head);
        head->next->next=head;
        head->next=NULL;
        return newh;
    }
    int length(struct Node* head){
        int count = 0;
        struct Node* current = head;
        while(current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    Node* addTwoNumbers(Node* l1, Node* l2) {
        if(length(l1) < length(l2))
        {
            Node* temp = l1;
            l1 = l2;
            l2 = temp;
        }
        Node* f = rev(l1);
        Node* f1 = f;
        Node* s = rev(l2);
        Node* s1 = s;
        Node* prev = NULL;
        int carry = 0;
        
        while(f1 != NULL || s1 != NULL)
        {
            int fd=0, sd=0;
            if(f1==NULL)
            {
                fd=0;
            }
            else{
                fd= f1->data;
            }
            
            if(s1==NULL)
            {
                sd=0;
            }
            else{
                sd= s1->data;
            }
            int sum=fd=sd=carry;
            carry=sum/10;
            f1->data=sum%10;
            prev=f1;
            f1=f1->next;
            if(s1!=NULL)
            {
                s1=s1->next;
            }
        }
        if(carry==1)
        {
            Node* newn = new Node(1);
            prev->next = newn;
        }
        return rev(f);
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

    prll(head);
}