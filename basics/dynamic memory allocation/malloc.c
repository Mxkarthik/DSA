#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *p;
    p = (int*) malloc(5*sizeof(int));

    // now priving values in the allocated memeory
    for (int i = 0 ; i < 5 ; i++)
    {
        p[i] = i+1;
    }

    printf("The elements in the array are : \n");

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d\n",p[i]);
    }

    free(p);

    return 0;
}