#include <iostream>
#include <vector>
using namespace std;

void first_negitive (vector <int> &nums , int k)
{
    int i = 0; int j = 0;
    int size = nums.size();
    vector <int> negative_a;
    vector <int> answer;
    while (j < size)
    {

        if(nums[j]<0)
        {
            negative_a.push_back(nums[j]);
        }

        if ( j-i+1 < k )
        {
            j++;
        }
        else if(j-i+1 == k)
        {
            // checking if there is any negitive number
            if(negative_a.empty())
            {
                answer.push_back(0);
            }
            else {
                answer.push_back(negative_a[0]);
            }
            // removing outgoing element 
            if( !negative_a.empty() && nums[i]== negative_a[i])
                 negative_a.erase(negative_a.begin());
            i++;
            j++;
        }
    }

    // now printing the answer array 
    cout<<"[";
    for (int val : answer)
    {
        cout<<val<<" ";
    }
    cout<<"]";
}

int main ()
{
    int size; cout<<"Please enter the size of the vector\n"; cin>>size;
    vector<int>array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int k; cout<<"\nPleaes enter the size of the sub array"; cin>>k;
    first_negitive(array,k);
    return 0;
}