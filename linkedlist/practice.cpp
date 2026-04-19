#include <iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insert(struct node *&head , int pos , int val)
{
    node *temp = head;
    node * newnode = new node(val); 
    if ( pos == 0)
    {
        
        newnode->next = head;
        head = newnode;
        return;
    }c

    for (int i = 0 ; i < pos-1 && temp !=NULL ; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout<<"Invalide Position\n";
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display (struct node *&head)
{
    node *temp = head;
    while ( temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    cout<<"NULL\n";
}
int main ()
{
    struct node *head = NULL;
    int ch;
    int val;
    int pos;
    do 
    {
        printf("\nLinked List Menu");
        printf("\n1.Insert element at a position");
        printf("\n2.display");
        printf("\n3.exit");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                printf("\nPlease enter the position of the element");
                scanf("%d",&pos);
                printf("\nPlease enter the val of the element");
                scanf("%d",&val);
                insert(head,pos,val);
                break;
            case 2 :
                display(head);
                break;
            case 3:
                printf("exiting...");
                break;
        }
    }
    while (ch != 3);

    return 0;
}