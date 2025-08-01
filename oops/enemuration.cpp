#include <iostream>
using namespace std;

enum shape 
{
    circle,
    rectangle,
    triangle
};
int main()
{
    cout<< "Enter the shape code";
    int code;
    cin>> code;

    while ( code >= circle && code <= triangle)
    {
        switch(code)
        {
            case circle:
            cout<<"circle";
            break;
            
            case rectangle:
            cout<<"rectangle";
            break;
            case triangle:
            cout<<"triangle";
            break;
        }
        cout<<"Enter Shape Code";
        cin>>code;
    }
    return 0;
}