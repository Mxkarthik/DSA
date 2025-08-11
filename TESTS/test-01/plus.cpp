#include <iostream>
using namespace std;

void plus_pattern (int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if ( j == n/2) cout<<"*";
            else if ( i  == n/2 ) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}

int main ()
{
    cout<<"Please Enter the value of the number :"<<endl;
    int n; cin>>n;
    plus_pattern (n);
}