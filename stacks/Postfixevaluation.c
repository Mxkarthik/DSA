#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push (int value)
{
    stack[++top] = value;
}

int pop ()
{
    int value;
    if (top == -1)
    {
        printf("\nEmpty stack");
    }
    else
    {
        value = stack[top--];
    }

    return value;
}

int postfixexp(char exp[])
{
    int i = 0;
    char ch; 
    int op1,op2;

    while ((ch = exp[i++]) != '\0')
    {
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else
        {
            op2 = pop();
            op1 = pop();

            switch(ch)
            {
                case '+' :
                    push(op1+op2); break;
                case '-' :
                    push(op1-op2); break;
                case '*':
                    push(op1*op2); break;
                case '/':
                    push(op1/op2); break;
                case '^':
                    push(pow(op1,op2)); break;
                

            }
        }
    }
    return pop();
}


int main ()
{
    char exp[MAX];
    printf("Enter postfix expression:");
    scanf("%s",exp);
    printf("Result = %d\n", postfixexp(exp));
    return 0;
}
