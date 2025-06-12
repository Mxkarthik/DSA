#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int first_largest(vector <int> &array ,int size )
{
    int largest = INT_MIN;
    for (int i = 0 ; i < size ; i++)
    {
        if (array[i]> largest)
        {
            largest = array[i];
        }
    }
    return largest;
}

int second_largest(vector <int> &array , int size)
{
    int largest_first = first_largest(array ,size);

    for (int i = 0 ; i < size ; i++)
    {
        if ( array [i] == largest_first)
        {
            array[i] = INT_MIN;
        }
    }

    int second_largest = INT_MIN;

    for (int i = 0 ;  i < size ; i++)
    {
        if ( array [i] > second_largest)
        {
            second_largest = array[i];
        }
    }

    return second_largest;


}

int main()
{
    int size;
    cout<<"please enter the size of the vector :"<<" "<<endl;
    cin>>size;

    vector <int> array(size);
    cout<<"Please enter the elements in the vector"<<" "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    first_largest(array,size);
   cout<<  second_largest(array,size);
   return 0;
}


// the time complexity of the code is O(n); linear
// the space complexity of the code is 0(1); constant 