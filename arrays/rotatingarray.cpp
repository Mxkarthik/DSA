// given that k can be greater than n as well where n is the size of array 'a'

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void rotating_array (vector <int> & array , int size)
{

}

int main()
{
    int size;
    cout<<"Please enter the size of the vector : "<< " "<< endl;
    cin>>size;
    
    vector <int> array (size);

    cout<<"Please enter elements in the vector :"<<" "<<endl;

    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    // rotating array
    rotating_array(array,size);
}