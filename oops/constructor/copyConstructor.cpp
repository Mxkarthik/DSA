#include <iostream>
using namespace std;


class Account 
{
    int account_number;
    string account_holder_name;
    int balance;
    public :
    Account (int an , string ahn , int ba) : account_number(an) , account_holder_name(ahn) , balance(ba)
    {

    }
    void display ()
    {
        cout<<"\n"<<account_number<<"\n";
        cout<<"\n"<<account_holder_name<<"\n";
        cout<<"\n"<<balance<<"\n";
    }

    Account (Account &b)
    {
        account_number = b.account_number;
        account_holder_name = b.account_holder_name;
        balance = b.balance;
    }

};

int main ()
{
    Account A1(23424234, "Karthik" , 999999);
    Account A2(A1);
    A1.display();
    A2.display();
    return 0;
}