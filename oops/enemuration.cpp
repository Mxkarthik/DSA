#include <iostream>
using namespace std;
/*
what is enumeration ?
Enumeration is a user defined data type in which the programmers create their own coustom data type by defining a set of named integer constants
that have specifice meaning within their program 

for example : 
instead of using raw integers like 0,1,2 to represent days of week , we can create a user-defined enumuration like {monday , tuesday ,
wednesday ,thursday , friday , saturday , sunday}
*/
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