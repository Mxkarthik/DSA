#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadensAlgo(vector <int> array)
{
    int sum = 0;
    int maxi = INT_MIN;
    int size = array.size();
    for (int i = 0 ; i < size ; i++)
    {
        sum += array[i];
        if ( sum > maxi)
        {
            maxi = sum;
        }

        if ( sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main ()
{
    cout<<"Please enter the size of the array";
    int size;
    cin>> size;
    vector <int> array(size);

    for (int i = 0 ; i< size ; i++)
    {
        cin>>array[i];
    }
    int max_num = kadensAlgo(array);

    cout<<"The Maximum sum :"<<max_num;
    return 0;
}