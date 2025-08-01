#include <iostream>
#include <cstring>
using namespace std;

/*

    union: a user-defined data type in which all members share the same memory space.
    The size of the union is determined by its largest member.
    At any given time, a union can hold a value for only one of its members.
    Assigning a value to one member overwrites the previous data stored in the union.
    Unions are useful when you want to store values of different types in the same memory 
    location, but not simultaneously.

*/

union person
{
    char name[30];
    int age;
    int salary;
};
int main()
{
    person p;
    strcpy(p.name,"karthik");
    cout<<"p.name :"<<p.name<<endl;
    p.age = 17;
    cout<<"p.age :"<<p.age<<endl;
    p.salary = 20000;
    cout<<"p.salary :"<<p.salary<<endl;

    // previous value is overwritten
    cout<<"After assiging str, p.name :"<<p.name <<endl;
    cout<<"After assiging str, p.age :"<<p.age<<endl;
}