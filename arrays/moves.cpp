#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int minMoves(vector<int>& nums) {
               int largest =0; int moves = 0;
        if(nums.size() > 100)
        {
            cout<<"Please enter correct size";
        }
        if(nums.size()< 1)
        {
            cout<<"Please enter correct size";
        }
        if(nums.size() == 0)
        {
            return moves;
        }

        // treversing to find the largest element in the array 
        largest = *max_element(nums.begin(), nums.end());
        // now adding one to who is lesser then largest until they reach largest
       for(int ele : nums)
       {
          moves += (largest-ele);
       }

        return moves;
    }

int main ()
{

    vector <int> nums = {4,4,5};
   int result =   minMoves(nums);
   cout<<result;
}
