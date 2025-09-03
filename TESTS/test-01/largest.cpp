#include <iostream>
#include <climits>
using namespace std;


void largest (int array [] , int size)
{
    int largest = INT_MIN;

    for (int i = 0 ; i < size ; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    cout<<"the largest value : "<<largest<<endl;
}
int main ()
{
    int size = 0;
    cout<<"Please enter the size of the array"<<endl;
    cin>>size;
    int array [size];

    for (int i = 0 ; i< size ; i++)
    {
        cin>>array[i];
    }
    largest(array,size);


    return 0;
}