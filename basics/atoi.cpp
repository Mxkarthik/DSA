#include <iostream>
using namespace std;
#include <string.h>

int main ()
{
    int x;
    scanf("%d", &x);
    string str = to_string(x);
    cout<<str[0];
    return 0;
}