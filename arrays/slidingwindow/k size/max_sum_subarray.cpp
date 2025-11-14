#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;


int sum (vector<int>array , int k)
{
    int mx = INT_MIN;
    int size = array.size();
    int j = 0;int i = 0; int total = 0 ; 
    
    if(k < 0)
    {
        cout<<"This is not a valid input the k cant be zero";
        return 0;
    }
    while (j < size)
    { 

        total += array[j];
        if(j-i+1 < k)
        {
            j++;
        }
        else if (j-i+1 == k )
        {
            mx = max(mx,total);
            total = total - array[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main ()
{
    int size; int k;
    cout<<"Please enter the size of the array:\n";
    cin>>size;

    vector<int>array(size);
    for (int i = 0 ; i < size ;i++)
    {
        cin>>array[i];
    }
    cout<<"\nPlease enter the size of the window :";
    cin>>k;
    int result = sum(array,k);
    cout<<result;
    return 0;
}