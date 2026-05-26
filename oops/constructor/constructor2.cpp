#include <iostream>
using namespace std;

class Account 
{
    int account_number;
    string account_holder_name;
    int balance;
    int pin;

    public:
    Account(int an , string ahn , int b , int p)
    {
        this->account_number = an;
        this->account_holder_name = ahn;
        this->balance = b;
        this->pin = p;
    }

    void display ()
    {
        if (pin == 12345)
        {
            cout<<account_number<<"\n";
            cout<<account_holder_name<<"\n";
            cout<<balance<<"\n";
        }
        else 
        {
            cout<<"Wrong pin entered";
        }
    }
};


int main () 
{
    Account a(2305,"Karthik" , 10000000 , 1234);

    a.display();
}