#include <iostream>
using namespace std;

void multiplication (int row , int col , int array) 
{
    
}

int main ()
{
    int row , col;
    cin>>row; cin>>col;
    int array [row] [col];
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j < col ; j++)
        {
            cin>>array[i] [j];
        }
    }
  //  multiplication(row,col,array);
    return 0;
}

