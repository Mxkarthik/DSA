#include <iostream>
#include <vector>
using namespace std;

int upperbound(vector <int> input , int target)
{
    // first index > target 
    int lo = 0 , hi = input.size()-1;
    int ans = -1;
    while ( lo <= hi)
    {
        int mid = lo + (hi-lo) /2;
        if(input[mid] > target)
        {
            ans = mid;
            hi = mid-1;
        }
        else 
        {
            lo = mid+1;
        }
    }
    return ans;
}
int lowerbound ( vector <int> input , int target)
{
    // first index >= target
    int lo = 0, hi = input.size()-1; int ans =-1;
    while (lo <= hi)
    {
        int mid = lo+(hi-lo) /2;
        if ( input[mid] >= target)
        {
            ans = mid;
            hi = mid-1;
        }
        else 
        {
            lo = mid+1;
        }
    }
    return ans;
}
int main()
{
    cout<<"Please Enter the size of the array:";
    int n; cin>>n;
    vector <int> input;
    for (int i = 0  ; i < n ; i++)
    {
        int x; cin>>x;
        input.push_back(x);
    }
    cout<<"Please Enter the target element to serch in th array : ";
    int target; cin>>target;
    vector <int> result;
    int lb = lowerbound(input,target);
    if (input[lb] != target)
    {
        result.push_back(-1);
        result.push_back(-1);
    }
    else {
        int up = upperbound(input , target);
        result.push_back(lb);
        result.push_back(up-1);
    }
    cout<<result[0]<<" "<<result[1]<<"\n";
    return 0;
}