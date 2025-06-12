#include <iostream>
using namespace std;

string occurence (string &s , int size , int idx)
{
    // base case :
    if ( size == idx) return " ";
    string current ; current += s[idx];
    return ((s[idx] == 'a') ? " " : current) + occurence(s,size , idx+1);
}
int main()
{
    cout<<"Please Enter the size of the string:";
    int size;
    cin>>size;
    cout<<"Please Enter the string :";
    string s;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>s[i];
    }

    int idx = 0;
    cout<<"The Sorted String :";
    cout<<occurence(s,size,idx);
  
    return 0;


}