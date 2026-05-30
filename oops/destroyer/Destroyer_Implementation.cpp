#include <iostream>
using namespace std;

class Account 
{
    string name;
    int *balance;

    public:

    Account (string n , int bal)
    {
        name = n;
        balance = new int;
        *balance = bal;
        cout<<"Constructor created :"<<name;
    }

    ~Account ()
    {
        delete balance;
        cout<<"Destroyed"<<name;
    }
};

int main ()
{
    Account A1("1",200) , A2("2",300) , A3("3" , 400);
}