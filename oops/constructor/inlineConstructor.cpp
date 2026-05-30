#include <iostream>
using namespace std;

class Account 
{
    int account_number;
    string account_holder_name;
    int balance;

    public :
    inline Account (int acn , string ahn , int b) : account_number(acn) , account_holder_name(ahn) , balance(b)
    {

    }

    void display () 
    {
        cout <<"Account Number"<<"\n"<<account_number;
        cout<<"Account Holder Name"<<"\n"<<account_holder_name;
        cout<<"Balance :"<<"\n"<<balance;
    }
};

int main ()
{
    Account a(435435 , "Karthik", 3249349);
    a.display();
    return 0;
}