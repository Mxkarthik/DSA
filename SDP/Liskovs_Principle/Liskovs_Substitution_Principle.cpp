#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Account 
{
public: // FIXED: Must be public so derived classes can override and main/BankClient can call them
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual ~Account() {} // FIXED: Virtual destructor prevents memory leaks
}; // FIXED: Added missing semicolon

class SavingAccount : public Account 
{
private:
    double balance = 0;
public:
    SavingAccount() 
    {
        balance = 0;
    }
    
    void deposit(double amount) override // FIXED: Explicit override keyword
    {
        balance += amount;
        cout << "Deposited " << amount << " in saving Account. New Balance: " << balance << endl;
    }

    void withdraw(double amount) override
    {
        if (amount > balance)
        {
            throw logic_error("SavingAccount: Insufficient funds available.");
        }
        balance -= amount;
        cout << "Debited " << amount << " From saving account\n";
    }
}; // FIXED: Added missing semicolon

class CurrentAccount : public Account 
{
private: 
    double balance;
public:
    CurrentAccount() 
    {
        balance = 0;
    }

    void deposit(double amount) override
    {
        balance += amount;
        cout << "Deposited: " << amount << " in Current Account. New Balance: " << balance << endl;
    }

    void withdraw(double amount) override
    {
        if (amount > balance) // FIXED: Standardized to throw logic_error like SavingAccount
        {
            throw logic_error("CurrentAccount: No Enough funds");
        }
        balance -= amount;
        cout << "Debited: " << amount << " in Current Account. New Balance: " << balance << endl;
    }
}; // FIXED: Added missing semicolon

class FixedTermAccount : public Account 
{
protected:
    double balance;
public:
    FixedTermAccount()
    {
        balance = 0;
    }
    
    void deposit(double amount) override
    {
        balance += amount;
        cout << "Deposited: " << amount << " In Fixed Term Account. New Balance: " << balance << endl;
    }

    void withdraw(double amount) override
    {
        if (amount > balance) // FIXED: Standardized to throw logic_error
        {
            throw logic_error("FixedTermAccount: No Sufficient Balance");
        }
        balance -= amount;
        cout << "Withdraw the amount: " << amount << ". New Balance: " << balance << endl;
    }
}; // FIXED: Added missing semicolon

class BankClient 
{
private:
    vector<Account*> accounts; // FIXED: Renamed from 'account' to 'accounts' to match constructor logic
public:
    BankClient(vector<Account*> accounts)
    {
        this->accounts = accounts;
    }

    void processTransactions() 
    {
        for (Account* acc : accounts)
        {
            acc->deposit(1000);

            try 
            {
                acc->withdraw(1500); // Note: Changed to 1500 to intentionally trigger your catch blocks!
            }
            catch(const logic_error& e)
            {
                cout << "Exception: " << e.what() << endl;
            }
        }
    }
}; // FIXED: Added missing semicolon

int main()
{
    vector<Account*> accounts;
    accounts.push_back(new SavingAccount());
    accounts.push_back(new CurrentAccount());
    accounts.push_back(new FixedTermAccount());

    BankClient* client = new BankClient(accounts);
    client->processTransactions(); // FIXED: Fixed typo from 'clinet' to 'client'

    // Clean up dynamic memory allocations
    for (Account* acc : accounts)
    {
        delete acc;
    }
    delete client;

    return 0;
}
