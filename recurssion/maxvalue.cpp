#include <iostream>
#include <vector>
using namespace std;

int maximum_value (vector <int> array , int size , int idx)
{
    //base case : when the array only have a single element then itself becomes the maximum element 
    if ( idx == size-1)  return array[idx];

    // recursive method
    return max(array[idx] , maximum_value(array , size , idx+1));
}

int main()
{
    cout<<"Please Enter the size of the array :";
    int size;
    cin>>size;
    
    vector <int> array(size);

    for (int i = 0 ; i < size ; i ++)
    {
        cin>>array[i];
    }
    int idx = 0 ;
    int maximum = maximum_value(array , size , idx);
    cout<<"This is the maximum value of the given array:"<<endl;
    cout<<maximum<<endl;
    return 0;

}