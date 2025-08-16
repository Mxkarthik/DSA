#include <iostream>
using namespace std;

void T_printing(int size)
{
    int mid = (size+1)/2;

    for (int i = 1; i<= size ; i++)
    {
        for (int j = 1 ; j <= size ; j++)
        {
            if(i==1 || j == mid)
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
    T_printing(size);
    return 0;
}