#include <stdio.h>

int factorial( int n)
{
    if ( n == 0 || n == 1)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}
int main ()
{
    int n;
    printf("Please enter the number n :");
    scanf("%d",&n);
    printf("The value of n! :");
    printf("%d",factorial(n));
    return 0;
}