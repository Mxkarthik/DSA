#include <iostream>
using namespace std;

class student {
    
    public :
    string name;
    int age;
    int roll_number;
    string grade;
};


int main (){
    student *s = new student;
    (*s).name = "karthik";
    cout<<(*s).name<<"\n";
    s->name = "Harsha";
    cout<<s->name<<"\n";
    return 0;
}