#include <iostream>
#include <vector>
using namespace std;

vector <int> RotateArray_Ktimes(int array [] , int k , int size)
{
    int j = 0 ;
    vector <int> newarray(size);
    k = k % size;

    // initialising the rotation of k elements
    for ( int  i = size-k ; i < size ; i++ )
    {
        newarray[j++] = array[i];
    }

    // initialising remaining elements in the array 
    for ( int i = 0 ; i <= size-k ; i++)
    {
        newarray[j++] = array[i];
    }

    // printing the new vector 
    for ( int i = 0 ; i < size ; i++)
    {
        cout<<newarray[i]<<" ";
    }
    cout<<endl;

    
}

int main()
{
    int size = 5;
    int k; cin>>k;
    int array [] = {1,2,3,4,5};
    RotateArray_Ktimes(array,k,size);
    return 0;
}