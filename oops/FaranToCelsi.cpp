#include <iostream>
using namespace std;

class temp
{
    int fahrenheit;
    float celsius;
    public:
    void input();
    void faranToCelsi ();
    void show();
};
void temp :: input()
{
    cin>>fahrenheit;
}
void temp :: faranToCelsi()
{
    celsius = (5.0/9.0) *(fahrenheit-32);
}

void temp :: show()
{
    cout<<celsius;
}
int main()
{
    temp t;
    t.input();
    t.faranToCelsi();
    t.show();
    return 0;
}