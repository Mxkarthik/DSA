#include <iostream>
using namespace std;

void I_printing (int size)
{
    int mid = (size+1)/2;
    for (int i = 1 ; i<=size ; i++)
    {
        for(int j = 1 ; j<=size ; j++)
        {
            if(i==1 || i == size || j == mid)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
int main ()
{
    int size;
    cout<<"Please enter the size of the character";
    cin>>size;
    I_printing(size);
    return 0;
}