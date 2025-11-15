#include <iostream>
#include <vector>
using namespace std;

vector<int> findXSum(vector <int> &nums , int k , int x)
{
    //1. calculating all the frequency of an element in the array
    //2. now we will keep only top x elements and also check if the top x elements frequience is same 
    //3. if same then we will check the elements the greater element will be considered the more frequent
    //4. calculate the sum of resulting array
    vector<int> freq;
    // now checking for occurence 
    for(int ele : nums)
    {
        int occurence = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(ele == nums[i])
            {
                occurence++;
            }
        }
        freq.push_back(occurence);
    }

    // now testing ths code 
    for (int i = 0 ; i < freq.size() ;i++)
    {
        cout<<freq[i]<<"\t";
    }
}

int main ()
{
    int size; int k = 0 ;int x = 0;
    cout<<"Please enter the size of the array";
    cin>>size;
    vector<int>nums (size);

    for (int i = 0 ; i < size ;i++)
    {
        cin>>nums[i];
    }
    cout<<"Pleae enter the value of k";
    cin>>k;
    cout<<"Please enter the value of x";
    cin>>x;
    findXSum(nums,k,x);
    return 0;
}