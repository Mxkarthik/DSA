#include <iostream>
using namespace std;

class Parent {
    public:
    virtual void print()
    {
        cout<<"This is Virtual Function : parent class";
    }
    void show()
    {
        cout<<"This is Normal function : parent class";
    }
};

class child : public Parent {
    public:
    void print()
    {
        cout<<"child class"<<endl;
    }
    void show()
    {
        cout<<"child class"<<endl;
    }
};

int main ()
{
    Parent *p;
    child c;

    p = &c;
    p -> print();
    p -> show();
}