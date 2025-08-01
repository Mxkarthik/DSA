#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct person 
{
    char name[50];
    int age;
    int salary;
};
int main()
{
    // entering person details using objects
    person p1;
    strcpy(p1.name,"Karthik");
    p1.age = 17;
    p1.salary = 200000;

    cout<<"Person Name :"<<p1.name<<endl;
    cout<<"Person Age :"<<p1.age<<endl;
    cout<<"Person Salary:"<<p1.salary<<endl;

    return 0;
    
}