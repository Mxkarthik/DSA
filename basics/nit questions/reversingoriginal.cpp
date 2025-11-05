#include <iostream>
using namespace std;

void swap (int &a , int &b)
{
    int temp;
    temp = a;
    a = b ;
    b = temp;
    cout<<"The value of a:"<<a;
    cout<<"The value of b:"<<b;
}

int main ()
{
    int a; int b;
    cout<<"Enter a:\n";
    cin>>a; 
    cout<<"Enter b:\n";
    cin>>b;
    swap(a,b);
    return 0;
}

// now implementing this using bit wise