#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool duplicate(vector <int> &array)
{
    unordered_set<int>seen;

    for (int num : array)
    {
        if(seen.count(num))
        {
            return true; // duplicate values
        }

        seen.insert(num);
    }
    return false; // no duplicate values
}

int main ()
{
    vector <int> array = {1,2,3,1};
    cout<<duplicate(array);
}