#include <iostream>
using namespace std;

void finding (int n)
{
    int occurence = 0,last_digit;
    do 
    {
        last_digit = n % 10;
        cout<<"last digit"<<last_digit;
        if(last_digit != 0)
        {
            occurence++;
        }
        n = n /10;
    }
    while(n != 0);
    cout<<occurence;
}
int main ()
{
    int n;cin>>n;
    finding(n);
    return 0;
}