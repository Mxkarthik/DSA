#include<iostream>
#include<vector.h>
#include<string.h>
using namespace std;

string LongestCommonPrefix (vector <string> &str)
{
    string str =" ";
    for (int i = 0 ; i < str.size()-1 ; i++)
    {
        char ch = str[0][i];

        for (int j = 1 ; j < str.size() ; j++)
        {
            if (ch == str[j][i])
            {
                str += cxh;
            }
            else
            {
               return;
            }
        }
    }    
    return str;
}
int main ()
{
    vector <string> str;
    int size; cout<<"Please enter the No of the string";cin>>size;
    for (int i = 0  ; i < size ; i++)
    {
        // taking input of a string
        cout<<"Enter the size of the strings";cin>>strsize; 
        for (int j = 0 ; j < strsize ;j++)
        {
            cin>>str[i][j];
        }
    }
    string ans = LongestCommonPrefix(str);
    cout<<ans;
    return 0;
}