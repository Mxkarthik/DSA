#include <iostream>
using namespace std;

void A_printing (int size)
{
    int mid = (size+1)/2;
    for (int i = 1 ; i <= size ; i++)
    {
        for (int j = 1 ; j <= size ; j++)
        {
            if (i==1 && j == mid) // top star
                cout<<"*";
            else if(i == mid && (j > mid - (i - 1) && j < mid + (i - 1))) // middle row
                cout<<"*";
            else if((i> 1) && (j==mid-1 || j == mid+1)) // left leg and right leg
                cout<<"*";
            else 
            
                cout<<" ";
        }
        cout<<"\n";
    }
}

int main ()
{
    int size;
    cout<<"Please enter the size of the character : ";
    cin>>size;

    A_printing(size);

    return 0;
}
