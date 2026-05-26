#include <iostream>
using namespace std;

class Student 
{
    int roll_number;
    int marks;
    string name;
    string grade;

    public:
    Student (int r , int m , string n , string g)
    {
       this->name = n;
       this->grade = g;
       this->marks = m;
       this->roll_number = r;
    }

    void display (){
        cout<<roll_number<<"\n"<<marks<<"\n"<<name<<"\n"<<grade;
    }
};

int main ()
{
    Student s(25,900,"Karthik","A");

    s.display();
}