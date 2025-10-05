#include<iostream>
using namespace std;

class Node 
{
    public:
    int val; Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtTail (Node * &head ,int val )
{
    Node *new_node = new Node(val);
    new_node->head = next;
    next = new_node;
}

void printing (Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<"->";
    }
    cout<<"NULL"<<endl;
}

int main ()
{
    Node head = NULL;
    insertAtTail(head,2);
    printing(head);
}