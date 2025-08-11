#include <iostream>
using namespace std;

float circumfrence (int radius)
{
    float result;
    result = (2 )* (3.14 ) * (radius);
    return result;
}

float Area (int radius)
{
    float result;
    result = (3.14) * (radius) * (radius);

    return result;
}

int main ()
{
    cout<<"Please Enter the radius of the circle";
    int radius; cin>>radius;

    cout<<"The Circumfrence of the radius :"<<endl;
    cout<<circumfrence(radius)<<endl;
    cout<<"The Area of the radius : "<<endl;
    cout<<Area(radius)<<endl;

    return 0;
}