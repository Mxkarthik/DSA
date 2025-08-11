#include <iostream>
using namespace std;

int squares (int number)
{
    int squares = 0;
    cout<<"The squares of the n values"<<endl;
    for (int i = 0 ; i <= number ; i++)
    {
        squares = i * i;
        cout<<squares<<endl;
    }
}
int main ()
{
    cout<<"Please Enter the nth number to find the square :";   
    int number;
    cin>>number;

    squares(number);

    return 0;
}