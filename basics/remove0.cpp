#include <iostream>
#include <string>
using namespace std;

void recurssion (int n)
{
    int last ; string ans[100]; int digits = log10(n)+1;
    for(int i = 0 ; i < digits ; i++)
    {
        last = n % 10;
        if(last == 0)
        {
            n = n/10;
        }
        else 
        {
            ans += (string) last;
            n = n/10; 
        }
    }
}
int main ()
{
    int n;cout<<"Please enter the number";
    cin>>n;
    recurssion(n);
    return 0;
}