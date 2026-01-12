#include<iostream>
#include<vector>
using namespace std;

bool check (vector<vector<int>>& array , int target)
{
    int rows = array.size(); int columns = array[0].size();
    int low = 0 ; int high = rows*columns-1;

    while ( low <= high)
    {
        int mid = lo+(high-lo)/2;
        int row = mid / columns;
        int column = mid % columns;

        int val = array[row][column];
        if (val== target)
        {
            return true;
        }
        else if (val< target)
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
    }
    return false;
}

int main ()
{
    int m ; int n;
    cout<<"Please enter the values of m and n";
    cin>>m; cin>>n;

    vector<vector<int>>array(m,vector<int>(n));
    cout<<"Enter Matrix values :\n";
    for (int i = 0 ; i < m ;i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            cin>>array[i][j];
        }
    }
    int target;
    cout<<"Enter Target\n";
    cin>>target;
    bool result = check(array,target);
    cout<<result;
    return 0;
}