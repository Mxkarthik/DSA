#include <iostream>
using namespace std;

void check_voting (int age)
{
    if (age > 18) cout<<"Your Eligible for voting";
    else cout<<"Your not Eligible for voting";
}
int main ()
{
    cout<<"Please Enter your age"<<endl;
    int age; cin>>age;

    check_voting(age);
}