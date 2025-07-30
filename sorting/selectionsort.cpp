// selection sort  : this is a sorting algorithm in which the array is divided into two parts each 
// the left half is sorted part and right half is unsorted part 
// in this sorting method we find the minimum element and then compare it with others and sort elements 
#include <iostream>
#include <vector>
using namespace std;


void selectionsort(int size , vector <int>& array)
{
    for ( int i = 0 ; i< size-1 ; i++)
    {
        int minIndex = i;
        for (int j = i+1 ; j < size ; j++)
        {
            if ( array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }

        swap(array[i] , array[minIndex]);
    }    

}

void printArray(vector <int>& array , int size) 
{
    for ( int i = 0 ; i < size ; i++)
    {
        cout<<array[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    // taking input
    cout<<"Please Enter the size of the array"; 
    int size;
    cin>>size;
    vector <int> array(size);
    cout<<"Please Enter the elements in the array";
    for (int i = 0 ; i < size ;i++)
    {
        cin>>array[i];
    }

    selectionsort(size , array);
    cout<<"sorted array";
    printArray(array,size);

    return 0;

}