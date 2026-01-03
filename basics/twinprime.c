#include<stdio.h>

int prime (int n)
{
    if(n<2)
      return 0;
    for (int i = 2 ; i * i <= n ; i++)
    {
        if(n%i==0)
          return 0;
    }
    return 1;
} 

void twin (int n)
{
    int next = n+2;
    int prev = n-2;
    if(prime(n) && prime(next))
    {
        printf("The twin primes are :(%d,%d)\n",n,next);
    } 
    else if ( prime(n) && prime(prev))
    {
        printf("The twin primes are:(%d,%d)",prev,n);
    }
    else
    {
        printf("This doesnt have no twin prime.\n");
    }
}

int main ()
{
    int n; 
    printf("Please enter the number n: ");
    scanf("%d",&n);
    twin(n);
    return 0;
}
