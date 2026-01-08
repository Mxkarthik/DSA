#include <iostream>
using namespace std;

int FirstBadVersion (int n)
{
    int left = 0 ; int right = n;
    while ( left < right )
    {
        int mid = left + (left - right) /2 ;
        if (isBad(n))
        {
            right = mid;
        }
        else 
        {
            left = mid + 1;
        }
    }

    return left;
}

int main ()
{
    int n; cin>>n;
    FirstBadVersion(n);
    return 0;
}