#include <iostream>
using namespace std;

int expo(int p , int q)
{

    if (q == 0) return 1;
    if (q % 2 == 0) {
        // if the q is even 
        int result = expo(p,q/2);
        return result*result;
    }
    else 
    {
        // if the q is odd
        int result = expo(p,(q-1)/2);
        return p * result * result ;
    }
}


int main()
{
    cout<<"Please Enter the value of p : "<<" "<<endl;
    int p ;
    cin>>p;
    cout<<"Pleaes Enter the value of q:"<<" "<<endl;
    int q;
    cin>>q;

    int result = expo(p,q);
    cout<<result ;
    return 0;
}