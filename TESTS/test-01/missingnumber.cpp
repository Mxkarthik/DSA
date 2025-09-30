#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(int arr[],int n)
{
    vector <bool> present(n+1,false);

    // Mark numbes that are in the array 
    for (int i = 0; i<n ; i++)
    {
        if(arr[i]>0 && arr[i]<=n)
        {
            present[arr[i]] = true;
        }
    }
    //find the first missing 
    for (int i = 1 ; i <= n ; i++)
    {
        if(!present[i]) return i;
    }

    // If all 1..n are present , missing number is n+1
    return n+1;
}
int main ()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    cout<< firstMissingPositive(arr , size);
    return 0;
}