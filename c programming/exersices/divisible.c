#include <stdio.h>


void checkdivisiblity(int x)
{
    if (x%97 == 0)
    {
        printf("The provided value is divided by 97");
    }
    else 
    {
        printf("The provided value is not divided by 97");
    }
}
int main ()
{
    int x;
    printf("Please Enter the value that you want to check :);
    scanf("%d",&x);

    checkdivisiblity(x);

    return 0;
}