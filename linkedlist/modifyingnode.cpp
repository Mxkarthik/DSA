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

void insertAtHead (Node * &head , int val)
{
    Node *new_node = new Node(val);
    new_node-> next = head;
    head = new_node;
}

void insertAtTail(Node * &head , int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtK(Node * &head , int val , int pos)
{
    if (pos == 0)
    {
        insertAtHead(head,val);
        return;
    }
    Node *new_node = new Node(val);
    int curr_pos = 0;
    Node *temp = head;
    while (temp != NULL && curr_pos < pos-1) // optimised : temp != NULL && curr_pos < pos-1
    {
        temp = temp->next;
        curr_pos++;
    }
    if (temp == NULL)
    {
        cout<<"position out of range "<<endl;
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    
}

void ModifyAtK(Node * &head , int value , int pos)
{
    Node *temp = head;
    int curr_pos = 0;
    while (temp !=NULL && curr_pos<pos)
    {
        temp = temp->next;
        curr_pos++;
    }
    if(temp == NULL)
    {
        cout<<"position out of range!"<<endl;   
        return ;
    }
    temp->val = value;
}
void printing(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
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

    insertAtTail(head,3);
    printing(head);

    insertAtTail(head,4);
    printing(head);

    insertAtK(head,8 ,1);
    printing(head);

    ModifyAtK(head,6,2);
    printing(head);

    insertAtK(head,10,2);
    printing(head);

    ModifyAtK(head,12,2);
    printing(head);


    return 0;
}