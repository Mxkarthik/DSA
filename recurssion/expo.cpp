#include <iostream>
using namespace std;

int expo(int n1 , int n2)
{
    if (n2 == 0) return 1;

    return n1* expo(n1,n2-1);
}

int main()
{
    cout<<"Please Enter the value of n1 :"<<" "<<endl;
    int n1;
    cin>>n1;
    cout<<"Plesae Enter the value of n2 :"<<" "<<endl;
    int n2;
    cin>>n2;

    cout<<"The Value of the exponent : "<<" "<<endl;
    int exponent = expo(n1,n2);
    cout<<exponent;
}