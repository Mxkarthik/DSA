#include <iostream>
#include <vector>
using namespace std;

int sum_of_array (vector <int> array , int size , int idx)
{
    int sum = 0;

    // base case :
    if ( idx == 0 and size ==1  ) {
        sum += array[idx];
        return sum;
    } 
    if (idx == size -1 ) return array[idx];

    // recurssion statement :
    sum = array[idx]+ sum_of_array(array , size , idx+1 );
    return sum;
}
int main()
{
    int size;
    cout<<"Please Enter the size of the array :";
    cin>>size;
    vector <int> array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int idx = 0;

    int result = sum_of_array(array, size , idx);
    cout<<result;

    return 0;
}