#include <iostream>
using namespace std;

class values {
    int x; int y;
    public:
        void inputs();
        void greater();

};

void values ::inputs ()
{
    cout<<"Please Enter the value of x";
    cin>>x; 
    cout<<"Please Enter the value of y";
    cin>>y;
}

void values :: greater ()
{
    if ( x > y)
    {
        cout<<x;
    }
    else
    {
        cout<<y;
    }
}
int main()
{
    values a;
    a.inputs();
    a.greater();
    return 0;
}