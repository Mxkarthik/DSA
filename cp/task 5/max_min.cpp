#include <stdio.h>

int main ()
{
    int a,b,c,d,min,max;
    printf("Please enter the values to a,b,c,d")
    scanf("%d %d %d %d",&a,&b,&c,&d);


    // finding maximum 
    max = a;
    if (b>max)
       max = b;
    if (c>max)
       max = c;
    if(d>max)
       max = d;

    // finding minimum
    min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    if(d < min)
        min = d; 

    printf("Maximum = %d\n" , max);
    printf("Minimum = %d" , min);
}