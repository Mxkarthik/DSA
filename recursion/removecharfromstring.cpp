#include <iostream>
using namespace std;


string removechar(string &s , int index , int size)
{
    // base case : if the string is empty then we have to return an empty string 
    if (index == size) return " ";

    string curr = " ";
    
    curr += s[index];

    return ((s[index]== 'a') ? " " : curr ) + removechar(s , index+1 , size);
}


int main()
{

    int index = 0;
    string s = "abcdde";
    int size = 6;

    cout << removechar(s, index , size);
    return 0;
}