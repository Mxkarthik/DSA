#include <iostream>
#include <vector>
using namespace std;

int check_target_binarysearch (int target , vector <int> array)
{
    int mid; int lo = 0 ; int hi = array.size()-1;

    while (lo <= hi)
    {
        //calculating mid
        mid = (lo+hi) /2;
        // what if mid itself is the target 
        if ( array [mid] == target) return mid;
        else if ( array[mid] < target) lo = mid+1;
        else {
            // discard the right side of the array
            hi = mid-1;
        }
    }
    return -1;
}

int main()
{
    cout<<"please enter the target digit that you want to find ";
    int target; cin>>target;
    cout<<"please enter the size of the array";
    int size; cin>>size;
    cout<<"Plese Enter the value in the array :";
    vector <int> array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
        cout<<" ";
    }
    cout<<endl;
    int results = check_target_binarysearch(target , array);
    cout<<results;
}