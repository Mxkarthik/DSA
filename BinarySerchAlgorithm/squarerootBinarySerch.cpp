#include <iostream>
using namespace std;

int CalculatingSquareRoot (int x)
{
    int lo = 1 ;
     int hi = x ; 
     int mid;
     int ans = -1;
     while (lo <= hi)
     {
        mid = lo + (hi-lo) /2;
        if (mid * mid <= x)
        {
            ans = mid;
            lo = mid + 1;
        }
        else 
        {
            hi = mid -1;
        }
     }
     return ans;

}
int main()
{
    cout<<"Please Enter the Value that you want to find the sqare root of :"<< " ";
    int x; cin>>x;
    int result = CalculatingSquareRoot(x);
    if ( result != -1)
    {
        cout<<"the value x has sqaure root value"<<" "<<endl;
    }
    else 
    {
        cout<<"No ,the value of x has no square root value";
    }
    cout<<result;
    return 0;
}