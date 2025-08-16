#include <iostream>
using namespace std;

void printing_T(int size)
{
    int mid;
    mid = (size+1)/2;

    for (int i = 1 ; i <= size ; i ++)
    {
        for (int j = 1 ; j <= size ; j++)
        {
            if(i==1 || j == 1 || i == size)
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
    cout<<"Please enter the size";
    cin>>size;
    printing_T(size);
    return 0;
}