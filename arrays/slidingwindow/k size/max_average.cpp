#include <iostream>
#include <vector>
#include <limits.h>
#include <math.h>
using namespace std;

double average (vector<int> &array , int k )
{
    // initlialising variables 
    int i = 0; int j = 0 ; double sum = 0 ; double avg = 0; double mx = INT_MIN;
    while (j < array.size())
    {
        sum += array[j];
        if (j-i+1 < k)
        {
            j++;
        }
        else if (j-i+1 == k)
        {
            avg = (sum)/k;
            mx = max(mx,avg);
            sum -= array[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main ()
{
    int size; cout<<"Please eneter the size of the array"; cin>>size;
    vector<int>array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int k; cin>>k;
    int result = average(array,k);
    cout<<result;
    return 0;
}