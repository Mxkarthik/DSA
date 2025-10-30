#include <iostream>
#include <math.h>
using namespace std;

int check(int n)
{
    int digits = log10(n)+1; int occurence = 0; int last_digit;
        for (int i = 0 ; i <=digits ; i++)
        {
            last_digit = n % 10;
            if(last_digit != 0)
            {
                occurence++;
            }
            n = n/10;
        }
    cout<<occurence;
}

int main ()
{
    int n; cin>>n;
    check(n);
    return 0;
}