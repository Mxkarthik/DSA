#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    cout<<"Please Enter the string that you want to sort";
    getline(cin,s1);
    string answer;
    for ( int i = 0 ; i < s1.size() ;i++)
    {
        if ( int(s1[i]) < int(s1[i+1]) )
        {
            answer.push_back(s1[i]);
        }
    }
    return 0;
}