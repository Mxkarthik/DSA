
// example :
// int n = 5; 
// the increasing order will be 1,2,3,4,5.



#include <iostream>
using namespace std;

int increasing_sequence (int n )
{
    if (n<1)
    {
        return ;
    }
    cout<<n;

    increasing_sequence(n-1);
}



int main()
{
    cout<<"Please Enter the number :";
    int n;
    cin>>n;
    cout<<"here is the increasing order of the number provided: ";
    increasing_sequence(n )
    return 0;
}