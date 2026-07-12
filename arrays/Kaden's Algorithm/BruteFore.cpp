#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max_sum (vector <int> array)
{
    int maximum = INT_MIN;
    for ( int i = 0 ; i < array.size() ; i++)
    {
        for ( int j = i ; j < array.size() ; j++)
        {
            int sum = 0;

            for ( int k = i ; k <= j ; k++)
            {
                sum  += array[k];
            }
            maximum =  max(sum , maximum); 

        } 
    }
    return maximum;
}

int main ()
{
    int size = 0;
    cin>>size;
    vector <int> array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int answer = max_sum(array);
    cout<< answer;
    return 0;
}