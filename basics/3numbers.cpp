#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;
    printf("Please enter the values of a,b,c");
    scanf("%d %d %d" , &a ,&b , &c);
    if ( ((a>b) && (a>c)))
    {
        cout<<a;
    }
    else 
    {
        if((b>a) && (b>c))
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    return 0;
}

