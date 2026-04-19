#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(struct node **head , int val , int pos)
{
    struct node *temp = head;
    struct node *newnode = malloc(struct *node) node(val);

    if (pos == 0)
    {
        temp->next = head;
        head = newnode;
        break;
    }
    for (int i = 0 ; i < pos-1 && temp != NULL ; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("the position is out of bound");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void display (struct node **head)
{
    struct node *temp= head;
    while (temp != NULL)
    {
        printf("%d->",temp->data);
    }
    printf("NULL\n");
}

int main ()
{
    struct node *head = NULL;
    int val ; int pos ; int ch; 

    do 
    {
        printf("\nLinked List Menu");
        printf("\n1.insertion");
        printf("\n2.display");
        printf("\n3.exit");
        printf("please enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                printf("\nplease enter val");
                scanf("%d",&val);
                printf("\nplease enter position");
                scanf("%d",&pos);
                insert(head,val,pos);
            case 2:
                display(head);
            case 3:
                printf("/nexiting.....");
        }
    }while(ch!=3);
    return 0;
}