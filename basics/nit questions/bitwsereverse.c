#include <stdio.h>

void swap(int &a , int &b)
{
     a = a^b;
     b = a^b;
     a = a^b;

     printf("a=%d",a);
     printf("b=%d",b);
}

int main ()
{
    int a; int b;
    printf("Please enter the value of a"); 
    scanf("%d",&a);
    printf("Please enter the value of b");
    scanf("%d",&b);

    swap(a,b);
    return 0;

}