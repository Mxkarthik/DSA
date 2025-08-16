#include <iostream>
using namespace std;

void L_printing(int size)
{
    int mid = (size+1)/2;

    for (int i = 1 ; i <= size ; i++)
    {
        for(int j = 1 ; j <= size ; j++)
        {
            if(j == 1 || i == size)
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
    cin>>size;
    L_printing(size);
    return 0;
}