#include <iostream>
#include <string>
using namespace std;

void reversing (string str)
{
    string rev;
    for (int i = str.size()-1 ; i >= 0 ; i--)
    {
        // backtracking 
        rev += str[i];
    }
    
    cout<<rev;
}

int main ()
{
    string str;
    cin>>str;

    reversing(str);
}