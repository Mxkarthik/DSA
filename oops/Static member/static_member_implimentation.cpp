#include<iostream>
using namespace std;

class Account
{
    int account_number;
    string account_holder_name;
    int balance;
    static int total_accounts;
    public:
    Account(int an, string acn , int b)
    {
        account_holder_name = acn;
        account_number = an;
        balance = b;
        total_accounts++;
    }
    void display_total_accounts()
    {
        cout<<total_accounts;
    }
};
int Account::total_accounts = 0;
int main ()
{
    Account A1(34234,"karthik",998);
    Account A2(23234,"Harsha",213);
    A1.display_total_accounts();
    return 0;
}