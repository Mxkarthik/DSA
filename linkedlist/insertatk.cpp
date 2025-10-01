#include <iostream>
using namespace std;

class Node 
{
    public:
    int val;
    Node *next;

    Node (int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node * &head , int val)
{
    Node *new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void insertAtTail(Node *&head , int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node *&head , int val , int pos)
{
    if ( pos == 0)
    {
        insertAtHead(head,val);
    }
    Node *temp  = head;
    Node *new_node = new Node(4);
    int curr_pos = 0;
    while(curr_pos != pos)
    {
        temp = temp->next;
        curr_pos++;
        
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void printing(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main ()
{
    Node *head = NULL;
    insertAtHead(head,2);
    printing(head);
    insertAtHead(head,1);
    printing(head);
    insertAtTail(head,3);
    printing(head);
    insertAtPosition(head,4,2);
    printing(head);
    return 0;
}