#include <stdio.h>

void reverse (int array[] , int size)
{
    printf("the reversed array using back tacking :\n");
    for (int i = size-1 ; i >= 0 ; i-- )
    {
        printf("%d\t",array[i]);
    }
}

int main ()
{

    int array [100];
    int size;
    printf("Please enter the size of the array :");
    scanf("%d",&size);
    printf("Please enter the elements of the array :\n");
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    reverse(array,size);
    return 0;
}