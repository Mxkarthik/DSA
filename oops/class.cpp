#include <iostream>
using namespace std;

class person 
{
    char name[30];
    int age;

    public:
        void getdata(void);
        void show(void);
};

void person :: getdata (void)
{
    cout<<"Please Enter Your name";
    cin>>name;
    cout<<"Please Enter Your Age";
    cin>>age;
}
void person :: show (void)
{
    cout<<"\n name :"<<name;
    cout<<"\n age :"<<age;
}
int main()
{
    person p;
    p.getdata();
    p.show();
    return 0;
}