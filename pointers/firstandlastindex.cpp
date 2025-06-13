#include <iostream>
#include <vector>
using namespace std;

int firstindex(string s,char ch , int *first_index_ptr)
{
    for (int i = 0 ; i < s.size() ; i++)
    {
        if ( s[i] == ch)
        {
            *first_index_ptr = i;
            break;

        }
    }
    return *first_index_ptr;
}

int lastindex(string s, char ch , int *last_index_ptr)
{
    for (int j = s.size()-1 ; j>=0 ; j--)
    {
        if( s[j] == ch ) 
        {
            *last_index_ptr = j;
            break;
        }
    }
    return *last_index_ptr;
}

int main()
{
    cout<<"Please Enter the string : "<<" "<<endl;
    string s;
    cin>>s;
    
    cout<<"Please Enter the character that you want the index of :" << " "<<endl;
    char ch;
    cin>>ch;

    int first_index_ptr = -1;
    int last_index_ptr = -1;

    int *firstptr = &first_index_ptr;
    int *lastptr = &last_index_ptr;

    cout<<"Here is the Character first index : "<<" "<<endl;
    int first_index = firstindex(s,ch,firstptr );
    cout<<first_index<<" "<<endl;
    
    cout<<"Here is the Character second index :"<<" "<<endl;
    int second_index = lastindex(s,ch,lastptr);
    cout<<second_index;
    return 0;

}