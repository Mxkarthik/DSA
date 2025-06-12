#include <iostream>
#include <vector>
using namespace std;

int max_value(vector <int> array , int size , int idx)
{
    // base case : if the array has only one element then the element is the maximum number 
    if ( idx == size-1 ) return array[idx];

    //recursion statement
    return max(array[idx] , max_value(array, size , idx+1));
}
int main()
{
    cout<<"Please Enter the size of the array :";
    int size;
    cin>>size;
    vector <int> array(size);

    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int idx = 0;
    int maximum = max_value(array , size , idx);
    cout<<maximum;
    return 0;
}