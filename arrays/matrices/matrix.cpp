#include <iostream>
using namespace std;

void matrixmultiplication (int r1 , int c1 , int r2 , int c2)
{
    int array1 [r1] [c1];
    int array2 [r2] [c2];
    // base case
    if ( c1 != r2)
    {
        cout<<"You entered invalid inputs matrix multiplication is not possible for this number";
        return ;
    }
    // taking inputs in the first array
    cout<<"Please enter the elements in the matrix 1 :\n";
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            cin>>array1 [i] [j];
        }
    }

    // taking inputs in the second array
    cout<<"Please enter the elements in the matrix 2 :\n";
    for (int i = 0 ; i < r2 ; i++)
    {
        for(int j = 0 ; j < c2 ; j++)
        {
            cin>>array2 [i] [j];
        }
    }

    int c [r1] [c2];
    // now calculating multiplication of two matrix
    for (int i = 0 ; i < r1 ; i++ )
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            int result = 0;
            for (int k = 0 ; k < r2 ; k++)
            {
                result += (array1 [i] [k]) * (array2 [k] [j]);
            }
            c [i] [j] = result;
        }
    }

    // Displaying the matrix
    for (int i = 0 ; i < r1 ;i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            cout<< c[i] [j] <<"\t";
        }
        cout<<"\n";
    }

}

int main ()
{
    cout<<"Please enter the row of the matrix";
    int row1 ;
    cin>>row1;
    cout<<"Please enter the coloumn of the matrix";
    int  col1;
    cin>>col1;

    
    cout<<"please enter the row of the matrix 2 :";
    int row2; 
    cin>>row2;
    cout<<"Please enter the col of the matrix 2 :";
    int col2; 
    cin>>col2;
    
    matrixmultiplication(row1,col1,row2,col2);
    return 0;
}

