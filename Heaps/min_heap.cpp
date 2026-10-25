#include <stdio.h>
#include <conio.h>

#define MAX 100

void swap (int *x , int *y)
{
    int temp ; 
    temp =*x;
    *x = *y;
    *y = temp;
}

void minHeapify(int heap[] , int size , int i )
{
    int smallest;
    int left,right;

    smallest = i;
    left = 2*i;
    right = 2*i+1;

    if ( left <= size && heap[left] < heap[smallest])
    {
        smallest = left;
    }
    if (right <= size && heap[right] < heap[smallest])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        swap(&heap[i],&heap[smallest]);
        minHeapify(heap, size , smallest);
    }

}

void buildMinHeap(int heap[] , int size)
{
    int i;
    for ( i = size/2 ; i>= 1 ; i--)
    {
        minHeapify(heap,size,i);
    }
}

void shiftUp(int heap[] , int i)
{
    int parent;
    
    while (i > 1)
    {
        parent = i/2;
        if(heap[i] < heap[parent])
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

void deleteAtPosition ( int heap[] , int *size , int position )
{
    int parent;
    if ( position < 1 || position > *size)
    {
        printf("Invalid position . \n");
        return;
    }

    printf("Deleted Element : %d \n", heap[position]);
    heap[position] = heap[*size];
    (*size)--;

    if ( position <= *size)
    {
        parent = position/2;
        if ( position > 1 && heap[position] < heap[parent])
        {
            shiftUp(heap , position);
        }
        else
        {
            minHeapify(heap,*size , position);
        }
    }
}

void DisplayHeap (int heap[] , int size )
{
    int i;
    if(size == 0)
    {
        printf("Heap is Empty\n");
        return;
    }

    for (int i = 1 ; i <= size ; i++)
    {
        printf("%d", heap[i]);
    }

    printf("\n");
}

int main()
{
    int heap[MAX+1];
    int size;
    int position;
    int i;

    // clrscr();

    printf("Enter the number of elements in the heap: \n");
    scanf("%d",&size);

    if ( size < 1 || size > MAX)
    {
        printf("Invalid Size.\n");
        // getch();
        return 0;
    }

    printf("Enter %d Elements", size);

    for ( i = 1 ; i <= size ; i++)
    {
        scanf("%d",&heap[i]);
    }

    buildMinHeap(heap,size);

    printf("\nMinHeap:\n");
    DisplayHeap(heap, size);

    printf("\nEnter the position to delete (starting from 1): ");
    scanf("%d", &position);

    deleteAtPosition(heap, &size, position);

    printf("\nMin heap after deletion: ");
    DisplayHeap(heap, size);

    getch();
    return 0;
}