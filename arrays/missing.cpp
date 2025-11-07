#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> findMissingElements ( vector <int> &nums)
{
         int lower = *min_element(nums.begin(), nums.end());
         int upper = *max_element(nums.begin(), nums.end());

    vector<int> missing;
    for (int i = lower; i <= upper; i++) {
        if (find(nums.begin(), nums.end(), i) == nums.end()) {
            missing.push_back(i);
        }
    }

    return missing;
}

int main ()
{
    int size; cin>>size;
    vector <int> nums(size);
    for(int i = 0 ; i < size ; i++)
    {
        cin>>nums[i];
    }
    vector <int> result = findMissingElements(nums);
    cout<<"[";
    for(int x : result)
    {
        cout<<x<<" ";
    }
    cout<<"]";
    return 0;
}