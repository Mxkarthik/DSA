#include <iostream>
using namespace std;

class Account {
    int account_number;
    string account_holder_name;
    int balance;

    public :
    Account (int account_number , string account_holder_name , int balance)
    {
        this->account_holder_name = account_number;
        this->account_holder_name = account_holder_name;
        this->balance = balance;
    }
    void display () 
    {
        cout<<"Account Number : "<<"\n"<<account_number<<"\n";
        cout<<"Account Holder Name :"<<"\n"<<account_holder_name<<"\n";
        cout<<"Balance :"<<"\n"<<balance<<"\n";
    }
    
};


int main ()
{
    Account a(256789,"Karthik",2000000);
    a.display();
    return 0;
}


