#include <stdio.h>

void area(int x , int y)
{
    int rectarea = x*y;
    printf("the area of the reactangle %d" , rectarea);
}

int main ()
{
    int x;
    printf("Please Enter the value of x");
    scanf("%d",&x);
    int y;
    printf("Please Enter the value of y");
    scanf("%d",&y);
    area(x,y);

    return 0;
}
