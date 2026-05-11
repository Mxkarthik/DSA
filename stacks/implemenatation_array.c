#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];

int top = -1;

void push (int value)
{
    if(top == MAX-1)
    {
        printf("\nStack overflown");
    }
    else
    {
        printf("\nPushed : %d" , value);
        stack[++top]= value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("poped out : %d",stack[top]);
        top--;
    }
}

void display ()
{
    if ( top == -1)
    {
        printf("Stack empty");
    }
    else {
       for (int i = top ; i >= 0 ; i--)
        {
            printf("\n%d",stack[i]);
        }
    }
}

int main ()
{
    int choice,value;
    printf("\n Please enter your choice");
    while (1)
    {
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
                printf("\n Enter the value :");
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
                printf("Invalid Choice !");

        }
    }
    return 0;
}