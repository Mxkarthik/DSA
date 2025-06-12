#include <iostream>
using namespace std;

int power(int p , int q)
{
    // base case : 
    if ( q == 0 ) return 1;
    if (q == 1 ) return p;

    // recursive statements 
     return p * power(p,q-1);
}
int main()
{
    cout<<"Pleasee Enter the P value : ";
    int p; cin>>p;
    cout<<"Pleasee Enter the q value : ";
    int q; cin>>q;

    int ppowerq = power(p,q);
    cout<<ppowerq;
    return 0;
}