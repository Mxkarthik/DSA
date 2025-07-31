#include <iostream>
using namespace std;

class calculation 
{
    int a; int b; int c;
    int x;
    public:
    void input();
    void output();
    void Calculation();
};

void calculation :: input()
{
    cout<<"please enter the value of the a , b, c";
    cin>>a;cout <<endl; cin>>b;cout<<endl; cin>>c;
}

void calculation :: output()
{
    cout<<"Your Enter Value for a:"<< a<<endl;
    cout<<"Your Enter Value for b:"<<b<<endl;
    cout<<"Your Entered value for c:"<<c<<endl;
}

void calculation ::Calculation()
{
    x = a / b - c;
    cout <<"The Calculated value for the x :"<<x<<endl;
}
int main ()
{
    calculation c;
    c.input();
    c.output();
    c.Calculation();

    return 0;
}