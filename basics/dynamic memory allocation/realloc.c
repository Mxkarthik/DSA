#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *p;
    p = (int*) malloc(5*sizeof(int));
    // now checking the memory address 
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d\n",p+1);
    }
    // now resiging using realloc 
    p = (int*) realloc(p,10*sizeof(int));

    // now checing the memory address after realloc

    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d\n",p+1);
    }

    free(p);
    return 0;
}