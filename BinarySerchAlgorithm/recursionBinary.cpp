#include <iostream>
#include <vector>
using namespace std;

int recursionBinarySearch(int target , vector <int> array , int lo , int hi)
{
    // calculating the mid 
    int mid;
    mid = (hi+lo) / 2;
    // base case :
    if ( array[mid] == target ) return mid;
    if ( lo > hi ) return -1;
    // resursive logic 
    if ( array[mid] < target)
    {
        return recursionBinarySearch(target , array , mid+1 , hi);
    }
    else 
    {
        return recursionBinarySearch(target , array , lo , hi = mid -1);
    }

    return -1;
}

int main()
{
    cout<<"Please Enter the size of the array :"<<" ";
    int size; cin>>size;
    cout<<"Please Enter the elements in the array :"<<" ";
    vector <int> array (size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
        cout<<" ";
    }
    cout<<endl;

    cout<<"Please Enter the value for target"<<" ";
    int target ; cin>>target;
    int lo = 0; int hi = array.size()-1;
    string output;
    int result = recursionBinarySearch(target , array , lo , hi);
    cout<<result<<" "<<endl;
    if (result != -1) 
    {
        cout<<"Yes the Target exists in the array";
    }
    else 
    {
        cout<<"No the target doesn't exists in the array";
    }
    return 0;
}