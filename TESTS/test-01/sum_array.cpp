#include <iostream>
using namespace std;

void sum_of_array (int array[] , int size)
{
    int result = 0;
    for (int i = 0 ; i < size ; i++)
    {
        result += array[i];
    }

    cout<<"the value of the result :"<<result;
}
int main ()
{
    //initialising size 
    int size = 0 ;
    cout<<"Please enter the size of the array";
    // taking size from the user
    cin>>size;
    int array [size];

    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    sum_of_array(array,size);

    return 0;
}