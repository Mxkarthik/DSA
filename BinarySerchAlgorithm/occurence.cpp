#include <iostream>
#include <vector>
using namespace std;

int OccurenceBinarySearch(int target , vector <int> array , int size)
{
    int lo = 0  ; int hi = array.size()-1; int mid;
    
    int first_occurence = -1;
    while ( lo <= hi)
    {
        mid = lo + (hi-lo) /2;
        if ( array[mid] == target) {
            first_occurence = mid;
            hi = mid -1;
        } 
        else if ( array[mid] < target )
        {
            lo = mid+1;
        }
        else {
            hi = mid -1; 
        }
    }
    return first_occurence;
}

int main()
{
    cout<<"Pleaes Enter the size of the array";
    int size; cin>> size;
    cout<<"Please Enter the target element :";
    int target; cin>>target;
    vector <int> array (size);
    cout<<"Please Enter the values in the loop";
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int result = OccurenceBinarySearch(target , array , size);
    cout<<result;
    if ( result != -1) 
    {
        cout<<"There is an Occurence for the target in the given array"<<" "<<endl;
    }
    else 
    {
        cout<<"There is no Occurence for the target in the given array"<<" "<<endl;
    }
    return 0;
    
}