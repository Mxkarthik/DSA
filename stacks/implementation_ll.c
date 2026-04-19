#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push (int value)
{
    struct node *new_node;
    new_node = (struct node*) malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Stack is overflown");
    }
    else 
    {
        new_node -> data = value;
        new_node ->next = top;
        top = new_node;
        printf("\nPushed : %d", value);
    }
    
}

void pop ()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("\n Stack is empty");
    }
    else 
    {
        temp = top;
        printf("\n Popped : %d" , temp->data );
        top = top->next;
        free(temp);
    }
}

void display ()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty");
    }
    else 
    {
        temp = top;
        while (temp != NULL)
        {
            printf("\n %d,", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}

int main ()
{
    int choice , value;
    while (1)
    {
        printf("\n Menu Card");
        printf("\n 1. push \n 2.pop \n 3.display \n 4.exit");
        printf("\n Please enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
                printf("\nEnter an element");
                scanf("%d",&value);
                push(value);
                break;
            case 2 :
                pop();
                break;
            case 3 :
                display();
                break;
            case 4 :
                exit(0);
            default :
                printf("\nNo the correct choice !");
        }
    }
    return 0;
}