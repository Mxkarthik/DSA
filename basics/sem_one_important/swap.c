#include <stdio.h>

void swap (int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("the value of a = %d\n", *a);
    printf("the value of b = %d\n", *b);
}

int main ()
{
    int a,b;
    printf("please enter the value of a :\n");
    scanf("%d",&a);
    
    printf("please enter the value of b :\n");
    scanf("%d",&b);

    printf("The enter value of a = %d\n" , a);
    printf("The enter value of b = %d\n" , b);

    swap(&a,&b);
    return 0;
}