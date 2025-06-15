#include <iostream>
#include <vector>
using namespace std;

int minimumBinarySearch(vector <int> nums)
{
    int lo = 0 ; int hi = nums.size()-1; int mid;
    if ( nums.size() == 1 ) return nums[0];
    // if the array is already sorted
    if ( nums[lo] <= nums[hi]) return nums[lo];
    while ( lo <= hi)
    {
        mid = lo + (hi-lo) /2;

        if ( mid < hi && nums[mid] > nums[mid+1])
        {
            return nums[mid+1];
        }
        if ( mid > lo && nums[mid] < nums[mid-1])
        {
            return nums[mid];
        }
        if ( nums[mid] > nums[lo])
        {
            lo = mid+1;
        }
        else 
        {
            hi = mid-1;
        }
    }
    return -1;
}

int main()
{
    int size; cin>>size;
    vector <int> nums;
    for ( int i = 0 ; i < size ;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<minimumBinarySearch(nums);
    return 0;
}