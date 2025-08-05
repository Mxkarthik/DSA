#include <stdio.h>

int main()
{
    int a; int b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Now enter the value of b:");
    scanf("%d" , &b);

    /*
        in scanf("%d " , &b) if the space is after %d then it is waits for a new whitespace if you press something other then space then
        it may cause lag or may cause an error or bug
    */ 


    int result = a+b;
    printf("The value of the result : %d " , result);
    return 0;
}