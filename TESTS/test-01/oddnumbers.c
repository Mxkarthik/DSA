#include <stdio.h>

void oddnumbers (int a , int b)
{
    for (int i = a ; i <= b ; i++)
    {
        if ( i % 2 == 1) 
        {
            printf("%d" , i);
            printf("%s", "\n");
        }
    }
}

int main ()
{
    int a; int b;
    printf("Please Enter the value of a");
    scanf("%d", &a);
    printf("Please Enter the value of b");
    scanf("%d",&b);

    oddnumbers(a,b);
}