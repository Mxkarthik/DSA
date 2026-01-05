#include <iostream>
#include <vector>
using namespace std;

vector <int> triplets (vector <int> array)
{
    for (int i = 0 ; i < array.size() ; i++)
    {
        for (int j = i+1 ; j < array.size(); j++)
        {
            for(int k = j+1 ; k < array.size() ; k++)
            {
                
            }
        }
    }
}
int main ()
{
    vector <int> array;
    int size; cin>>size;
    for (int i = 0 ; i < size; i++)
    {
        cin>>array[i];
    }
    triplets(array);
    return 0;
}