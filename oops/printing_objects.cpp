#include <iostream>
#include <string>
using namespace std;

class cars
{
    string car1 = "audi";
    string car2 = "bmw";
    string car3 = "jaguar";

    public:
    void show (void);

};


void cars :: show (void)
{
    cout<<car1<<endl;
    cout<<car2<<endl;
    cout<<car3<<endl;
}

int main ()
{
    cars c;
    c.show();
    return 0;
}