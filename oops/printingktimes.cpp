#include <iostream>
using namespace std;

class Ktimes
{
    int x;
    public:
    void input();
    void show();
};

void Ktimes :: input()
{
    cout<<"Please Enter the value for x :"<<endl;
    cin>>x;
}

void Ktimes :: show()
{
    for(int i = 0 ; i < x ;i++)
    {
        cout<<"WELL DONE"<<endl;
    }
}
int main()
{
    Ktimes k;
    k.input();
    k.show();

    return 0;
}