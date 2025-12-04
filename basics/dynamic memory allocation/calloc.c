#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *p;
    p = (int*) calloc(5,sizeof(int));

    printf("The elements in the array are : \n");
    // printing the pointer array 
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d\n", p[i]);
    }
    return 0;
}