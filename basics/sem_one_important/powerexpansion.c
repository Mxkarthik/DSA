#include <stdio.h>

int main ()
{
    float x;
    float n;
    float sum = 1.0; float term;
    printf("Please enter the value of (0<x<1) :");
    scanf("%f",&x);

    if( x < 0 || x > 1)
    {
        printf("Entered invalid x value try again");
        return 0;
    }
    else
    {
        printf("Please enter the value of n :");
        scanf("%f",&n);

        term = 1.0;
        
        for (int i = 1 ; i <= n ; i++)
        {
            term = term * x /i;
            sum = sum + term;
            
        }
        printf("the expansion e ^ x = %f",sum);
    }
    return 0;
}