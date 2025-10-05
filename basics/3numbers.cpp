#include <stdio.h>

int main ()
{
    int a,b,c;
    printf("Please enter the values of a,b,c");
    scanf("%d %d %d" , &a ,&b , &c);
    if ( ((a>b) && (a>c)))
    {
        printf("the largest value = %d",a);
    }
    else 
    {
        if((b>a) && (b>c))
        {
            printf("the largest value = %d",b);
        }
        else
        {
            printf("the largest value = %d" ,c);
        }
    }
    return 0;
}

