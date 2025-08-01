#include <iostream>
#include <cstring>
using namespace std;

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