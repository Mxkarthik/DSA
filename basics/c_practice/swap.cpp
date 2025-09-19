#include<iostream>
using namespace std;

void without_using_temp (int x , int y , int temp)
{
    int x,y;
    x = x+y;
    y = x-y;
    x = x-y;
}

int main ()
{

    int x , y , temp;
    cout<<"Please enter the values of x and y";
    cin>>x>>y;
    without_using_temp(x,y,temp);
    // x = 4
    // y = 5
    //-------------------------------------
    // x = 5 , y = 4
    temp = x;
    x = y;
    y = temp;

    cout<<"The value after swapping are:"<<"\n";
    cout<<"x:"<<x<<"\n";
    cout<<"y:"<<y<<"\n";

    return 0;
}