#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

void solution (int n)
{
    int last ; string ans; int digits = log10(n)+1;
    if(n == 0)
    {
        ans = "You entered zero so there is no other element to print";
        cout<<ans;
        return;
    }
    for(int i = 0 ; i < digits ; i++)
    {
        last = n % 10;
        if(last == 0)
        {
            n = n/10;
        }
        else 
        {
            ans += (char) ('0' + last);
            n = n/10; 
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
}
int main ()
{
    int n;cout<<"Please enter the number";
    cin>>n;
    solution(n);
    return 0;
}