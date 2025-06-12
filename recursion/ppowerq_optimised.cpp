#include <iostream>
using namespace std;

int power(int p , int q)
{
    //base case :
    if ( q == 0 ) return 1;
    if (q == 1) return p;

    // recursion logic 
    if ( q % 2 == 0) return (power(p , q/2)) * (power(p,q/2));
    if ( q % 2 != 0) return (power(p,q-1/2)) * (power(p,q-1/2));
}
int main()
{

    cout<<"Please Enter the value of p :"<<endl;
    int p;
    cin>>p;
    cout<<"Please Emter the value of q :"<<endl;
    int q;
    cin>>q;

    int ppowerq = power(p,q);
    cout<<"The Value of the given p and q : "<<endl;
    cout<<ppowerq;
    return 0;
}