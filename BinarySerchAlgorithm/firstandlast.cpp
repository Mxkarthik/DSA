#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector <int> nums , int target)
{
    int lo = 0; int hi = nums.size(); int mid;

    while ( lo < hi)
    {
        mid = lo + (hi-lo) / 2;

        if ( nums[mid] < target)
        {
            lo = mid + 1;
        }
        else 
        {
            hi = mid;
        }
    }
    return lo;
}
int upper_bound(vector <int> nums , int target)
{
    int lo = 0 ; int hi = nums.size(); int mid;
    while ( lo < hi)
    {
        mid = lo + (hi-lo)/2;
        if ( nums[mid] <= target)
        {
            lo = mid + 1;
        }
        else 
        {
            hi = mid;
        }
    }
    return lo;
}

vector <int> BinarySearch (vector <int> nums , int target)
{
    int lo_bd = lower_bound(nums , target);
    int up_bd = upper_bound (nums , target);

    if ( lo_bd < nums.size() && nums[lo_bd] == target )
    {
        return {lo_bd , up_bd -1};
    }
    else
    {
        return { -1 , -1};
    }
}

int main()
{
    cout<<"Please Enter the size of the array :";
    int size;
    cin>>size;
    vector <int> nums(size);
    cout<<"Enter the Elements of the array in the sorted order : "<<" ";
    for (int i = 0 ; i < size ; i++)
    {
        cin >> nums[i];
    }

    cout<<"Please Enter the target element to find the array :";
    int target; cin>>target;
    vector <int> result = BinarySearch(nums,target);
    if ( result[0] == -1)
    {
        cout<<"Target Element is not found in the given array";
    }
    else 
    {
        cout<<"Target Element is found in the given array"<<result[0]<<"to"<<result[1];
    }
    return 0;

}