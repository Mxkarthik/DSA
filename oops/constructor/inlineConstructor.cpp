#include <iostream>
using namespace std;


class Student 
{
    int roll_no;
    int marks;
    string name;

    public :
    // inline constructor
    inline Student ( int r , int m , string n) : roll_no(r),marks(m),name(n){

    }

    void display () 
    {
        cout<<roll_no<<"\n";
        cout<<marks<<"\n";
        cout<<name<<"\n";
    }
};

int main ()
{
    Student s(25,900,"Karthik");
    s.display();
    return 0;
}