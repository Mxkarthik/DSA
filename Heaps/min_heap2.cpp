#include <stdio.h>
#include <conio.h>

#define MAX 100 

void swap(int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Minhepify(int heap[] , int size , int i )
{
    int smallest; int left ; int right;

    smallest = i;
    left = 2*i;
    right = 2*i+1;

    if ( left <= size && heap[left] < heap[smallest])
    {
        smallest = left;
    }
    if ( right <= size && heap[right] < heap[smallest])
    {
        smallest = right;
    }

    if ( smallest != i)
    {
        swap(&heap[i] , &heap[smallest]);
        Minhepify(heap, size , smallest);
    }

}

void build_minHeap(int heap[] , int size)
{
    int i;
    for (i = size/2 ; i >= 1 ; i--)
    {
        Minhepify(heap,size,i);
    }
}

void ShiftUp(int heap[] , int size , int i )
{
    int parent;

    while (i > 1)
    {
        parent = i/2;

        if (heap[i] < heap[parent])
        {
            swap(&heap[i],&heap[parent]);
            i = parent;
        }
        else 
        {
            break;
        }
    }
}

void DeleteElement(int heap[] , int *size , int position)
{
    int parent;

    if ( position < 1 || position > *size )
    {
        printf("Not valid");
        return;
    }

    heap[position] = heap[*size];
    (*size)--;

    if (position <= *size)
    {
        parent = position/2;
        if(position > 1 && heap[position] < heap[parent])
        {
            ShiftUp(heap,*size,position);
        }
        else
        {
            Minhepify(heap,*size,position);
        }
    }
}

void display(int heap[] , int size)
{
    int i;
    for ( i = 1 ; i <= size ; i++)
    {
        printf("%d", heap[i]);
        printf("\n");
    }
}

int main ()
{
    int heap[MAX+1];
    int size;
    int position;
    int i;

    printf("Enter size \n");
    scanf("%d",&size);
    printf("Enter the elements \n");
    for (i = 1 ; i <= size ; i++)
    {
        scanf("%d",&heap[i]);
    }
    build_minHeap(heap,size);

    display(heap,size);

    printf("Enter the position to delete \n");
    scanf("%d" , &position);
    DeleteElement(heap,&size,position);
    
    display(heap,size);
    return 0;
}


