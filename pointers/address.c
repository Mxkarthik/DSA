#include <stdio.h>

int main ()
{
    int a = 10;
    int *p;

    // ** double stars represents pointer of pointer 
    int **q;

    p = &a;
    q = &p;

    printf("%u",q);

    return 0;

}